#include "controleur.h"
Controleur::Controleur()
{
    bdd.ouvrirLaBase();
}

// Se charge d'authentifier l'administrateur courant
bool Controleur::login(QString& username,QString& password)
{
    QSqlQuery query(bdd.recupInfoLogin(username, password));
    // Exécution de la requête
    if (query.exec()) {
        // Vérification si un enregistrement correspondant a été trouvé
        if (query.next()) {
            // Enregistrement trouvé, les informations de connexion sont correctes
            qDebug() << "Login réussi pour l'utilisateur :" << username;
                bdd.isLoggedOn = true;
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


int Controleur::getId(const QString& nom, const QString& type){
    qDebug() << "---- début de get Id ----";
    QSqlQuery rqId(bdd.recupererId(nom, type));
    if (rqId.exec() && rqId.next()) {
        int id = rqId.value(0).toInt();
        qDebug() << "ID de " << type << " pour " << nom << " : " << id;
        qDebug() << "---- Fin de get Id ----";
        return id;
    } else {
        qDebug() << "Erreur lors de la récupération de l'ID pour " << type << " : " << rqId.lastError().text();
        qDebug() << "---- Fin de get Id ----";
        return -1;
    }
}

// recupère le champ de nom à partir d'un id
QString Controleur::getNom(const QString& id, const QString& type){
    qDebug() << "---- début de get nom ----";
    QSqlQuery rqNom(bdd.recupNomParId(id, type));
    if (rqNom.exec() && rqNom.next()) {
        QString nom = rqNom.value(0).toString();
        qDebug() << "Nom de " << type << " pour " << nom << " : " << id;
        return nom;
    } else {
        qDebug() << "Erreur lors de la récupération de l'ID pour " << type << " : " << rqNom.lastError().text();
        qDebug() << "---- Fin de get nom ----";
        return "";
    }
}
// recupère les niveaux d'un mention
QVector<QString> Controleur::getNiveauxSelonMention(const int& idMention){
    qDebug() << "---- début de get Nv selon mention ----";
    QVector<QString> niveaux;
    QSqlQuery rqNiveau(bdd.recupererNiveauxSelonMention(idMention));
    if (rqNiveau.exec()) {
        while (rqNiveau.next()) {
            QString nomNiveau = rqNiveau.value(0).toString();
            niveaux.push_back(nomNiveau);
        }
        qDebug() << "---- Fin de get niveau selon mention ----";
        return niveaux;
    } else {
        qDebug() << "Une erreur est survenue lors de l'extraction de la liste des niveaux : " << rqNiveau.lastError().text();
        qDebug() << "---- Fin de get niveau selon mention ----";
        return QVector<QString>();
    }
}

// Recupère le prix d'un service ou d'une formation
int Controleur::getPrixU(const QString& choix, const QString& type){
    int idChoix = this->getId(choix, type);
    qDebug() << "IdChoix extraite : " << idChoix;
    qDebug() << "Choix : " << choix;
    QSqlQuery rqPrix(bdd.recupPrixDuChoix(idChoix, type));
    if (rqPrix.exec() && rqPrix.next()) {
        int prix = rqPrix.value(0).toInt();
        qDebug() << "Prix de " << choix << " = " << prix;
        return prix;
    } else {
        qDebug() << "Une erreur est survenue lors de l'extraction de la liste des " << choix;
        return 0;
    }
}

// Premier prototype de column
QVector<QString> Controleur::getAll1(const QString& choix){
    qDebug() << "---- début de get all ----";
    QVector<QString> result;
    QSqlQuery rqAll(bdd.recupererToutDe1(choix));
    if (rqAll.exec()) {
        QString nomMention;
        while (rqAll.next()) {
            if(choix == "Mention" || choix == "Multi_Services" || choix == "Formations")
                nomMention = rqAll.value(1).toString();
            else
                nomMention = rqAll.value(2).toString();
            result.push_back(nomMention);
            qDebug() << "nom Mention : " << nomMention;
        }
        qDebug() << "Contenu de result :";

        for (const QString& element : result) {
            qDebug() << element;
        }
        qDebug() << "---- Fin de get all ----";
        return result;
    } else {
        qDebug() << "Une erreur est survenue lors de l'extraction de la liste des classes";
        qDebug() << "---- Fin de get all ----";
        return QVector<QString>();
    }
}

// 2e prototype de get column
QVector<QString> Controleur::getAll2(const QString& choix){
    QVector<QString> result;

    // Champ 'nom' pour chaque table
    QString champNom;
    if (choix == "mention") {
        champNom = "MT_NOM";
    } else if (choix == "niveau") {
        champNom = "NV_NOM";
    } else if (choix == "parcours") {
        champNom = "PRC_NOM";
    }

    QSqlQuery rqAll(bdd.recupererToutDe2(choix, champNom));
    if (rqAll.exec()) {
        while (rqAll.next()) {
            QString nom = rqAll.value(0).toString();
            result.push_back(nom);
        }
        return result;
    } else {
        qDebug() << "Une erreur est survenue lors de l'extraction de la liste des " << choix;
        return QVector<QString>();
    }
}

// Récupère le contenu d'une colonne d'une table
//  const QString& table    : est le nom de la table
//  const int& indColonne   : est l'indice de la colonne demandé (0 pour le premier)
QVector<QString> Controleur::getColumn(const QString& table, const int& indColonne){
    qDebug() << "---- début de get column ----";
    QVector<QString> result;
    QSqlQuery rqAll(bdd.recupererToutDe1(table));
    if (rqAll.exec()) {
        QString entree;
        while (rqAll.next()) {
            entree = rqAll.value(indColonne).toString();
            result.push_back(entree);
            qDebug() << "Entrée : " << entree;
        }
        qDebug() << "Contenu de result :";

        for (const QString& element : result) {
            qDebug() << element;
        }
        qDebug() << "---- Fin de get column ----";
        return result;
    } else {
        qDebug() << "Une erreur est survenue lors de l'extraction de la liste des classes";
        qDebug() << "---- Fin de get column ----";
        return QVector<QString>();
    }
}

// Recupère le nom de tous les parcours ou niveau selon l'id d'un mention
QVector<QString> Controleur::getAllSelonMention(const QString& choix, const int& idMtInt){
    qDebug() << "---- début de get all selon mention ----";
    qDebug() << "getAll " << choix;
    QVector<QString> result;
    QString idMention = QString::number(idMtInt);
    QSqlQuery rqAll(bdd.recupererToutNPSelonMt(choix, idMention));
    if (rqAll.exec()) {
        QString nomMention;
        while (rqAll.next()) {
            nomMention = rqAll.value(2).toString();
            result.push_back(nomMention);
            qDebug() << "nom Mention : " << nomMention;
        }

        qDebug() << "Contenu de result :";

        for (const QString& element : result) {
            qDebug() << element;
        }
        qDebug() << "---- début de get all selon mention ----";
        return result;
    } else {
        qDebug() << "Une erreur est survenue lors de l'extraction de la liste des " << choix;
        qDebug() << "---- début de get all selon mention ----";
        return QVector<QString>();
    }
}

// Contrôle les informations d'un étudiant avant de les envoyer à l'objet bdd
bool Controleur::rqtInscEt(QString& nom, QString& prenom, QString& genre,
                           QDate& dateDeNaissance, QString& mention,
                           QString& niveau, QString& parcours,
                           QString& codage, bool& passant, QString& telephone, QString& adresse){
    // qDebug() << "Mention récupéré du CBOX: " << mention;
    // qDebug() << "Niveau récupéré du CBOX: " << niveau;
    int idMention = this->getId(mention, "Mention");
    int idNiveau = this->getId(niveau, "Niveau");
    int idParcours = this->getId(parcours, "Parcours");
    int nombreEtudiants = bdd.compterEntrees("etudiants");
    int codageInt = codage.toInt();
    int telephoneInt = telephone.toInt();
    if(!isDuplicated(nom, prenom, genre, dateDeNaissance, idMention, idNiveau, idParcours, codageInt))
        return bdd.inscrireEtudiant(nombreEtudiants, nom, prenom, genre, dateDeNaissance, idMention, idNiveau, idParcours, codageInt, passant, telephoneInt, adresse);
    else{
        qDebug() << "Il semblerait que l'étudiant que vous tentez d'enregistrer existe déjà";
        return false;
    }
}

bool Controleur::isDuplicated(QString& nom, QString& prenom, QString& genre,
                              QDate& dateDeNaissance, int& idMention,
                              int& idNiveau, int& idParcours, int& codage){
    QSqlQuery rqAUnDouble(bdd.aUnDouble(nom, prenom, genre, dateDeNaissance, idMention, idNiveau, idParcours, codage));
    // Exécution de la requête
    if (rqAUnDouble.exec()) {
        if(rqAUnDouble.next()){
            qDebug() << "Une doublure a été détecté";
            return true;
        }
        else{
            qDebug() << "Aucune doublure détécté";
            return false;
        }
    } else {
        qDebug() << "Erreur lors de l'execution de la reqête :" << rqAUnDouble.lastError().text();
        return false;
    }
}

// Recherche le nom d'un étudiant avec un id
QString Controleur::nomsEtByid(int& etId){
    QString strIdEt = QString::number(etId);
    QSqlQuery rqNomEt = bdd.recupNomParId(strIdEt, "EtudiantNom");
    QSqlQuery rqPrenomEt = bdd.recupNomParId(strIdEt, "EtudiantPrenom");
    if (rqNomEt.exec() && rqNomEt.next() && rqPrenomEt.exec() && rqPrenomEt.next()) {
        QString nom = rqNomEt.value(0).toString();
        QString prenom = rqPrenomEt.value(0).toString();
        qDebug() << "Nom de " << nom << " : " << etId;
        return nom + " " + prenom;
    } else {
        qDebug() << "Erreur lors de la récupération de l'ID pour " << rqNomEt.lastError().text();
        return "";
    }

}

QVector<QVector<QString>> Controleur::getStudent(QString& mention, QString& niveau, QString& parcours, int& idEtudiant){
    int idMention = -1;
    int idNiveau = -1;
    int idParcours = -1;
    if(mention != "nc")
        idMention = this->getId(mention, "Mention");

    if(niveau != "nc")
        idNiveau = this->getId(niveau, "Niveau");

    if(parcours != "nc")
        idParcours = this->getId(parcours, "Parcours");

    QVector<QVector<QString>> etudiantData;
    QSqlQuery rqBcpEt(this->bdd.recupEtudiants(idMention, idNiveau, idParcours, idEtudiant));

    qDebug() << "La requête est bonne ? : " << rqBcpEt.isValid();

    if (rqBcpEt.exec()) {
        while (rqBcpEt.next()) {
            QVector<QString> colonne;
            QString idEleve = rqBcpEt.value(0).toString(); // Numéro
            QString nom = rqBcpEt.value(4).toString(); // Nom
            QString prenom = rqBcpEt.value(5).toString(); // Prénom
            QString dateNaissance = rqBcpEt.value(7).toDate().toString("yyyy-MM-dd"); // Date de naissance
            QString codage = rqBcpEt.value(8).toString();
            QString estPassant = rqBcpEt.value(9).toString();
            QString numero = rqBcpEt.value(10).toString();
            QString adresse = rqBcpEt.value(11).toString();

            colonne.push_back(idEleve);
            colonne.push_back(nom);
            colonne.push_back(prenom);
            colonne.push_back(dateNaissance);
            colonne.push_back(codage);
            colonne.push_back(estPassant);
            colonne.push_back(numero);
            colonne.push_back(adresse);

            etudiantData.push_back(colonne);
        }
    }
    else {
        qDebug() << "Une erreur est survenue lors de la récupération des élèves.";
    }
    return etudiantData;
}

bool Controleur::logOut(){
    bdd.isLoggedOn = false;
    return true;
}
bool Controleur::autoLog(){
    bdd.isLoggedOn = true;
    return true;
}

// QVector<int> Controleur::rqtNvEtPrc(const QString& nomMention){
//     QSqlQuery query1(bdd.recupererId(nomMention, "Mention"));
//     QSqlQuery query2(bdd.recupererId(nomMention, "Mention"));
//     QVector<int> NvEtPrc;
//     // Extraction de l'id trouvé et cast du résultat en int
//     if (query1.exec() && query1.next()) {
//         NvEtPrc.push_back(query1.value(0).toInt());
//     } else {
//         // Dans le cas où la classe n'a pas été trouvée une valeur de -1 sera envoyé en alerte
//         qDebug() << "La classe " << nomMention << " n'a pas été trouvée dans la base de données.";
//         NvEtPrc.push_back(-1);
//     }
//     // Extraction de l'id trouvé et cast du résultat en int
//     if (query2.exec() && query2.next()) {
//         NvEtPrc.push_back(query2.value(0).toInt());
//     } else {
//         // Dans le cas où la classe n'a pas été trouvée une valeur de -1 sera envoyé en alerte
//         qDebug() << "La classe " << nomMention << " n'a pas été trouvée dans la base de données.";
//         NvEtPrc.push_back(-1);
//     }
//     return QVector<int>();
// }
