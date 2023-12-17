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
    bool login(QString& username, QString& password);
    bool logOut();
    bool autoLogOn();

    QVector<QString> recupererClasses();
    int recupererIdClasse(const QString& nomClasse);
    int compterEntrees(const QString& nomTable);
    int compterEntreesSelonClasse(const QString& nomTable, int &idClasse);
    bool insertionEleves(QString& nom, QString& prenom, QDate& dateDeNaissance, QString& pere, QString& mere, QString& classeAssigne);

    QVector<QVector<QString>> recupererMatieresSelonClasse(int &idClasse);
    QVector<QVector<QString>> recupElevesSelonClasse(const QString& classeAssigne);
    QVector<QString> recupEleveParClasseEtID(const QString& classeAssigne, int idEleve);
    bool mettreAJourEleve(int idEleve, QString& nom, QString& prenom, QDate& dateNaissance, QString& nomPere, QString& nomMere, QString& classeAssigne);
    QVector<QVector<QString>> recupNoteElevesSelonMatiereEtClasse(const QString& matiere, const QString& nomClasse);

    //Méthode pour enregistrer une classe
    bool enregistrerClasse(const QString& nomClasse);
    bool enregistrerMatiere(const QString& nomClasse, const QString& nomMatiere, double coefficient);
    bool enregistrerAdmin(const QString& nom, const QString& motDePasse);
    QVector<QVector<QString>> recupererMatieres();
    int recupererIdMatiere(const QString& nomMatiere);
    bool enregistrerNote(int idEleve, const QString& nomMatiere, QString nomClasse, double note);

    void fermerLaBase();

private:
    QSqlDatabase db;
    bool isLoggedOn;
    QString path;
};

#endif // CONNEXIONBDD_H
