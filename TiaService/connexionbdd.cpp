#include "connexionbdd.h"
#include <iostream>
#include <filesystem>
#include <unistd.h>
#include <QCoreApplication>

// Constructeur de la classe ConnexionDDB
ConnexionDDB::ConnexionDDB() {
    // On s'assure que l'interface graphique est vérouillé
    this->isLoggedOn = false;
}

bool ConnexionDDB::ouvrirLaBase(){
    // Initialisation de la base de données
    db = QSqlDatabase::addDatabase("QODBC");
    QString cheminBDD = QCoreApplication::applicationDirPath() + "/TIA SERVICE.MDB";
    qDebug() << "chemin de l'application : " << cheminBDD;
    db.setDatabaseName("DRIVER={Microsoft Access Driver (*.mdb, *.accdb)};FIL={MS Access};DBQ="+cheminBDD);
    // Tentative de connexion à la base de données
    if (db.open()) {
        qDebug() << "Connexion à la base de données réussie";
        std::cout << "Connexion à la base de données réussie" << std::endl;
        return true;
    } else {
        qDebug() << "Échec de la connexion à la base de données";
        qDebug() << "Erreur :" << db.lastError().text();
        return false;
    }
}

// Accesseur pour l'attribut isLoggedOn
bool ConnexionDDB::isConnected(){
    return this->isLoggedOn;
}

// Déstructeur de la classe
ConnexionDDB::~ConnexionDDB() {
    fermerLaBase();
}

