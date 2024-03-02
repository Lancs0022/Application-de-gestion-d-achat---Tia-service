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
    QString cheminBDD = QCoreApplication::applicationDirPath() + "/TIA SERVICE.accdb";
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

// Récupère l'id de la variable const QString& nom selon const QString& nomTable
QSqlQuery ConnexionDDB::recupererId(const QString& nom, const QString& nomTable) {
    QSqlQuery query;
    if(nomTable == "Mention"){
        query.prepare("SELECT mt_id FROM mention WHERE mt_nom = :nom");
    }
    else if(nomTable == "Niveau"){
        query.prepare("SELECT nv_id FROM niveau WHERE nv_nom = :nom");
    }
    else if(nomTable == "Faculte"){
        query.prepare("SELECT fc_id FROM Faculte WHERE fc_nom = :nom");
    }
    else if(nomTable == "Formations"){
        query.prepare("SELECT form_id FROM Formations WHERE form_nom = :nom");
    }
    else if(nomTable == "Services"){
        query.prepare("SELECT srv_id FROM services WHERE srv_nom = :nom");
    }
    else if(nomTable == "Etudiants"){
        query.prepare("SELECT et_id FROM ETUDIANTS WHERE et_nom = :nom");
    }
    else{
        qDebug() << "Le nomTable de niveau en paramètre est inconnu : " << query.lastError();
        qDebug() << "Requête SQL: " << query.lastQuery();  // Affiche la requête SQL
        qDebug() << "Le nom du truc : " << nom << "La table consulté : " << nomTable;
        return QSqlQuery();
    }
    query.bindValue(":nom", nom);
    return query;
}

