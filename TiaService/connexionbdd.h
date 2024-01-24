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
    QSqlQuery recupererId(const QString& nom, const QString& type);
    QSqlQuery recupererNiveauxSelonMention(const int& idMention);
    QSqlQuery recupNomParId(const QString& id, const QString& type);
    int compterEntrees(const QString& nomTable);
    bool inscrireEtudiant(int& nbEtudiants, QString& nom, QString& prenom, QString& genre,
                          QDate& dateDeNaissance, int& idMention,
                          int& idNiveau, int& idParcours, int& codage,
                          bool& passant, int& telephone, QString& adresse);
    QSqlQuery recupererToutNPSelonMt(const QString& nomTable, const QString& idMention);
    QSqlQuery recupPrixDuChoix(int& idChoix, const QString& nomTable);
    QSqlQuery aUnDouble(QString& nom, QString& prenom, QString& genre,
                                 QDate& dateDeNaissance, int& idMention,
                                 int& idNiveau, int& idParcours, int& codage);
    QSqlQuery recupEtudiants(int& idMention, int& idParcours, int& idNiveau, int& idEtudiant);
    bool mettreAJourEleve(int& idEtudiant, int& idMention, int& idNiveau, int& idParcours,
                          QString& nom, QString& prenom, QDate& dateNaissance,
                          int& codage, bool& estPassant, int& numero, QString& adresse);
    bool logOut();
    bool autoLogOn();

    bool isLoggedOn;

    void fermerLaBase();

private:
    QSqlDatabase db;
};

#endif // CONNEXIONBDD_H