// Méthode pour deverouiller les fonctionnalités de l'application
// La méthode équivaut à un setLoSggedOn car l'objectif est de modifier la valeur de ce dernier
bool ConnexionDDB::login(QString& username,QString& password) {
    if (!db.isOpen()) {
        this->ouvrirLaBase();
    } else {
        qDebug() << "L'objet QSqlDatabase n'a pas été initialisé correctement.";
        // Gérez l'erreur ou l'initialisation de db ici si nécessaire.
    }
    QSqlQuery query;

    // Préparation de la requête
    query.prepare("SELECT * FROM professeur WHERE NOM = :username AND MOT_DE_PASSE = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    // Exécution de la requête
    if (query.exec()) {
        // Vérification si un enregistrement correspondant a été trouvé
        if (query.next()) {
            // Enregistrement trouvé, les informations de connexion sont correctes
            qDebug() << "Login réussi pour l'utilisateur :" << username;
            isLoggedOn = true;
            return true;
        } else {
            // Aucun enregistrement trouvé, les informations de connexion sont incorrectes
            qDebug() << "Échec de la connexion pour l'utilisateur :" << username;
            return false;
        }
    } else {
        // Erreur lors de l'exécution de la requête
        qDebug() << "Erreur lors de la requête de connexion :" << query.lastError().text();
        qDebug() << "Type de username avant binding :" << QVariant(username).typeName();
        qDebug() << "Type de password avant binding :" << QVariant(password).typeName();
        return false;
    }
}


// Déconnecter l'utilisateur
bool ConnexionDDB::logOut(){
    fermerLaBase();
    return this->isLoggedOn = 0;
}

// Connecter l'utilisateur
bool ConnexionDDB::autoLogOn(){
    return this->isLoggedOn = 1;
}
void ConnexionDDB::fermerLaBase(){
    db.close();
}

// Renvoie dans un vecteur QVector l'ensemble des classes disponible (Rang et lettre)
QVector<QString> ConnexionDDB::recupererClasses() {
    QSqlQuery query;
    QVector<QString> classes;

    if (query.exec("SELECT NOM_CLASSE FROM classe")) {
        while (query.next()) {
            QString nomClasse = query.value(0).toString();
            classes.push_back(nomClasse);
        }
        return classes;
    } else {
        qDebug() << "Une erreur est survenue lors de l'extraction de la liste des classes";
        return QVector<QString>();
    }
}

int ConnexionDDB::recupererIdClasse(const QString& nomClasse) {
    QSqlQuery query;

    // Puis on fait sortir l'id selon le rang et la lettre
    query.prepare("SELECT ID_CLASSE FROM classe WHERE NOM_CLASSE = :nom_classe");
    query.bindValue(":nom_classe", nomClasse);

    // Extraction de l'id trouvé et cast du résultat en int
    if (query.exec() && query.next()) {
        return query.value(0).toInt();
    } else {
        // Dans le cas où la classe n'a pas été trouvée une valeur de -1 sera envoyé en alerte
        qDebug() << "La classe " << nomClasse << " n'a pas été trouvée dans la base de données.";
        return -1; // Vous pouvez choisir une valeur de retour pour indiquer une classe introuvable
    }
}

// Compte le nombre d'entrée présent dans une table
// pour auto-incrémenter les id manuellement
int ConnexionDDB::compterEntrees(const QString& nomTable) {
    QSqlQuery query;

    // Requête pour compter les entrées de la table passé en paramètre
    query.prepare("SELECT COUNT(*) FROM " + nomTable);
    query.exec();

    if (query.next()) {
        return query.value(0).toInt();
    } else {
        // Erreur lors du comptage des enregistrements
        qDebug() << "Erreur lors du comptage des enregistrements dans la table " << nomTable << " : " << query.lastError().text();
        return -1; // Valeur négative pour indiquer une erreur
    }
}

int ConnexionDDB::compterEntreesSelonClasse(const QString& nomTable,int &idClasse) {
    QSqlQuery query;

    // Requête pour compter les entrées de la table passé en paramètre
    query.prepare("SELECT COUNT(*) FROM " + nomTable + " WHERE ID_CLASSE = :id_classe");
    query.bindValue(":id_classe", idClasse);
    query.exec();

    qDebug() << "L'id de la classe est : " << idClasse;
    if (query.next()) {
        return query.value(0).toInt();
    } else {
        // Erreur lors du comptage des enregistrements
        qDebug() << "Erreur lors du comptage des enregistrements dans la table " << nomTable << " : " << query.lastError().text();
        return -1; // Valeur négative pour indiquer une erreur
    }
}

// Insère les information relatif à un élève dans la table ELEVE
bool ConnexionDDB::insertionEleves(QString& nom, QString& prenom, QDate& dateDeNaissance, QString& pere, QString& mere, QString& classeAssigne){
    QSqlQuery query;

    int idClasse = recupererIdClasse(classeAssigne);
    // Comptage du nombre d'entrées actuelles dans la table "eleve"
    int nombreEleves = compterEntrees("eleve");
    qDebug() << "L'id de la classe = " << idClasse;
    qDebug() << "Le nombre d'eleves = " << nombreEleves;

    if (idClasse < 0) {
        // Si aucun élève n'a été trouvé alors idClasse sera -1
        qDebug() << "Impossible d'insérer l'élève.";
        return false;
    }
    // Préparation de la requête d'insertion
    query.prepare("INSERT INTO eleve (ID_ELEVE, ID_CLASSE, NOM, PRENOM, DATE_DE_NAISSANCE, NOM_PERE, NOM_MERE) "
                  "VALUES (:id_eleve, :id_classe, :nom, :prenom, :date_de_naissance, :nom_pere, :nom_mere)");
    qDebug() << "Valeur de la date de naissance (insertion) : " << dateDeNaissance;

    query.bindValue(":id_eleve", nombreEleves+1);
    query.bindValue(":id_classe", idClasse);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":date_de_naissance", dateDeNaissance);
    query.bindValue(":nom_pere", pere);
    query.bindValue(":nom_mere", mere);

    qDebug() << "Requête d'insertion : " << query.lastQuery();
    qDebug() << "Valeurs liées : " << query.boundValues();

    // Exécution de la requête
    if (query.exec()) {
        // La requête d'insertion a réussi
        qDebug() << "L'insertion a été un succès !";
        return true; // Vous pouvez également renvoyer true pour indiquer le succès
    } else {
        // La requête a échoué
        qDebug() << "Erreur d'insertion dans la table eleve : " << query.lastError().text();
        return false; // Vous pouvez renvoyer false pour indiquer l'échec
    }
}

