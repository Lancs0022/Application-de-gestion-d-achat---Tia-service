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
QSqlQuery ConnexionDDB::recupInfoLogin(QString& username,QString& password) {
    QSqlQuery query;
    // Préparation de la requête
    query.prepare("SELECT * FROM personnel WHERE PERS_NOM = :username AND PERS_MDP = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    // Afficher les informations de débogage pour les paramètres et les valeurs liées
    qDebug() << "Nombre de paramètres attendus: " << query.boundValueNames().count();
    for (const auto& key : query.boundValueNames()) {
        qDebug() << "Paramètre: " << key << ", Valeur liée: " << query.boundValue(key);
    }

    qDebug() << "La requête est bonne ? : " << query.isValid();
    qDebug() << "Requête SQL: " << query.lastQuery();  // Affiche la requête SQL
    return query;
}

// Récupère l'id de la variable const QString& nom selon const QString& type
QSqlQuery ConnexionDDB::recupererId(const QString& nom, const QString& type) {
    QSqlQuery query;
    if(type == "Mention"){
        query.prepare("SELECT mt_id FROM mention WHERE mt_nom = :nom");
    }
    else if(type == "Niveau"){
        query.prepare("SELECT nv_id FROM niveau WHERE nv_nom = :nom");
    }
    else if(type == "Parcours"){
        query.prepare("SELECT prc_id FROM parcours WHERE prc_nom = :nom");
    }
    else if(type == "Formations"){
        query.prepare("SELECT form_id FROM formations WHERE form_nom = :nom");
    }
    else if(type == "Multi_Services"){
        query.prepare("SELECT msrv_id FROM multi_services WHERE msrv_nom = :nom");
    }
    else{
        qDebug() << "Le type de niveau en paramètre est inconnu : " << query.lastError();
        return QSqlQuery();
    }
    query.bindValue(":nom", nom);
    return query;
}

// Récupère le nom selon la variable const QString& type
QSqlQuery ConnexionDDB::recupNomParId(const QString& id, const QString& type){
    QSqlQuery query;
    if(type == "Mention"){
        query.prepare("SELECT mt_nom FROM mention WHERE mt_id = :id");
    }
    else if(type == "Niveau"){
        query.prepare("SELECT nv_nom FROM niveau WHERE nv_id = :id");
    }
    else if(type == "parcours"){
        query.prepare("SELECT prc_nom FROM parcours WHERE prc_id = :id");
    }
    else if(type == "Formations"){
        query.prepare("SELECT form_nom FROM formations WHERE form_id = :id");
    }
    else if(type == "Multi_Services"){
        query.prepare("SELECT msrv_nom FROM multi_services WHERE msrv_id = :id");
    }
    else if(type == "EtudiantNom"){
        query.prepare("SELECT et_nom FROM etudiants WHERE et_id = :id");
    }
    else if(type == "EtudiantPrenom"){
        query.prepare("SELECT et_prenom FROM etudiants WHERE et_id = :id");
    }
    else{
        qDebug() << "Le type de niveau en paramètre est inconnu : " << query.lastError();
        return QSqlQuery();
    }
    query.bindValue(":id", id);
    return query;
}


QSqlQuery ConnexionDDB::recupererNiveauxSelonMention(const int& idMention) {
    QSqlQuery query;

    // Vérifier si l'ID de la mention est valide
    if (idMention != -1) {
        query.prepare("SELECT nv_nom FROM niveau WHERE mt_id = :idMention");
        query.bindValue(":idMention", idMention);
        return query;
    } else {
        qDebug() << "ID de la mention invalide.";
        return QSqlQuery();
    }
}

// Renvoie dans un vecteur QVector l'ensemble des classes disponible (Rang et lettre)
QSqlQuery ConnexionDDB::recupererToutDe1(const QString& nomTable) {
    QSqlQuery query;
    query.prepare("SELECT * FROM " + nomTable);
    return query;
}

// Renvoie dans un vecteur QVector l'ensemble des classes disponible (Rang et lettre)
QSqlQuery ConnexionDDB::recupererToutNPSelonMt(const QString& nomTable, const QString& idMention) {
    QSqlQuery query;
    query.prepare("SELECT * FROM " + nomTable + " WHERE mt_id= " + idMention);
    return query;
}

QSqlQuery ConnexionDDB::recupererToutDe2(const QString& nomTable, const QString& champNom) {
    QSqlQuery query;
    query.prepare("SELECT " + champNom + " FROM " + nomTable);
    return query;
}

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

//
bool ConnexionDDB::inscrireEtudiant(int& nbEtudiants, QString& nom, QString& prenom, QString& genre,
                                    QDate& dateDeNaissance, int& idMention,
                                    int& idNiveau, int& idParcours, int& codage,
                                    bool& passant, int& telephone, QString& adresse){
    QSqlQuery query;
    // Construction de la requête d'insertion
    query.prepare("INSERT INTO etudiants (et_id, mt_id, prc_id, nv_id, et_nom, et_prenom, et_genre, et_dateDeNaissance, et_codage, et_estpassant, et_numerotel, et_adresse) "
                  "VALUES (:idEtudiant, :idMention, :idParcours, :idNiveau, :nom, :prenom, :genre, :dateDeNaissance, :codage, :passant, :telephone, :adresse)");

    // Binding des valeurs
    query.bindValue(":idEtudiant", nbEtudiants+1);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":genre", genre);
    query.bindValue(":dateDeNaissance", dateDeNaissance);
    query.bindValue(":idMention", idMention);
    query.bindValue(":idNiveau", idNiveau);
    query.bindValue(":idParcours", idParcours);
    query.bindValue(":codage", codage);
    query.bindValue(":telephone", telephone);
    query.bindValue(":adresse", adresse);
    query.bindValue(":passant", passant);

    // Exécution de la requête
    if (query.exec()) {
        qDebug() << "Inscription de l'étudiant réussie";
        return true;
    } else {
        qDebug() << "Erreur lors de l'inscription de l'étudiant :" << query.lastError().text();
        return false;
    }
}

