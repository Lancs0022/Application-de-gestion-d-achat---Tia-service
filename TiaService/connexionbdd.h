#ifndef CONNEXIONBDD_H
#define CONNEXIONBDD_H

#include <QtSql>
#include <QSqlQuery>
#include <QSqlRecord>
#include <iostream>
#include <string>

class ConnexionDDB {
public:
    ConnexionDDB();
    ~ConnexionDDB();

    bool ouvrirLaBase();
    bool isConnected();
    QSqlQuery recupInfoLogin(QString& username, QString& password);
    QSqlQuery recupererToutDe1(const QString& nomTable);
    QSqlQuery recupererToutDe2(const QString& nomTable, const QString& champNom);
    QSqlQuery recupSpecialTableLiee(const QString& nomTable, const int& id);
    QSqlQuery recupererId(const QString& nom, const QString& nomTable);
    QSqlQuery recupererNiveauxSelonMention(const int& idMention);
    QSqlQuery recupNomParId(const QString& id, const QString& nomTable);
    int compterEntrees(const QString& nomTable);
    bool inscrireEtudiant(int& idEtudiant, QString& nom, QString& prenom, QString& genre,
                          QDate& dateDeNaissance, int& idFaculte, int& idMention,
                          int& idNiveau, int& codage,
                          bool& passant, int& telephone, QString& adresse, QDate &dateInscription);
    QSqlQuery recupererToutNPSelonMt(const QString& nomTable, const QString& idMention);
    QSqlQuery recupPrixDuChoix(int& idChoix, const QString& nomTable);
    QSqlQuery aUnDouble(QString& nom, QString& prenom, int& idFaculte, int& idMention,
                                 int& idNiveau);
    QSqlQuery recupEtudiants(int& idfaculte, int& idMention, int& idParcours, int& idEtudiant);
    bool mettreAJourEleve(int& idEtudiant, int& idFaculte, int& idMention, int& idNiveau,
                          QString& nom, QString& prenom, QString& genre, QDate& dateNaissance,
                          int& codage, bool& estPassant, int& numero, QString& adresse);
    QSqlQuery effacerEtudiants(int& idParcours, int& idMention, int& idNiveau, int& idEtudiant);
    QSqlQuery ajouterTransaction(int& idTransaction, int& idEtudiant, QDate& dateTransaction);
    QSqlQuery ajouterAchat(int& idAchat, int idService, int idFormation, int& nombre,
                           int& idTransaction, bool estPayee);
    QSqlQuery obtenirDernierId(const QString& nomTable, const QString& nomColonneId);
    QSqlQuery enregistrerAdmin(const int idPersonnel, const QString& nomPersonnel, const QString& mdpPersonnel);

    QSqlQuery ajouterFaculte(const int idFaculte, const QString& nomFaculte);
    QSqlQuery ajouterMention(const int idMention, const int idFaculte, const QString& nomMention);
    QSqlQuery ajouterNiveau(const int idNiveau, const int idMention, const QString& nomNiveau);
    QSqlQuery ajouterFormation(int idFormation,QString& nomFormation,
                               double& prixFormation, QString& dureeFormation);
    bool      supprimerFMN(const int id, QString nomTable);
    QSqlQuery ajouterService(const int idService, const QString& nomService, const QString& prixService);
    QSqlQuery definirSurPaye(int idTransaction);
    QSqlQuery ajouterServiceOuFormation(const int idSF, const QString& nomSF, const double prixSF, const QString nomTable, QString& duree);
    QSqlQuery supprimerParid(QString nomTable, QString champId, int id);

    bool logOut();
    bool autoLogOn();

    bool isLoggedOn;

    void fermerLaBase();

private:
    QSqlDatabase db;
};

#endif // CONNEXIONBDD_H