QVector<QVector<QString>> ConnexionDDB::recupElevesSelonClasse(const QString& classeAssigne) {
    QVector<QVector<QString>> elevesData; // Tableau à deux dimensions pour stocker les données des élèves
    int idClasseRecherche = recupererIdClasse(classeAssigne);

    // Vérifiez si la connexion à la base de données est établie
    if (!isLoggedOn) {
        qDebug() << "La base de données n'est pas connectée.";
        return elevesData; // Renvoyer un tableau vide en cas d'erreur
    }

    // Utilisation d'une requête préparée pour inclure la clause WHERE avec le paramètre idClasseRecherche
    QSqlQuery query;
    query.prepare("SELECT ID_ELEVE, NOM, PRENOM, DATE_DE_NAISSANCE, NOM_PERE, NOM_MERE FROM eleve WHERE ID_CLASSE = :id_classe");
    query.bindValue(":id_classe", idClasseRecherche);

    if (query.exec()) {
        while (query.next()) {
            QVector<QString> eleveInfo;
            QString idEleve = query.value(0).toString(); // Numéro
            QString nom = query.value(1).toString(); // Nom
            QString prenom = query.value(2).toString(); // Prénom
            QString dateNaissance = query.value(3).toDate().toString("yyyy-MM-dd"); // Date de naissance
            QString nomPere = query.value(4).toString(); // Père
            QString nomMere = query.value(5).toString(); // Mère

            eleveInfo.push_back(idEleve);
            eleveInfo.push_back(nom);
            eleveInfo.push_back(prenom);
            eleveInfo.push_back(dateNaissance);
            eleveInfo.push_back(nomPere);
            eleveInfo.push_back(nomMere);

            elevesData.push_back(eleveInfo);
        }
    }
    else {
        qDebug() << "Une erreur est survenue lors de la récupération des élèves.";
    }

    return elevesData;
}

QVector<QString> ConnexionDDB::recupEleveParClasseEtID(const QString& classeAssigne, int idEleve) {
    QVector<QString> eleveInfo; // Tableau pour stocker les informations de l'élève

    // Obtention l'ID de la classe
    int idClasse = recupererIdClasse(classeAssigne);

    if (!isLoggedOn) {
        qDebug() << "La base de données n'est pas connectée.";
        return eleveInfo; // Tableau vide en cas d'erreur
    }

    QSqlQuery query;
    query.prepare("SELECT ID_ELEVE, NOM, PRENOM, DATE_DE_NAISSANCE, NOM_PERE, NOM_MERE FROM eleve WHERE ID_CLASSE = :id_classe AND ID_ELEVE = :id_eleve");
    query.bindValue(":id_classe", idClasse);
    query.bindValue(":id_eleve", idEleve);

    if (query.exec() && query.first()) {
        QString idEleve = query.value(0).toString();
        QString nom = query.value(1).toString();
        QString prenom = query.value(2).toString();
        QString dateNaissance = query.value(3).toDate().toString("yyyy-MM-dd");
        QString nomPere = query.value(4).toString();
        QString nomMere = query.value(5).toString();

        eleveInfo.push_back(idEleve);
        eleveInfo.push_back(nom);
        eleveInfo.push_back(prenom);
        eleveInfo.push_back(dateNaissance);
        eleveInfo.push_back(nomPere);
        eleveInfo.push_back(nomMere);
    } else {
        qDebug() << "Une erreur est survenue lors de la récupération de l'élève.";
    }

    return eleveInfo;
}

// Mise à jour de la table élève
bool ConnexionDDB::mettreAJourEleve(int idEleve, QString& nom, QString& prenom, QDate& dateNaissance, QString& nomPere, QString& nomMere, QString& classeAssigne) {
    // Vérification si la connexion à la base de données est établie
    if (!isLoggedOn) {
        qDebug() << "La base de données n'est pas connectée.";
        return false;
    }

    int idClasse = recupererIdClasse(classeAssigne);

    if (idClasse < 0) {
        qDebug() << "Impossible d'obtenir l'ID de la classe.";
        return false;
    }

    QSqlQuery query;
    query.prepare("UPDATE eleve SET NOM = :nom, PRENOM = :prenom, DATE_DE_NAISSANCE = :dateNaissance, NOM_PERE = :nomPere, NOM_MERE = :nomMere, ID_CLASSE = :idClasse WHERE ID_ELEVE = :idEleve");
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":dateNaissance", dateNaissance);
    query.bindValue(":nomPere", nomPere);
    query.bindValue(":nomMere", nomMere);
    query.bindValue(":idClasse", idClasse);
    query.bindValue(":idEleve", idEleve);

    if (query.exec()) {
        qDebug() << "Mise à jour de l'élève réussie !";
        return true;
    } else {
        qDebug() << "Erreur lors de la mise à jour de l'élève : " << query.lastError().text();
        return false;
    }
}


