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
double Controleur::getPrixU(const QString& choix, const QString& type){
    int idChoix = this->getId(choix, type);
    qDebug() << "IdChoix extraite : " << idChoix;
    qDebug() << "Choix : " << choix;
    QSqlQuery rqPrix(bdd.recupPrixDuChoix(idChoix, type));
    if (rqPrix.exec() && rqPrix.next()) {
        int prix = rqPrix.value(0).toDouble();
        qDebug() << "Prix de " << choix << " = " << prix;
        return prix;
    } else {
        qDebug() << "Une erreur est survenue lors de l'extraction de la liste des " << choix;
        return 0;
    }
}

// Premier prototype de column
QVector<QString> Controleur::getAll1(const QString& nomTable){
    qDebug() << "---- début de get all ----";
    QVector<QString> result;
    QSqlQuery rqAll(bdd.recupererToutDe1(nomTable));
    if (rqAll.exec()) {
        QString nomMention;
        while (rqAll.next()) {
            if(nomTable == "Mention" || nomTable == "Services" || nomTable == "Formations")
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
QVector<QString> Controleur::getAll2(const QString& nomTable){
    QVector<QString> result;

    // Champ 'nom' pour chaque table
    QString champNom;
    if (nomTable == "mention") {
        champNom = "MT_NOM";
    } else if (nomTable == "niveau") {
        champNom = "NV_NOM";
    } else if (nomTable == "Faculte") {
        champNom = "PRC_NOM";
    }

    QSqlQuery rqAll(bdd.recupererToutDe2(nomTable, champNom));
    if (rqAll.exec()) {
        while (rqAll.next()) {
            QString nom = rqAll.value(0).toString();
            result.push_back(nom);
        }
        return result;
    } else {
        qDebug() << "Une erreur est survenue lors de l'extraction de la liste des " << nomTable;
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

//
//
// Recupère le nom de tous les parcours ou niveau selon l'id d'un mention
// QVector<QString> Controleur::getAllSelonMention(const QString& choix, const int& idMtInt){
//     qDebug() << "---- début de get all selon mention ----";
//     qDebug() << "getAll " << choix;
//     QVector<QString> result;
//     QString idMention = QString::number(idMtInt);
//     QSqlQuery rqAll(bdd.recupererToutNPSelonMt(choix, idMention));
//     if (rqAll.exec()) {
//         QString nomMention;
//         while (rqAll.next()) {
//             nomMention = rqAll.value(2).toString();
//             result.push_back(nomMention);
//             qDebug() << "nom Mention : " << nomMention;
//         }

//         qDebug() << "Contenu de result :";

//         for (const QString& element : result) {
//             qDebug() << element;
//         }
//         qDebug() << "---- début de get all selon mention ----";
//         return result;
//     } else {
//         qDebug() << "Une erreur est survenue lors de l'extraction de la liste des " << choix;
//         qDebug() << "---- début de get all selon mention ----";
//         return QVector<QString>();
//     }
// }

// Recupère le nom de tous les Faculte ou niveau selon l'id d'un mention
QVector<QString> Controleur::getAllSelonIdEtranger(const QString& nomTable, const int& idEtranger){
    qDebug() << "---- début de get all selon id Etranger ----";
    qDebug() << "getAll " << nomTable;
    QVector<QString> result;
    QSqlQuery rqAll(bdd.recupSpecialTableLiee(nomTable, idEtranger));
    qDebug() << "! Query obtenu : " << rqAll.lastQuery();
    if (rqAll.exec()) {
        QString nomExtrait;
        while (rqAll.next()) {
            nomExtrait = rqAll.value(0).toString();
            result.push_back(nomExtrait);
            qDebug() << "nom Extrait : " << nomExtrait;
        }

        qDebug() << "Contenu de result :";

        for (const QString& element : result) {
            qDebug() << element;
        }
        qDebug() << "idEtranger : " << idEtranger;
        qDebug() << "---- Fin de get all selon id Etranger ----";
        return result;
    } else {
        qDebug() << "Une erreur est survenue lors de l'extraction de la liste des " << nomTable;
        qDebug() << "---- début de get all selon id Etranger ----";
        return QVector<QString>();
    }
}

// Contrôle les informations d'un étudiant avant de les envoyer à l'objet bdd
bool Controleur::rqtInscEt(int idEtudiant, QString& nom, QString& prenom, QString& genre,
                           QDate& dateDeNaissance, QString& faculte,
                           QString& mention, QString& niveau,
                           QString& codage, bool& passant, QString& telephone, QString& adresse){
    // qDebug() << "Mention récupéré du CBOX: " << mention;
    // qDebug() << "Niveau récupéré du CBOX: " << niveau;

    QDate dateActuelle = QDate::currentDate();
    qDebug() << "dateActuelle = " << dateActuelle;
    int idFaculte = this->getId(faculte, "Faculte");
    int idMention = this->getId(mention, "Mention");
    int idNiveau = this->getId(niveau, "Niveau");
    if(idEtudiant == -1)
        idEtudiant = getLastId("Etudiants", "et_id");
    int codageInt = codage.toInt();
    int telephoneInt = telephone.toInt();
    if(!isDuplicated(nom, prenom, idFaculte, idMention, idNiveau))
        return bdd.inscrireEtudiant(idEtudiant, nom, prenom, genre, dateDeNaissance, idFaculte, idMention, idNiveau, codageInt, passant, telephoneInt, adresse, dateActuelle);
    else{
        qDebug() << "Il semblerait que l'étudiant que vous tentez d'enregistrer existe déjà";
        return false;
    }
}

// Contrôle les informations d'un étudiant avant de les envoyer à l'objet bdd
bool Controleur::majEt(QString& nom, QString& prenom, QString& genre,
                       QDate& dateDeNaissance, QString& faculte,
                       QString& mention, QString& niveau,
                       QString& codage, bool& passant, QString& telephone, QString& adresse){
    // qDebug() << "Mention récupéré du CBOX: " << mention;
    // qDebug() << "Niveau récupéré du CBOX: " << niveau;
    int idFaculte = this->getId(faculte, "Faculte");
    int idMention = this->getId(mention, "Mention");
    int idNiveau = this->getId(niveau, "Niveau");
    int codageInt = codage.toInt();
    int telephoneInt = telephone.toInt();
    int idEtudiant = this->getId(nom, "Etudiants");

    qDebug() << "idMention : " << idMention;
    qDebug() << "idNiveau : " << idNiveau;
    qDebug() << "idFaculte : " << idFaculte;
    qDebug() << "idEtudiant : " << idEtudiant;
    qDebug() << "nom : " << nom;
    qDebug() << "prenom : " << prenom;
    qDebug() << "dateDeNaissance : " << dateDeNaissance;
    qDebug() << "codageInt : " << codageInt;
    qDebug() << "passant : " << passant;
    qDebug() << "telephoneInt : " << telephoneInt;
    qDebug() << "adresse : " << adresse;
    qDebug() << "idEtudiant : " << idEtudiant;

    if(bdd.mettreAJourEleve(idEtudiant, idFaculte, idMention, idNiveau, nom, prenom, genre, dateDeNaissance, codageInt, passant, telephoneInt, adresse)){
        qDebug() << "Mise à jour de l'élève effectué";
        return true;
    }
    else{
        qDebug() << "Mise à jour de l'élève échoué !";
        return false;
    }
}

bool Controleur::isDuplicated(QString& nom, QString& prenom, int& idFaculte, int& idMention,
                              int& idNiveau){
    qDebug() << "---- début de la recheche de double ----";
    QSqlQuery rqAUnDouble(bdd.aUnDouble(nom, prenom, idFaculte, idMention, idNiveau));
    // Exécution de la requête
    if (rqAUnDouble.exec()) {
        if(rqAUnDouble.next()){
            qDebug() << "Une doublure a été détecté";
            qDebug() << "---- fin de la recheche de double ----";
            return true;
        }
        else{
            qDebug() << "Aucune doublure détécté";
            qDebug() << "---- fin de la recheche de double ----";
            return false;
        }
    } else {
        qDebug() << "Erreur lors de l'execution de la reqête :" << rqAUnDouble.lastError().text();
        qDebug() << "---- fin de la recheche de double ----";
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

QVector<QVector<QString>> Controleur::getStudent(QString faculte, QString mention, QString niveau, int& idEtudiant, QString mode){
    int idMention = -1;
    int idNiveau = -1;
    int idFaculte = -1;
    if(mention != "nc")
        idMention = this->getId(mention, "Mention");

    if(niveau != "nc")
        idNiveau = this->getId(niveau, "Niveau");

    if(faculte != "nc")
        idFaculte = this->getId(faculte, "Faculte");


    qDebug() << "mention : " << mention;
    qDebug() << "niveau : " << niveau;
    qDebug() << "faculte : " << faculte;
    qDebug() << "idEtudiant : " << idEtudiant;

    QVector<QVector<QString>> etudiantData;
    QSqlQuery rqBcpEt(this->bdd.recupEtudiants(idFaculte, idMention, idNiveau, idEtudiant));
    qDebug() << "La requête est bonne ? : " << rqBcpEt.isValid();
    if (rqBcpEt.exec()) {
        while (rqBcpEt.next()) {
            QVector<QString> colonne;
            QString idEleve = rqBcpEt.value(0).toString(); // Numéro
            QString nom = rqBcpEt.value(4).toString(); // Nom
            QString prenom = rqBcpEt.value(5).toString(); // Prénom
            QString genre = rqBcpEt.value(6).toString();
            QString dateNaissance = rqBcpEt.value(7).toDate().toString("yyyy-MM-dd"); // Date de naissance
            QString codage = rqBcpEt.value(8).toString();
            QString estPassant = rqBcpEt.value(9).toString();
            QString numero = rqBcpEt.value(10).toString();
            QString adresse = rqBcpEt.value(11).toString();

            if(mode == "Selectif"){
                colonne.push_back(idEleve);
                colonne.push_back(nom);
                colonne.push_back(prenom);
                colonne.push_back(dateNaissance);
                colonne.push_back(codage);
                colonne.push_back(estPassant);
                colonne.push_back(numero);
                colonne.push_back(adresse);
            }
            else if(mode == "Modification"){
                QString idFaculte = rqBcpEt.value(2).toString();
                QString idMention = rqBcpEt.value(1).toString();
                QString idNiveau  = rqBcpEt.value(3).toString();

                QString faculte = getNom(idFaculte, "Faculte");
                QString mention = getNom(idMention, "Mention");
                QString niveau = getNom(idNiveau, "Niveau");

                colonne.push_back(nom);
                colonne.push_back(prenom);
                colonne.push_back(genre);
                colonne.push_back(dateNaissance);
                colonne.push_back(codage);
                colonne.push_back(estPassant);
                colonne.push_back(numero);
                colonne.push_back(adresse);
                colonne.push_back(faculte);
                colonne.push_back(mention);
                colonne.push_back(niveau);
            }

            etudiantData.push_back(colonne);
        }
    }
    else {
        qDebug() << "Une erreur est survenue lors de la récupération des élèves.";
    }
    return etudiantData;
}

bool Controleur::deleteEtudiant(QString mention, QString niveau, QString faculte, int& idEtudiant){
    int idMention = -1;
    int idNiveau = -1;
    int idFaculte = -1;
    if(mention != "nc")
        idMention = this->getId(mention, "Mention");

    if(niveau != "nc")
        idNiveau = this->getId(niveau, "Niveau");

    if(faculte != "nc")
        idFaculte = this->getId(faculte, "Faculte");
    QSqlQuery rqDelEt(this->bdd.effacerEtudiants(idFaculte, idMention, idNiveau, idEtudiant));

    if (rqDelEt.exec()) return true ;
    else                return false;
}

bool Controleur::enregistrerTransaction(const QVector<QVector<QString>>& listeAchat, int idEtudiant, bool estPayee) {
    qDebug() << "----- Début de \"Controleur::enregistrerAchats\" -----";
    for (const QVector<QString>& vecteur : listeAchat) {
        vecteur[4].toInt();
        qDebug() << "---- Nouveau vecteur ----";
        for (const QString& element : vecteur) {
            qDebug() << element;
        }
    }
    // Génère un identifiant unique pour la facture (tu peux le faire selon tes besoins)
    int idTransaction = this->getLastId("Transaction", "TRANS_ID");
    int idFormation;
    int idService;
    QDate dateActuelle = QDate::currentDate();

    // Enregistre la Transaction
    QSqlQuery rqAjTransaction(bdd.ajouterTransaction(idTransaction, idEtudiant, dateActuelle/*, montant*/));
    if (!rqAjTransaction.exec()) {
        qDebug() << "Erreur lors de l'enregistrement de la Transaction : " << rqAjTransaction.lastError().text();
        return false;
    }

    // Parcourt la liste d'achats et enregistre chaque achat
    for (const QVector<QString>& achat : listeAchat) {
        // Récupère les informations de l'achat
        int idAchat = this->getLastId("ACHAT", "ACHAT_ID");  // Génère un identifiant unique pour l'achat
        int nombre = achat[2].toInt();
        double montant = achat[4].toDouble();  // Supposons que la quatrième colonne est le montant

        // On vérifie si la première colonne indique que c'est un achat ou une formation
        if(achat[0] == "Formations"){
            idFormation = getId(achat[1], achat[0]);
            idService = -1;
        }
        else if(achat[0] == "Services") {
            idService = getId(achat[1], achat[0]);
            idFormation = -1;
        }
        else{
            qDebug() << "Type d'achat non valide : " << achat[0];
            return false;
        }

        qDebug() << "idAchat : "        << idAchat;
        qDebug() << "idService : "      << idService;
        qDebug() << "idFormation : "    << idFormation;
        qDebug() << "nombre : "         << nombre;
        qDebug() << "montant : "        << montant;
        qDebug() << "dateActuelle : "   << dateActuelle;

        QSqlQuery rqAjAchat = bdd.ajouterAchat(idAchat, idService, idFormation, nombre, idTransaction, estPayee);
        if (!rqAjAchat.exec()) {
            qDebug() << "Erreur lors de l'enregistrement de l'achat : " << rqAjAchat.lastError().text();
            return false;
        }
            // QSqlQuery rqAjFacture(bdd.ajouterFacture(idFacture, idEtudiant, dateActuelle, montant));
    }
    return true;  // Tous les achats ont été enregistrés avec succès
}

QVector<QVector<QString>> Controleur::reconstituerTransaction(int idTransaction, int idEtudiant) {
    qDebug() << "----- Début de Controleur::reconstituerTransaction -----";
    QVector<QVector<QString>> result;

    // Récupère les achats associés à la transaction et à l'étudiant
    QVector<QVector<QString>> listeAchat = getAllBackupTransaction("Achat", idTransaction);

    // Vérifie si la liste d'achats est vide
    if (!listeAchat.isEmpty()) {
        // Parcourt chaque achat pour le reconstituer
        for (const QVector<QString>& achat : listeAchat) {
            QVector<QString> transaction;

            // Ajoute les autres informations de l'achat à la transaction reconstituée
            transaction.append(achat);

            // Ajoute la transaction reconstituée au résultat
            result.push_back(transaction);
        }
    } else {
        qDebug() << "Aucun achat trouvé pour la transaction " << idTransaction << " de l'étudiant " << idEtudiant;
    }

    qDebug() << "----- Fin de Controleur::reconstituerTransaction -----";
    return result;
}

QVector<QVector<QString>> Controleur::getAllBackupTransaction(const QString& nomTable, const int& id) {
    qDebug() << "----- Début de Controleur::getAllSpecial -----";
    QVector<QVector<QString>> result;

    // Récupère les données spéciales selon la table et l'ID
    QSqlQuery rqSpecial(bdd.recupSpecialTableLiee(nomTable, id));

    // Vérifie si la requête s'est exécutée avec succès
    if (rqSpecial.exec()) {
        while (rqSpecial.next()) {
            QVector<QString> data;

            // QString idAchat = rqSpecial.value(0).toString();
            int idService = rqSpecial.value(1).toInt();
            int idFormation = rqSpecial.value(2).toInt();
            // int idTransaction = rqSpecial.value(3).toInt();
            // bool estPaye = rqSpecial.value(4).toBool();
            int quantite = rqSpecial.value(5).toInt();
            QString nom;
            QString type;
            if(idService == 0){
                type = "Formations";
                nom = getNom(QString::number(idFormation), type);
            }
            else if(idFormation == 0){
                type = "Services";
                nom = getNom(QString::number(idService), type);
            }

            double prix(getPrixU(nom, type));
            double montant = prix * quantite;
            qDebug() << "type : " << type;
            qDebug() << "nom : " << nom;
            qDebug() << "quantité : " << quantite;
            qDebug() << "prix : " << prix;
            data.push_back(type);
            data.push_back(nom);
            data.push_back(QString::number(quantite));
            data.push_back(QString::number(prix));
            data.push_back(QString::number(montant));

            // Ajoute la ligne au résultat
            result.push_back(data);
        }
    } else {
        // Affiche un message d'erreur si la requête échoue
        qDebug() << "Erreur lors de l'exécution de la requête spéciale pour la table " << nomTable;
    }

    for (const QVector<QString>& vecteur : result) {
        qDebug() << "---- Nouveau vecteur ----";
        for (const QString& element : vecteur) {
            qDebug() << element;
        }
    }
    qDebug() << "----- Fin de Controleur::getAllSpecial -----";
    return result;
}

QVector<QVector<QString>> Controleur::getAllSpecial(const QString& nomTable, const int& id) {
    qDebug() << "----- Début de Controleur::getAllSpecial -----";
    QVector<QVector<QString>> result;

    // Récupère les données spéciales selon la table et l'ID
    QSqlQuery rqSpecial(bdd.recupSpecialTableLiee(nomTable, id));

    // Vérifie si la requête s'est exécutée avec succès
    if (rqSpecial.exec()) {
        while (rqSpecial.next()) {
            QVector<QString> row;

            // Récupère chaque valeur de la ligne
            for (int i = 0; i < rqSpecial.record().count(); ++i) {
                QString value = rqSpecial.value(i).toString();
                row.push_back(value);
            }

            // Ajoute la ligne au résultat
            result.push_back(row);
        }
    } else {
        // Affiche un message d'erreur si la requête échoue
        qDebug() << "Erreur lors de l'exécution de la requête spéciale pour la table " << nomTable;
    }

    qDebug() << "----- Fin de Controleur::getAllSpecial -----";
    return result;
}

int Controleur::getLastId(QString nomTable, QString champ){
    int idRecupere;
    QSqlQuery rqLastId = bdd.obtenirDernierId(nomTable, champ);

    qDebug() << "Requête SQL: " << rqLastId.lastQuery();  // Affiche la requête SQL

    if (rqLastId.exec()){
        if(rqLastId.next()) {
            idRecupere = rqLastId.value(0).toInt();
            // Récupère la valeur maximale de l'ID
            qDebug() << "La requête de récupération de l'id de " << nomTable << " s'est bien déroulé. Id récupéré : " << rqLastId.value(0).toInt();
            qDebug() << "----- Fin de la récupération de l'id la plus haute -----";
            return idRecupere+1;
        }
        else{
            qDebug() << "La table est vide !";
            return 1;
        }
    } else {
        // Gestion d'erreur : retourne une valeur négative en cas d'échec
        qDebug() << "La requete n'a pas pu être executé. Passez la syntaxe en revue : " << nomTable << rqLastId.lastError();
        qDebug() << "----- Fin de la récupération de l'id la plus haute -----";
        return -1;
    }
}

bool Controleur::addAdmin(const QString& nomPersonnel, const QString& mdpPersonnel){
    int idPersonnel(getLastId("Personnel", "PERS_ID"));
    QSqlQuery rqAjAdmin(this->bdd.enregistrerAdmin(idPersonnel, nomPersonnel, mdpPersonnel));

    if (rqAjAdmin.exec()) {
        qDebug() << "Nouvel administrateur enregistré avec succès (ID_PROFESSEUR : " << idPersonnel << ")";
        return true;
    } else {
        qDebug() << "Erreur lors de l'enregistrement de l'administrateur : " << rqAjAdmin.lastError().text();
        return false;
    }
}

bool Controleur::enregistrerMention(QString& nomMention, QString& nomFaculte){
    int idFaculte(this->getId(nomFaculte, "Faculte"));
    int idMention(this->getLastId("Mention", "MT_ID"));
    qDebug() << "id Faculte : " << idFaculte;
    qDebug() << "id Mention : " << idMention;
    qDebug() << "nom du mention : " << nomMention;
    QSqlQuery rqEnregMention(this->bdd.ajouterMention(idMention, idFaculte, nomMention));
    if (rqEnregMention.exec()) {
        qDebug() << "Mention enregistré avec succès du mention : " << nomMention;
        return true;
    } else {
        qDebug() << "Erreur lors de l'enregistrement du nouveau mention : " << rqEnregMention.lastError().text();
        return false;
    }
}

bool Controleur::enregistrerNiveau(QString& nomNiveau, QString& nomMention){
    int idMention(this->getId(nomMention, "Mention"));
    int idNiveau(this->getLastId("Niveau", "NV_ID"));
    QSqlQuery rqEnregNiveau(this->bdd.ajouterNiveau(idNiveau, idMention, nomNiveau));
    if (rqEnregNiveau.exec()) {
        qDebug() << "Mention enregistré avec succès du niveau : " << nomNiveau;
        return true;
    } else {
        qDebug() << "Erreur lors de l'enregistrement du nouveau niveau : " << rqEnregNiveau.lastError().text();
        return false;
    }
}

bool Controleur::enregistrerFaculte(QString& nomFaculte){
    int idFaculte(this->getLastId("Faculte", "FC_ID"));
    QSqlQuery rqEnregFaculte(this->bdd.ajouterFaculte(idFaculte, nomFaculte));
    if (rqEnregFaculte.exec()) {
        qDebug() << "Mention enregistré avec succès du faculte : " << nomFaculte;
        return true;
    } else {
        qDebug() << "Erreur lors de l'enregistrement du nouveau faculte : " << rqEnregFaculte.lastError().text();
        return false;
    }
}

bool Controleur::transactionPayee(int idTransaction){
    QSqlQuery rqPay(this->bdd.definirSurPaye(idTransaction));
    if (rqPay.exec()) {
        qDebug() << "Facture bien défini sur payé : ";
        return true;
    } else {
        qDebug() << "Erreur lors de la définition de la transaction sur payé : " << rqPay.lastError().text();
        return false;
    }
}

bool Controleur::enregistrerSrvOUForm(QString& nom, double& prix, QString duree, QString nomTable){
    int id;
    if(nomTable == "Formations")
        id = this->getLastId(nomTable, "form_id");
    else if(nomTable == "Services")
        id = this->getLastId(nomTable, "srv_id");
    else{
         qDebug() << "Nom table incorrect";
        return false;
    }

    QSqlQuery rqEnregForm(bdd.ajouterServiceOuFormation(id, nom, prix, nomTable, duree));
    if (rqEnregForm.exec()) {
        qDebug() << nom << " enregistré ! ";
        return true;
    } else {
        qDebug() << "Erreur lors de la définition de la transaction sur payé : " << rqEnregForm.lastError().text();
        return false;
    }
}

bool Controleur::eraseFMN(QString nom, QString nomTable) {
    int id = getId(nom, nomTable);
    return this->bdd.supprimerFMN(id, nomTable);
}

bool Controleur::deleteElFTable(QString nomTable, QString champId, QString nom){
    int id(this->getId(nom, nomTable));
    QSqlQuery rqDelTable(this->bdd.supprimerParid(nomTable,champId,id));
    if (rqDelTable.exec()) {
        qDebug() << nom << " Effacé ! ";
        return true;
    } else {
        qDebug() << "Erreur lors de la suppression: " << rqDelTable.lastError().text();
        return false;
    }
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