// Récupère le nom selon la variable const QString& nomTable
QSqlQuery ConnexionDDB::recupNomParId(const QString& id, const QString& nomTable){
    QSqlQuery query;
    if(nomTable == "Mention"){
        query.prepare("SELECT mt_nom FROM mention WHERE mt_id = :id");
    }
    else if(nomTable == "Niveau"){
        query.prepare("SELECT nv_nom FROM niveau WHERE nv_id = :id");
    }
    else if(nomTable == "Faculte"){
        query.prepare("SELECT fc_nom FROM Faculte WHERE fc_id = :id");
    }
    else if(nomTable == "Formations"){
        query.prepare("SELECT form_nom FROM formations WHERE form_id = :id");
    }
    else if(nomTable == "Services"){
        query.prepare("SELECT srv_nom FROM services WHERE srv_id = :id");
    }
    else if(nomTable == "EtudiantNom"){
        query.prepare("SELECT et_nom FROM etudiants WHERE et_id = :id");
    }
    else if(nomTable == "EtudiantPrenom"){
        query.prepare("SELECT et_prenom FROM etudiants WHERE et_id = :id");
    }
    else{
        qDebug() << "Le nomTable de niveau en paramètre est inconnu : " << query.lastError();
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

QSqlQuery ConnexionDDB::recupSpecialTableLiee(const QString& nomTable, const int& id) {
    QSqlQuery query;
    if(nomTable == "Mention"){
        query.prepare("SELECT mt_nom FROM MENTION WHERE fc_id = :id");
    }
    else if(nomTable == "Niveau"){
        query.prepare("SELECT nv_nom FROM Niveau WHERE mt_id = :id");
    }
    else if(nomTable == "Transaction"){
        query.prepare("SELECT trans_id FROM TRANSACTION WHERE et_id = :id");
    }
    else if(nomTable == "Achat"){
        query.prepare("SELECT * FROM ACHAT WHERE trans_id = :id");
    }
    else{
        return QSqlQuery();
    }
    query.bindValue(":id", id);
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

QSqlQuery ConnexionDDB::obtenirDernierId(const QString& nomTable, const QString& nomColonneId) {
    qDebug() << "----- Début de la récupération de l'id la plus haute -----";
    QSqlQuery query;
    QString requete = "SELECT MAX(" + nomColonneId + ") FROM " + nomTable;
    query.prepare(requete);
    return query;
}

bool ConnexionDDB::inscrireEtudiant(int& idEtudiant, QString& nom, QString& prenom, QString& genre,
                                    QDate& dateDeNaissance, int& idFaculte, int& idMention,
                                    int& idNiveau, int& codage,
                                    bool& passant, int& telephone, QString& adresse, QDate& dateInscription){
    QSqlQuery query;
    // Construction de la requête d'insertion
    query.prepare("INSERT INTO etudiants (et_id, fc_id, mt_id, nv_id, et_nom, et_prenom, et_genre, et_dateDeNaissance, et_codage, et_estpassant, et_numerotel, et_adresse, et_dateInscription) "
                  "VALUES (:idEtudiant, :idFaculte, :idMention, :idNiveau, :nom, :prenom, :genre, :dateDeNaissance, :codage, :passant, :telephone, :adresse, :dateInscription)");

    // Binding des valeurs
    query.bindValue(":idEtudiant", idEtudiant);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":genre", genre);
    query.bindValue(":dateDeNaissance", dateDeNaissance);
    query.bindValue(":idMention", idMention);
    query.bindValue(":idNiveau", idNiveau);
    query.bindValue(":idFaculte", idFaculte);
    query.bindValue(":codage", codage);
    query.bindValue(":telephone", telephone);
    query.bindValue(":adresse", adresse);
    query.bindValue(":passant", passant);
    query.bindValue(":dateInscription", dateInscription);
    qDebug() << "Date inscription : " << dateInscription;

    // Afficher les informations de débogage pour les paramètres et les valeurs liées
    qDebug() << "Nombre de paramètres attendus: " << query.boundValueNames().count();
    for (const auto& key : query.boundValueNames()) {
        qDebug() << "Paramètre: " << key << ", Valeur liée: " << query.boundValue(key);
    }

    // Exécution de la requête
    if (query.exec()) {
        qDebug() << "Inscription de l'étudiant réussie";
        return true;
    } else {
        qDebug() << "Erreur lors de l'inscription de l'étudiant :" << query.lastError().text();
        return false;
    }
}

QSqlQuery ConnexionDDB::aUnDouble(QString& nom, QString& prenom, int& idFaculte, int& idMention,
                                  int& idNiveau){
    QSqlQuery query;
    // Construction de la requête d'insertion
    query.prepare("SELECT * FROM etudiants WHERE mt_id = :idMention AND"
                  " fc_id = :idFaculte AND nv_id = :idNiveau AND et_nom = :nom AND"
                  " et_prenom = :prenom");/* et_genre = :genre, "
                  " et_dateDeNaissance = :dateDeNaissance, et_codage = :codage");*/

    // Binding des valeurs
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":idFaculte", idFaculte);
    query.bindValue(":idMention", idMention);
    query.bindValue(":idNiveau", idNiveau);
    // query.bindValue(":codage", codage);
    // query.bindValue(":genre", genre);
    // query.bindValue(":dateDeNaissance", dateDeNaissance);
    return query;
}

QSqlQuery ConnexionDDB::recupPrixDuChoix(int& idChoix, const QString& nomTable){
    qDebug() << "Lancement de recup prix... ";
    QSqlQuery query;
    QString idC = QString::number(idChoix);
    if(nomTable == "Formations")
        query.prepare("SELECT form_prix FROM " + nomTable + " WHERE form_id= " + idC);
    else if(nomTable == "Services")
        query.prepare("SELECT msrv_prix FROM " + nomTable + " WHERE msrv_id= " + idC);
    return query;
}

QSqlQuery ConnexionDDB::recupEtudiants(int& idFaculte, int& idMention, int& idNiveau, int& idEtudiant) {
    QSqlQuery query;
    QString requete = "SELECT * FROM etudiants WHERE";

    // Construction de la clause WHERE
    if (idMention != -1) {
        requete += " MT_ID = :idMention";
        if (idNiveau != -1 || idFaculte != -1 || idEtudiant != -1) {
            requete += " AND";
        }
    }
    if (idNiveau != -1) {
        requete += " NV_ID = :idNiveau";
        if (idFaculte != -1 || idEtudiant != -1) {
            requete += " AND";
        }
    }
    if (idFaculte != -1) {
        requete += " FC_ID = :idFaculte";
    }
    if (idEtudiant != -1) {
        if (idMention != -1 || idNiveau != -1 || idFaculte != -1) {
            requete += " AND";
        }
        requete += " ET_ID = :idEtudiant";
    }

    // Si aucun filtre n'est spécifié, retourner tous les étudiants
    if (idMention == -1 && idNiveau == -1 && idFaculte == -1 && idEtudiant == -1) {
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
    if (idFaculte != -1) {
        query.bindValue(":idFaculte", idFaculte);
        qDebug() << "Bind value en cours pour Faculte...";
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

QSqlQuery ConnexionDDB::effacerEtudiants(int& idFaculte, int& idMention, int& idNiveau, int& idEtudiant) {
    QSqlQuery query;
    QString requete = "DELETE * FROM etudiants WHERE";

    // Construction de la clause WHERE
    if (idMention != -1) {
        requete += " MT_ID = :idMention";
        if (idNiveau != -1 || idFaculte != -1 || idEtudiant != -1) {
            requete += " AND";
        }
    }
    if (idNiveau != -1) {
        requete += " NV_ID = :idNiveau";
        if (idFaculte != -1 || idEtudiant != -1) {
            requete += " AND";
        }
    }
    if (idFaculte != -1) {
        requete += " FC_ID = :idFaculte";
    }
    if (idEtudiant != -1) {
        if (idMention != -1 || idNiveau != -1 || idFaculte != -1) {
            requete += " AND";
        }
        requete += " ET_ID = :idEtudiant";
    }

    // Si aucun filtre n'est spécifié, retourner tous les étudiants
    if (idMention == -1 && idNiveau == -1 && idFaculte == -1 && idEtudiant == -1) {
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
    if (idFaculte != -1) {
        query.bindValue(":idFaculte", idFaculte);
        qDebug() << "Bind value en cours pour Faculte...";
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
bool ConnexionDDB::mettreAJourEleve(int& idEtudiant, int& idFaculte, int& idMention, int& idNiveau,
                                    QString& nom, QString& prenom, QString& genre, QDate& dateNaissance,
                                    int& codage, bool& estPassant, int& numero, QString& adresse) {

    QSqlQuery query;
    query.prepare("UPDATE Etudiants SET MT_ID = :idMention, NV_ID = :idNiveau, FC_ID = :idFaculte, "
                  "ET_NOM = :nom, ET_PRENOM = :prenom, ET_GENRE = :genre, ET_DATEDENAISSANCE = :dateNaissance, "
                  "ET_CODAGE = :codage, ET_NUMERO = :numero, "
                  "ET_ADRESSE = :adresse "
                  "WHERE ET_ID = :idEtudiant");
    query.bindValue(":idEtudiant", idEtudiant);
    query.bindValue(":idMention", idMention);
    query.bindValue(":idNiveau", idNiveau);
    query.bindValue(":idFaculte", idFaculte);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":genre", genre);
    query.bindValue(":dateNaissance", dateNaissance);
    query.bindValue(":codage", codage);
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

QSqlQuery ConnexionDDB::ajouterTransaction(int& idTransaction, int& idEtudiant, QDate& dateTransaction/*, double& montant*/){
    qDebug() << "----- Début de l'ajout d'un Transaction -----";
    QSqlQuery query;
    query.prepare("INSERT INTO TRANSACTION (trans_id, et_id, trans_date) VALUES "
                  "(:idTransaction, :idEtudiant, :dateTransaction)");/*, :montant*/ /*, fact_montant*/

    query.bindValue(":idTransaction", idTransaction);
    query.bindValue(":idEtudiant", idEtudiant);
    query.bindValue(":dateTransaction", dateTransaction);/*
    query.bindValue(":montant", montant);*/

    qDebug() << "----- Fin de l'ajout d'un Transaction -----";
    return query;
}

QSqlQuery ConnexionDDB::ajouterAchat(int& idAchat, int idService, int idFormation, int& nombre,
                                     int& idTransaction, bool estPayee){
    qDebug() << "----- Début de l'ajout d'un achat -----";
    QSqlQuery query;
    if(idService != -1){
        query.prepare("INSERT INTO achat (achat_id, msrv_id, trans_id, achat_nombre, achat_estPaye) VALUES "
                      "(:idAchat, :idService, :idTransaction, :nombre, :estPayee)");
        query.bindValue(":idService", idService);
    }
    if(idFormation != -1){
        query.prepare("INSERT INTO achat (achat_id, form_id, trans_id, achat_nombre, achat_estPaye) VALUES "
                      "(:idAchat, :idFormation, :idTransaction, :nombre, :estPayee)");
        query.bindValue(":idFormation", idFormation);
    }
    query.bindValue(":idAchat", idAchat);
    query.bindValue(":idTransaction", idTransaction);
    query.bindValue(":nombre", nombre);
    query.bindValue(":estPayee", estPayee);
    qDebug() << "----- Fin de l'ajout d'un Transaction -----";
    return query;
}

QSqlQuery ConnexionDDB::enregistrerAdmin(const int idPersonnel, const QString& nomPersonnel, const QString& mdpPersonnel) {
    QSqlQuery query;
    query.prepare("INSERT INTO PERSONNEL (PERS_ID, PERS_NOM, PERS_MDP) VALUES (:idPersonnel, :nomPersonnel, :mdpPersonnel)");
    query.bindValue(":idPersonnel", idPersonnel);
    query.bindValue(":nomPersonnel", nomPersonnel);
    query.bindValue(":mdpPersonnel", mdpPersonnel);
    return query;
}





// QSqlQuery ConnexionDDB::ajouterMNP(const int idMention, const int idNP, const QString& nom, const QString nomTable){
//     QSqlQuery query;
//     if(nomTable == "Mention"){
//         query.prepare("INSERT INTO MENTION (MT_ID, MT_NOM) VALUES (:idMention, :nom)");
//         query.bindValue(":nom", nom);
//     }
//     else if(nomTable == "Niveau"){
//         query.prepare("INSERT INTO NIVEAU (NV_ID, MT_ID, NV_NOM) VALUES (:idNiveau, :idMention, :nom)");
//         query.bindValue(":idNiveau", idNP);
//         query.bindValue(":nom", nom);
//     }
//     else if(nomTable == "Percours"){
//         query.prepare("INSERT INTO PARCOURS (PRC_ID, MT_ID, PRC_NOM) VALUES (:idParcours, :idMention, :nom)");
//         query.bindValue(":idParcours", idNP);
//         query.bindValue(":nom", nom);
//     }
//     else{
//         qDebug() << "Valeur de nom table non attendu : " << nomTable;
//         return QSqlQuery();
//     }
//     query.bindValue(":idMention", idMention);
//     return query;
// }

QSqlQuery ConnexionDDB::ajouterServiceOuFormation(const int idSF, const QString& nomSF, const double prixSF, const QString nomTable, QString& duree){
    QSqlQuery query;
    if(nomTable == "Services"){
        query.prepare("INSERT INTO SERVICES (SRV_ID, SRV_NOM, SRV_PRIX) VALUES (:id, :nom, :prix)");
    }
    else if (nomTable == "Formation"){
        query.prepare("INSERT INTO SERVICES (FORM_ID, FORM_NOM, FORM_PRIX, FORM_DUREE) VALUES (:id, :nom, :prix, :duree)");
        query.bindValue(":duree", duree);
    }
    else {
        qDebug() << "Valeur de nom table non attendu : " << nomTable;
        return QSqlQuery();
    }
    query.bindValue(":id", idSF);
    query.bindValue(":nom", nomSF);
    query.bindValue(":prix", prixSF);
    return query;
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


QSqlQuery ConnexionDDB::ajouterFaculte(const int idFaculte, const QString& nomFaculte) {
    QSqlQuery query;
    query.prepare("INSERT INTO FACULTE (FC_ID, FC_NOM) VALUES (:idFaculte, :nomFaculte)");
    query.bindValue(":idFaculte", idFaculte);
    query.bindValue(":nomFaculte", nomFaculte);
    return query;
}

QSqlQuery ConnexionDDB::ajouterMention(const int idMention, const int idFaculte, const QString& nomMention) {
    QSqlQuery query;
    query.prepare("INSERT INTO MENTION (MT_ID, FC_ID, MT_NOM) VALUES (:idMention, :idFaculte, :nomMention)");
    query.bindValue(":idMention", idMention);
    query.bindValue(":idFaculte", idFaculte);
    query.bindValue(":nomMention", nomMention);
    return query;
}

QSqlQuery ConnexionDDB::ajouterNiveau(const int idNiveau, const int idMention, const QString& nomNiveau) {
    QSqlQuery query;
    query.prepare("INSERT INTO NIVEAU (NV_ID, MT_ID, NV_NOM) VALUES (:idNiveau, :idMention, :nomNiveau)");
    query.bindValue(":idNiveau", idNiveau);
    query.bindValue(":idMention", idMention);
    query.bindValue(":nomNiveau", nomNiveau);
    return query;
}

bool ConnexionDDB::supprimerFMN(const int id, QString nomTable) {
    QSqlQuery query;
    bool success = true;

    // Suppression en cascade des niveaux, mentions et facultés
    if (nomTable == "Faculte") {
        // Récupérer les IDs des mentions liées à la faculté
        QVector<int> idMentions;
        query.prepare("SELECT MT_ID FROM Mention WHERE FC_ID = :id");
        query.bindValue(":id", id);
        if (query.exec()) {
            while (query.next()) {
                idMentions.append(query.value(0).toInt());
            }
        } else {
            qDebug() << "Erreur lors de la récupération des IDs des mentions liées à la faculté :" << query.lastError().text();
            return false;
        }

        // Supprimer les niveaux liés aux mentions
        for (int idMention : idMentions) {
            query.prepare("DELETE FROM Niveau WHERE MT_ID = :idMention");
            query.bindValue(":idMention", idMention);
            if (!query.exec()) {
                qDebug() << "Erreur lors de la suppression des niveaux liés à la mention :" << query.lastError().text();
                success = false;
            }
        }

        // Supprimer les mentions liées à la faculté
        query.prepare("DELETE FROM Mention WHERE FC_ID = :id");
        query.bindValue(":id", id);
        if (!query.exec()) {
            qDebug() << "Erreur lors de la suppression des mentions liées à la faculté :" << query.lastError().text();
            success = false;
        }

        query.prepare("DELETE FROM Faculte WHERE FC_ID = :id");
        query.bindValue(":id", id);
        if (!query.exec()) {
            qDebug() << "Erreur lors de la suppression du faculté :" << query.lastError().text();
            success = false;
        }
    }
    else if (nomTable == "Mention") {
        // Supprimer les niveaux liés à la mention
        query.prepare("DELETE FROM Niveau WHERE MT_ID = :id");
        query.bindValue(":id", id);
        if (!query.exec()) {
            qDebug() << "Erreur lors de la suppression des niveaux liés à la mention :" << query.lastError().text();
            return false;
        }
        // Supprimer les mentions liées à la faculté
        query.prepare("DELETE FROM Mention WHERE MT_ID = :id");
        query.bindValue(":id", id);
        if (!query.exec()) {
            qDebug() << "Erreur lors de la suppression du mention :" << query.lastError().text();
            success = false;
        }
    }
    else if (nomTable == "Niveau"){
        // Supprimer les mentions liées à la faculté
        query.prepare("DELETE FROM Niveau WHERE NV_ID = :id");
        query.bindValue(":id", id);
        if (!query.exec()) {
            qDebug() << "Erreur lors de la suppression du niveau :" << query.lastError().text();
            success = false;
        }
    }

    return success;
}



QSqlQuery ConnexionDDB::ajouterFormation(int idFormation,QString& nomFormation,
                                         double& prixFormation, QString& dureeFormation) {
    QSqlQuery query;
    query.prepare("INSERT INTO FORMATION (FORM_ID, FORM_NOM, FORM_PRIX, FORM_DUREE)"
                  "VALUES (:idFormation, :nomFormation, :prixFormation, :dureeFormation)");
    query.bindValue(":idFormation", idFormation);
    query.bindValue(":nomFormation", nomFormation);
    query.bindValue(":prixFormation", prixFormation);
    query.bindValue(":dureeFormation", dureeFormation);
    return query;
}

QSqlQuery ConnexionDDB::ajouterService(const int idService, const QString& nomService, const QString& prixService) {
    QSqlQuery query;
    query.prepare("INSERT INTO SERVICES (SRV_ID, SRV_NOM, SRV_PRIX)"
                  "VALUES (:idService, :nomService, :prixService)");
    query.bindValue(":idService", idService);
    query.bindValue(":nomService", nomService);
    query.bindValue(":prixService", prixService);
    return query;
}

QSqlQuery ConnexionDDB::definirSurPaye(int idTransaction){
    QSqlQuery query;
    query.prepare("UPDATE ACHAT SET ACHAT_ESTPAYE = true WHERE trans_id = :idTransaction");
    query.bindValue(":idTransaction", idTransaction);
    return query;
}

QSqlQuery ConnexionDDB::supprimerParid(QString nomTable, QString champId, int id){
    QSqlQuery query;
    if(nomTable == "Services")
        query.prepare("DELETE * FROM Services WHERE :champId = :id");
    else if(nomTable == "Formations")
        query.prepare("DELETE * FROM Formations WHERE :champId = :id");
    query.bindValue(":champId", champId);
    query.bindValue(":id", id);
    return query;
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


// QSqlQuery ConnexionDDB::ajouterMention(const int idMention, const QString& nomMention) {
//     QSqlQuery query;
//     query.prepare("INSERT INTO MENTION (MT_ID, MT_NOM) VALUES (:idMention, :nomMention)");
//     query.bindValue(":idMention", idMention);
//     query.bindValue(":nomMention", nomMention);
//     return query;
// }

// QSqlQuery ConnexionDDB::ajouterNiveau(const int idNiveau, const QString& nomNiveau) {
//     QSqlQuery query;
//     query.prepare("INSERT INTO NIVEAU (NV_ID, MT_ID, NV_NOM) VALUES (:idNiveau, :idMention, :nomNiveau)");
//     query.bindValue(":idNiveau", idNiveau);
//     query.bindValue(":idMention", idMention);
//     query.bindValue(":nomNiveau", nomNiveau);
//     return query;
// }

// QSqlQuery ConnexionDDB::ajouterParcours(const int idParcours, const QString& nomParcours) {
//     QSqlQuery query;
//     query.prepare("INSERT INTO PARCOURS (PRC_ID, MT_ID, PRC_NOM) VALUES (:idParcours, :idMention, :nomParcours)");
//     query.bindValue(":idParcours", idParcours);
//     query.bindValue(":idMention", idMention);
//     query.bindValue(":nomParcours", nomParcours);
//     return query;
// }

// QSqlQuery ConnexionDDB::ajouterFormation(const int idFormation, const QString& nomFormation) {
//     QSqlQuery query;
//     query.prepare("INSERT INTO PARCOURS (FORM_ID, MT_NOM) VALUES (:idParcours, :idMention, :nomParcours)");
//     query.bindValue(":idParcours", idParcours);
//     query.bindValue(":idMention", idMention);
//     query.bindValue(":nomParcours", nomParcours);
//     return query;
// }

// QSqlQuery ConnexionDDB::ajouterService(const int idService, const QString& nomService) {
//     QSqlQuery query;
//     query.prepare("INSERT INTO SERVICES (MT_ID, MT_NOM) VALUES (:idParcours, :idMention, :nomParcours)");
//     query.bindValue(":idParcours", idParcours);
//     query.bindValue(":idMention", idMention);
//     query.bindValue(":nomParcours", nomParcours);
//     return query;
// }
