#ifndef FENETREPRINCIPALE_H
#define FENETREPRINCIPALE_H

#include <QMainWindow>
#include <QAbstractButton>
#include <connexionbdd.h>

namespace Ui {
class FenetrePrincipale;
}

class FenetrePrincipale : public QMainWindow
{
    Q_OBJECT

public:
    explicit FenetrePrincipale(QWidget *parent = 0);

    void afficherEleves(const QString& classeAssigne);
    void afficherElevesV2();
    // void remplissageComboBox(QComboBox *comboBox, QString choix);
    void numElevesSelonCLasseDansCBox(QComboBox *comboBoxEleve, int &idClasse);
    void matiereDansCBoxSelonClasse(QComboBox *comboBoxEleve, int &idClasse);
    void classeDansCBox(QComboBox *comboBoxClasse);

    ~FenetrePrincipale();

private slots:
    void on_tl_SeConnecter_clicked();

    void on_tl_Quitter_clicked();

    void on_tl_Insertion_clicked();

    void on_tl_Lister_clicked();

    void on_sc_Connexion_clicked();

    void on_sc_Deconnexion_clicked();

    void on_inscE_Enregistrer_clicked();

    void on_ongletInsertion_currentChanged(/*int index*/);

    void on_lstE_chercher_clicked();

    void on_inscC_Enregistrer_clicked();

    void on_inscM_Enregistrer_clicked();

    void on_inscN_Enregistrer_clicked();

    void on_inscN_classeEleveComboBox_currentTextChanged(const QString &arg1);

    void on_inscN_afficherEleves_clicked();

    void on_inscA_enregistrer_clicked();

    void on_modE_classeEleveComboBox_currentTextChanged(const QString &arg1);

    void on_modE_chercher_clicked();

    void on_modE_Enregistrer_clicked();

    void on_tl_Modification_clicked();

    void on_tl_Suppression_clicked();

    void on_supM_Supprimer_clicked();

private:
    void effacerInfosDeLogin();
    Ui::FenetrePrincipale *ui;
    ConnexionDDB bdd;
    QVector<QString> classes;
    int idEleveTemp;
};

#endif // FENETREPRINCIPALE_H
