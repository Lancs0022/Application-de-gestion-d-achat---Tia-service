/********************************************************************************
** Form generated from reading UI file 'fenetreprincipale.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREPRINCIPALE_H
#define UI_FENETREPRINCIPALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fenetre_Principale
{
public:
    QWidget *ongletCentrale;
    QStackedWidget *stackedWidget;
    QWidget *NonConnecte;
    QLabel *nc_Message;
    QWidget *Bienvenue;
    QLabel *Bvn_Message1;
    QLabel *Bvn_Message2;
    QPushButton *Bvn_aide;
    QWidget *Connexion;
    QLabel *sc_Message;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QPushButton *sc_Deconnexion;
    QPushButton *sc_Connexion;
    QLabel *sc_motDePasseLabel;
    QLabel *sc_utilisateurLabel;
    QLineEdit *sc_utilisateurLineEdit;
    QLineEdit *sc_motDePasseLineEdit;
    QPushButton *Bvn_aide_2;
    QWidget *ConsulterInfos;
    QTabWidget *ongletConsultation;
    QWidget *listeEleve;
    QTableWidget *lstE_listeEtudiant;
    QLabel *lstE_Message;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_4;
    QLabel *lstEt_idEtudiantLabel;
    QCheckBox *lstEt_idEtudiantCheckBox;
    QLabel *lstEt_nomEtudiantLabel;
    QComboBox *lstEt_mentionComboBox;
    QCheckBox *lstEt_nomEtudiantCheckBox;
    QLabel *lstEt_mentionLabel;
    QCheckBox *lstEt_mentionCheckBox;
    QComboBox *lstEt_niveauComboBox;
    QLabel *lstEt_niveauLabel;
    QPushButton *lstEt_Rechercher;
    QComboBox *lstEt_idEtudiantComboBox;
    QLineEdit *lstEt_nomEtudiantLineEdit;
    QCheckBox *lstEt_niveauCheckBox;
    QFrame *lstEt_line1;
    QLabel *lstEt_faculteLabel;
    QComboBox *lstEt_faculteComboBox;
    QCheckBox *lstEt_faculteCheckBox;
    QWidget *Insertion;
    QTabWidget *ongletInsertion;
    QWidget *insc_Etudiant;
    QLabel *inscEt_Message;
    QWidget *formLayoutWidget_11;
    QFormLayout *formLayout_9;
    QLabel *inscEt_nomLabel;
    QLineEdit *inscEt_nomLineEdit;
    QLabel *inscEt_prenomLabel;
    QLineEdit *inscEt_prenomLineEdit;
    QLabel *inscEt_genreLabel;
    QLabel *inscEt_dateDeNaissanceLabel;
    QDateEdit *inscEt_dateDeNaissanceDateEdit;
    QComboBox *inscEt_genreComboBox;
    QLabel *inscEt_faculteLabel;
    QComboBox *inscEt_faculteComboBox;
    QLabel *inscEt_mentionLabel;
    QComboBox *inscEt_mentionComboBox;
    QLabel *inscEt_niveauLabel;
    QComboBox *inscEt_niveauComboBox;
    QLabel *inscEt_codageLabel;
    QSpinBox *inscEt_codageSpinBox;
    QLabel *inscEt_telephonePhoneLabel;
    QLineEdit *inscEt_telephoneLineEdit;
    QLabel *inscEt_adresseLabel;
    QTextEdit *inscEt_adresseTextEdit;
    QPushButton *inscEt_Enregistrer;
    QLabel *inscEt_estPassantLabel;
    QCheckBox *inscEt_estPassantCheckBox;
    QWidget *insc_Achat;
    QLabel *inscAchat_Message;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *inscAchat_formationsComboBox;
    QLabel *inscAchat_formationsLabel;
    QSpinBox *inscAchat_qtFormSpinBox;
    QComboBox *inscAchat_servicesComboBox;
    QSpinBox *inscAchat_qtServiceSpinBox;
    QLabel *inscAchat_servicesLabel;
    QDoubleSpinBox *inscAchat_prixFormSpinBox;
    QDoubleSpinBox *inscAchat_prixServiceSpinBox;
    QPushButton *inscAchat_AjFormation;
    QPushButton *inscAchat_AjService;
    QTableWidget *inscAchat_commandeTableWidget;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_2;
    QLabel *inscAchat_identifiantLabel;
    QComboBox *inscAchat_identifiantComboBox;
    QLineEdit *inscAchat_nomEtudiantLineEdit;
    QPushButton *inscAchat_confirmCmdPushButton;
    QPushButton *inscAchat_suppCmdPushButton;
    QWidget *insc_payement;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_3;
    QLineEdit *inscP_nomEtudiantLineEdit;
    QLabel *inscP_idTransactionLabel;
    QLabel *inscP_identifiantLabel;
    QComboBox *inscP_idTransactionComboBox;
    QComboBox *inscP_identifiantComboBox;
    QFrame *line;
    QPushButton *inscP_vPaiementPushButton;
    QPushButton *inscP_imprimerFacturePushButton;
    QTableWidget *inscP_commandeTableWidget;
    QWidget *insc_Form_Msrv;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *inscFM_nomFormLabel;
    QLineEdit *inscFM_nomFormLineEdit;
    QLabel *inscFM_prixFormLabel;
    QLabel *inscFM_dureeFormLabel;
    QLineEdit *inscFM_dureeFormLineEdit;
    QPushButton *inscFM_EnregistrerF;
    QDoubleSpinBox *inscFM_prixFormDoubleSpinBox;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *inscSV_nomSrvLabel;
    QLineEdit *inscSV_nomSrvLineEdit;
    QLabel *inscSV_prixSrvLabel;
    QPushButton *inscSV_EnregistrerS;
    QDoubleSpinBox *inscSV_prixSrvDoubleSpinBox;
    QLabel *inscFS_Message;
    QWidget *insc_MentionNvPrc;
    QWidget *formLayoutWidget_6;
    QFormLayout *inscMt;
    QLabel *inscMt_faculteLabel;
    QLabel *inscMt_mentionLabel;
    QPushButton *inscMt_Enregistrer;
    QComboBox *inscMt_faculteComboBox;
    QLineEdit *inscMt_mentionLineEdit;
    QLabel *inscMt_Message;
    QWidget *formLayoutWidget_8;
    QFormLayout *inscNv;
    QLabel *inscNv_mentionLabel;
    QComboBox *inscNv_mentionComboBox;
    QLabel *inscNv_niveauLabel;
    QLineEdit *inscNv_niveauLineEdit;
    QPushButton *inscNv_Enregistrer;
    QLabel *inscNv_faculteLabel;
    QComboBox *inscNv_faculteComboBox;
    QWidget *formLayoutWidget_9;
    QFormLayout *InscFc;
    QLabel *inscFc_nomFaculteLabel;
    QLineEdit *inscFc_nomFaculteLineEdit;
    QPushButton *inscFc_Enregistrer;
    QLabel *inscNv_Message;
    QLabel *inscFc_Message;
    QWidget *insc_Admin;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_5;
    QLineEdit *inscA_nomDeLAdminLineEdit;
    QLabel *inscA_motDePasseLabel;
    QLineEdit *inscA_motDePasseLineEdit;
    QSpacerItem *verticalSpacer;
    QPushButton *inscA_enregistrer;
    QLabel *inscA_nomDeLAdminLabel;
    QLabel *inscA_Message;
    QWidget *Modifications;
    QTabWidget *ongletModification;
    QWidget *mod_Et;
    QLabel *modEt_Message;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_5;
    QLabel *modEt_identifiantLabel;
    QComboBox *modEt_identifiantComboBox;
    QLineEdit *modEt_nomEtudiantLineEdit;
    QWidget *formLayoutWidget_12;
    QFormLayout *formLayout_10;
    QLabel *modEt_nomLabel;
    QLineEdit *modEt_nomLineEdit;
    QLabel *modEt_prenomLabel;
    QLineEdit *modEt_prenomLineEdit;
    QLabel *modEt_genreLabel;
    QLabel *modEt_dateDeNaissanceLabel;
    QDateEdit *modEt_dateDeNaissanceDateEdit;
    QComboBox *modEt_genreComboBox;
    QLabel *modEt_faculteLabel;
    QComboBox *modEt_faculteComboBox;
    QLabel *modEt_mentionLabel;
    QComboBox *modEt_mentionComboBox;
    QLabel *modEt_niveauLabel;
    QComboBox *modEt_niveauComboBox;
    QLabel *modEt_codageLabel;
    QSpinBox *modEt_codageSpinBox;
    QLabel *modEt_telephonePhoneLabel;
    QLineEdit *modEt_telephoneLineEdit;
    QLabel *modEt_adresseLabel;
    QTextEdit *modEt_adresseTextEdit;
    QPushButton *modEt_Enregistrer;
    QLabel *modEt_estPassantLabel;
    QCheckBox *modEt_estPassantCheckBox;
    QWidget *Suppression;
    QTabWidget *ongletSuppression;
    QWidget *sup_Etudiants;
    QLabel *supEt_Message;
    QWidget *gridLayoutWidget_7;
    QGridLayout *gridLayout_6;
    QLineEdit *supEt_nomEtudiantLineEdit;
    QComboBox *supEt_identifiantComboBox;
    QLabel *supEt_identifiantLabel;
    QPushButton *supEt_Supprimer;
    QWidget *formLayoutWidget_14;
    QFormLayout *formLayout_11;
    QLabel *supEt_nomLabel;
    QLineEdit *supEt_nomLineEdit;
    QLabel *supEt_prenomLabel;
    QLineEdit *supEt_prenomLineEdit;
    QLabel *supEt_genreLabel;
    QComboBox *supEt_genreComboBox;
    QLabel *supEt_dateDeNaissanceLabel;
    QDateEdit *supEt_dateDeNaissanceDateEdit;
    QLabel *supEt_faculteLabel;
    QComboBox *supEt_faculteComboBox;
    QLabel *supEt_mentionLabel;
    QComboBox *supEt_mentionComboBox;
    QLabel *supEt_niveauLabel;
    QComboBox *supEt_niveauComboBox;
    QLabel *supEt_codageLabel;
    QSpinBox *supEt_codageSpinBox;
    QLabel *supEt_telephonePhoneLabel;
    QLineEdit *supEt_telephoneLineEdit;
    QLabel *supEt_adresseLabel;
    QTextEdit *supEt_adresseTextEdit;
    QLabel *supEt_estPassantLabel;
    QCheckBox *supEt_estPassantCheckBox;
    QWidget *sup_Mention;
    QLabel *supM_Message;
    QWidget *formLayoutWidget_10;
    QFormLayout *supNv;
    QLabel *supNv_mentionLabel;
    QComboBox *supNv_mentionComboBox;
    QLabel *supNv_niveauLabel;
    QPushButton *supNv_Enregistrer;
    QLabel *supNv_faculteLabel;
    QComboBox *supNv_faculteComboBox;
    QComboBox *supNv_niveauComboBox;
    QWidget *formLayoutWidget_13;
    QFormLayout *supFc;
    QLabel *supFc_nomFaculteLabel;
    QPushButton *supFc_Enregistrer;
    QComboBox *supFc_nomFaculteComboBox;
    QWidget *formLayoutWidget_7;
    QFormLayout *supMt;
    QLabel *supMt_faculteLabel;
    QLabel *supMt_mentionLabel;
    QPushButton *supMt_Enregistrer;
    QComboBox *supMt_faculteComboBox;
    QComboBox *supMt_mentionComboBox;
    QWidget *layoutWidget;
    QVBoxLayout *Toolbox;
    QPushButton *tl_SeConnecter;
    QPushButton *tl_Lister;
    QPushButton *tl_Insertion;
    QPushButton *tl_Modification;
    QPushButton *tl_Suppression;
    QPushButton *tl_Quitter;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Fenetre_Principale)
    {
        if (Fenetre_Principale->objectName().isEmpty())
            Fenetre_Principale->setObjectName("Fenetre_Principale");
        Fenetre_Principale->resize(956, 652);
        Fenetre_Principale->setAutoFillBackground(true);
        ongletCentrale = new QWidget(Fenetre_Principale);
        ongletCentrale->setObjectName("ongletCentrale");
        stackedWidget = new QStackedWidget(ongletCentrale);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(220, 0, 731, 621));
        NonConnecte = new QWidget();
        NonConnecte->setObjectName("NonConnecte");
        nc_Message = new QLabel(NonConnecte);
        nc_Message->setObjectName("nc_Message");
        nc_Message->setGeometry(QRect(180, 140, 331, 141));
        stackedWidget->addWidget(NonConnecte);
        Bienvenue = new QWidget();
        Bienvenue->setObjectName("Bienvenue");
        Bvn_Message1 = new QLabel(Bienvenue);
        Bvn_Message1->setObjectName("Bvn_Message1");
        Bvn_Message1->setGeometry(QRect(220, 50, 221, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("Verdana")});
        font.setPointSize(10);
        font.setBold(true);
        Bvn_Message1->setFont(font);
        Bvn_Message2 = new QLabel(Bienvenue);
        Bvn_Message2->setObjectName("Bvn_Message2");
        Bvn_Message2->setGeometry(QRect(120, 170, 441, 131));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Verdana")});
        font1.setPointSize(9);
        Bvn_Message2->setFont(font1);
        Bvn_aide = new QPushButton(Bienvenue);
        Bvn_aide->setObjectName("Bvn_aide");
        Bvn_aide->setGeometry(QRect(640, 550, 91, 41));
        stackedWidget->addWidget(Bienvenue);
        Connexion = new QWidget();
        Connexion->setObjectName("Connexion");
        sc_Message = new QLabel(Connexion);
        sc_Message->setObjectName("sc_Message");
        sc_Message->setGeometry(QRect(250, 110, 251, 41));
        formLayoutWidget = new QWidget(Connexion);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(220, 200, 291, 141));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        sc_Deconnexion = new QPushButton(formLayoutWidget);
        sc_Deconnexion->setObjectName("sc_Deconnexion");

        formLayout->setWidget(6, QFormLayout::SpanningRole, sc_Deconnexion);

        sc_Connexion = new QPushButton(formLayoutWidget);
        sc_Connexion->setObjectName("sc_Connexion");

        formLayout->setWidget(5, QFormLayout::SpanningRole, sc_Connexion);

        sc_motDePasseLabel = new QLabel(formLayoutWidget);
        sc_motDePasseLabel->setObjectName("sc_motDePasseLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, sc_motDePasseLabel);

        sc_utilisateurLabel = new QLabel(formLayoutWidget);
        sc_utilisateurLabel->setObjectName("sc_utilisateurLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, sc_utilisateurLabel);

        sc_utilisateurLineEdit = new QLineEdit(formLayoutWidget);
        sc_utilisateurLineEdit->setObjectName("sc_utilisateurLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, sc_utilisateurLineEdit);

        sc_motDePasseLineEdit = new QLineEdit(formLayoutWidget);
        sc_motDePasseLineEdit->setObjectName("sc_motDePasseLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, sc_motDePasseLineEdit);

        Bvn_aide_2 = new QPushButton(Connexion);
        Bvn_aide_2->setObjectName("Bvn_aide_2");
        Bvn_aide_2->setGeometry(QRect(640, 550, 91, 41));
        stackedWidget->addWidget(Connexion);
        ConsulterInfos = new QWidget();
        ConsulterInfos->setObjectName("ConsulterInfos");
        ongletConsultation = new QTabWidget(ConsulterInfos);
        ongletConsultation->setObjectName("ongletConsultation");
        ongletConsultation->setGeometry(QRect(0, 0, 731, 621));
        listeEleve = new QWidget();
        listeEleve->setObjectName("listeEleve");
        lstE_listeEtudiant = new QTableWidget(listeEleve);
        if (lstE_listeEtudiant->columnCount() < 8)
            lstE_listeEtudiant->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        lstE_listeEtudiant->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        lstE_listeEtudiant->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        lstE_listeEtudiant->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        lstE_listeEtudiant->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        lstE_listeEtudiant->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        lstE_listeEtudiant->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        lstE_listeEtudiant->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        lstE_listeEtudiant->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        lstE_listeEtudiant->setObjectName("lstE_listeEtudiant");
        lstE_listeEtudiant->setGeometry(QRect(10, 220, 711, 361));
        lstE_Message = new QLabel(listeEleve);
        lstE_Message->setObjectName("lstE_Message");
        lstE_Message->setGeometry(QRect(300, 0, 241, 16));
        gridLayoutWidget_5 = new QWidget(listeEleve);
        gridLayoutWidget_5->setObjectName("gridLayoutWidget_5");
        gridLayoutWidget_5->setGeometry(QRect(130, 20, 461, 207));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        lstEt_idEtudiantLabel = new QLabel(gridLayoutWidget_5);
        lstEt_idEtudiantLabel->setObjectName("lstEt_idEtudiantLabel");

        gridLayout_4->addWidget(lstEt_idEtudiantLabel, 6, 0, 1, 1);

        lstEt_idEtudiantCheckBox = new QCheckBox(gridLayoutWidget_5);
        lstEt_idEtudiantCheckBox->setObjectName("lstEt_idEtudiantCheckBox");

        gridLayout_4->addWidget(lstEt_idEtudiantCheckBox, 6, 2, 1, 1);

        lstEt_nomEtudiantLabel = new QLabel(gridLayoutWidget_5);
        lstEt_nomEtudiantLabel->setObjectName("lstEt_nomEtudiantLabel");

        gridLayout_4->addWidget(lstEt_nomEtudiantLabel, 7, 0, 1, 1);

        lstEt_mentionComboBox = new QComboBox(gridLayoutWidget_5);
        lstEt_mentionComboBox->setObjectName("lstEt_mentionComboBox");
        lstEt_mentionComboBox->setEnabled(false);
        lstEt_mentionComboBox->setEditable(false);

        gridLayout_4->addWidget(lstEt_mentionComboBox, 1, 1, 1, 1);

        lstEt_nomEtudiantCheckBox = new QCheckBox(gridLayoutWidget_5);
        lstEt_nomEtudiantCheckBox->setObjectName("lstEt_nomEtudiantCheckBox");

        gridLayout_4->addWidget(lstEt_nomEtudiantCheckBox, 7, 2, 1, 1);

        lstEt_mentionLabel = new QLabel(gridLayoutWidget_5);
        lstEt_mentionLabel->setObjectName("lstEt_mentionLabel");

        gridLayout_4->addWidget(lstEt_mentionLabel, 1, 0, 1, 1);

        lstEt_mentionCheckBox = new QCheckBox(gridLayoutWidget_5);
        lstEt_mentionCheckBox->setObjectName("lstEt_mentionCheckBox");

        gridLayout_4->addWidget(lstEt_mentionCheckBox, 1, 2, 1, 1);

        lstEt_niveauComboBox = new QComboBox(gridLayoutWidget_5);
        lstEt_niveauComboBox->setObjectName("lstEt_niveauComboBox");
        lstEt_niveauComboBox->setEnabled(false);

        gridLayout_4->addWidget(lstEt_niveauComboBox, 2, 1, 1, 1);

        lstEt_niveauLabel = new QLabel(gridLayoutWidget_5);
        lstEt_niveauLabel->setObjectName("lstEt_niveauLabel");

        gridLayout_4->addWidget(lstEt_niveauLabel, 2, 0, 1, 1);

        lstEt_Rechercher = new QPushButton(gridLayoutWidget_5);
        lstEt_Rechercher->setObjectName("lstEt_Rechercher");

        gridLayout_4->addWidget(lstEt_Rechercher, 8, 0, 1, 3);

        lstEt_idEtudiantComboBox = new QComboBox(gridLayoutWidget_5);
        lstEt_idEtudiantComboBox->setObjectName("lstEt_idEtudiantComboBox");
        lstEt_idEtudiantComboBox->setEnabled(false);

        gridLayout_4->addWidget(lstEt_idEtudiantComboBox, 6, 1, 1, 1);

        lstEt_nomEtudiantLineEdit = new QLineEdit(gridLayoutWidget_5);
        lstEt_nomEtudiantLineEdit->setObjectName("lstEt_nomEtudiantLineEdit");
        lstEt_nomEtudiantLineEdit->setEnabled(false);

        gridLayout_4->addWidget(lstEt_nomEtudiantLineEdit, 7, 1, 1, 1);

        lstEt_niveauCheckBox = new QCheckBox(gridLayoutWidget_5);
        lstEt_niveauCheckBox->setObjectName("lstEt_niveauCheckBox");

        gridLayout_4->addWidget(lstEt_niveauCheckBox, 2, 2, 1, 1);

        lstEt_line1 = new QFrame(gridLayoutWidget_5);
        lstEt_line1->setObjectName("lstEt_line1");
        lstEt_line1->setFrameShape(QFrame::HLine);
        lstEt_line1->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(lstEt_line1, 4, 0, 1, 2);

        lstEt_faculteLabel = new QLabel(gridLayoutWidget_5);
        lstEt_faculteLabel->setObjectName("lstEt_faculteLabel");

        gridLayout_4->addWidget(lstEt_faculteLabel, 0, 0, 1, 1);

        lstEt_faculteComboBox = new QComboBox(gridLayoutWidget_5);
        lstEt_faculteComboBox->setObjectName("lstEt_faculteComboBox");
        lstEt_faculteComboBox->setEnabled(false);

        gridLayout_4->addWidget(lstEt_faculteComboBox, 0, 1, 1, 1);

        lstEt_faculteCheckBox = new QCheckBox(gridLayoutWidget_5);
        lstEt_faculteCheckBox->setObjectName("lstEt_faculteCheckBox");

        gridLayout_4->addWidget(lstEt_faculteCheckBox, 0, 2, 1, 1);

        ongletConsultation->addTab(listeEleve, QString());
        stackedWidget->addWidget(ConsulterInfos);
        Insertion = new QWidget();
        Insertion->setObjectName("Insertion");
        ongletInsertion = new QTabWidget(Insertion);
        ongletInsertion->setObjectName("ongletInsertion");
        ongletInsertion->setEnabled(true);
        ongletInsertion->setGeometry(QRect(0, 0, 721, 630));
        ongletInsertion->setTabShape(QTabWidget::Rounded);
        ongletInsertion->setElideMode(Qt::ElideNone);
        ongletInsertion->setDocumentMode(false);
        ongletInsertion->setTabsClosable(false);
        ongletInsertion->setMovable(false);
        ongletInsertion->setTabBarAutoHide(true);
        insc_Etudiant = new QWidget();
        insc_Etudiant->setObjectName("insc_Etudiant");
        inscEt_Message = new QLabel(insc_Etudiant);
        inscEt_Message->setObjectName("inscEt_Message");
        inscEt_Message->setGeometry(QRect(210, 40, 311, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri")});
        inscEt_Message->setFont(font2);
        formLayoutWidget_11 = new QWidget(insc_Etudiant);
        formLayoutWidget_11->setObjectName("formLayoutWidget_11");
        formLayoutWidget_11->setGeometry(QRect(160, 100, 411, 404));
        formLayout_9 = new QFormLayout(formLayoutWidget_11);
        formLayout_9->setSpacing(6);
        formLayout_9->setContentsMargins(11, 11, 11, 11);
        formLayout_9->setObjectName("formLayout_9");
        formLayout_9->setContentsMargins(0, 0, 0, 0);
        inscEt_nomLabel = new QLabel(formLayoutWidget_11);
        inscEt_nomLabel->setObjectName("inscEt_nomLabel");

        formLayout_9->setWidget(0, QFormLayout::LabelRole, inscEt_nomLabel);

        inscEt_nomLineEdit = new QLineEdit(formLayoutWidget_11);
        inscEt_nomLineEdit->setObjectName("inscEt_nomLineEdit");

        formLayout_9->setWidget(0, QFormLayout::FieldRole, inscEt_nomLineEdit);

        inscEt_prenomLabel = new QLabel(formLayoutWidget_11);
        inscEt_prenomLabel->setObjectName("inscEt_prenomLabel");

        formLayout_9->setWidget(1, QFormLayout::LabelRole, inscEt_prenomLabel);

        inscEt_prenomLineEdit = new QLineEdit(formLayoutWidget_11);
        inscEt_prenomLineEdit->setObjectName("inscEt_prenomLineEdit");

        formLayout_9->setWidget(1, QFormLayout::FieldRole, inscEt_prenomLineEdit);

        inscEt_genreLabel = new QLabel(formLayoutWidget_11);
        inscEt_genreLabel->setObjectName("inscEt_genreLabel");

        formLayout_9->setWidget(2, QFormLayout::LabelRole, inscEt_genreLabel);

        inscEt_dateDeNaissanceLabel = new QLabel(formLayoutWidget_11);
        inscEt_dateDeNaissanceLabel->setObjectName("inscEt_dateDeNaissanceLabel");

        formLayout_9->setWidget(3, QFormLayout::LabelRole, inscEt_dateDeNaissanceLabel);

        inscEt_dateDeNaissanceDateEdit = new QDateEdit(formLayoutWidget_11);
        inscEt_dateDeNaissanceDateEdit->setObjectName("inscEt_dateDeNaissanceDateEdit");

        formLayout_9->setWidget(3, QFormLayout::FieldRole, inscEt_dateDeNaissanceDateEdit);

        inscEt_genreComboBox = new QComboBox(formLayoutWidget_11);
        inscEt_genreComboBox->addItem(QString());
        inscEt_genreComboBox->addItem(QString());
        inscEt_genreComboBox->addItem(QString());
        inscEt_genreComboBox->setObjectName("inscEt_genreComboBox");

        formLayout_9->setWidget(2, QFormLayout::FieldRole, inscEt_genreComboBox);

        inscEt_faculteLabel = new QLabel(formLayoutWidget_11);
        inscEt_faculteLabel->setObjectName("inscEt_faculteLabel");

        formLayout_9->setWidget(4, QFormLayout::LabelRole, inscEt_faculteLabel);

        inscEt_faculteComboBox = new QComboBox(formLayoutWidget_11);
        inscEt_faculteComboBox->setObjectName("inscEt_faculteComboBox");

        formLayout_9->setWidget(4, QFormLayout::FieldRole, inscEt_faculteComboBox);

        inscEt_mentionLabel = new QLabel(formLayoutWidget_11);
        inscEt_mentionLabel->setObjectName("inscEt_mentionLabel");

        formLayout_9->setWidget(5, QFormLayout::LabelRole, inscEt_mentionLabel);

        inscEt_mentionComboBox = new QComboBox(formLayoutWidget_11);
        inscEt_mentionComboBox->setObjectName("inscEt_mentionComboBox");

        formLayout_9->setWidget(5, QFormLayout::FieldRole, inscEt_mentionComboBox);

        inscEt_niveauLabel = new QLabel(formLayoutWidget_11);
        inscEt_niveauLabel->setObjectName("inscEt_niveauLabel");

        formLayout_9->setWidget(6, QFormLayout::LabelRole, inscEt_niveauLabel);

        inscEt_niveauComboBox = new QComboBox(formLayoutWidget_11);
        inscEt_niveauComboBox->setObjectName("inscEt_niveauComboBox");

        formLayout_9->setWidget(6, QFormLayout::FieldRole, inscEt_niveauComboBox);

        inscEt_codageLabel = new QLabel(formLayoutWidget_11);
        inscEt_codageLabel->setObjectName("inscEt_codageLabel");

        formLayout_9->setWidget(7, QFormLayout::LabelRole, inscEt_codageLabel);

        inscEt_codageSpinBox = new QSpinBox(formLayoutWidget_11);
        inscEt_codageSpinBox->setObjectName("inscEt_codageSpinBox");

        formLayout_9->setWidget(7, QFormLayout::FieldRole, inscEt_codageSpinBox);

        inscEt_telephonePhoneLabel = new QLabel(formLayoutWidget_11);
        inscEt_telephonePhoneLabel->setObjectName("inscEt_telephonePhoneLabel");

        formLayout_9->setWidget(8, QFormLayout::LabelRole, inscEt_telephonePhoneLabel);

        inscEt_telephoneLineEdit = new QLineEdit(formLayoutWidget_11);
        inscEt_telephoneLineEdit->setObjectName("inscEt_telephoneLineEdit");

        formLayout_9->setWidget(8, QFormLayout::FieldRole, inscEt_telephoneLineEdit);

        inscEt_adresseLabel = new QLabel(formLayoutWidget_11);
        inscEt_adresseLabel->setObjectName("inscEt_adresseLabel");

        formLayout_9->setWidget(9, QFormLayout::LabelRole, inscEt_adresseLabel);

        inscEt_adresseTextEdit = new QTextEdit(formLayoutWidget_11);
        inscEt_adresseTextEdit->setObjectName("inscEt_adresseTextEdit");

        formLayout_9->setWidget(9, QFormLayout::FieldRole, inscEt_adresseTextEdit);

        inscEt_Enregistrer = new QPushButton(formLayoutWidget_11);
        inscEt_Enregistrer->setObjectName("inscEt_Enregistrer");

        formLayout_9->setWidget(11, QFormLayout::SpanningRole, inscEt_Enregistrer);

        inscEt_estPassantLabel = new QLabel(formLayoutWidget_11);
        inscEt_estPassantLabel->setObjectName("inscEt_estPassantLabel");

        formLayout_9->setWidget(10, QFormLayout::LabelRole, inscEt_estPassantLabel);

        inscEt_estPassantCheckBox = new QCheckBox(formLayoutWidget_11);
        inscEt_estPassantCheckBox->setObjectName("inscEt_estPassantCheckBox");

        formLayout_9->setWidget(10, QFormLayout::FieldRole, inscEt_estPassantCheckBox);

        QIcon icon;
        icon.addFile(QString::fromUtf8("Assets/icons8-add-user-group-man-man-skin-type-7-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        ongletInsertion->addTab(insc_Etudiant, icon, QString());
        insc_Achat = new QWidget();
        insc_Achat->setObjectName("insc_Achat");
        inscAchat_Message = new QLabel(insc_Achat);
        inscAchat_Message->setObjectName("inscAchat_Message");
        inscAchat_Message->setGeometry(QRect(10, 10, 311, 16));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        inscAchat_Message->setFont(font3);
        gridLayoutWidget = new QWidget(insc_Achat);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(80, 70, 541, 140));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        inscAchat_formationsComboBox = new QComboBox(gridLayoutWidget);
        inscAchat_formationsComboBox->setObjectName("inscAchat_formationsComboBox");

        gridLayout->addWidget(inscAchat_formationsComboBox, 1, 0, 1, 1);

        inscAchat_formationsLabel = new QLabel(gridLayoutWidget);
        inscAchat_formationsLabel->setObjectName("inscAchat_formationsLabel");

        gridLayout->addWidget(inscAchat_formationsLabel, 0, 0, 1, 1);

        inscAchat_qtFormSpinBox = new QSpinBox(gridLayoutWidget);
        inscAchat_qtFormSpinBox->setObjectName("inscAchat_qtFormSpinBox");
        inscAchat_qtFormSpinBox->setValue(1);

        gridLayout->addWidget(inscAchat_qtFormSpinBox, 2, 0, 1, 1);

        inscAchat_servicesComboBox = new QComboBox(gridLayoutWidget);
        inscAchat_servicesComboBox->setObjectName("inscAchat_servicesComboBox");

        gridLayout->addWidget(inscAchat_servicesComboBox, 1, 1, 1, 1);

        inscAchat_qtServiceSpinBox = new QSpinBox(gridLayoutWidget);
        inscAchat_qtServiceSpinBox->setObjectName("inscAchat_qtServiceSpinBox");
        inscAchat_qtServiceSpinBox->setValue(1);

        gridLayout->addWidget(inscAchat_qtServiceSpinBox, 2, 1, 1, 1);

        inscAchat_servicesLabel = new QLabel(gridLayoutWidget);
        inscAchat_servicesLabel->setObjectName("inscAchat_servicesLabel");

        gridLayout->addWidget(inscAchat_servicesLabel, 0, 1, 1, 1);

        inscAchat_prixFormSpinBox = new QDoubleSpinBox(gridLayoutWidget);
        inscAchat_prixFormSpinBox->setObjectName("inscAchat_prixFormSpinBox");
        inscAchat_prixFormSpinBox->setMaximum(1000000000000.000000000000000);

        gridLayout->addWidget(inscAchat_prixFormSpinBox, 3, 0, 1, 1);

        inscAchat_prixServiceSpinBox = new QDoubleSpinBox(gridLayoutWidget);
        inscAchat_prixServiceSpinBox->setObjectName("inscAchat_prixServiceSpinBox");
        inscAchat_prixServiceSpinBox->setMaximum(1000000000000.000000000000000);

        gridLayout->addWidget(inscAchat_prixServiceSpinBox, 3, 1, 1, 1);

        inscAchat_AjFormation = new QPushButton(gridLayoutWidget);
        inscAchat_AjFormation->setObjectName("inscAchat_AjFormation");
        inscAchat_AjFormation->setEnabled(false);

        gridLayout->addWidget(inscAchat_AjFormation, 4, 0, 1, 1);

        inscAchat_AjService = new QPushButton(gridLayoutWidget);
        inscAchat_AjService->setObjectName("inscAchat_AjService");
        inscAchat_AjService->setEnabled(false);

        gridLayout->addWidget(inscAchat_AjService, 4, 1, 1, 1);

        inscAchat_commandeTableWidget = new QTableWidget(insc_Achat);
        if (inscAchat_commandeTableWidget->columnCount() < 6)
            inscAchat_commandeTableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        inscAchat_commandeTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        inscAchat_commandeTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        inscAchat_commandeTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        inscAchat_commandeTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        inscAchat_commandeTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        inscAchat_commandeTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem13);
        inscAchat_commandeTableWidget->setObjectName("inscAchat_commandeTableWidget");
        inscAchat_commandeTableWidget->setGeometry(QRect(10, 220, 701, 311));
        gridLayoutWidget_3 = new QWidget(insc_Achat);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(50, 30, 581, 31));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        inscAchat_identifiantLabel = new QLabel(gridLayoutWidget_3);
        inscAchat_identifiantLabel->setObjectName("inscAchat_identifiantLabel");

        gridLayout_2->addWidget(inscAchat_identifiantLabel, 0, 0, 1, 1);

        inscAchat_identifiantComboBox = new QComboBox(gridLayoutWidget_3);
        inscAchat_identifiantComboBox->setObjectName("inscAchat_identifiantComboBox");

        gridLayout_2->addWidget(inscAchat_identifiantComboBox, 0, 1, 1, 1);

        inscAchat_nomEtudiantLineEdit = new QLineEdit(gridLayoutWidget_3);
        inscAchat_nomEtudiantLineEdit->setObjectName("inscAchat_nomEtudiantLineEdit");
        inscAchat_nomEtudiantLineEdit->setReadOnly(true);

        gridLayout_2->addWidget(inscAchat_nomEtudiantLineEdit, 0, 2, 1, 1);

        inscAchat_confirmCmdPushButton = new QPushButton(insc_Achat);
        inscAchat_confirmCmdPushButton->setObjectName("inscAchat_confirmCmdPushButton");
        inscAchat_confirmCmdPushButton->setGeometry(QRect(10, 540, 80, 24));
        inscAchat_suppCmdPushButton = new QPushButton(insc_Achat);
        inscAchat_suppCmdPushButton->setObjectName("inscAchat_suppCmdPushButton");
        inscAchat_suppCmdPushButton->setGeometry(QRect(90, 540, 80, 24));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("Assets/icons8-checklist-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        ongletInsertion->addTab(insc_Achat, icon1, QString());
        insc_payement = new QWidget();
        insc_payement->setObjectName("insc_payement");
        gridLayoutWidget_4 = new QWidget(insc_payement);
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(50, 20, 621, 111));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        inscP_nomEtudiantLineEdit = new QLineEdit(gridLayoutWidget_4);
        inscP_nomEtudiantLineEdit->setObjectName("inscP_nomEtudiantLineEdit");
        inscP_nomEtudiantLineEdit->setReadOnly(true);

        gridLayout_3->addWidget(inscP_nomEtudiantLineEdit, 0, 2, 1, 1);

        inscP_idTransactionLabel = new QLabel(gridLayoutWidget_4);
        inscP_idTransactionLabel->setObjectName("inscP_idTransactionLabel");

        gridLayout_3->addWidget(inscP_idTransactionLabel, 1, 0, 1, 1);

        inscP_identifiantLabel = new QLabel(gridLayoutWidget_4);
        inscP_identifiantLabel->setObjectName("inscP_identifiantLabel");

        gridLayout_3->addWidget(inscP_identifiantLabel, 0, 0, 1, 1);

        inscP_idTransactionComboBox = new QComboBox(gridLayoutWidget_4);
        inscP_idTransactionComboBox->setObjectName("inscP_idTransactionComboBox");
        inscP_idTransactionComboBox->setDuplicatesEnabled(false);
        inscP_idTransactionComboBox->setFrame(true);

        gridLayout_3->addWidget(inscP_idTransactionComboBox, 1, 1, 1, 2);

        inscP_identifiantComboBox = new QComboBox(gridLayoutWidget_4);
        inscP_identifiantComboBox->setObjectName("inscP_identifiantComboBox");

        gridLayout_3->addWidget(inscP_identifiantComboBox, 0, 1, 1, 1);

        line = new QFrame(gridLayoutWidget_4);
        line->setObjectName("line");
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 2, 0, 1, 3);

        inscP_vPaiementPushButton = new QPushButton(gridLayoutWidget_4);
        inscP_vPaiementPushButton->setObjectName("inscP_vPaiementPushButton");

        gridLayout_3->addWidget(inscP_vPaiementPushButton, 3, 2, 1, 1);

        inscP_imprimerFacturePushButton = new QPushButton(gridLayoutWidget_4);
        inscP_imprimerFacturePushButton->setObjectName("inscP_imprimerFacturePushButton");

        gridLayout_3->addWidget(inscP_imprimerFacturePushButton, 3, 0, 1, 2);

        inscP_idTransactionComboBox->raise();
        inscP_identifiantComboBox->raise();
        inscP_identifiantLabel->raise();
        inscP_nomEtudiantLineEdit->raise();
        inscP_idTransactionLabel->raise();
        inscP_vPaiementPushButton->raise();
        line->raise();
        inscP_imprimerFacturePushButton->raise();
        inscP_commandeTableWidget = new QTableWidget(insc_payement);
        if (inscP_commandeTableWidget->columnCount() < 5)
            inscP_commandeTableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        inscP_commandeTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        inscP_commandeTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        inscP_commandeTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        inscP_commandeTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        inscP_commandeTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem18);
        inscP_commandeTableWidget->setObjectName("inscP_commandeTableWidget");
        inscP_commandeTableWidget->setGeometry(QRect(50, 150, 621, 411));
        ongletInsertion->addTab(insc_payement, QString());
        insc_Form_Msrv = new QWidget();
        insc_Form_Msrv->setObjectName("insc_Form_Msrv");
        formLayoutWidget_2 = new QWidget(insc_Form_Msrv);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(10, 90, 321, 117));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        inscFM_nomFormLabel = new QLabel(formLayoutWidget_2);
        inscFM_nomFormLabel->setObjectName("inscFM_nomFormLabel");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, inscFM_nomFormLabel);

        inscFM_nomFormLineEdit = new QLineEdit(formLayoutWidget_2);
        inscFM_nomFormLineEdit->setObjectName("inscFM_nomFormLineEdit");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, inscFM_nomFormLineEdit);

        inscFM_prixFormLabel = new QLabel(formLayoutWidget_2);
        inscFM_prixFormLabel->setObjectName("inscFM_prixFormLabel");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, inscFM_prixFormLabel);

        inscFM_dureeFormLabel = new QLabel(formLayoutWidget_2);
        inscFM_dureeFormLabel->setObjectName("inscFM_dureeFormLabel");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, inscFM_dureeFormLabel);

        inscFM_dureeFormLineEdit = new QLineEdit(formLayoutWidget_2);
        inscFM_dureeFormLineEdit->setObjectName("inscFM_dureeFormLineEdit");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, inscFM_dureeFormLineEdit);

        inscFM_EnregistrerF = new QPushButton(formLayoutWidget_2);
        inscFM_EnregistrerF->setObjectName("inscFM_EnregistrerF");

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, inscFM_EnregistrerF);

        inscFM_prixFormDoubleSpinBox = new QDoubleSpinBox(formLayoutWidget_2);
        inscFM_prixFormDoubleSpinBox->setObjectName("inscFM_prixFormDoubleSpinBox");
        inscFM_prixFormDoubleSpinBox->setMaximum(100000000.989999994635582);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, inscFM_prixFormDoubleSpinBox);

        formLayoutWidget_3 = new QWidget(insc_Form_Msrv);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(370, 100, 341, 87));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        inscSV_nomSrvLabel = new QLabel(formLayoutWidget_3);
        inscSV_nomSrvLabel->setObjectName("inscSV_nomSrvLabel");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, inscSV_nomSrvLabel);

        inscSV_nomSrvLineEdit = new QLineEdit(formLayoutWidget_3);
        inscSV_nomSrvLineEdit->setObjectName("inscSV_nomSrvLineEdit");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, inscSV_nomSrvLineEdit);

        inscSV_prixSrvLabel = new QLabel(formLayoutWidget_3);
        inscSV_prixSrvLabel->setObjectName("inscSV_prixSrvLabel");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, inscSV_prixSrvLabel);

        inscSV_EnregistrerS = new QPushButton(formLayoutWidget_3);
        inscSV_EnregistrerS->setObjectName("inscSV_EnregistrerS");

        formLayout_3->setWidget(2, QFormLayout::SpanningRole, inscSV_EnregistrerS);

        inscSV_prixSrvDoubleSpinBox = new QDoubleSpinBox(formLayoutWidget_3);
        inscSV_prixSrvDoubleSpinBox->setObjectName("inscSV_prixSrvDoubleSpinBox");
        inscSV_prixSrvDoubleSpinBox->setMaximum(10000000000.000000000000000);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, inscSV_prixSrvDoubleSpinBox);

        inscFS_Message = new QLabel(insc_Form_Msrv);
        inscFS_Message->setObjectName("inscFS_Message");
        inscFS_Message->setGeometry(QRect(290, 40, 49, 16));
        ongletInsertion->addTab(insc_Form_Msrv, QString());
        insc_MentionNvPrc = new QWidget();
        insc_MentionNvPrc->setObjectName("insc_MentionNvPrc");
        formLayoutWidget_6 = new QWidget(insc_MentionNvPrc);
        formLayoutWidget_6->setObjectName("formLayoutWidget_6");
        formLayoutWidget_6->setGeometry(QRect(30, 100, 311, 91));
        inscMt = new QFormLayout(formLayoutWidget_6);
        inscMt->setSpacing(6);
        inscMt->setContentsMargins(11, 11, 11, 11);
        inscMt->setObjectName("inscMt");
        inscMt->setContentsMargins(0, 0, 0, 0);
        inscMt_faculteLabel = new QLabel(formLayoutWidget_6);
        inscMt_faculteLabel->setObjectName("inscMt_faculteLabel");

        inscMt->setWidget(0, QFormLayout::LabelRole, inscMt_faculteLabel);

        inscMt_mentionLabel = new QLabel(formLayoutWidget_6);
        inscMt_mentionLabel->setObjectName("inscMt_mentionLabel");

        inscMt->setWidget(1, QFormLayout::LabelRole, inscMt_mentionLabel);

        inscMt_Enregistrer = new QPushButton(formLayoutWidget_6);
        inscMt_Enregistrer->setObjectName("inscMt_Enregistrer");

        inscMt->setWidget(2, QFormLayout::SpanningRole, inscMt_Enregistrer);

        inscMt_faculteComboBox = new QComboBox(formLayoutWidget_6);
        inscMt_faculteComboBox->setObjectName("inscMt_faculteComboBox");

        inscMt->setWidget(0, QFormLayout::FieldRole, inscMt_faculteComboBox);

        inscMt_mentionLineEdit = new QLineEdit(formLayoutWidget_6);
        inscMt_mentionLineEdit->setObjectName("inscMt_mentionLineEdit");

        inscMt->setWidget(1, QFormLayout::FieldRole, inscMt_mentionLineEdit);

        inscMt_Message = new QLabel(insc_MentionNvPrc);
        inscMt_Message->setObjectName("inscMt_Message");
        inscMt_Message->setGeometry(QRect(90, 60, 181, 31));
        inscMt_Message->setFont(font2);
        formLayoutWidget_8 = new QWidget(insc_MentionNvPrc);
        formLayoutWidget_8->setObjectName("formLayoutWidget_8");
        formLayoutWidget_8->setGeometry(QRect(360, 100, 311, 116));
        inscNv = new QFormLayout(formLayoutWidget_8);
        inscNv->setSpacing(6);
        inscNv->setContentsMargins(11, 11, 11, 11);
        inscNv->setObjectName("inscNv");
        inscNv->setContentsMargins(0, 0, 0, 0);
        inscNv_mentionLabel = new QLabel(formLayoutWidget_8);
        inscNv_mentionLabel->setObjectName("inscNv_mentionLabel");

        inscNv->setWidget(1, QFormLayout::LabelRole, inscNv_mentionLabel);

        inscNv_mentionComboBox = new QComboBox(formLayoutWidget_8);
        inscNv_mentionComboBox->setObjectName("inscNv_mentionComboBox");

        inscNv->setWidget(1, QFormLayout::FieldRole, inscNv_mentionComboBox);

        inscNv_niveauLabel = new QLabel(formLayoutWidget_8);
        inscNv_niveauLabel->setObjectName("inscNv_niveauLabel");

        inscNv->setWidget(2, QFormLayout::LabelRole, inscNv_niveauLabel);

        inscNv_niveauLineEdit = new QLineEdit(formLayoutWidget_8);
        inscNv_niveauLineEdit->setObjectName("inscNv_niveauLineEdit");

        inscNv->setWidget(2, QFormLayout::FieldRole, inscNv_niveauLineEdit);

        inscNv_Enregistrer = new QPushButton(formLayoutWidget_8);
        inscNv_Enregistrer->setObjectName("inscNv_Enregistrer");

        inscNv->setWidget(3, QFormLayout::SpanningRole, inscNv_Enregistrer);

        inscNv_faculteLabel = new QLabel(formLayoutWidget_8);
        inscNv_faculteLabel->setObjectName("inscNv_faculteLabel");

        inscNv->setWidget(0, QFormLayout::LabelRole, inscNv_faculteLabel);

        inscNv_faculteComboBox = new QComboBox(formLayoutWidget_8);
        inscNv_faculteComboBox->setObjectName("inscNv_faculteComboBox");

        inscNv->setWidget(0, QFormLayout::FieldRole, inscNv_faculteComboBox);

        formLayoutWidget_9 = new QWidget(insc_MentionNvPrc);
        formLayoutWidget_9->setObjectName("formLayoutWidget_9");
        formLayoutWidget_9->setGeometry(QRect(190, 280, 311, 61));
        InscFc = new QFormLayout(formLayoutWidget_9);
        InscFc->setSpacing(6);
        InscFc->setContentsMargins(11, 11, 11, 11);
        InscFc->setObjectName("InscFc");
        InscFc->setContentsMargins(0, 0, 0, 0);
        inscFc_nomFaculteLabel = new QLabel(formLayoutWidget_9);
        inscFc_nomFaculteLabel->setObjectName("inscFc_nomFaculteLabel");

        InscFc->setWidget(0, QFormLayout::LabelRole, inscFc_nomFaculteLabel);

        inscFc_nomFaculteLineEdit = new QLineEdit(formLayoutWidget_9);
        inscFc_nomFaculteLineEdit->setObjectName("inscFc_nomFaculteLineEdit");

        InscFc->setWidget(0, QFormLayout::FieldRole, inscFc_nomFaculteLineEdit);

        inscFc_Enregistrer = new QPushButton(formLayoutWidget_9);
        inscFc_Enregistrer->setObjectName("inscFc_Enregistrer");

        InscFc->setWidget(1, QFormLayout::SpanningRole, inscFc_Enregistrer);

        inscNv_Message = new QLabel(insc_MentionNvPrc);
        inscNv_Message->setObjectName("inscNv_Message");
        inscNv_Message->setGeometry(QRect(430, 70, 181, 20));
        inscFc_Message = new QLabel(insc_MentionNvPrc);
        inscFc_Message->setObjectName("inscFc_Message");
        inscFc_Message->setGeometry(QRect(260, 240, 181, 16));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("Assets/icons8-class-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        ongletInsertion->addTab(insc_MentionNvPrc, icon2, QString());
        insc_Admin = new QWidget();
        insc_Admin->setObjectName("insc_Admin");
        formLayoutWidget_5 = new QWidget(insc_Admin);
        formLayoutWidget_5->setObjectName("formLayoutWidget_5");
        formLayoutWidget_5->setGeometry(QRect(240, 190, 241, 114));
        formLayout_5 = new QFormLayout(formLayoutWidget_5);
        formLayout_5->setSpacing(6);
        formLayout_5->setContentsMargins(11, 11, 11, 11);
        formLayout_5->setObjectName("formLayout_5");
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        inscA_nomDeLAdminLineEdit = new QLineEdit(formLayoutWidget_5);
        inscA_nomDeLAdminLineEdit->setObjectName("inscA_nomDeLAdminLineEdit");

        formLayout_5->setWidget(0, QFormLayout::FieldRole, inscA_nomDeLAdminLineEdit);

        inscA_motDePasseLabel = new QLabel(formLayoutWidget_5);
        inscA_motDePasseLabel->setObjectName("inscA_motDePasseLabel");

        formLayout_5->setWidget(1, QFormLayout::LabelRole, inscA_motDePasseLabel);

        inscA_motDePasseLineEdit = new QLineEdit(formLayoutWidget_5);
        inscA_motDePasseLineEdit->setObjectName("inscA_motDePasseLineEdit");

        formLayout_5->setWidget(1, QFormLayout::FieldRole, inscA_motDePasseLineEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_5->setItem(2, QFormLayout::SpanningRole, verticalSpacer);

        inscA_enregistrer = new QPushButton(formLayoutWidget_5);
        inscA_enregistrer->setObjectName("inscA_enregistrer");

        formLayout_5->setWidget(3, QFormLayout::SpanningRole, inscA_enregistrer);

        inscA_nomDeLAdminLabel = new QLabel(formLayoutWidget_5);
        inscA_nomDeLAdminLabel->setObjectName("inscA_nomDeLAdminLabel");

        formLayout_5->setWidget(0, QFormLayout::LabelRole, inscA_nomDeLAdminLabel);

        inscA_Message = new QLabel(insc_Admin);
        inscA_Message->setObjectName("inscA_Message");
        inscA_Message->setGeometry(QRect(220, 110, 281, 61));
        inscA_Message->setFont(font2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("Assets/icons8-add-administrator-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        ongletInsertion->addTab(insc_Admin, icon3, QString());
        stackedWidget->addWidget(Insertion);
        Modifications = new QWidget();
        Modifications->setObjectName("Modifications");
        ongletModification = new QTabWidget(Modifications);
        ongletModification->setObjectName("ongletModification");
        ongletModification->setEnabled(true);
        ongletModification->setGeometry(QRect(0, 0, 731, 621));
        ongletModification->setTabShape(QTabWidget::Rounded);
        mod_Et = new QWidget();
        mod_Et->setObjectName("mod_Et");
        modEt_Message = new QLabel(mod_Et);
        modEt_Message->setObjectName("modEt_Message");
        modEt_Message->setGeometry(QRect(190, 0, 341, 31));
        modEt_Message->setFont(font2);
        gridLayoutWidget_6 = new QWidget(mod_Et);
        gridLayoutWidget_6->setObjectName("gridLayoutWidget_6");
        gridLayoutWidget_6->setGeometry(QRect(60, 40, 581, 31));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        modEt_identifiantLabel = new QLabel(gridLayoutWidget_6);
        modEt_identifiantLabel->setObjectName("modEt_identifiantLabel");

        gridLayout_5->addWidget(modEt_identifiantLabel, 0, 0, 1, 1);

        modEt_identifiantComboBox = new QComboBox(gridLayoutWidget_6);
        modEt_identifiantComboBox->setObjectName("modEt_identifiantComboBox");

        gridLayout_5->addWidget(modEt_identifiantComboBox, 0, 1, 1, 1);

        modEt_nomEtudiantLineEdit = new QLineEdit(gridLayoutWidget_6);
        modEt_nomEtudiantLineEdit->setObjectName("modEt_nomEtudiantLineEdit");
        modEt_nomEtudiantLineEdit->setReadOnly(true);

        gridLayout_5->addWidget(modEt_nomEtudiantLineEdit, 0, 2, 1, 1);

        formLayoutWidget_12 = new QWidget(mod_Et);
        formLayoutWidget_12->setObjectName("formLayoutWidget_12");
        formLayoutWidget_12->setGeometry(QRect(150, 110, 411, 404));
        formLayout_10 = new QFormLayout(formLayoutWidget_12);
        formLayout_10->setSpacing(6);
        formLayout_10->setContentsMargins(11, 11, 11, 11);
        formLayout_10->setObjectName("formLayout_10");
        formLayout_10->setContentsMargins(0, 0, 0, 0);
        modEt_nomLabel = new QLabel(formLayoutWidget_12);
        modEt_nomLabel->setObjectName("modEt_nomLabel");

        formLayout_10->setWidget(0, QFormLayout::LabelRole, modEt_nomLabel);

        modEt_nomLineEdit = new QLineEdit(formLayoutWidget_12);
        modEt_nomLineEdit->setObjectName("modEt_nomLineEdit");

        formLayout_10->setWidget(0, QFormLayout::FieldRole, modEt_nomLineEdit);

        modEt_prenomLabel = new QLabel(formLayoutWidget_12);
        modEt_prenomLabel->setObjectName("modEt_prenomLabel");

        formLayout_10->setWidget(1, QFormLayout::LabelRole, modEt_prenomLabel);

        modEt_prenomLineEdit = new QLineEdit(formLayoutWidget_12);
        modEt_prenomLineEdit->setObjectName("modEt_prenomLineEdit");

        formLayout_10->setWidget(1, QFormLayout::FieldRole, modEt_prenomLineEdit);

        modEt_genreLabel = new QLabel(formLayoutWidget_12);
        modEt_genreLabel->setObjectName("modEt_genreLabel");

        formLayout_10->setWidget(2, QFormLayout::LabelRole, modEt_genreLabel);

        modEt_dateDeNaissanceLabel = new QLabel(formLayoutWidget_12);
        modEt_dateDeNaissanceLabel->setObjectName("modEt_dateDeNaissanceLabel");

        formLayout_10->setWidget(3, QFormLayout::LabelRole, modEt_dateDeNaissanceLabel);

        modEt_dateDeNaissanceDateEdit = new QDateEdit(formLayoutWidget_12);
        modEt_dateDeNaissanceDateEdit->setObjectName("modEt_dateDeNaissanceDateEdit");

        formLayout_10->setWidget(3, QFormLayout::FieldRole, modEt_dateDeNaissanceDateEdit);

        modEt_genreComboBox = new QComboBox(formLayoutWidget_12);
        modEt_genreComboBox->addItem(QString());
        modEt_genreComboBox->addItem(QString());
        modEt_genreComboBox->addItem(QString());
        modEt_genreComboBox->setObjectName("modEt_genreComboBox");

        formLayout_10->setWidget(2, QFormLayout::FieldRole, modEt_genreComboBox);

        modEt_faculteLabel = new QLabel(formLayoutWidget_12);
        modEt_faculteLabel->setObjectName("modEt_faculteLabel");

        formLayout_10->setWidget(4, QFormLayout::LabelRole, modEt_faculteLabel);

        modEt_faculteComboBox = new QComboBox(formLayoutWidget_12);
        modEt_faculteComboBox->setObjectName("modEt_faculteComboBox");

        formLayout_10->setWidget(4, QFormLayout::FieldRole, modEt_faculteComboBox);

        modEt_mentionLabel = new QLabel(formLayoutWidget_12);
        modEt_mentionLabel->setObjectName("modEt_mentionLabel");

        formLayout_10->setWidget(5, QFormLayout::LabelRole, modEt_mentionLabel);

        modEt_mentionComboBox = new QComboBox(formLayoutWidget_12);
        modEt_mentionComboBox->setObjectName("modEt_mentionComboBox");

        formLayout_10->setWidget(5, QFormLayout::FieldRole, modEt_mentionComboBox);

        modEt_niveauLabel = new QLabel(formLayoutWidget_12);
        modEt_niveauLabel->setObjectName("modEt_niveauLabel");

        formLayout_10->setWidget(6, QFormLayout::LabelRole, modEt_niveauLabel);

        modEt_niveauComboBox = new QComboBox(formLayoutWidget_12);
        modEt_niveauComboBox->setObjectName("modEt_niveauComboBox");

        formLayout_10->setWidget(6, QFormLayout::FieldRole, modEt_niveauComboBox);

        modEt_codageLabel = new QLabel(formLayoutWidget_12);
        modEt_codageLabel->setObjectName("modEt_codageLabel");

        formLayout_10->setWidget(7, QFormLayout::LabelRole, modEt_codageLabel);

        modEt_codageSpinBox = new QSpinBox(formLayoutWidget_12);
        modEt_codageSpinBox->setObjectName("modEt_codageSpinBox");

        formLayout_10->setWidget(7, QFormLayout::FieldRole, modEt_codageSpinBox);

        modEt_telephonePhoneLabel = new QLabel(formLayoutWidget_12);
        modEt_telephonePhoneLabel->setObjectName("modEt_telephonePhoneLabel");

        formLayout_10->setWidget(8, QFormLayout::LabelRole, modEt_telephonePhoneLabel);

        modEt_telephoneLineEdit = new QLineEdit(formLayoutWidget_12);
        modEt_telephoneLineEdit->setObjectName("modEt_telephoneLineEdit");

        formLayout_10->setWidget(8, QFormLayout::FieldRole, modEt_telephoneLineEdit);

        modEt_adresseLabel = new QLabel(formLayoutWidget_12);
        modEt_adresseLabel->setObjectName("modEt_adresseLabel");

        formLayout_10->setWidget(9, QFormLayout::LabelRole, modEt_adresseLabel);

        modEt_adresseTextEdit = new QTextEdit(formLayoutWidget_12);
        modEt_adresseTextEdit->setObjectName("modEt_adresseTextEdit");

        formLayout_10->setWidget(9, QFormLayout::FieldRole, modEt_adresseTextEdit);

        modEt_Enregistrer = new QPushButton(formLayoutWidget_12);
        modEt_Enregistrer->setObjectName("modEt_Enregistrer");

        formLayout_10->setWidget(11, QFormLayout::SpanningRole, modEt_Enregistrer);

        modEt_estPassantLabel = new QLabel(formLayoutWidget_12);
        modEt_estPassantLabel->setObjectName("modEt_estPassantLabel");

        formLayout_10->setWidget(10, QFormLayout::LabelRole, modEt_estPassantLabel);

        modEt_estPassantCheckBox = new QCheckBox(formLayoutWidget_12);
        modEt_estPassantCheckBox->setObjectName("modEt_estPassantCheckBox");

        formLayout_10->setWidget(10, QFormLayout::FieldRole, modEt_estPassantCheckBox);

        ongletModification->addTab(mod_Et, QString());
        stackedWidget->addWidget(Modifications);
        Suppression = new QWidget();
        Suppression->setObjectName("Suppression");
        ongletSuppression = new QTabWidget(Suppression);
        ongletSuppression->setObjectName("ongletSuppression");
        ongletSuppression->setGeometry(QRect(0, 0, 731, 621));
        sup_Etudiants = new QWidget();
        sup_Etudiants->setObjectName("sup_Etudiants");
        supEt_Message = new QLabel(sup_Etudiants);
        supEt_Message->setObjectName("supEt_Message");
        supEt_Message->setGeometry(QRect(210, 10, 321, 31));
        supEt_Message->setFont(font2);
        gridLayoutWidget_7 = new QWidget(sup_Etudiants);
        gridLayoutWidget_7->setObjectName("gridLayoutWidget_7");
        gridLayoutWidget_7->setGeometry(QRect(80, 50, 581, 56));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_7);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        supEt_nomEtudiantLineEdit = new QLineEdit(gridLayoutWidget_7);
        supEt_nomEtudiantLineEdit->setObjectName("supEt_nomEtudiantLineEdit");
        supEt_nomEtudiantLineEdit->setReadOnly(true);

        gridLayout_6->addWidget(supEt_nomEtudiantLineEdit, 0, 2, 1, 1);

        supEt_identifiantComboBox = new QComboBox(gridLayoutWidget_7);
        supEt_identifiantComboBox->setObjectName("supEt_identifiantComboBox");

        gridLayout_6->addWidget(supEt_identifiantComboBox, 0, 1, 1, 1);

        supEt_identifiantLabel = new QLabel(gridLayoutWidget_7);
        supEt_identifiantLabel->setObjectName("supEt_identifiantLabel");

        gridLayout_6->addWidget(supEt_identifiantLabel, 0, 0, 1, 1);

        supEt_Supprimer = new QPushButton(gridLayoutWidget_7);
        supEt_Supprimer->setObjectName("supEt_Supprimer");

        gridLayout_6->addWidget(supEt_Supprimer, 1, 0, 1, 3);

        formLayoutWidget_14 = new QWidget(sup_Etudiants);
        formLayoutWidget_14->setObjectName("formLayoutWidget_14");
        formLayoutWidget_14->setGeometry(QRect(160, 120, 411, 404));
        formLayout_11 = new QFormLayout(formLayoutWidget_14);
        formLayout_11->setSpacing(6);
        formLayout_11->setContentsMargins(11, 11, 11, 11);
        formLayout_11->setObjectName("formLayout_11");
        formLayout_11->setContentsMargins(0, 0, 0, 0);
        supEt_nomLabel = new QLabel(formLayoutWidget_14);
        supEt_nomLabel->setObjectName("supEt_nomLabel");

        formLayout_11->setWidget(0, QFormLayout::LabelRole, supEt_nomLabel);

        supEt_nomLineEdit = new QLineEdit(formLayoutWidget_14);
        supEt_nomLineEdit->setObjectName("supEt_nomLineEdit");
        supEt_nomLineEdit->setEnabled(false);

        formLayout_11->setWidget(0, QFormLayout::FieldRole, supEt_nomLineEdit);

        supEt_prenomLabel = new QLabel(formLayoutWidget_14);
        supEt_prenomLabel->setObjectName("supEt_prenomLabel");

        formLayout_11->setWidget(1, QFormLayout::LabelRole, supEt_prenomLabel);

        supEt_prenomLineEdit = new QLineEdit(formLayoutWidget_14);
        supEt_prenomLineEdit->setObjectName("supEt_prenomLineEdit");
        supEt_prenomLineEdit->setEnabled(false);

        formLayout_11->setWidget(1, QFormLayout::FieldRole, supEt_prenomLineEdit);

        supEt_genreLabel = new QLabel(formLayoutWidget_14);
        supEt_genreLabel->setObjectName("supEt_genreLabel");

        formLayout_11->setWidget(2, QFormLayout::LabelRole, supEt_genreLabel);

        supEt_genreComboBox = new QComboBox(formLayoutWidget_14);
        supEt_genreComboBox->addItem(QString());
        supEt_genreComboBox->addItem(QString());
        supEt_genreComboBox->addItem(QString());
        supEt_genreComboBox->setObjectName("supEt_genreComboBox");
        supEt_genreComboBox->setEnabled(false);

        formLayout_11->setWidget(2, QFormLayout::FieldRole, supEt_genreComboBox);

        supEt_dateDeNaissanceLabel = new QLabel(formLayoutWidget_14);
        supEt_dateDeNaissanceLabel->setObjectName("supEt_dateDeNaissanceLabel");

        formLayout_11->setWidget(3, QFormLayout::LabelRole, supEt_dateDeNaissanceLabel);

        supEt_dateDeNaissanceDateEdit = new QDateEdit(formLayoutWidget_14);
        supEt_dateDeNaissanceDateEdit->setObjectName("supEt_dateDeNaissanceDateEdit");
        supEt_dateDeNaissanceDateEdit->setEnabled(false);

        formLayout_11->setWidget(3, QFormLayout::FieldRole, supEt_dateDeNaissanceDateEdit);

        supEt_faculteLabel = new QLabel(formLayoutWidget_14);
        supEt_faculteLabel->setObjectName("supEt_faculteLabel");

        formLayout_11->setWidget(4, QFormLayout::LabelRole, supEt_faculteLabel);

        supEt_faculteComboBox = new QComboBox(formLayoutWidget_14);
        supEt_faculteComboBox->setObjectName("supEt_faculteComboBox");
        supEt_faculteComboBox->setEnabled(false);

        formLayout_11->setWidget(4, QFormLayout::FieldRole, supEt_faculteComboBox);

        supEt_mentionLabel = new QLabel(formLayoutWidget_14);
        supEt_mentionLabel->setObjectName("supEt_mentionLabel");

        formLayout_11->setWidget(5, QFormLayout::LabelRole, supEt_mentionLabel);

        supEt_mentionComboBox = new QComboBox(formLayoutWidget_14);
        supEt_mentionComboBox->setObjectName("supEt_mentionComboBox");
        supEt_mentionComboBox->setEnabled(false);

        formLayout_11->setWidget(5, QFormLayout::FieldRole, supEt_mentionComboBox);

        supEt_niveauLabel = new QLabel(formLayoutWidget_14);
        supEt_niveauLabel->setObjectName("supEt_niveauLabel");

        formLayout_11->setWidget(6, QFormLayout::LabelRole, supEt_niveauLabel);

        supEt_niveauComboBox = new QComboBox(formLayoutWidget_14);
        supEt_niveauComboBox->setObjectName("supEt_niveauComboBox");
        supEt_niveauComboBox->setEnabled(false);

        formLayout_11->setWidget(6, QFormLayout::FieldRole, supEt_niveauComboBox);

        supEt_codageLabel = new QLabel(formLayoutWidget_14);
        supEt_codageLabel->setObjectName("supEt_codageLabel");

        formLayout_11->setWidget(7, QFormLayout::LabelRole, supEt_codageLabel);

        supEt_codageSpinBox = new QSpinBox(formLayoutWidget_14);
        supEt_codageSpinBox->setObjectName("supEt_codageSpinBox");
        supEt_codageSpinBox->setEnabled(false);

        formLayout_11->setWidget(7, QFormLayout::FieldRole, supEt_codageSpinBox);

        supEt_telephonePhoneLabel = new QLabel(formLayoutWidget_14);
        supEt_telephonePhoneLabel->setObjectName("supEt_telephonePhoneLabel");

        formLayout_11->setWidget(8, QFormLayout::LabelRole, supEt_telephonePhoneLabel);

        supEt_telephoneLineEdit = new QLineEdit(formLayoutWidget_14);
        supEt_telephoneLineEdit->setObjectName("supEt_telephoneLineEdit");
        supEt_telephoneLineEdit->setEnabled(false);

        formLayout_11->setWidget(8, QFormLayout::FieldRole, supEt_telephoneLineEdit);

        supEt_adresseLabel = new QLabel(formLayoutWidget_14);
        supEt_adresseLabel->setObjectName("supEt_adresseLabel");

        formLayout_11->setWidget(9, QFormLayout::LabelRole, supEt_adresseLabel);

        supEt_adresseTextEdit = new QTextEdit(formLayoutWidget_14);
        supEt_adresseTextEdit->setObjectName("supEt_adresseTextEdit");
        supEt_adresseTextEdit->setEnabled(false);

        formLayout_11->setWidget(9, QFormLayout::FieldRole, supEt_adresseTextEdit);

        supEt_estPassantLabel = new QLabel(formLayoutWidget_14);
        supEt_estPassantLabel->setObjectName("supEt_estPassantLabel");

        formLayout_11->setWidget(10, QFormLayout::LabelRole, supEt_estPassantLabel);

        supEt_estPassantCheckBox = new QCheckBox(formLayoutWidget_14);
        supEt_estPassantCheckBox->setObjectName("supEt_estPassantCheckBox");
        supEt_estPassantCheckBox->setEnabled(false);

        formLayout_11->setWidget(10, QFormLayout::FieldRole, supEt_estPassantCheckBox);

        ongletSuppression->addTab(sup_Etudiants, QString());
        sup_Mention = new QWidget();
        sup_Mention->setObjectName("sup_Mention");
        supM_Message = new QLabel(sup_Mention);
        supM_Message->setObjectName("supM_Message");
        supM_Message->setGeometry(QRect(220, 120, 251, 41));
        supM_Message->setFont(font2);
        formLayoutWidget_10 = new QWidget(sup_Mention);
        formLayoutWidget_10->setObjectName("formLayoutWidget_10");
        formLayoutWidget_10->setGeometry(QRect(410, 190, 311, 116));
        supNv = new QFormLayout(formLayoutWidget_10);
        supNv->setSpacing(6);
        supNv->setContentsMargins(11, 11, 11, 11);
        supNv->setObjectName("supNv");
        supNv->setContentsMargins(0, 0, 0, 0);
        supNv_mentionLabel = new QLabel(formLayoutWidget_10);
        supNv_mentionLabel->setObjectName("supNv_mentionLabel");

        supNv->setWidget(1, QFormLayout::LabelRole, supNv_mentionLabel);

        supNv_mentionComboBox = new QComboBox(formLayoutWidget_10);
        supNv_mentionComboBox->setObjectName("supNv_mentionComboBox");

        supNv->setWidget(1, QFormLayout::FieldRole, supNv_mentionComboBox);

        supNv_niveauLabel = new QLabel(formLayoutWidget_10);
        supNv_niveauLabel->setObjectName("supNv_niveauLabel");

        supNv->setWidget(2, QFormLayout::LabelRole, supNv_niveauLabel);

        supNv_Enregistrer = new QPushButton(formLayoutWidget_10);
        supNv_Enregistrer->setObjectName("supNv_Enregistrer");

        supNv->setWidget(3, QFormLayout::SpanningRole, supNv_Enregistrer);

        supNv_faculteLabel = new QLabel(formLayoutWidget_10);
        supNv_faculteLabel->setObjectName("supNv_faculteLabel");

        supNv->setWidget(0, QFormLayout::LabelRole, supNv_faculteLabel);

        supNv_faculteComboBox = new QComboBox(formLayoutWidget_10);
        supNv_faculteComboBox->setObjectName("supNv_faculteComboBox");

        supNv->setWidget(0, QFormLayout::FieldRole, supNv_faculteComboBox);

        supNv_niveauComboBox = new QComboBox(formLayoutWidget_10);
        supNv_niveauComboBox->setObjectName("supNv_niveauComboBox");

        supNv->setWidget(2, QFormLayout::FieldRole, supNv_niveauComboBox);

        formLayoutWidget_13 = new QWidget(sup_Mention);
        formLayoutWidget_13->setObjectName("formLayoutWidget_13");
        formLayoutWidget_13->setGeometry(QRect(200, 390, 311, 61));
        supFc = new QFormLayout(formLayoutWidget_13);
        supFc->setSpacing(6);
        supFc->setContentsMargins(11, 11, 11, 11);
        supFc->setObjectName("supFc");
        supFc->setContentsMargins(0, 0, 0, 0);
        supFc_nomFaculteLabel = new QLabel(formLayoutWidget_13);
        supFc_nomFaculteLabel->setObjectName("supFc_nomFaculteLabel");

        supFc->setWidget(0, QFormLayout::LabelRole, supFc_nomFaculteLabel);

        supFc_Enregistrer = new QPushButton(formLayoutWidget_13);
        supFc_Enregistrer->setObjectName("supFc_Enregistrer");

        supFc->setWidget(1, QFormLayout::SpanningRole, supFc_Enregistrer);

        supFc_nomFaculteComboBox = new QComboBox(formLayoutWidget_13);
        supFc_nomFaculteComboBox->setObjectName("supFc_nomFaculteComboBox");

        supFc->setWidget(0, QFormLayout::FieldRole, supFc_nomFaculteComboBox);

        formLayoutWidget_7 = new QWidget(sup_Mention);
        formLayoutWidget_7->setObjectName("formLayoutWidget_7");
        formLayoutWidget_7->setGeometry(QRect(20, 200, 311, 91));
        supMt = new QFormLayout(formLayoutWidget_7);
        supMt->setSpacing(6);
        supMt->setContentsMargins(11, 11, 11, 11);
        supMt->setObjectName("supMt");
        supMt->setContentsMargins(0, 0, 0, 0);
        supMt_faculteLabel = new QLabel(formLayoutWidget_7);
        supMt_faculteLabel->setObjectName("supMt_faculteLabel");

        supMt->setWidget(0, QFormLayout::LabelRole, supMt_faculteLabel);

        supMt_mentionLabel = new QLabel(formLayoutWidget_7);
        supMt_mentionLabel->setObjectName("supMt_mentionLabel");

        supMt->setWidget(1, QFormLayout::LabelRole, supMt_mentionLabel);

        supMt_Enregistrer = new QPushButton(formLayoutWidget_7);
        supMt_Enregistrer->setObjectName("supMt_Enregistrer");

        supMt->setWidget(2, QFormLayout::SpanningRole, supMt_Enregistrer);

        supMt_faculteComboBox = new QComboBox(formLayoutWidget_7);
        supMt_faculteComboBox->setObjectName("supMt_faculteComboBox");

        supMt->setWidget(0, QFormLayout::FieldRole, supMt_faculteComboBox);

        supMt_mentionComboBox = new QComboBox(formLayoutWidget_7);
        supMt_mentionComboBox->setObjectName("supMt_mentionComboBox");

        supMt->setWidget(1, QFormLayout::FieldRole, supMt_mentionComboBox);

        ongletSuppression->addTab(sup_Mention, QString());
        stackedWidget->addWidget(Suppression);
        layoutWidget = new QWidget(ongletCentrale);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 221, 621));
        Toolbox = new QVBoxLayout(layoutWidget);
        Toolbox->setSpacing(6);
        Toolbox->setContentsMargins(11, 11, 11, 11);
        Toolbox->setObjectName("Toolbox");
        Toolbox->setContentsMargins(0, 0, 0, 0);
        tl_SeConnecter = new QPushButton(layoutWidget);
        tl_SeConnecter->setObjectName("tl_SeConnecter");
        tl_SeConnecter->setMinimumSize(QSize(0, 50));
        tl_SeConnecter->setStyleSheet(QString::fromUtf8(""));

        Toolbox->addWidget(tl_SeConnecter);

        tl_Lister = new QPushButton(layoutWidget);
        tl_Lister->setObjectName("tl_Lister");
        tl_Lister->setEnabled(false);
        tl_Lister->setMinimumSize(QSize(0, 50));

        Toolbox->addWidget(tl_Lister);

        tl_Insertion = new QPushButton(layoutWidget);
        tl_Insertion->setObjectName("tl_Insertion");
        tl_Insertion->setEnabled(false);
        tl_Insertion->setMinimumSize(QSize(0, 50));

        Toolbox->addWidget(tl_Insertion);

        tl_Modification = new QPushButton(layoutWidget);
        tl_Modification->setObjectName("tl_Modification");
        tl_Modification->setEnabled(false);
        tl_Modification->setMinimumSize(QSize(0, 50));

        Toolbox->addWidget(tl_Modification);

        tl_Suppression = new QPushButton(layoutWidget);
        tl_Suppression->setObjectName("tl_Suppression");
        tl_Suppression->setEnabled(false);
        tl_Suppression->setMinimumSize(QSize(0, 50));

        Toolbox->addWidget(tl_Suppression);

        tl_Quitter = new QPushButton(layoutWidget);
        tl_Quitter->setObjectName("tl_Quitter");
        tl_Quitter->setMinimumSize(QSize(0, 50));

        Toolbox->addWidget(tl_Quitter);

        Fenetre_Principale->setCentralWidget(ongletCentrale);
        statusBar = new QStatusBar(Fenetre_Principale);
        statusBar->setObjectName("statusBar");
        Fenetre_Principale->setStatusBar(statusBar);

        retranslateUi(Fenetre_Principale);

        stackedWidget->setCurrentIndex(4);
        ongletConsultation->setCurrentIndex(0);
        lstEt_mentionComboBox->setCurrentIndex(-1);
        lstEt_idEtudiantComboBox->setCurrentIndex(-1);
        ongletInsertion->setCurrentIndex(2);
        ongletModification->setCurrentIndex(0);
        ongletSuppression->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Fenetre_Principale);
    } // setupUi

    void retranslateUi(QMainWindow *Fenetre_Principale)
    {
        Fenetre_Principale->setWindowTitle(QCoreApplication::translate("Fenetre_Principale", "FenetrePrincipale", nullptr));
        nc_Message->setText(QCoreApplication::translate("Fenetre_Principale", "Vous devez vous connecter avant de pouvoir\n"
"   acc\303\251der aux differentes fonctionnalit\303\251s", nullptr));
        Bvn_Message1->setText(QCoreApplication::translate("Fenetre_Principale", "              Bienvenue sur \n"
"    l'outil de gestion d'\303\251l\303\250ves !", nullptr));
        Bvn_Message2->setText(QCoreApplication::translate("Fenetre_Principale", "- Vous pouvez cliquer sur les boutons \303\240 gauche de la fen\303\252tre pour parcourir\n"
"les diff\303\251rentes fonctionnalit\303\251s du programme\n"
"\n"
"- Vous devez vous connecter en tant qu'admin avant d'\303\252tre autoris\303\251 \303\240\n"
"parcourir le programme", nullptr));
        Bvn_aide->setText(QCoreApplication::translate("Fenetre_Principale", "Aide", nullptr));
        sc_Message->setText(QCoreApplication::translate("Fenetre_Principale", "Authentifiez vous pour acc\303\251der \303\240 l'application", nullptr));
        sc_Deconnexion->setText(QCoreApplication::translate("Fenetre_Principale", "Se deconnecter", nullptr));
        sc_Connexion->setText(QCoreApplication::translate("Fenetre_Principale", "Se connecter", nullptr));
        sc_motDePasseLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Mot de passe	: ", nullptr));
        sc_utilisateurLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Utilisateur	:", nullptr));
        sc_motDePasseLineEdit->setText(QString());
        Bvn_aide_2->setText(QCoreApplication::translate("Fenetre_Principale", "Aide", nullptr));
        QTableWidgetItem *___qtablewidgetitem = lstE_listeEtudiant->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Fenetre_Principale", "Num\303\251ro", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = lstE_listeEtudiant->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Fenetre_Principale", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = lstE_listeEtudiant->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Fenetre_Principale", "Pr\303\251nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = lstE_listeEtudiant->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Fenetre_Principale", "Date de naissance", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = lstE_listeEtudiant->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Fenetre_Principale", "Codage", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = lstE_listeEtudiant->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Fenetre_Principale", "Passant ?", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = lstE_listeEtudiant->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Fenetre_Principale", "Num\303\251ro", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = lstE_listeEtudiant->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Fenetre_Principale", "Adresse", nullptr));
        lstE_Message->setText(QCoreApplication::translate("Fenetre_Principale", "Entrez la classe \303\240 chercher ", nullptr));
        lstEt_idEtudiantLabel->setText(QCoreApplication::translate("Fenetre_Principale", "ID de l'\303\251tudiant		:", nullptr));
        lstEt_idEtudiantCheckBox->setText(QString());
        lstEt_nomEtudiantLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Nom de l'\303\251tudiant	:", nullptr));
        lstEt_mentionComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "Entrez la mention de l'\303\251tudiant :", nullptr));
        lstEt_nomEtudiantCheckBox->setText(QString());
        lstEt_mentionLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Mention de l'\303\251tudiant	:", nullptr));
        lstEt_mentionCheckBox->setText(QString());
        lstEt_niveauComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "Renseignez le niveau de l'\303\251tudiant :", nullptr));
        lstEt_niveauLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Niveau de l'\303\251tudiant	:", nullptr));
        lstEt_Rechercher->setText(QCoreApplication::translate("Fenetre_Principale", "Rechercher", nullptr));
        lstEt_idEtudiantComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "Entrez l'id de l'\303\251tudiant :", nullptr));
        lstEt_niveauCheckBox->setText(QString());
        lstEt_faculteLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Facult\303\251 de l'\303\251tudiant	:", nullptr));
        lstEt_faculteComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "Entrez le parcours de l'\303\251tudiant :", nullptr));
        lstEt_faculteCheckBox->setText(QString());
        ongletConsultation->setTabText(ongletConsultation->indexOf(listeEleve), QCoreApplication::translate("Fenetre_Principale", "Liste des \303\251l\303\250ves", nullptr));
        inscEt_Message->setText(QCoreApplication::translate("Fenetre_Principale", "Entrez les informations du nouveau/nouvelle \303\251tudiant(e)", nullptr));
        inscEt_nomLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Nom		 :", nullptr));
        inscEt_prenomLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Prenom		 :", nullptr));
        inscEt_genreLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Genre		 :", nullptr));
        inscEt_dateDeNaissanceLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Date de naissance	 :", nullptr));
        inscEt_genreComboBox->setItemText(0, QCoreApplication::translate("Fenetre_Principale", "- Non sp\303\251cifi\303\251 -", nullptr));
        inscEt_genreComboBox->setItemText(1, QCoreApplication::translate("Fenetre_Principale", "Homme", nullptr));
        inscEt_genreComboBox->setItemText(2, QCoreApplication::translate("Fenetre_Principale", "Femme", nullptr));

        inscEt_faculteLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Facult\303\251		 :", nullptr));
        inscEt_faculteComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "- Non sp\303\251cifi\303\251 -", nullptr));
        inscEt_mentionLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Mention		 :", nullptr));
        inscEt_mentionComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "- Non sp\303\251cifi\303\251 -", nullptr));
        inscEt_niveauLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Niveau		 :", nullptr));
        inscEt_niveauComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "- Non sp\303\251cifi\303\251 -", nullptr));
        inscEt_codageLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Codage		 :", nullptr));
        inscEt_telephonePhoneLabel->setText(QCoreApplication::translate("Fenetre_Principale", "T\303\251l\303\251phone	 :", nullptr));
        inscEt_adresseLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Adresse 		 :", nullptr));
        inscEt_Enregistrer->setText(QCoreApplication::translate("Fenetre_Principale", "Enregistrer", nullptr));
        inscEt_estPassantLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Est passant	 :", nullptr));
        inscEt_estPassantCheckBox->setText(QCoreApplication::translate("Fenetre_Principale", "Oui cauch\303\251 / Non par d\303\251faut", nullptr));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_Etudiant), QCoreApplication::translate("Fenetre_Principale", "Nouveau/lle \303\251tudiant", nullptr));
        inscAchat_Message->setText(QCoreApplication::translate("Fenetre_Principale", "Enregistrement d'un achat", nullptr));
        inscAchat_formationsLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Nos formations :", nullptr));
        inscAchat_servicesLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Les services disponibles :", nullptr));
        inscAchat_AjFormation->setText(QCoreApplication::translate("Fenetre_Principale", "Ajouter", nullptr));
        inscAchat_AjService->setText(QCoreApplication::translate("Fenetre_Principale", "Ajouter", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = inscAchat_commandeTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Fenetre_Principale", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = inscAchat_commandeTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Fenetre_Principale", "Designation", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = inscAchat_commandeTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Fenetre_Principale", "Quantit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = inscAchat_commandeTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Fenetre_Principale", "Prix", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = inscAchat_commandeTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Fenetre_Principale", "Montant", nullptr));
        inscAchat_identifiantLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Identifiant de l'\303\251tudiant	:", nullptr));
        inscAchat_identifiantComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "Entrez l'identifiant de l'\303\251tudiant :", nullptr));
        inscAchat_confirmCmdPushButton->setText(QCoreApplication::translate("Fenetre_Principale", "Confirmer", nullptr));
        inscAchat_suppCmdPushButton->setText(QCoreApplication::translate("Fenetre_Principale", "Effacer", nullptr));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_Achat), QCoreApplication::translate("Fenetre_Principale", "Achats", nullptr));
        inscP_idTransactionLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Id de transaction	:", nullptr));
        inscP_identifiantLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Identifiant de l'\303\251tudiant	:", nullptr));
        inscP_idTransactionComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "Entrez l'id de la transaction", nullptr));
        inscP_identifiantComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "Entrez l'identifiant de l'\303\251tudiant :", nullptr));
        inscP_vPaiementPushButton->setText(QCoreApplication::translate("Fenetre_Principale", "D\303\251finir comme \303\251tant pay\303\251", nullptr));
        inscP_imprimerFacturePushButton->setText(QCoreApplication::translate("Fenetre_Principale", "Imprimer la facture", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = inscP_commandeTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Fenetre_Principale", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = inscP_commandeTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("Fenetre_Principale", "Designation", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = inscP_commandeTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("Fenetre_Principale", "Quantit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = inscP_commandeTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("Fenetre_Principale", "Prix", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = inscP_commandeTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("Fenetre_Principale", "Montant", nullptr));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_payement), QCoreApplication::translate("Fenetre_Principale", "Payements", nullptr));
        inscFM_nomFormLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Nom de la formation	:", nullptr));
        inscFM_prixFormLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Prix de la formation	:", nullptr));
        inscFM_dureeFormLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Dur\303\251e de la formation	:", nullptr));
        inscFM_EnregistrerF->setText(QCoreApplication::translate("Fenetre_Principale", "Enregistrer", nullptr));
        inscSV_nomSrvLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Nom du service	:", nullptr));
        inscSV_prixSrvLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Prix du service	:", nullptr));
        inscSV_EnregistrerS->setText(QCoreApplication::translate("Fenetre_Principale", "Enregistrer", nullptr));
        inscFS_Message->setText(QString());
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_Form_Msrv), QCoreApplication::translate("Fenetre_Principale", "Formations et services", nullptr));
        inscMt_faculteLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Facult\303\251	:", nullptr));
        inscMt_mentionLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Mention	:", nullptr));
        inscMt_Enregistrer->setText(QCoreApplication::translate("Fenetre_Principale", "Enregistrer", nullptr));
        inscMt_faculteComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "- Non sp\303\251cifi\303\251 -", nullptr));
        inscMt_Message->setText(QCoreApplication::translate("Fenetre_Principale", "Enregistrer un nouveau mention", nullptr));
        inscNv_mentionLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Mention	:", nullptr));
        inscNv_mentionComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "- Non sp\303\251cifi\303\251 -", nullptr));
        inscNv_niveauLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Niveau	:", nullptr));
        inscNv_Enregistrer->setText(QCoreApplication::translate("Fenetre_Principale", "Enregistrer", nullptr));
        inscNv_faculteLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Facult\303\251	:", nullptr));
        inscNv_faculteComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "- Non sp\303\251cifi\303\251 -", nullptr));
        inscFc_nomFaculteLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Facult\303\251	 :", nullptr));
        inscFc_Enregistrer->setText(QCoreApplication::translate("Fenetre_Principale", "Enregistrer", nullptr));
        inscNv_Message->setText(QCoreApplication::translate("Fenetre_Principale", "Enregistrer un nouveau niveau", nullptr));
        inscFc_Message->setText(QCoreApplication::translate("Fenetre_Principale", "Enregistrer une nouvelle facult\303\251", nullptr));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_MentionNvPrc), QCoreApplication::translate("Fenetre_Principale", "Mt, nv, prc", nullptr));
        inscA_motDePasseLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Mot de passe	:", nullptr));
        inscA_enregistrer->setText(QCoreApplication::translate("Fenetre_Principale", "Enregistrer", nullptr));
        inscA_nomDeLAdminLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Nom de l'admin	:", nullptr));
        inscA_Message->setText(QCoreApplication::translate("Fenetre_Principale", "Renseignez les identifications du nouveau admin", nullptr));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_Admin), QCoreApplication::translate("Fenetre_Principale", "Ajouter un Admin", nullptr));
        modEt_Message->setText(QCoreApplication::translate("Fenetre_Principale", "Renseignez La classe et l'\303\251l\303\250ve de l'\303\251tudiant \303\240 chercher", nullptr));
        modEt_identifiantLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Identifiant de l'\303\251tudiant	:", nullptr));
        modEt_identifiantComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "Entrez l'identifiant de l'\303\251tudiant :", nullptr));
        modEt_nomLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Nom		 :", nullptr));
        modEt_prenomLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Prenom		 :", nullptr));
        modEt_genreLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Genre		 :", nullptr));
        modEt_dateDeNaissanceLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Date de naissance	 :", nullptr));
        modEt_genreComboBox->setItemText(0, QCoreApplication::translate("Fenetre_Principale", "- Non sp\303\251cifi\303\251 -", nullptr));
        modEt_genreComboBox->setItemText(1, QCoreApplication::translate("Fenetre_Principale", "Homme", nullptr));
        modEt_genreComboBox->setItemText(2, QCoreApplication::translate("Fenetre_Principale", "Femme", nullptr));

        modEt_faculteLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Facult\303\251		 :", nullptr));
        modEt_faculteComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "- Non sp\303\251cifi\303\251 -", nullptr));
        modEt_mentionLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Mention		 :", nullptr));
        modEt_mentionComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "- Non sp\303\251cifi\303\251 -", nullptr));
        modEt_niveauLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Niveau		 :", nullptr));
        modEt_niveauComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "- Non sp\303\251cifi\303\251 -", nullptr));
        modEt_codageLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Codage		 :", nullptr));
        modEt_telephonePhoneLabel->setText(QCoreApplication::translate("Fenetre_Principale", "T\303\251l\303\251phone	 :", nullptr));
        modEt_adresseLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Adresse 		 :", nullptr));
        modEt_Enregistrer->setText(QCoreApplication::translate("Fenetre_Principale", "Enregistrer", nullptr));
        modEt_estPassantLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Est passant	 :", nullptr));
        modEt_estPassantCheckBox->setText(QCoreApplication::translate("Fenetre_Principale", "Oui cauch\303\251 / Non par d\303\251faut", nullptr));
        ongletModification->setTabText(ongletModification->indexOf(mod_Et), QCoreApplication::translate("Fenetre_Principale", "Modier les information d'un \303\251tudiant", nullptr));
        supEt_Message->setText(QCoreApplication::translate("Fenetre_Principale", "Veuillez renseigner les informations de l'\303\251l\303\250ve a effacer", nullptr));
        supEt_identifiantComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "Entrez l'identifiant de l'\303\251tudiant :", nullptr));
        supEt_identifiantLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Identifiant de l'\303\251tudiant	:", nullptr));
        supEt_Supprimer->setText(QCoreApplication::translate("Fenetre_Principale", "Supprimer", nullptr));
        supEt_nomLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Nom		 :", nullptr));
        supEt_prenomLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Prenom		 :", nullptr));
        supEt_genreLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Genre		 :", nullptr));
        supEt_genreComboBox->setItemText(0, QCoreApplication::translate("Fenetre_Principale", "- Non sp\303\251cifi\303\251 -", nullptr));
        supEt_genreComboBox->setItemText(1, QCoreApplication::translate("Fenetre_Principale", "Homme", nullptr));
        supEt_genreComboBox->setItemText(2, QCoreApplication::translate("Fenetre_Principale", "Femme", nullptr));

        supEt_dateDeNaissanceLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Date de naissance	 :", nullptr));
        supEt_faculteLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Facult\303\251		 :", nullptr));
        supEt_faculteComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "- Non sp\303\251cifi\303\251 -", nullptr));
        supEt_mentionLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Mention		 :", nullptr));
        supEt_mentionComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "- Non sp\303\251cifi\303\251 -", nullptr));
        supEt_niveauLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Niveau		 :", nullptr));
        supEt_niveauComboBox->setPlaceholderText(QCoreApplication::translate("Fenetre_Principale", "- Non sp\303\251cifi\303\251 -", nullptr));
        supEt_codageLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Codage		 :", nullptr));
        supEt_telephonePhoneLabel->setText(QCoreApplication::translate("Fenetre_Principale", "T\303\251l\303\251phone	 :", nullptr));
        supEt_adresseLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Adresse 		 :", nullptr));
        supEt_estPassantLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Est passant	 :", nullptr));
        supEt_estPassantCheckBox->setText(QCoreApplication::translate("Fenetre_Principale", "Oui cauch\303\251 / Non par d\303\251faut", nullptr));
        ongletSuppression->setTabText(ongletSuppression->indexOf(sup_Etudiants), QCoreApplication::translate("Fenetre_Principale", "Supprimer un \303\251l\303\250ve", nullptr));
        supM_Message->setText(QCoreApplication::translate("Fenetre_Principale", "Entree la mati\303\250re a supprimer\n"
"        Attention la suppr\303\251ssion est d\303\251finitive !", nullptr));
        supNv_mentionLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Mention	:", nullptr));
        supNv_niveauLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Niveau	:", nullptr));
        supNv_Enregistrer->setText(QCoreApplication::translate("Fenetre_Principale", "Enregistrer", nullptr));
        supNv_faculteLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Facult\303\251	:", nullptr));
        supFc_nomFaculteLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Facult\303\251	 :", nullptr));
        supFc_Enregistrer->setText(QCoreApplication::translate("Fenetre_Principale", "Enregistrer", nullptr));
        supMt_faculteLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Facult\303\251	:", nullptr));
        supMt_mentionLabel->setText(QCoreApplication::translate("Fenetre_Principale", "Mention	:", nullptr));
        supMt_Enregistrer->setText(QCoreApplication::translate("Fenetre_Principale", "Enregistrer", nullptr));
        ongletSuppression->setTabText(ongletSuppression->indexOf(sup_Mention), QCoreApplication::translate("Fenetre_Principale", "Supprimer une mati\303\250re", nullptr));
        tl_SeConnecter->setText(QCoreApplication::translate("Fenetre_Principale", "Se connecter", nullptr));
        tl_Lister->setText(QCoreApplication::translate("Fenetre_Principale", "Consulter les informations", nullptr));
        tl_Insertion->setText(QCoreApplication::translate("Fenetre_Principale", "Insertions", nullptr));
        tl_Modification->setText(QCoreApplication::translate("Fenetre_Principale", "Modifications et mise \303\240 jour", nullptr));
        tl_Suppression->setText(QCoreApplication::translate("Fenetre_Principale", "Suppression d'une entr\303\251e", nullptr));
        tl_Quitter->setText(QCoreApplication::translate("Fenetre_Principale", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Fenetre_Principale: public Ui_Fenetre_Principale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREPRINCIPALE_H
