#ifndef FENETREPRINCIPALE_H
#define FENETREPRINCIPALE_H

#include <QMainWindow>
#include <QAbstractButton>
#include <QTableWidget>
#include <connexionbdd.h>
#include "controleur.h"
#include "fenetrefacture.h"

namespace Ui {
class Fenetre_Principale;
}

class FenetrePrincipale : public QMainWindow
{
    Q_OBJECT

public:
    explicit FenetrePrincipale(QWidget *parent = 0);

    void remplirComboBox(QComboBox* comboBox, const QVector<QString>& elements);
    void remplirToutM();
    void autoNvMt(QComboBox*& CBInf, const QString &modification, QString mode);
    void remplirTable(QTableWidget* maTable, QVector<QVector<QString>>& donnees);
    QVector<QVector<QString>> recupererContenuTable(QTableWidget* maTable);
    void remplirLstEt();
    void remplirSupEt();
    void remplirModEt();
    void remplirUneLigneTable(QTableWidget* maTable, const QVector<QString>& donnees);
    void supprimerLigneTable(QTableWidget* maTable, int ligne);
    void clearTableWidget(QTableWidget* tableWidget);

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

    void on_inscAchat_formationsComboBox_currentIndexChanged();

    void on_inscAchat_servicesComboBox_currentIndexChanged();

    void on_inscAchat_qtFormSpinBox_valueChanged(int arg1);

    void on_inscAchat_qtServiceSpinBox_valueChanged(int arg1);

    void on_lstEt_niveauCheckBox_stateChanged();

    void on_lstEt_mentionCheckBox_stateChanged();

    void on_lstEt_idEtudiantCheckBox_stateChanged();

    void on_lstEt_nomEtudiantCheckBox_stateChanged();

    void on_lstEt_Rechercher_clicked();

    void on_supEt_Supprimer_clicked();

    void on_supEt_identifiantComboBox_currentTextChanged(const QString &arg1);

    void on_inscAchat_identifiantComboBox_currentTextChanged(const QString &arg1);

    void on_lstEt_idEtudiantComboBox_currentTextChanged(const QString &arg1);

    void on_inscAchat_AjFormation_clicked();

    void on_inscAchat_AjService_clicked();

    void on_inscAchat_suppCmdPushButton_clicked();

    void on_inscAchat_confirmCmdPushButton_clicked();

    void on_inscEt_faculteComboBox_currentTextChanged(const QString &arg1);

    void on_inscEt_mentionComboBox_currentTextChanged(const QString &arg1);

    void on_lstEt_faculteCheckBox_stateChanged();

    void on_inscNv_faculteComboBox_currentTextChanged(const QString &arg1);

    void on_inscMt_faculteComboBox_currentTextChanged(const QString &arg1);

    void on_inscMt_Enregistrer_clicked();

    void on_inscFc_Enregistrer_clicked();

    void on_inscNv_Enregistrer_clicked();

    void on_modEt_mentionComboBox_currentTextChanged(const QString &arg1);

    void on_modEt_faculteComboBox_currentTextChanged(const QString &arg1);

    void on_modEt_identifiantComboBox_currentTextChanged(const QString &arg1);

    void on_modEt_Enregistrer_clicked();

    void on_lstEt_faculteComboBox_currentTextChanged(const QString &arg1);

    void on_inscFM_EnregistrerF_clicked();

    void on_inscSV_EnregistrerS_clicked();

    void on_supMt_faculteComboBox_currentTextChanged(const QString &arg1);

    void on_supNv_faculteComboBox_currentTextChanged(const QString &arg1);

    void on_supNv_mentionComboBox_currentTextChanged(const QString &arg1);

    void on_supMt_Enregistrer_clicked();

    void on_supNv_Enregistrer_clicked();

    void on_supFc_Enregistrer_clicked();

    void on_sc_aidePushButton_clicked();

    void on_lstT_identifiantComboBox_currentTextChanged(const QString &arg1);

    void on_lstT_idTransactionComboBox_currentTextChanged(const QString &arg1);

    void on_lstT_imprimerFacturePushButton_clicked();

    void on_lstT_vPaiementPushButton_clicked();

    void on_supFM_EnregistrerForm_clicked();

    void on_supSV_EnregistrerSrv_clicked();

private:
    Ui::Fenetre_Principale *ui;
    Controleur ctrl;
    // QVector<QString> facultes;
    // QVector<QString> mentions;
    // QVector<QString> niveaux;
    // QVector<QString> idEtudiants;
    // QVector<QString> formations;
    // QVector<QString> services;
    // QVector<QString>
};

#endif // FENETREPRINCIPALE_H
