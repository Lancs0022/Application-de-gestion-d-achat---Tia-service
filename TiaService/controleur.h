#ifndef CONTROLEUR_H
#define CONTROLEUR_H

#include "connexionbdd.h"
#include <QSqlQuery>

class Controleur
{
public:
    Controleur();
    bool login(QString& username,QString& password);
    // QVector<int> rqtNvEtPrc(const QString& nomMention);
    int getId(const QString& nom, const QString& type);
    QString getNom(const QString& id, const QString& type);
    QVector<QString> getNiveauxSelonMention(const int& idMention);
    QVector<QString> getAll2(const QString& nomTable);
    QVector<QString> getAll1(const QString& nomTable);
    QVector<QVector<QString>> getAllSpecial(const QString& nomTable, const int& id);
    QVector<QString> getColumn(const QString& table, const int& indColonne);
    //QVector<QString> getAllSelonMention(const QString& choix, const int& idMention);
    QVector<QString> getAllSelonIdEtranger(const QString& nomTable, const int& idEtranger);

    bool rqtInscEt(int idEtudiant, QString& nom, QString& prenom, QString& genre,
                   QDate& dateDeNaissance, QString& faculte,
                   QString& mention, QString& niveau,
                   QString& codage, bool& passant, QString& telephone, QString& adresse);
    double getPrixU(const QString& choix, const QString& type);
    QString nomsEtByid(int& etId);
    bool isDuplicated(QString& nom, QString& prenom, int& idFaculte, int& idMention,
                      int& idNiveau);
    QVector<QVector<QString>> getStudent(QString Faculte, QString mention, QString niveau, int& idEtudiant, QString mode);
    bool deleteEtudiant(QString mention, QString niveau, QString faculte, int& idEtudiant);
    bool majEt(QString& nom, QString& prenom, QString& genre,
                           QDate& dateDeNaissance, QString& faculte,
                           QString& mention, QString& niveau,
                           QString& codage, bool& passant, QString& telephone, QString& adresse);
    bool enregistrerTransaction(const QVector<QVector<QString>>& listeAchat, int idEtudiant, bool estPayee);
    QVector<QVector<QString>> getAllBackupTransaction(const QString& nomTable, const int& id);
    QVector<QVector<QString>> reconstituerTransaction(int idTransaction, int idEtudiant);
    bool addAdmin(const QString& nomPersonnel, const QString& mdpPersonnel);

    bool enregistrerMention(QString& nomMention, QString& nomFaculte);
    bool enregistrerNiveau(QString& nomNiveau, QString& nomMention);
    bool enregistrerFaculte(QString& nomFaculte);
    bool eraseFMN(QString nom, QString nomTable);

    bool enregistrerSrvOUForm(QString& nom, double& prix, QString duree, QString nomTable);

    bool transactionPayee(int idTransaction);
    bool deleteElFTable(QString nomTable, QString champId, QString nom);

    bool logOut();
    bool autoLog();
    int getLastId(QString nomTable, QString champ);
private:
    ConnexionDDB bdd;
};

#endif // CONTROLEUR_H
