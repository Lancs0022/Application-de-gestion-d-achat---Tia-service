#ifndef FENETREPRINCIPALE_H
#define FENETREPRINCIPALE_H

#include <QMainWindow>
#include <QAbstractButton>
#include <QTableWidget>
#include <connexionbdd.h>
#include "controleur.h"

namespace Ui {
class FenetrePrincipale;
}

class FenetrePrincipale : public QMainWindow
{
    Q_OBJECT

public:
    explicit FenetrePrincipale(QWidget *parent = 0);

    void remplirComboBox(QComboBox* comboBox, const QVector<QString>& elements);
    void remplirToutM();
    void autoNvPrc(QComboBox*& mentionCB, QComboBox*& niveauCB, QComboBox*& parcoursCB,
                   QString mode = "All");
    void remplirTable(QTableWidget* maTable, QVector<QVector<QString>>& donnees);
    void remplirLstEt();

    ~FenetrePrincipale();

private slots:

    void on_tl_SeConnecter_clicked();

    void on_sc_Connexion_clicked();

    void on_tl_Quitter_clicked();

    void on_sc_Deconnexion_clicked();

    void on_tl_Insertion_clicked();

    void on_tl_Lister_clicked();

    void on_tl_Modification_clicked();

    void on_tl_Suppression_clicked();

    void on_inscEt_Enregistrer_clicked();

    void on_inscEt_mentionComboBox_currentIndexChanged();

    void on_inscAchat_formationsComboBox_currentIndexChanged();

    void on_inscAchat_servicesComboBox_currentIndexChanged();

    void on_inscAchat_qtFormSpinBox_valueChanged(int arg1);

    void on_inscAchat_qtServiceSpinBox_valueChanged(int arg1);

    void on_inscAchat_identifiantComboBox_currentIndexChanged(int index);

    void on_inscP_identifiantComboBox_currentIndexChanged(int index);

    void on_lstEt_idEtudiantComboBox_currentIndexChanged(int index);

    void on_lstEt_niveauCheckBox_stateChanged();

    void on_lstEt_mentionCheckBox_stateChanged();

    void on_lstEt_parcoursCheckBox_stateChanged();

    void on_lstEt_idEtudiantCheckBox_stateChanged();

    void on_lstEt_nomEtudiantCheckBox_stateChanged();

    void on_lstEt_Rechercher_clicked();

private:
    Ui::FenetrePrincipale *ui;
    Controleur ctrl;
};

#endif // FENETREPRINCIPALE_H