QSqlQuery ConnexionDDB::aUnDouble(QString& nom, QString& prenom, QString& genre,
                                  QDate& dateDeNaissance, int& idMention,
                                  int& idNiveau, int& idParcours, int& codage){
    QSqlQuery query;
    // Construction de la requête d'insertion
    query.prepare("SELECT * FROM etudiants WHERE mt_id = :idMention,"
                  " prc_id = :idParcours, nv_id = :idNiveau, et_nom = :nom,"
                  " et_prenom = :prenom, et_genre = :genre, "
                  " et_dateDeNaissance = :dateDeNaissance, et_codage = :codage");

    // Binding des valeurs
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":genre", genre);
    query.bindValue(":dateDeNaissance", dateDeNaissance);
    query.bindValue(":idMention", idMention);
    query.bindValue(":idNiveau", idNiveau);
    query.bindValue(":idParcours", idParcours);
    query.bindValue(":codage", codage);
    return query;
}

QSqlQuery ConnexionDDB::recupPrixDuChoix(int& idChoix, const QString& nomTable){
    qDebug() << "Lancement de recup prix... ";
    QSqlQuery query;
    QString idC = QString::number(idChoix);
    if(nomTable == "Formations")
        query.prepare("SELECT form_prix FROM " + nomTable + " WHERE form_id= " + idC);
    else if(nomTable == "Multi_Services")
        query.prepare("SELECT msrv_prix FROM " + nomTable + " WHERE msrv_id= " + idC);
    return query;
}

QSqlQuery ConnexionDDB::recupEtudiants(int& idMention, int& idNiveau, int& idParcours, int& idEtudiant) {
    QSqlQuery query;
    QString requete = "SELECT * FROM etudiants WHERE";

    // Construction de la clause WHERE
    if (idMention != -1) {
        requete += " MT_ID = :idMention";
        if (idNiveau != -1 || idParcours != -1 || idEtudiant != -1) {
            requete += " AND";
        }
    }

    if (idNiveau != -1) {
        requete += " NV_ID = :idNiveau";
        if (idParcours != -1 || idEtudiant != -1) {
            requete += " AND";
        }
    }

    if (idParcours != -1) {
        requete += " PRC_ID = :idParcours";
    }

    if (idEtudiant != -1) {
        if (idMention != -1 || idNiveau != -1 || idParcours != -1) {
            requete += " AND";
        }
        requete += " ET_ID = :idEtudiant";
    }

    // Si aucun filtre n'est spécifié, retourner tous les étudiants
    if (idMention == -1 && idNiveau == -1 && idParcours == -1 && idEtudiant == -1) {
        requete = "SELECT * FROM etudiants";
    }

    query.prepare(requete);

    // Binding des valeurs des filtres
    if (idMention != -1) {
        query.bindValue(":idMention", idMention);
        qDebug() << "Bind value en cours pour mention...";
    }

    if (idNiveau != -1) {
        query.bindValue(":idNiveau", idNiveau);
        qDebug() << "Bind value en cours pour niveau...";
    }

    if (idParcours != -1) {
        query.bindValue(":idParcours", idParcours);
        qDebug() << "Bind value en cours pour parcours...";
    }

    if (idEtudiant != -1) {
        query.bindValue(":idEtudiant", idEtudiant);
        qDebug() << "Bind value en cours pour etudiant...";
    }
    // Afficher les informations de débogage pour les paramètres et les valeurs liées
    qDebug() << "Nombre de paramètres attendus: " << query.boundValueNames().count();
    for (const auto& key : query.boundValueNames()) {
        qDebug() << "Paramètre: " << key << ", Valeur liée: " << query.boundValue(key);
    }

    qDebug() << "Requête SQL: " << query.lastQuery();  // Affiche la requête SQL
    return query;
}