// Enregistre une classe dans la table Classe caractérisé par son rang et sa lettre associé
bool ConnexionDDB::enregistrerClasse(const QString& nomClasse) {
    if (!isLoggedOn) {
        qDebug() << "La base de données n'est pas connectée.";
        return false;
    }

    // Incrémentation automatique de l'id de la classe
    int prochainIdClasse = compterEntrees("classe") + 1;

    QSqlQuery query;
    query.prepare("INSERT INTO classe (ID_CLASSE, ID_ETABLISSEMENT, NOM_CLASSE) VALUES (:id_classe, 1, :nom_classe)");
    query.bindValue(":id_classe", prochainIdClasse);
    query.bindValue(":nom_classe", nomClasse);

    if (query.exec()) {
        qDebug() << "Classe enregistrée avec succès !";
        return true;
    } else {
        qDebug() << "Erreur lors de l'enregistrement de la classe : " << query.lastError().text();
        return false;
    }
}

bool ConnexionDDB::enregistrerMatiere(const QString& nomClasse, const QString& nomMatiere, double coefficient) {
    if (!isLoggedOn) {
        qDebug() << "La base de données n'est pas connectée.";
        return false;
    }

    int idClasse = recupererIdClasse(nomClasse);
    if (idClasse < 0) {
        qDebug() << "Impossible d'obtenir l'ID de la classe.";
        return false;
    }

    int idMatiere = compterEntrees("matiere") + 1;

    QSqlQuery query;
    query.prepare("INSERT INTO matiere (ID_MATIERE, ID_CLASSE, NOM_MATIERE, COEFFICIENT) VALUES (:id_matiere, :id_classe, :nom_matiere, :coefficient)");
    query.bindValue(":id_matiere", idMatiere);
    query.bindValue(":id_classe", idClasse);
    query.bindValue(":nom_matiere", nomMatiere);
    query.bindValue(":coefficient", coefficient);

    if (query.exec()) {
        qDebug() << "Matière enregistrée avec succès !";
        return true;
    } else {
        qDebug() << "Erreur lors de l'enregistrement de la matière : " << query.lastError().text();
        return false;
    }
}

QVector<QVector<QString>> ConnexionDDB::recupererMatieresSelonClasse(int &idClasse) {
    QVector<QVector<QString>> matieresData; // Tableau à deux dimensions pour stocker les données des matières

    // Vérifie si la connexion à la base de données est établie
    if (!isLoggedOn) {
        qDebug() << "La base de données n'est pas connectée.";
        return matieresData; // Renvoyer un tableau vide en cas d'erreur
    }

    // Exécute une requête SQL pour récupérer les informations des matières depuis la table "matiere"
    QSqlQuery query;
    query.prepare("SELECT ID_MATIERE, ID_CLASSE, NOM_MATIERE, COEFFICIENT FROM matiere WHERE ID_CLASSE = :idClasse");
    query.bindValue(":idClasse", idClasse);
    if (query.exec()) {
        while (query.next()) {
            QVector<QString> matiereInfo;
            QString idMatiere = query.value(0).toString(); // ID de la matière
            QString idClasse = query.value(1).toString(); // ID de la classe associée
            QString nomMatiere = query.value(2).toString(); // Nom de la matière
            QString coefficient = query.value(3).toString(); // Coefficient

            matiereInfo.push_back(idMatiere);
            matiereInfo.push_back(idClasse);
            matiereInfo.push_back(nomMatiere);
            matiereInfo.push_back(coefficient);

            matieresData.push_back(matiereInfo);
        }
    } else {
        qDebug() << "Une erreur est survenue lors de la récupération des matières.";
        qDebug() << "Requête d'insertion : " << query.lastQuery();
        qDebug() << "Valeurs liées : " << query.boundValues();
    }
    return matieresData;
}

int ConnexionDDB::recupererIdMatiere(const QString& nomMatiere) {
    QSqlQuery query;
    query.prepare("SELECT ID_MATIERE FROM matiere WHERE NOM_MATIERE = :nom");
    query.bindValue(":nom", nomMatiere);

    if (query.exec() && query.next()) {
        return query.value(0).toInt();
    } else {
        qDebug() << "La matière " << nomMatiere << " n'a pas été trouvée dans la base de données.";
        return -1;
    }
}

