#ifndef CONTROLEUR_H
#define CONTROLEUR_H

#include "connexionbdd.h"
#include <QSqlQuery>

class Controleur
{
public:
    Controleur();
    bool login(QString& username,QString& password);
    QVector<int> rqtNvEtPrc(const QString& nomMention);
    int getId(const QString& nom, const QString& type);
    QString getNom(const QString& id, const QString& type);
    QVector<QString> getNiveauxSelonMention(const int& idMention);
    QVector<QString> getAll2(const QString& choix);
    QVector<QString> getAll1(const QString& choix);
    QVector<QString> getColumn(const QString& table, const int& indColonne);
    QVector<QString> getAllSelonMention(const QString& choix, const int& idMention);

    bool rqtInscEt(QString& nom, QString& prenom, QString& genre,
                   QDate& dateDeNaissance, QString& mention,
                   QString& niveau, QString& parcours,
                   QString& codage, bool& passant, QString& telephone, QString& adresse);
    int getPrixU(const QString& choix, const QString& type);
    QString nomsEtByid(int& etId);
    bool isDuplicated(QString& nom, QString& prenom, QString& genre,
                      QDate& dateDeNaissance, int& idMention,
                      int& idNiveau, int& idParcours, int& codage);
    QVector<QVector<QString>> getStudent(QString& mention, QString& niveau, QString& parcours, int& idEtudiant);

    bool logOut();
    bool autoLog();
private:
    ConnexionDDB bdd;
};

#endif // CONTROLEUR_H