// Mise à jour de la table élève
bool ConnexionDDB::mettreAJourEleve(int& idEtudiant, int& idMention, int& idNiveau, int& idParcours,
                                    QString& nom, QString& prenom, QDate& dateNaissance,
                                    int& codage, bool& estPassant, int& numero, QString& adresse) {

    QSqlQuery query;
    query.prepare("UPDATE eleve SET MT_ID = :idMention, NV_ID = :idNiveau, "
                  "PRC_ID = :idParcours, ET_NOM = :nom, ET_PRENOM = :prenom, "
                  "ET_DATEDENAISSANCE = :dateNaissance, ET_CODAGE = :codage, ET_ESTPASSANT = :estPassant, "
                  "ET_NUMERO = :numero, ET_ADRESSE = :adresse"
                  "WHERE ET_ID = :idEtudiant");

    query.bindValue(":idEtudiant", idEtudiant);
    query.bindValue(":idMention", idMention);
    query.bindValue(":idNiveau", idNiveau);
    query.bindValue(":idParcours", idParcours);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":dateNaissance", dateNaissance);
    query.bindValue(":codage", codage);
    query.bindValue(":estPassant", estPassant);
    query.bindValue(":numero", numero);
    query.bindValue(":adresse", adresse);

    if (query.exec()) {
        qDebug() << "Mise à jour de l'élève réussie !";
        return true;
    } else {
        qDebug() << "Erreur lors de la mise à jour de l'élève : " << query.lastError().text();
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



// QSqlQuery ConnexionDDB::recupEtudiants(int& idMention, int& idParcours, int& idNiveau, int& idEtudiant) {

//     // Utilisation d'une requête préparée pour inclure la clause WHERE avec le paramètre idClasseRecherche
//     QSqlQuery query;
//     QString requete("SELECT et_id, et_nom, et_prenom, et_datedenaissance, et_codage, et_estPassant,"
//                     "et_numero, et_adresse FROM etudiants WHERE "
//                     "MT_ID = :mt_id AND NV_ID = :nv_id AND PRC_ID = :prc_id AND et_id = :et_id");
//     query.prepare(requete);
//     query.bindValue(":mt_id", idMention);
//     query.bindValue(":nv_id", idNiveau);
//     query.bindValue(":prc_id", idParcours);
//     query.bindValue(":et_id", idEtudiant);
//     return query;
//     // QString conditions;
//     // // Condition pour la mention
//     // if (idMention != -1) {
//     //     conditions += " MT_ID = :mt_id";
//     //     if (idNiveau != -1 || idParcours != -1) {
//     //         conditions += " AND";
//     //         conditions += " (";

//     //         // Condition pour le niveau
//     //         if (idNiveau != -1) {
//     //             conditions += " NV_ID = :nv_id";
//     //             if (idParcours != -1)
//     //                 conditions += " AND PRC_ID = :prc_id";
//     //         }
//     //         // Condition pour le parcours
//     //         if (idParcours != -1) {
//     //             conditions += " PRC_ID = prc_id";
//     //                 if (idNiveau != -1)
//     //                 conditions += " AND NV_ID = :nv_id";
//     //         }
//     //         conditions += ")";
//     //     }
//     //     if(idEtudiant != -1)
//     //         conditions += " AND et_id = :et_id";
//     // }
//     // else {
//     //     qDebug() << "La mention est vide !";
//     // }
//     // requete += conditions;
// }