bool ConnexionDDB::enregistrerNote(int idEleve, const QString& nomMatiere, QString nomClasse, double note) {
    int idMatiere = recupererIdMatiere(nomMatiere);
    int idClasse = recupererIdClasse(nomClasse);

    if (idMatiere < 0) {
        qDebug() << "Impossible d'insérer la note. Matière inconnue.";
        return false;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO NOTER__BULLETIN_ VALUES (:id_eleve, :id_matiere, :id_classe, :note)");

    query.bindValue(":id_eleve", idEleve);
    query.bindValue(":id_matiere", idMatiere);
    query.bindValue(":id_classe", idClasse);
    query.bindValue(":note", note);

    if (query.exec()) {
        qDebug() << "Note enregistrée avec succès !";
        return true;
    } else {
        qDebug() << "Erreur lors de l'enregistrement de la note : " << query.lastError().text();
        qDebug() << "Requête d'insertion : " << query.lastQuery();
        qDebug() << "Valeurs liées : " << query.boundValues();
        return false;
//    QSqlQuery query;
//    query.prepare("INSERT INTO NOTER__BULLETIN_ (ID_ELEVE, ID_MATIERE, ID_CLASSE, NOTE) VALUES (?, ?, ?, ?)");
//    query.addBindValue(idEleve);
//    query.addBindValue(idMatiere);
//    query.addBindValue(idClasse);
//    query.addBindValue(note);

//    if (query.exec()) {
//        // L'insertion a réussi
//        qDebug() << "Insertion réussie";
//    } else {
//        // L'insertion a échoué
//        qDebug() << "Échec de l'insertion : " << query.lastError().text();
//    }
}
}

QVector<QVector<QString>> ConnexionDDB::recupNoteElevesSelonMatiereEtClasse(const QString& matiere, const QString& nomClasse) {
    qDebug() << "Début de la récupération des notes élèves";
    QVector<QVector<QString>> elevesData; // Tableau à deux dimensions pour stocker les données des élèves
    int idMatiere= recupererIdMatiere(matiere);
    int idClasse = recupererIdClasse(nomClasse);
    qDebug() << "Matiere = " << matiere;
    qDebug() << "Classe = " << nomClasse;
    QSqlQuery query;
    query.prepare("SELECT ELEVE.ID_ELEVE, ELEVE.NOM, ELEVE.PRENOM, NOTER__BULLETIN_.NOTE FROM ELEVE, NOTER__BULLETIN_ WHERE ELEVE.ID_ELEVE = NOTER__BULLETIN_.ID_ELEVE AND NOTER__BULLETIN_.ID_MATIERE = :id_matiere AND ELEVE.ID_CLASSE = :id_classe");
    query.bindValue(":id_matiere", idMatiere);
    query.bindValue(":id_classe", idClasse);

    if (query.exec()) {
        while (query.next()) {
            QVector<QString> eleveInfo;
            QString id = query.value(0).toString();
            QString nom = query.value(1).toString();
            QString prenom = query.value(2).toString();
            QString note = query.value(3).toString();
            eleveInfo.push_back(id);
            eleveInfo.push_back(nom);
            eleveInfo.push_back(prenom);
            eleveInfo.push_back(note);
            elevesData.push_back(eleveInfo);
        }
    } else {
        qDebug() << "Une erreur est survenue lors de la récupération des données des élèves.";
        qDebug() << "Erreur :" << query.lastError().text();
    }
    return elevesData;
}

bool ConnexionDDB::enregistrerAdmin(const QString& nom, const QString& motDePasse) {
    if (!isLoggedOn) {
        qDebug() << "La base de données n'est pas connectée.";
        return false;
    }

    int idProfesseur = compterEntrees("PROFESSEUR") + 1;

    QSqlQuery query;
    query.prepare("INSERT INTO PROFESSEUR (ID_PROFESSEUR, NOM, MOT_DE_PASSE) VALUES (:id_professeur, :nom, :mot_de_passe)");
    query.bindValue(":id_professeur", idProfesseur);
    query.bindValue(":nom", nom);
    query.bindValue(":mot_de_passe", motDePasse);

    if (query.exec()) {
        qDebug() << "Nouvel administrateur enregistré avec succès (ID_PROFESSEUR : " << idProfesseur << ")";
        return true;
    } else {
        qDebug() << "Erreur lors de l'enregistrement de l'administrateur : " << query.lastError().text();
        return false;
    }
}
