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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetrePrincipale
{
public:
    QWidget *centralWidget;
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
    QLabel *motDePasseLabel;
    QLabel *utilisateurLabel;
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
    QLabel *lstEt_mentionLabel;
    QCheckBox *lstEt_nomEtudiantCheckBox;
    QCheckBox *lstEt_idEtudiantCheckBox;
    QLabel *lstEt_niveauLabel;
    QComboBox *lstEt_parcoursComboBox;
    QComboBox *lstEt_niveauComboBox;
    QLabel *lstEt_idEtudiantLabel;
    QComboBox *lstEt_idEtudiantComboBox;
    QLineEdit *lstEt_nomEtudiantLineEdit;
    QLabel *lstEt_parcoursLabel;
    QFrame *lstEt_line1;
    QCheckBox *lstEt_niveauCheckBox;
    QCheckBox *lstEt_mentionCheckBox;
    QCheckBox *lstEt_parcoursCheckBox;
    QLabel *lstEt_nomEtudiantLabel;
    QComboBox *lstEt_mentionComboBox;
    QPushButton *lstEt_Rechercher;
    QWidget *listeTransaction;
    QTableWidget *tableWidget_2;
    QWidget *layoutWidget_5;
    QFormLayout *formLayout_16;
    QLabel *lstT_mentionLabel;
    QComboBox *lstT_mentionComboBox;
    QLabel *lstT_niveauLabel;
    QComboBox *lstT_niveauComboBox;
    QLabel *lstT_parcoursLabel;
    QComboBox *lstT_parcoursComboBox;
    QLabel *lstT_codageLabel;
    QComboBox *lstT_codageComboBox;
    QPushButton *lstT_Enregister;
    QLabel *lstT_idFactureLabel;
    QComboBox *lstT_idFactureComboBox;
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
    QLabel *inscEt_mentionLabel;
    QComboBox *inscEt_mentionComboBox;
    QLabel *inscEt_niveauLabel;
    QComboBox *inscEt_niveauComboBox;
    QLabel *inscEt_parcoursLabel;
    QComboBox *inscEt_parcoursComboBox;
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
    QWidget *insc_payement;
    QTableWidget *tableWidget_3;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_3;
    QComboBox *inscP_identifiantComboBox;
    QLabel *inscP_identifiantLabel;
    QLineEdit *inscP_nomEtudiantLineEdit;
    QWidget *insc_Form_Msrv;
    QWidget *gridLayoutWidget_2;
    QGridLayout *inscFM_gridLayout;
    QLineEdit *inscFM_formLineEdit;
    QLabel *inscFM_formLabel;
    QLineEdit *inscFM_srvLineEdit;
    QLabel *inscFM_srvLabel;
    QPushButton *inscFM_Enregistrer;
    QPushButton *inscFM_Enregistrer_2;
    QWidget *insc_MentionNvPrc;
    QWidget *formLayoutWidget_6;
    QFormLayout *inscNv;
    QLabel *inscNv_mentionLabel;
    QLabel *InscNv_niveauLabel;
    QPushButton *InscNv_Enregistrer;
    QComboBox *inscNv_mentionComboBox;
    QLineEdit *inscNv_niveauLineEdit;
    QLabel *inscNv_Message;
    QWidget *formLayoutWidget_8;
    QFormLayout *inscPrc;
    QLabel *inscPrc_mentionLabel;
    QComboBox *inscPrc_mentionComboBox;
    QLabel *inscPrc_parcoursLabel;
    QPushButton *inscPrc_Enregistrer;
    QLineEdit *inscPrc_parcoursLineEdit;
    QWidget *formLayoutWidget_9;
    QFormLayout *InscMt;
    QLabel *InscMt_nomMentionLabel;
    QLineEdit *InscMt_nomMentionLineEdit;
    QPushButton *InscMt_Enregistrer;
    QLabel *inscPrc_Message;
    QLabel *inscMt_Message;
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
    QWidget *mod_eleve;
    QLabel *modEt_Message;
    QWidget *formLayoutWidget_12;
    QFormLayout *formLayout_10;
    QLabel *modEt_nomLabel;
    QLineEdit *modEt_nomLineEdit;
    QLabel *modEt_prenomLabel;
    QLineEdit *modEt_prenomLineEdit;
    QLabel *modEt_genreLabel;
    QComboBox *modEt_genreComboBox;
    QLabel *modEt_dateDeNaissanceLabel;
    QDateEdit *modEt_dateDeNaissanceDateEdit;
    QLabel *modEt_mentionLabel;
    QComboBox *modEt_mentionComboBox;
    QLabel *modEt_niveauLabel;
    QComboBox *modEt_niveauComboBox;
    QLabel *modEt_parcoursLabel;
    QComboBox *modEt_parcoursLineEdit;
    QLabel *modEt_codageLabel;
    QSpinBox *modEt_codageLineEdit;
    QLabel *modEt_telephonePhoneLabel;
    QLineEdit *modEt_telephoneLineEdit;
    QLabel *modEt_adresseLabel;
    QTextEdit *modEt_adresseTextEdit;
    QPushButton *modEt_Enregistrer;
    QLabel *modEt_estPassantLabel;
    QCheckBox *modEt_estPassantCheckBox;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_5;
    QLabel *modEt_identifiantLabel;
    QComboBox *modEt_identifiantComboBox;
    QLineEdit *modEt_nomEtudiantLineEdit;
    QWidget *Mod_note;
    QWidget *layoutWidget_7;
    QFormLayout *formLayout_13;
    QLabel *modE_mentionLabel_2;
    QComboBox *modE_mentionComboBox_2;
    QLabel *modE_niveauLabel_2;
    QComboBox *modE_niveauComboBox_2;
    QLabel *modE_parcoursLabel_2;
    QComboBox *modE_parcoursComboBox_2;
    QLabel *modE_codageLabel_2;
    QComboBox *modE_codageComboBox_2;
    QPushButton *modE_Chercher_2;
    QWidget *Suppression;
    QTabWidget *ongletSuppression;
    QWidget *sup_Etudiants;
    QLabel *label;
    QWidget *layoutWidget_8;
    QFormLayout *formLayout_17;
    QLabel *SupE_mentionLabel;
    QComboBox *SupE_mentionComboBox;
    QLabel *SupE_niveauLabel;
    QComboBox *SupE_niveauComboBox;
    QLabel *SupE_parcoursLabel;
    QComboBox *SupE_parcoursComboBox;
    QLabel *SupE_codageLabel;
    QComboBox *SupE_codageComboBox;
    QPushButton *SupE_Chercher;
    QWidget *sup_Mention;
    QLabel *supM_Message;
    QWidget *formLayoutWidget_7;
    QFormLayout *formLayout_18;
    QLabel *inscMNP_nomMentionLabel_3;
    QComboBox *supM_classeMatiereComboBox;
    QLabel *inscMNP_niveauLabel_3;
    QComboBox *supM_nomMatiereComboBox;
    QLabel *inscMNP_parcoursLabel_3;
    QPushButton *supM_Supprimer;
    QComboBox *comboBox;
    QWidget *sup_Transaction;
    QWidget *layoutWidget_9;
    QFormLayout *formLayout_19;
    QLabel *SupE_mentionLabel_2;
    QComboBox *SupE_mentionComboBox_2;
    QLabel *SupE_niveauLabel_2;
    QComboBox *SupE_niveauComboBox_2;
    QLabel *SupE_parcoursLabel_2;
    QComboBox *SupE_parcoursComboBox_2;
    QLabel *SupE_codageLabel_2;
    QComboBox *SupE_codageComboBox_2;
    QPushButton *SupE_Chercher_2;
    QWidget *layoutWidget;
    QVBoxLayout *Toolbox;
    QPushButton *tl_SeConnecter;
    QPushButton *tl_Lister;
    QPushButton *tl_Insertion;
    QPushButton *tl_Modification;
    QPushButton *tl_Suppression;
    QPushButton *tl_Quitter;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *FenetrePrincipale)
    {
        if (FenetrePrincipale->objectName().isEmpty())
            FenetrePrincipale->setObjectName("FenetrePrincipale");
        FenetrePrincipale->resize(956, 652);
        FenetrePrincipale->setAutoFillBackground(true);
        centralWidget = new QWidget(FenetrePrincipale);
        centralWidget->setObjectName("centralWidget");
        stackedWidget = new QStackedWidget(centralWidget);
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

        motDePasseLabel = new QLabel(formLayoutWidget);
        motDePasseLabel->setObjectName("motDePasseLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, motDePasseLabel);

        utilisateurLabel = new QLabel(formLayoutWidget);
        utilisateurLabel->setObjectName("utilisateurLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, utilisateurLabel);

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
        gridLayoutWidget_5->setGeometry(QRect(130, 20, 461, 191));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        lstEt_mentionLabel = new QLabel(gridLayoutWidget_5);
        lstEt_mentionLabel->setObjectName("lstEt_mentionLabel");

        gridLayout_4->addWidget(lstEt_mentionLabel, 0, 0, 1, 1);

        lstEt_nomEtudiantCheckBox = new QCheckBox(gridLayoutWidget_5);
        lstEt_nomEtudiantCheckBox->setObjectName("lstEt_nomEtudiantCheckBox");

        gridLayout_4->addWidget(lstEt_nomEtudiantCheckBox, 6, 2, 1, 1);

        lstEt_idEtudiantCheckBox = new QCheckBox(gridLayoutWidget_5);
        lstEt_idEtudiantCheckBox->setObjectName("lstEt_idEtudiantCheckBox");

        gridLayout_4->addWidget(lstEt_idEtudiantCheckBox, 5, 2, 1, 1);

        lstEt_niveauLabel = new QLabel(gridLayoutWidget_5);
        lstEt_niveauLabel->setObjectName("lstEt_niveauLabel");

        gridLayout_4->addWidget(lstEt_niveauLabel, 1, 0, 1, 1);

        lstEt_parcoursComboBox = new QComboBox(gridLayoutWidget_5);
        lstEt_parcoursComboBox->addItem(QString());
        lstEt_parcoursComboBox->setObjectName("lstEt_parcoursComboBox");
        lstEt_parcoursComboBox->setEnabled(false);

        gridLayout_4->addWidget(lstEt_parcoursComboBox, 2, 1, 1, 1);

        lstEt_niveauComboBox = new QComboBox(gridLayoutWidget_5);
        lstEt_niveauComboBox->addItem(QString());
        lstEt_niveauComboBox->setObjectName("lstEt_niveauComboBox");
        lstEt_niveauComboBox->setEnabled(false);

        gridLayout_4->addWidget(lstEt_niveauComboBox, 1, 1, 1, 1);

        lstEt_idEtudiantLabel = new QLabel(gridLayoutWidget_5);
        lstEt_idEtudiantLabel->setObjectName("lstEt_idEtudiantLabel");

        gridLayout_4->addWidget(lstEt_idEtudiantLabel, 5, 0, 1, 1);

        lstEt_idEtudiantComboBox = new QComboBox(gridLayoutWidget_5);
        lstEt_idEtudiantComboBox->addItem(QString());
        lstEt_idEtudiantComboBox->setObjectName("lstEt_idEtudiantComboBox");
        lstEt_idEtudiantComboBox->setEnabled(false);

        gridLayout_4->addWidget(lstEt_idEtudiantComboBox, 5, 1, 1, 1);

        lstEt_nomEtudiantLineEdit = new QLineEdit(gridLayoutWidget_5);
        lstEt_nomEtudiantLineEdit->setObjectName("lstEt_nomEtudiantLineEdit");
        lstEt_nomEtudiantLineEdit->setEnabled(false);

        gridLayout_4->addWidget(lstEt_nomEtudiantLineEdit, 6, 1, 1, 1);

        lstEt_parcoursLabel = new QLabel(gridLayoutWidget_5);
        lstEt_parcoursLabel->setObjectName("lstEt_parcoursLabel");

        gridLayout_4->addWidget(lstEt_parcoursLabel, 2, 0, 1, 1);

        lstEt_line1 = new QFrame(gridLayoutWidget_5);
        lstEt_line1->setObjectName("lstEt_line1");
        lstEt_line1->setFrameShape(QFrame::HLine);
        lstEt_line1->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(lstEt_line1, 3, 0, 1, 2);

        lstEt_niveauCheckBox = new QCheckBox(gridLayoutWidget_5);
        lstEt_niveauCheckBox->setObjectName("lstEt_niveauCheckBox");

        gridLayout_4->addWidget(lstEt_niveauCheckBox, 1, 2, 1, 1);

        lstEt_mentionCheckBox = new QCheckBox(gridLayoutWidget_5);
        lstEt_mentionCheckBox->setObjectName("lstEt_mentionCheckBox");

        gridLayout_4->addWidget(lstEt_mentionCheckBox, 0, 2, 1, 1);

        lstEt_parcoursCheckBox = new QCheckBox(gridLayoutWidget_5);
        lstEt_parcoursCheckBox->setObjectName("lstEt_parcoursCheckBox");

        gridLayout_4->addWidget(lstEt_parcoursCheckBox, 2, 2, 1, 1);

        lstEt_nomEtudiantLabel = new QLabel(gridLayoutWidget_5);
        lstEt_nomEtudiantLabel->setObjectName("lstEt_nomEtudiantLabel");

        gridLayout_4->addWidget(lstEt_nomEtudiantLabel, 6, 0, 1, 1);

        lstEt_mentionComboBox = new QComboBox(gridLayoutWidget_5);
        lstEt_mentionComboBox->addItem(QString());
        lstEt_mentionComboBox->setObjectName("lstEt_mentionComboBox");
        lstEt_mentionComboBox->setEnabled(false);
        lstEt_mentionComboBox->setEditable(false);

        gridLayout_4->addWidget(lstEt_mentionComboBox, 0, 1, 1, 1);

        lstEt_Rechercher = new QPushButton(gridLayoutWidget_5);
        lstEt_Rechercher->setObjectName("lstEt_Rechercher");

        gridLayout_4->addWidget(lstEt_Rechercher, 7, 0, 1, 3);

        ongletConsultation->addTab(listeEleve, QString());
        listeTransaction = new QWidget();
        listeTransaction->setObjectName("listeTransaction");
        tableWidget_2 = new QTableWidget(listeTransaction);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(10, 240, 701, 331));
        layoutWidget_5 = new QWidget(listeTransaction);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(140, 40, 441, 176));
        formLayout_16 = new QFormLayout(layoutWidget_5);
        formLayout_16->setSpacing(6);
        formLayout_16->setContentsMargins(11, 11, 11, 11);
        formLayout_16->setObjectName("formLayout_16");
        formLayout_16->setContentsMargins(0, 0, 0, 0);
        lstT_mentionLabel = new QLabel(layoutWidget_5);
        lstT_mentionLabel->setObjectName("lstT_mentionLabel");

        formLayout_16->setWidget(0, QFormLayout::LabelRole, lstT_mentionLabel);

        lstT_mentionComboBox = new QComboBox(layoutWidget_5);
        lstT_mentionComboBox->addItem(QString());
        lstT_mentionComboBox->setObjectName("lstT_mentionComboBox");

        formLayout_16->setWidget(0, QFormLayout::FieldRole, lstT_mentionComboBox);

        lstT_niveauLabel = new QLabel(layoutWidget_5);
        lstT_niveauLabel->setObjectName("lstT_niveauLabel");

        formLayout_16->setWidget(1, QFormLayout::LabelRole, lstT_niveauLabel);

        lstT_niveauComboBox = new QComboBox(layoutWidget_5);
        lstT_niveauComboBox->addItem(QString());
        lstT_niveauComboBox->setObjectName("lstT_niveauComboBox");

        formLayout_16->setWidget(1, QFormLayout::FieldRole, lstT_niveauComboBox);

        lstT_parcoursLabel = new QLabel(layoutWidget_5);
        lstT_parcoursLabel->setObjectName("lstT_parcoursLabel");

        formLayout_16->setWidget(2, QFormLayout::LabelRole, lstT_parcoursLabel);

        lstT_parcoursComboBox = new QComboBox(layoutWidget_5);
        lstT_parcoursComboBox->addItem(QString());
        lstT_parcoursComboBox->setObjectName("lstT_parcoursComboBox");

        formLayout_16->setWidget(2, QFormLayout::FieldRole, lstT_parcoursComboBox);

        lstT_codageLabel = new QLabel(layoutWidget_5);
        lstT_codageLabel->setObjectName("lstT_codageLabel");

        formLayout_16->setWidget(3, QFormLayout::LabelRole, lstT_codageLabel);

        lstT_codageComboBox = new QComboBox(layoutWidget_5);
        lstT_codageComboBox->addItem(QString());
        lstT_codageComboBox->setObjectName("lstT_codageComboBox");

        formLayout_16->setWidget(3, QFormLayout::FieldRole, lstT_codageComboBox);

        lstT_Enregister = new QPushButton(layoutWidget_5);
        lstT_Enregister->setObjectName("lstT_Enregister");

        formLayout_16->setWidget(5, QFormLayout::SpanningRole, lstT_Enregister);

        lstT_idFactureLabel = new QLabel(layoutWidget_5);
        lstT_idFactureLabel->setObjectName("lstT_idFactureLabel");

        formLayout_16->setWidget(4, QFormLayout::LabelRole, lstT_idFactureLabel);

        lstT_idFactureComboBox = new QComboBox(layoutWidget_5);
        lstT_idFactureComboBox->setObjectName("lstT_idFactureComboBox");

        formLayout_16->setWidget(4, QFormLayout::FieldRole, lstT_idFactureComboBox);

        ongletConsultation->addTab(listeTransaction, QString());
        stackedWidget->addWidget(ConsulterInfos);
        Insertion = new QWidget();
        Insertion->setObjectName("Insertion");
        ongletInsertion = new QTabWidget(Insertion);
        ongletInsertion->setObjectName("ongletInsertion");
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

        inscEt_mentionLabel = new QLabel(formLayoutWidget_11);
        inscEt_mentionLabel->setObjectName("inscEt_mentionLabel");

        formLayout_9->setWidget(4, QFormLayout::LabelRole, inscEt_mentionLabel);

        inscEt_mentionComboBox = new QComboBox(formLayoutWidget_11);
        inscEt_mentionComboBox->setObjectName("inscEt_mentionComboBox");

        formLayout_9->setWidget(4, QFormLayout::FieldRole, inscEt_mentionComboBox);

        inscEt_niveauLabel = new QLabel(formLayoutWidget_11);
        inscEt_niveauLabel->setObjectName("inscEt_niveauLabel");

        formLayout_9->setWidget(5, QFormLayout::LabelRole, inscEt_niveauLabel);

        inscEt_niveauComboBox = new QComboBox(formLayoutWidget_11);
        inscEt_niveauComboBox->setObjectName("inscEt_niveauComboBox");

        formLayout_9->setWidget(5, QFormLayout::FieldRole, inscEt_niveauComboBox);

        inscEt_parcoursLabel = new QLabel(formLayoutWidget_11);
        inscEt_parcoursLabel->setObjectName("inscEt_parcoursLabel");

        formLayout_9->setWidget(6, QFormLayout::LabelRole, inscEt_parcoursLabel);

        inscEt_parcoursComboBox = new QComboBox(formLayoutWidget_11);
        inscEt_parcoursComboBox->setObjectName("inscEt_parcoursComboBox");

        formLayout_9->setWidget(6, QFormLayout::FieldRole, inscEt_parcoursComboBox);

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
        if (inscAchat_commandeTableWidget->columnCount() < 4)
            inscAchat_commandeTableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        inscAchat_commandeTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        inscAchat_commandeTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        inscAchat_commandeTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        inscAchat_commandeTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        inscAchat_commandeTableWidget->setObjectName("inscAchat_commandeTableWidget");
        inscAchat_commandeTableWidget->setGeometry(QRect(10, 220, 701, 351));
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
        inscAchat_identifiantComboBox->addItem(QString());
        inscAchat_identifiantComboBox->setObjectName("inscAchat_identifiantComboBox");

        gridLayout_2->addWidget(inscAchat_identifiantComboBox, 0, 1, 1, 1);

        inscAchat_nomEtudiantLineEdit = new QLineEdit(gridLayoutWidget_3);
        inscAchat_nomEtudiantLineEdit->setObjectName("inscAchat_nomEtudiantLineEdit");
        inscAchat_nomEtudiantLineEdit->setReadOnly(true);

        gridLayout_2->addWidget(inscAchat_nomEtudiantLineEdit, 0, 2, 1, 1);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8("Assets/icons8-checklist-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        ongletInsertion->addTab(insc_Achat, icon1, QString());
        insc_payement = new QWidget();
        insc_payement->setObjectName("insc_payement");
        tableWidget_3 = new QTableWidget(insc_payement);
        if (tableWidget_3->columnCount() < 2)
            tableWidget_3->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        tableWidget_3->setObjectName("tableWidget_3");
        tableWidget_3->setGeometry(QRect(260, 210, 211, 111));
        gridLayoutWidget_4 = new QWidget(insc_payement);
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(45, 80, 581, 41));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        inscP_identifiantComboBox = new QComboBox(gridLayoutWidget_4);
        inscP_identifiantComboBox->addItem(QString());
        inscP_identifiantComboBox->setObjectName("inscP_identifiantComboBox");

        gridLayout_3->addWidget(inscP_identifiantComboBox, 0, 1, 1, 1);

        inscP_identifiantLabel = new QLabel(gridLayoutWidget_4);
        inscP_identifiantLabel->setObjectName("inscP_identifiantLabel");

        gridLayout_3->addWidget(inscP_identifiantLabel, 0, 0, 1, 1);

        inscP_nomEtudiantLineEdit = new QLineEdit(gridLayoutWidget_4);
        inscP_nomEtudiantLineEdit->setObjectName("inscP_nomEtudiantLineEdit");
        inscP_nomEtudiantLineEdit->setReadOnly(true);

        gridLayout_3->addWidget(inscP_nomEtudiantLineEdit, 0, 2, 1, 1);

        ongletInsertion->addTab(insc_payement, QString());
        insc_Form_Msrv = new QWidget();
        insc_Form_Msrv->setObjectName("insc_Form_Msrv");
        gridLayoutWidget_2 = new QWidget(insc_Form_Msrv);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(90, 160, 551, 111));
        inscFM_gridLayout = new QGridLayout(gridLayoutWidget_2);
        inscFM_gridLayout->setSpacing(6);
        inscFM_gridLayout->setContentsMargins(11, 11, 11, 11);
        inscFM_gridLayout->setObjectName("inscFM_gridLayout");
        inscFM_gridLayout->setHorizontalSpacing(6);
        inscFM_gridLayout->setContentsMargins(0, 0, 0, 0);
        inscFM_formLineEdit = new QLineEdit(gridLayoutWidget_2);
        inscFM_formLineEdit->setObjectName("inscFM_formLineEdit");

        inscFM_gridLayout->addWidget(inscFM_formLineEdit, 0, 1, 1, 1);

        inscFM_formLabel = new QLabel(gridLayoutWidget_2);
        inscFM_formLabel->setObjectName("inscFM_formLabel");

        inscFM_gridLayout->addWidget(inscFM_formLabel, 0, 0, 1, 1);

        inscFM_srvLineEdit = new QLineEdit(gridLayoutWidget_2);
        inscFM_srvLineEdit->setObjectName("inscFM_srvLineEdit");

        inscFM_gridLayout->addWidget(inscFM_srvLineEdit, 1, 1, 1, 1);

        inscFM_srvLabel = new QLabel(gridLayoutWidget_2);
        inscFM_srvLabel->setObjectName("inscFM_srvLabel");

        inscFM_gridLayout->addWidget(inscFM_srvLabel, 1, 0, 1, 1);

        inscFM_Enregistrer = new QPushButton(gridLayoutWidget_2);
        inscFM_Enregistrer->setObjectName("inscFM_Enregistrer");

        inscFM_gridLayout->addWidget(inscFM_Enregistrer, 0, 2, 1, 1);

        inscFM_Enregistrer_2 = new QPushButton(gridLayoutWidget_2);
        inscFM_Enregistrer_2->setObjectName("inscFM_Enregistrer_2");

        inscFM_gridLayout->addWidget(inscFM_Enregistrer_2, 1, 2, 1, 1);

        inscFM_gridLayout->setColumnStretch(0, 1);
        inscFM_gridLayout->setColumnStretch(1, 3);
        inscFM_gridLayout->setColumnStretch(2, 2);
        ongletInsertion->addTab(insc_Form_Msrv, QString());
        insc_MentionNvPrc = new QWidget();
        insc_MentionNvPrc->setObjectName("insc_MentionNvPrc");
        formLayoutWidget_6 = new QWidget(insc_MentionNvPrc);
        formLayoutWidget_6->setObjectName("formLayoutWidget_6");
        formLayoutWidget_6->setGeometry(QRect(30, 100, 311, 91));
        inscNv = new QFormLayout(formLayoutWidget_6);
        inscNv->setSpacing(6);
        inscNv->setContentsMargins(11, 11, 11, 11);
        inscNv->setObjectName("inscNv");
        inscNv->setContentsMargins(0, 0, 0, 0);
        inscNv_mentionLabel = new QLabel(formLayoutWidget_6);
        inscNv_mentionLabel->setObjectName("inscNv_mentionLabel");

        inscNv->setWidget(0, QFormLayout::LabelRole, inscNv_mentionLabel);

        InscNv_niveauLabel = new QLabel(formLayoutWidget_6);
        InscNv_niveauLabel->setObjectName("InscNv_niveauLabel");

        inscNv->setWidget(1, QFormLayout::LabelRole, InscNv_niveauLabel);

        InscNv_Enregistrer = new QPushButton(formLayoutWidget_6);
        InscNv_Enregistrer->setObjectName("InscNv_Enregistrer");

        inscNv->setWidget(2, QFormLayout::SpanningRole, InscNv_Enregistrer);

        inscNv_mentionComboBox = new QComboBox(formLayoutWidget_6);
        inscNv_mentionComboBox->setObjectName("inscNv_mentionComboBox");

        inscNv->setWidget(0, QFormLayout::FieldRole, inscNv_mentionComboBox);

        inscNv_niveauLineEdit = new QLineEdit(formLayoutWidget_6);
        inscNv_niveauLineEdit->setObjectName("inscNv_niveauLineEdit");

        inscNv->setWidget(1, QFormLayout::FieldRole, inscNv_niveauLineEdit);

        inscNv_Message = new QLabel(insc_MentionNvPrc);
        inscNv_Message->setObjectName("inscNv_Message");
        inscNv_Message->setGeometry(QRect(90, 60, 171, 31));
        inscNv_Message->setFont(font2);
        formLayoutWidget_8 = new QWidget(insc_MentionNvPrc);
        formLayoutWidget_8->setObjectName("formLayoutWidget_8");
        formLayoutWidget_8->setGeometry(QRect(360, 100, 311, 91));
        inscPrc = new QFormLayout(formLayoutWidget_8);
        inscPrc->setSpacing(6);
        inscPrc->setContentsMargins(11, 11, 11, 11);
        inscPrc->setObjectName("inscPrc");
        inscPrc->setContentsMargins(0, 0, 0, 0);
        inscPrc_mentionLabel = new QLabel(formLayoutWidget_8);
        inscPrc_mentionLabel->setObjectName("inscPrc_mentionLabel");

        inscPrc->setWidget(0, QFormLayout::LabelRole, inscPrc_mentionLabel);

        inscPrc_mentionComboBox = new QComboBox(formLayoutWidget_8);
        inscPrc_mentionComboBox->setObjectName("inscPrc_mentionComboBox");

        inscPrc->setWidget(0, QFormLayout::FieldRole, inscPrc_mentionComboBox);

        inscPrc_parcoursLabel = new QLabel(formLayoutWidget_8);
        inscPrc_parcoursLabel->setObjectName("inscPrc_parcoursLabel");

        inscPrc->setWidget(1, QFormLayout::LabelRole, inscPrc_parcoursLabel);

        inscPrc_Enregistrer = new QPushButton(formLayoutWidget_8);
        inscPrc_Enregistrer->setObjectName("inscPrc_Enregistrer");

        inscPrc->setWidget(2, QFormLayout::SpanningRole, inscPrc_Enregistrer);

        inscPrc_parcoursLineEdit = new QLineEdit(formLayoutWidget_8);
        inscPrc_parcoursLineEdit->setObjectName("inscPrc_parcoursLineEdit");

        inscPrc->setWidget(1, QFormLayout::FieldRole, inscPrc_parcoursLineEdit);

        formLayoutWidget_9 = new QWidget(insc_MentionNvPrc);
        formLayoutWidget_9->setObjectName("formLayoutWidget_9");
        formLayoutWidget_9->setGeometry(QRect(190, 280, 311, 61));
        InscMt = new QFormLayout(formLayoutWidget_9);
        InscMt->setSpacing(6);
        InscMt->setContentsMargins(11, 11, 11, 11);
        InscMt->setObjectName("InscMt");
        InscMt->setContentsMargins(0, 0, 0, 0);
        InscMt_nomMentionLabel = new QLabel(formLayoutWidget_9);
        InscMt_nomMentionLabel->setObjectName("InscMt_nomMentionLabel");

        InscMt->setWidget(0, QFormLayout::LabelRole, InscMt_nomMentionLabel);

        InscMt_nomMentionLineEdit = new QLineEdit(formLayoutWidget_9);
        InscMt_nomMentionLineEdit->setObjectName("InscMt_nomMentionLineEdit");

        InscMt->setWidget(0, QFormLayout::FieldRole, InscMt_nomMentionLineEdit);

        InscMt_Enregistrer = new QPushButton(formLayoutWidget_9);
        InscMt_Enregistrer->setObjectName("InscMt_Enregistrer");

        InscMt->setWidget(1, QFormLayout::SpanningRole, InscMt_Enregistrer);

        inscPrc_Message = new QLabel(insc_MentionNvPrc);
        inscPrc_Message->setObjectName("inscPrc_Message");
        inscPrc_Message->setGeometry(QRect(430, 70, 181, 20));
        inscMt_Message = new QLabel(insc_MentionNvPrc);
        inscMt_Message->setObjectName("inscMt_Message");
        inscMt_Message->setGeometry(QRect(260, 240, 181, 16));
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
        ongletModification->setGeometry(QRect(0, 0, 731, 621));
        mod_eleve = new QWidget();
        mod_eleve->setObjectName("mod_eleve");
        modEt_Message = new QLabel(mod_eleve);
        modEt_Message->setObjectName("modEt_Message");
        modEt_Message->setGeometry(QRect(190, 0, 341, 31));
        modEt_Message->setFont(font2);
        formLayoutWidget_12 = new QWidget(mod_eleve);
        formLayoutWidget_12->setObjectName("formLayoutWidget_12");
        formLayoutWidget_12->setGeometry(QRect(150, 110, 411, 424));
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

        modEt_genreComboBox = new QComboBox(formLayoutWidget_12);
        modEt_genreComboBox->addItem(QString());
        modEt_genreComboBox->addItem(QString());
        modEt_genreComboBox->addItem(QString());
        modEt_genreComboBox->setObjectName("modEt_genreComboBox");

        formLayout_10->setWidget(2, QFormLayout::FieldRole, modEt_genreComboBox);

        modEt_dateDeNaissanceLabel = new QLabel(formLayoutWidget_12);
        modEt_dateDeNaissanceLabel->setObjectName("modEt_dateDeNaissanceLabel");

        formLayout_10->setWidget(3, QFormLayout::LabelRole, modEt_dateDeNaissanceLabel);

        modEt_dateDeNaissanceDateEdit = new QDateEdit(formLayoutWidget_12);
        modEt_dateDeNaissanceDateEdit->setObjectName("modEt_dateDeNaissanceDateEdit");

        formLayout_10->setWidget(3, QFormLayout::FieldRole, modEt_dateDeNaissanceDateEdit);

        modEt_mentionLabel = new QLabel(formLayoutWidget_12);
        modEt_mentionLabel->setObjectName("modEt_mentionLabel");

        formLayout_10->setWidget(4, QFormLayout::LabelRole, modEt_mentionLabel);

        modEt_mentionComboBox = new QComboBox(formLayoutWidget_12);
        modEt_mentionComboBox->setObjectName("modEt_mentionComboBox");

        formLayout_10->setWidget(4, QFormLayout::FieldRole, modEt_mentionComboBox);

        modEt_niveauLabel = new QLabel(formLayoutWidget_12);
        modEt_niveauLabel->setObjectName("modEt_niveauLabel");

        formLayout_10->setWidget(5, QFormLayout::LabelRole, modEt_niveauLabel);

        modEt_niveauComboBox = new QComboBox(formLayoutWidget_12);
        modEt_niveauComboBox->setObjectName("modEt_niveauComboBox");

        formLayout_10->setWidget(5, QFormLayout::FieldRole, modEt_niveauComboBox);

        modEt_parcoursLabel = new QLabel(formLayoutWidget_12);
        modEt_parcoursLabel->setObjectName("modEt_parcoursLabel");

        formLayout_10->setWidget(6, QFormLayout::LabelRole, modEt_parcoursLabel);

        modEt_parcoursLineEdit = new QComboBox(formLayoutWidget_12);
        modEt_parcoursLineEdit->setObjectName("modEt_parcoursLineEdit");

        formLayout_10->setWidget(6, QFormLayout::FieldRole, modEt_parcoursLineEdit);

        modEt_codageLabel = new QLabel(formLayoutWidget_12);
        modEt_codageLabel->setObjectName("modEt_codageLabel");

        formLayout_10->setWidget(7, QFormLayout::LabelRole, modEt_codageLabel);

        modEt_codageLineEdit = new QSpinBox(formLayoutWidget_12);
        modEt_codageLineEdit->setObjectName("modEt_codageLineEdit");

        formLayout_10->setWidget(7, QFormLayout::FieldRole, modEt_codageLineEdit);

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

        gridLayoutWidget_6 = new QWidget(mod_eleve);
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
        modEt_identifiantComboBox->addItem(QString());
        modEt_identifiantComboBox->setObjectName("modEt_identifiantComboBox");

        gridLayout_5->addWidget(modEt_identifiantComboBox, 0, 1, 1, 1);

        modEt_nomEtudiantLineEdit = new QLineEdit(gridLayoutWidget_6);
        modEt_nomEtudiantLineEdit->setObjectName("modEt_nomEtudiantLineEdit");
        modEt_nomEtudiantLineEdit->setReadOnly(true);

        gridLayout_5->addWidget(modEt_nomEtudiantLineEdit, 0, 2, 1, 1);

        ongletModification->addTab(mod_eleve, QString());
        Mod_note = new QWidget();
        Mod_note->setObjectName("Mod_note");
        layoutWidget_7 = new QWidget(Mod_note);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(150, 50, 451, 146));
        formLayout_13 = new QFormLayout(layoutWidget_7);
        formLayout_13->setSpacing(6);
        formLayout_13->setContentsMargins(11, 11, 11, 11);
        formLayout_13->setObjectName("formLayout_13");
        formLayout_13->setContentsMargins(0, 0, 0, 0);
        modE_mentionLabel_2 = new QLabel(layoutWidget_7);
        modE_mentionLabel_2->setObjectName("modE_mentionLabel_2");

        formLayout_13->setWidget(0, QFormLayout::LabelRole, modE_mentionLabel_2);

        modE_mentionComboBox_2 = new QComboBox(layoutWidget_7);
        modE_mentionComboBox_2->addItem(QString());
        modE_mentionComboBox_2->setObjectName("modE_mentionComboBox_2");

        formLayout_13->setWidget(0, QFormLayout::FieldRole, modE_mentionComboBox_2);

        modE_niveauLabel_2 = new QLabel(layoutWidget_7);
        modE_niveauLabel_2->setObjectName("modE_niveauLabel_2");

        formLayout_13->setWidget(1, QFormLayout::LabelRole, modE_niveauLabel_2);

        modE_niveauComboBox_2 = new QComboBox(layoutWidget_7);
        modE_niveauComboBox_2->addItem(QString());
        modE_niveauComboBox_2->setObjectName("modE_niveauComboBox_2");

        formLayout_13->setWidget(1, QFormLayout::FieldRole, modE_niveauComboBox_2);

        modE_parcoursLabel_2 = new QLabel(layoutWidget_7);
        modE_parcoursLabel_2->setObjectName("modE_parcoursLabel_2");

        formLayout_13->setWidget(2, QFormLayout::LabelRole, modE_parcoursLabel_2);

        modE_parcoursComboBox_2 = new QComboBox(layoutWidget_7);
        modE_parcoursComboBox_2->addItem(QString());
        modE_parcoursComboBox_2->setObjectName("modE_parcoursComboBox_2");

        formLayout_13->setWidget(2, QFormLayout::FieldRole, modE_parcoursComboBox_2);

        modE_codageLabel_2 = new QLabel(layoutWidget_7);
        modE_codageLabel_2->setObjectName("modE_codageLabel_2");

        formLayout_13->setWidget(3, QFormLayout::LabelRole, modE_codageLabel_2);

        modE_codageComboBox_2 = new QComboBox(layoutWidget_7);
        modE_codageComboBox_2->addItem(QString());
        modE_codageComboBox_2->setObjectName("modE_codageComboBox_2");

        formLayout_13->setWidget(3, QFormLayout::FieldRole, modE_codageComboBox_2);

        modE_Chercher_2 = new QPushButton(layoutWidget_7);
        modE_Chercher_2->setObjectName("modE_Chercher_2");

        formLayout_13->setWidget(4, QFormLayout::SpanningRole, modE_Chercher_2);

        ongletModification->addTab(Mod_note, QString());
        stackedWidget->addWidget(Modifications);
        Suppression = new QWidget();
        Suppression->setObjectName("Suppression");
        ongletSuppression = new QTabWidget(Suppression);
        ongletSuppression->setObjectName("ongletSuppression");
        ongletSuppression->setGeometry(QRect(0, 0, 731, 621));
        sup_Etudiants = new QWidget();
        sup_Etudiants->setObjectName("sup_Etudiants");
        label = new QLabel(sup_Etudiants);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 70, 321, 31));
        label->setFont(font2);
        layoutWidget_8 = new QWidget(sup_Etudiants);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(110, 130, 451, 146));
        formLayout_17 = new QFormLayout(layoutWidget_8);
        formLayout_17->setSpacing(6);
        formLayout_17->setContentsMargins(11, 11, 11, 11);
        formLayout_17->setObjectName("formLayout_17");
        formLayout_17->setContentsMargins(0, 0, 0, 0);
        SupE_mentionLabel = new QLabel(layoutWidget_8);
        SupE_mentionLabel->setObjectName("SupE_mentionLabel");

        formLayout_17->setWidget(0, QFormLayout::LabelRole, SupE_mentionLabel);

        SupE_mentionComboBox = new QComboBox(layoutWidget_8);
        SupE_mentionComboBox->addItem(QString());
        SupE_mentionComboBox->setObjectName("SupE_mentionComboBox");

        formLayout_17->setWidget(0, QFormLayout::FieldRole, SupE_mentionComboBox);

        SupE_niveauLabel = new QLabel(layoutWidget_8);
        SupE_niveauLabel->setObjectName("SupE_niveauLabel");

        formLayout_17->setWidget(1, QFormLayout::LabelRole, SupE_niveauLabel);

        SupE_niveauComboBox = new QComboBox(layoutWidget_8);
        SupE_niveauComboBox->addItem(QString());
        SupE_niveauComboBox->setObjectName("SupE_niveauComboBox");

        formLayout_17->setWidget(1, QFormLayout::FieldRole, SupE_niveauComboBox);

        SupE_parcoursLabel = new QLabel(layoutWidget_8);
        SupE_parcoursLabel->setObjectName("SupE_parcoursLabel");

        formLayout_17->setWidget(2, QFormLayout::LabelRole, SupE_parcoursLabel);

        SupE_parcoursComboBox = new QComboBox(layoutWidget_8);
        SupE_parcoursComboBox->addItem(QString());
        SupE_parcoursComboBox->setObjectName("SupE_parcoursComboBox");

        formLayout_17->setWidget(2, QFormLayout::FieldRole, SupE_parcoursComboBox);

        SupE_codageLabel = new QLabel(layoutWidget_8);
        SupE_codageLabel->setObjectName("SupE_codageLabel");

        formLayout_17->setWidget(3, QFormLayout::LabelRole, SupE_codageLabel);

        SupE_codageComboBox = new QComboBox(layoutWidget_8);
        SupE_codageComboBox->addItem(QString());
        SupE_codageComboBox->setObjectName("SupE_codageComboBox");

        formLayout_17->setWidget(3, QFormLayout::FieldRole, SupE_codageComboBox);

        SupE_Chercher = new QPushButton(layoutWidget_8);
        SupE_Chercher->setObjectName("SupE_Chercher");

        formLayout_17->setWidget(4, QFormLayout::SpanningRole, SupE_Chercher);

        ongletSuppression->addTab(sup_Etudiants, QString());
        sup_Mention = new QWidget();
        sup_Mention->setObjectName("sup_Mention");
        supM_Message = new QLabel(sup_Mention);
        supM_Message->setObjectName("supM_Message");
        supM_Message->setGeometry(QRect(220, 120, 251, 41));
        supM_Message->setFont(font2);
        formLayoutWidget_7 = new QWidget(sup_Mention);
        formLayoutWidget_7->setObjectName("formLayoutWidget_7");
        formLayoutWidget_7->setGeometry(QRect(170, 190, 311, 116));
        formLayout_18 = new QFormLayout(formLayoutWidget_7);
        formLayout_18->setSpacing(6);
        formLayout_18->setContentsMargins(11, 11, 11, 11);
        formLayout_18->setObjectName("formLayout_18");
        formLayout_18->setContentsMargins(0, 0, 0, 0);
        inscMNP_nomMentionLabel_3 = new QLabel(formLayoutWidget_7);
        inscMNP_nomMentionLabel_3->setObjectName("inscMNP_nomMentionLabel_3");

        formLayout_18->setWidget(0, QFormLayout::LabelRole, inscMNP_nomMentionLabel_3);

        supM_classeMatiereComboBox = new QComboBox(formLayoutWidget_7);
        supM_classeMatiereComboBox->setObjectName("supM_classeMatiereComboBox");

        formLayout_18->setWidget(0, QFormLayout::FieldRole, supM_classeMatiereComboBox);

        inscMNP_niveauLabel_3 = new QLabel(formLayoutWidget_7);
        inscMNP_niveauLabel_3->setObjectName("inscMNP_niveauLabel_3");

        formLayout_18->setWidget(1, QFormLayout::LabelRole, inscMNP_niveauLabel_3);

        supM_nomMatiereComboBox = new QComboBox(formLayoutWidget_7);
        supM_nomMatiereComboBox->setObjectName("supM_nomMatiereComboBox");

        formLayout_18->setWidget(1, QFormLayout::FieldRole, supM_nomMatiereComboBox);

        inscMNP_parcoursLabel_3 = new QLabel(formLayoutWidget_7);
        inscMNP_parcoursLabel_3->setObjectName("inscMNP_parcoursLabel_3");

        formLayout_18->setWidget(2, QFormLayout::LabelRole, inscMNP_parcoursLabel_3);

        supM_Supprimer = new QPushButton(formLayoutWidget_7);
        supM_Supprimer->setObjectName("supM_Supprimer");

        formLayout_18->setWidget(3, QFormLayout::SpanningRole, supM_Supprimer);

        comboBox = new QComboBox(formLayoutWidget_7);
        comboBox->setObjectName("comboBox");

        formLayout_18->setWidget(2, QFormLayout::FieldRole, comboBox);

        ongletSuppression->addTab(sup_Mention, QString());
        sup_Transaction = new QWidget();
        sup_Transaction->setObjectName("sup_Transaction");
        layoutWidget_9 = new QWidget(sup_Transaction);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(120, 50, 451, 146));
        formLayout_19 = new QFormLayout(layoutWidget_9);
        formLayout_19->setSpacing(6);
        formLayout_19->setContentsMargins(11, 11, 11, 11);
        formLayout_19->setObjectName("formLayout_19");
        formLayout_19->setContentsMargins(0, 0, 0, 0);
        SupE_mentionLabel_2 = new QLabel(layoutWidget_9);
        SupE_mentionLabel_2->setObjectName("SupE_mentionLabel_2");

        formLayout_19->setWidget(0, QFormLayout::LabelRole, SupE_mentionLabel_2);

        SupE_mentionComboBox_2 = new QComboBox(layoutWidget_9);
        SupE_mentionComboBox_2->addItem(QString());
        SupE_mentionComboBox_2->setObjectName("SupE_mentionComboBox_2");

        formLayout_19->setWidget(0, QFormLayout::FieldRole, SupE_mentionComboBox_2);

        SupE_niveauLabel_2 = new QLabel(layoutWidget_9);
        SupE_niveauLabel_2->setObjectName("SupE_niveauLabel_2");

        formLayout_19->setWidget(1, QFormLayout::LabelRole, SupE_niveauLabel_2);

        SupE_niveauComboBox_2 = new QComboBox(layoutWidget_9);
        SupE_niveauComboBox_2->addItem(QString());
        SupE_niveauComboBox_2->setObjectName("SupE_niveauComboBox_2");

        formLayout_19->setWidget(1, QFormLayout::FieldRole, SupE_niveauComboBox_2);

        SupE_parcoursLabel_2 = new QLabel(layoutWidget_9);
        SupE_parcoursLabel_2->setObjectName("SupE_parcoursLabel_2");

        formLayout_19->setWidget(2, QFormLayout::LabelRole, SupE_parcoursLabel_2);

        SupE_parcoursComboBox_2 = new QComboBox(layoutWidget_9);
        SupE_parcoursComboBox_2->addItem(QString());
        SupE_parcoursComboBox_2->setObjectName("SupE_parcoursComboBox_2");

        formLayout_19->setWidget(2, QFormLayout::FieldRole, SupE_parcoursComboBox_2);

        SupE_codageLabel_2 = new QLabel(layoutWidget_9);
        SupE_codageLabel_2->setObjectName("SupE_codageLabel_2");

        formLayout_19->setWidget(3, QFormLayout::LabelRole, SupE_codageLabel_2);

        SupE_codageComboBox_2 = new QComboBox(layoutWidget_9);
        SupE_codageComboBox_2->addItem(QString());
        SupE_codageComboBox_2->setObjectName("SupE_codageComboBox_2");

        formLayout_19->setWidget(3, QFormLayout::FieldRole, SupE_codageComboBox_2);

        SupE_Chercher_2 = new QPushButton(layoutWidget_9);
        SupE_Chercher_2->setObjectName("SupE_Chercher_2");

        formLayout_19->setWidget(4, QFormLayout::SpanningRole, SupE_Chercher_2);

        ongletSuppression->addTab(sup_Transaction, QString());
        stackedWidget->addWidget(Suppression);
        layoutWidget = new QWidget(centralWidget);
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

        FenetrePrincipale->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(FenetrePrincipale);
        mainToolBar->setObjectName("mainToolBar");
        FenetrePrincipale->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FenetrePrincipale);
        statusBar->setObjectName("statusBar");
        FenetrePrincipale->setStatusBar(statusBar);
        menuBar = new QMenuBar(FenetrePrincipale);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 956, 21));
        FenetrePrincipale->setMenuBar(menuBar);

        retranslateUi(FenetrePrincipale);

        stackedWidget->setCurrentIndex(5);
        ongletConsultation->setCurrentIndex(0);
        lstEt_idEtudiantComboBox->setCurrentIndex(0);
        lstEt_mentionComboBox->setCurrentIndex(0);
        ongletInsertion->setCurrentIndex(0);
        ongletModification->setCurrentIndex(0);
        ongletSuppression->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(FenetrePrincipale);
    } // setupUi

    void retranslateUi(QMainWindow *FenetrePrincipale)
    {
        FenetrePrincipale->setWindowTitle(QCoreApplication::translate("FenetrePrincipale", "FenetrePrincipale", nullptr));
        nc_Message->setText(QCoreApplication::translate("FenetrePrincipale", "Vous devez vous connecter avant de pouvoir\n"
"   acc\303\251der aux differentes fonctionnalit\303\251s", nullptr));
        Bvn_Message1->setText(QCoreApplication::translate("FenetrePrincipale", "              Bienvenue sur \n"
"    l'outil de gestion d'\303\251l\303\250ves !", nullptr));
        Bvn_Message2->setText(QCoreApplication::translate("FenetrePrincipale", "- Vous pouvez cliquer sur les boutons \303\240 gauche de la fen\303\252tre pour parcourir\n"
"les diff\303\251rentes fonctionnalit\303\251s du programme\n"
"\n"
"- Vous devez vous connecter en tant qu'admin avant d'\303\252tre autoris\303\251 \303\240\n"
"parcourir le programme", nullptr));
        Bvn_aide->setText(QCoreApplication::translate("FenetrePrincipale", "Aide", nullptr));
        sc_Message->setText(QCoreApplication::translate("FenetrePrincipale", "Authentifiez vous pour acc\303\251der \303\240 l'application", nullptr));
        sc_Deconnexion->setText(QCoreApplication::translate("FenetrePrincipale", "Se deconnecter", nullptr));
        sc_Connexion->setText(QCoreApplication::translate("FenetrePrincipale", "Se connecter", nullptr));
        motDePasseLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Mot de passe	: ", nullptr));
        utilisateurLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Utilisateur	:", nullptr));
        sc_motDePasseLineEdit->setText(QString());
        Bvn_aide_2->setText(QCoreApplication::translate("FenetrePrincipale", "Aide", nullptr));
        QTableWidgetItem *___qtablewidgetitem = lstE_listeEtudiant->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("FenetrePrincipale", "Num\303\251ro", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = lstE_listeEtudiant->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("FenetrePrincipale", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = lstE_listeEtudiant->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("FenetrePrincipale", "Pr\303\251nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = lstE_listeEtudiant->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("FenetrePrincipale", "Date de naissance", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = lstE_listeEtudiant->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("FenetrePrincipale", "Codage", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = lstE_listeEtudiant->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("FenetrePrincipale", "Passant ?", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = lstE_listeEtudiant->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("FenetrePrincipale", "Num\303\251ro", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = lstE_listeEtudiant->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("FenetrePrincipale", "Adresse", nullptr));
        lstE_Message->setText(QCoreApplication::translate("FenetrePrincipale", "Entrez la classe \303\240 chercher ", nullptr));
        lstEt_mentionLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Mention de l'\303\251tudiant	:", nullptr));
        lstEt_nomEtudiantCheckBox->setText(QString());
        lstEt_idEtudiantCheckBox->setText(QString());
        lstEt_niveauLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Niveau de l'\303\251tudiant	:", nullptr));
        lstEt_parcoursComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez le parcours de l'\303\251tudiant :", nullptr));

        lstEt_niveauComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Renseignez le niveau de l'\303\251tudiant :", nullptr));

        lstEt_idEtudiantLabel->setText(QCoreApplication::translate("FenetrePrincipale", "ID de l'\303\251tudiant		:", nullptr));
        lstEt_idEtudiantComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez l'id de l'\303\251tudiant :", nullptr));

        lstEt_parcoursLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Parcours de l'\303\251tudiant	:", nullptr));
        lstEt_niveauCheckBox->setText(QString());
        lstEt_mentionCheckBox->setText(QString());
        lstEt_parcoursCheckBox->setText(QString());
        lstEt_nomEtudiantLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Nom de l'\303\251tudiant	:", nullptr));
        lstEt_mentionComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez la mention de l'\303\251tudiant :", nullptr));

        lstEt_Rechercher->setText(QCoreApplication::translate("FenetrePrincipale", "Rechercher", nullptr));
        ongletConsultation->setTabText(ongletConsultation->indexOf(listeEleve), QCoreApplication::translate("FenetrePrincipale", "Liste des \303\251l\303\250ves", nullptr));
        lstT_mentionLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Mention de l'\303\251tudiant	:", nullptr));
        lstT_mentionComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez la mention de l'\303\251tudiant :", nullptr));

        lstT_niveauLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Niveau de l'\303\251tudiant	:", nullptr));
        lstT_niveauComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Renseignez le niveau de l'\303\251tudiant :", nullptr));

        lstT_parcoursLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Parcours de l'\303\251tudiant	:", nullptr));
        lstT_parcoursComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez le parcours de l'\303\251tudiant :", nullptr));

        lstT_codageLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Codage de l'\303\251tudiant	:", nullptr));
        lstT_codageComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez le codage de l'\303\251tudiant :", nullptr));

        lstT_Enregister->setText(QCoreApplication::translate("FenetrePrincipale", "PushButton", nullptr));
        lstT_idFactureLabel->setText(QCoreApplication::translate("FenetrePrincipale", "ID de facture		:", nullptr));
        ongletConsultation->setTabText(ongletConsultation->indexOf(listeTransaction), QCoreApplication::translate("FenetrePrincipale", "Page", nullptr));
        inscEt_Message->setText(QCoreApplication::translate("FenetrePrincipale", "Entrez les informations du nouveau/nouvelle \303\251tudiant(e)", nullptr));
        inscEt_nomLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Nom		 :", nullptr));
        inscEt_prenomLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Prenom		 :", nullptr));
        inscEt_genreLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Genre		 :", nullptr));
        inscEt_dateDeNaissanceLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Date de naissance	 :", nullptr));
        inscEt_genreComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "- Non sp\303\251cifi\303\251 -", nullptr));
        inscEt_genreComboBox->setItemText(1, QCoreApplication::translate("FenetrePrincipale", "Homme", nullptr));
        inscEt_genreComboBox->setItemText(2, QCoreApplication::translate("FenetrePrincipale", "Femme", nullptr));

        inscEt_mentionLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Mention		 :", nullptr));
        inscEt_niveauLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Niveau		 :", nullptr));
        inscEt_parcoursLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Parcours		 :", nullptr));
        inscEt_codageLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Codage		 :", nullptr));
        inscEt_telephonePhoneLabel->setText(QCoreApplication::translate("FenetrePrincipale", "T\303\251l\303\251phone	 :", nullptr));
        inscEt_adresseLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Adresse 		 :", nullptr));
        inscEt_Enregistrer->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrer", nullptr));
        inscEt_estPassantLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Est passant	 :", nullptr));
        inscEt_estPassantCheckBox->setText(QCoreApplication::translate("FenetrePrincipale", "Oui cauch\303\251 / Non par d\303\251faut", nullptr));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_Etudiant), QCoreApplication::translate("FenetrePrincipale", "Nouveau/lle \303\251tudiant", nullptr));
        inscAchat_Message->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrement d'un achat", nullptr));
        inscAchat_formationsLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Nos formations :", nullptr));
        inscAchat_servicesLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Les services disponibles :", nullptr));
        inscAchat_AjFormation->setText(QCoreApplication::translate("FenetrePrincipale", "Ajouter", nullptr));
        inscAchat_AjService->setText(QCoreApplication::translate("FenetrePrincipale", "Ajouter", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = inscAchat_commandeTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("FenetrePrincipale", "Designation", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = inscAchat_commandeTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("FenetrePrincipale", "Quantit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = inscAchat_commandeTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("FenetrePrincipale", "Prix", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = inscAchat_commandeTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("FenetrePrincipale", "Montant", nullptr));
        inscAchat_identifiantLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Identifiant de l'\303\251tudiant	:", nullptr));
        inscAchat_identifiantComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez l'identifiant de l'\303\251tudiant :", nullptr));

        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_Achat), QCoreApplication::translate("FenetrePrincipale", "Achats", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("FenetrePrincipale", "Facture n\302\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("FenetrePrincipale", "Montant", nullptr));
        inscP_identifiantComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez l'identifiant de l'\303\251tudiant :", nullptr));

        inscP_identifiantLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Identifiant de l'\303\251tudiant	:", nullptr));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_payement), QCoreApplication::translate("FenetrePrincipale", "Payements", nullptr));
        inscFM_formLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Nom de la nouvelle formation	:", nullptr));
        inscFM_srvLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Nom du nouveau service		:", nullptr));
        inscFM_Enregistrer->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrer", nullptr));
        inscFM_Enregistrer_2->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrer", nullptr));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_Form_Msrv), QCoreApplication::translate("FenetrePrincipale", "Formations et services", nullptr));
        inscNv_mentionLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Mention	 :", nullptr));
        InscNv_niveauLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Niveau	:", nullptr));
        InscNv_Enregistrer->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrer", nullptr));
        inscNv_Message->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrer un nouveau niveau", nullptr));
        inscPrc_mentionLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Mention	 :", nullptr));
        inscPrc_parcoursLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Parcours	:", nullptr));
        inscPrc_Enregistrer->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrer", nullptr));
        InscMt_nomMentionLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Mention	 :", nullptr));
        InscMt_Enregistrer->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrer", nullptr));
        inscPrc_Message->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrer un nouveau parcours", nullptr));
        inscMt_Message->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrer une nouvelle mention", nullptr));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_MentionNvPrc), QCoreApplication::translate("FenetrePrincipale", "Mt, nv, prc", nullptr));
        inscA_motDePasseLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Mot de passe	:", nullptr));
        inscA_enregistrer->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrer", nullptr));
        inscA_nomDeLAdminLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Nom de l'admin	:", nullptr));
        inscA_Message->setText(QCoreApplication::translate("FenetrePrincipale", "Renseignez les identifications du nouveau admin", nullptr));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_Admin), QCoreApplication::translate("FenetrePrincipale", "Ajouter un Admin", nullptr));
        modEt_Message->setText(QCoreApplication::translate("FenetrePrincipale", "Renseignez La classe et l'\303\251l\303\250ve de l'\303\251tudiant \303\240 chercher", nullptr));
        modEt_nomLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Nom		 :", nullptr));
        modEt_prenomLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Prenom		 :", nullptr));
        modEt_genreLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Genre		 :", nullptr));
        modEt_genreComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "- Non sp\303\251cifi\303\251 -", nullptr));
        modEt_genreComboBox->setItemText(1, QCoreApplication::translate("FenetrePrincipale", "Homme", nullptr));
        modEt_genreComboBox->setItemText(2, QCoreApplication::translate("FenetrePrincipale", "Femme", nullptr));

        modEt_dateDeNaissanceLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Date de naissance	 :", nullptr));
        modEt_mentionLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Mention		 :", nullptr));
        modEt_niveauLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Niveau		 :", nullptr));
        modEt_parcoursLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Parcours		 :", nullptr));
        modEt_codageLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Codage		 :", nullptr));
        modEt_telephonePhoneLabel->setText(QCoreApplication::translate("FenetrePrincipale", "T\303\251l\303\251phone	 :", nullptr));
        modEt_adresseLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Adresse 		:", nullptr));
        modEt_Enregistrer->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrer", nullptr));
        modEt_estPassantLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Est passant	 :", nullptr));
        modEt_estPassantCheckBox->setText(QCoreApplication::translate("FenetrePrincipale", "Oui cauch\303\251 / Non par d\303\251faut", nullptr));
        modEt_identifiantLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Identifiant de l'\303\251tudiant	:", nullptr));
        modEt_identifiantComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez l'identifiant de l'\303\251tudiant :", nullptr));

        ongletModification->setTabText(ongletModification->indexOf(mod_eleve), QCoreApplication::translate("FenetrePrincipale", "Modier les information d'un \303\251l\303\250ve", nullptr));
        modE_mentionLabel_2->setText(QCoreApplication::translate("FenetrePrincipale", "Mention de l'\303\251tudiant	:", nullptr));
        modE_mentionComboBox_2->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez la mention de l'\303\251tudiant :", nullptr));

        modE_niveauLabel_2->setText(QCoreApplication::translate("FenetrePrincipale", "Niveau de l'\303\251tudiant	:", nullptr));
        modE_niveauComboBox_2->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Renseignez le niveau de l'\303\251tudiant :", nullptr));

        modE_parcoursLabel_2->setText(QCoreApplication::translate("FenetrePrincipale", "Parcours de l'\303\251tudiant	:", nullptr));
        modE_parcoursComboBox_2->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez le parcours de l'\303\251tudiant :", nullptr));

        modE_codageLabel_2->setText(QCoreApplication::translate("FenetrePrincipale", "Codage de l'\303\251tudiant	:", nullptr));
        modE_codageComboBox_2->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez le codage de l'\303\251tudiant :", nullptr));

        modE_Chercher_2->setText(QCoreApplication::translate("FenetrePrincipale", "Chercher", nullptr));
        ongletModification->setTabText(ongletModification->indexOf(Mod_note), QCoreApplication::translate("FenetrePrincipale", "Modifier la note d'un \303\251l\303\250ve", nullptr));
        label->setText(QCoreApplication::translate("FenetrePrincipale", "Veuillez renseigner les informations de l'\303\251l\303\250ve a effacer", nullptr));
        SupE_mentionLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Mention de l'\303\251tudiant	:", nullptr));
        SupE_mentionComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez la mention de l'\303\251tudiant :", nullptr));

        SupE_niveauLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Niveau de l'\303\251tudiant	:", nullptr));
        SupE_niveauComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Renseignez le niveau de l'\303\251tudiant :", nullptr));

        SupE_parcoursLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Parcours de l'\303\251tudiant	:", nullptr));
        SupE_parcoursComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez le parcours de l'\303\251tudiant :", nullptr));

        SupE_codageLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Codage de l'\303\251tudiant	:", nullptr));
        SupE_codageComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez le codage de l'\303\251tudiant :", nullptr));

        SupE_Chercher->setText(QCoreApplication::translate("FenetrePrincipale", "Supprimer", nullptr));
        ongletSuppression->setTabText(ongletSuppression->indexOf(sup_Etudiants), QCoreApplication::translate("FenetrePrincipale", "Supprimer un \303\251l\303\250ve", nullptr));
        supM_Message->setText(QCoreApplication::translate("FenetrePrincipale", "Entree la mati\303\250re a supprimer\n"
"        Attention la suppr\303\251ssion est d\303\251finitive !", nullptr));
        inscMNP_nomMentionLabel_3->setText(QCoreApplication::translate("FenetrePrincipale", "Mention	 :", nullptr));
        inscMNP_niveauLabel_3->setText(QCoreApplication::translate("FenetrePrincipale", "Niveau	:", nullptr));
        inscMNP_parcoursLabel_3->setText(QCoreApplication::translate("FenetrePrincipale", "Parcours	:", nullptr));
        supM_Supprimer->setText(QCoreApplication::translate("FenetrePrincipale", "Supprimer", nullptr));
        ongletSuppression->setTabText(ongletSuppression->indexOf(sup_Mention), QCoreApplication::translate("FenetrePrincipale", "Supprimer une mati\303\250re", nullptr));
        SupE_mentionLabel_2->setText(QCoreApplication::translate("FenetrePrincipale", "Mention de l'\303\251tudiant	:", nullptr));
        SupE_mentionComboBox_2->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez la mention de l'\303\251tudiant :", nullptr));

        SupE_niveauLabel_2->setText(QCoreApplication::translate("FenetrePrincipale", "Niveau de l'\303\251tudiant	:", nullptr));
        SupE_niveauComboBox_2->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Renseignez le niveau de l'\303\251tudiant :", nullptr));

        SupE_parcoursLabel_2->setText(QCoreApplication::translate("FenetrePrincipale", "Parcours de l'\303\251tudiant	:", nullptr));
        SupE_parcoursComboBox_2->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez le parcours de l'\303\251tudiant :", nullptr));

        SupE_codageLabel_2->setText(QCoreApplication::translate("FenetrePrincipale", "Codage de l'\303\251tudiant	:", nullptr));
        SupE_codageComboBox_2->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez le codage de l'\303\251tudiant :", nullptr));

        SupE_Chercher_2->setText(QCoreApplication::translate("FenetrePrincipale", "Supprimer", nullptr));
        ongletSuppression->setTabText(ongletSuppression->indexOf(sup_Transaction), QCoreApplication::translate("FenetrePrincipale", "Supprimer des achats", nullptr));
        tl_SeConnecter->setText(QCoreApplication::translate("FenetrePrincipale", "Se connecter", nullptr));
        tl_Lister->setText(QCoreApplication::translate("FenetrePrincipale", "Consulter les informations", nullptr));
        tl_Insertion->setText(QCoreApplication::translate("FenetrePrincipale", "Insertions", nullptr));
        tl_Modification->setText(QCoreApplication::translate("FenetrePrincipale", "Modifications et mise \303\240 jour", nullptr));
        tl_Suppression->setText(QCoreApplication::translate("FenetrePrincipale", "Suppression d'une entr\303\251e", nullptr));
        tl_Quitter->setText(QCoreApplication::translate("FenetrePrincipale", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FenetrePrincipale: public Ui_FenetrePrincipale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREPRINCIPALE_H
