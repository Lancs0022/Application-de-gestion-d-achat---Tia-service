/********************************************************************************
** Form generated from reading UI file 'fenetreprincipale.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREPRINCIPALE_H
#define UI_FENETREPRINCIPALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
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
    QWidget *layoutWidget_4;
    QFormLayout *formLayout_15;
    QLabel *lstEt_mentionLabel;
    QComboBox *lstEt_mentionComboBox;
    QLabel *lstEt_niveauLabel;
    QComboBox *lstEt_niveauComboBox;
    QLabel *lstEt_parcoursLabel;
    QComboBox *lstEt_parcoursComboBox;
    QLabel *lstEt_codageLabel;
    QComboBox *lstEt_codageComboBox;
    QPushButton *lstEt_Enregister;
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
    QSpinBox *inscEt_codageLineEdit;
    QLabel *inscEt_telephonePhoneLabel;
    QLineEdit *inscEt_telephoneLineEdit;
    QLabel *inscEt_adresseLabel;
    QTextEdit *inscEt_adresseTextEdit;
    QPushButton *inscEt_Enregistrer;
    QLabel *inscEt_estPassantLabel;
    QCheckBox *inscEt_estPassantCheckBox;
    QWidget *insc_Achat;
    QWidget *layoutWidget_2;
    QFormLayout *formLayout_6;
    QLabel *inscAchat_identifiantLabel;
    QComboBox *inscAchat_identifiantComboBox;
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
    QWidget *insc_payement;
    QWidget *layoutWidget_3;
    QFormLayout *formLayout_14;
    QLabel *inscP_mentionLabel;
    QComboBox *inscP_mentionComboBox;
    QLabel *inscP_niveauLabel;
    QComboBox *inscP_niveauComboBox;
    QLabel *inscP_parcoursLabel;
    QComboBox *inscP_parcoursComboBox;
    QLabel *inscP_codageLabel;
    QComboBox *inscP_codageComboBox;
    QTableWidget *tableWidget_3;
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
    QLabel *modE_Message2_2;
    QWidget *layoutWidget_6;
    QFormLayout *formLayout_8;
    QLabel *modE_mentionLabel;
    QComboBox *modE_mentionComboBox;
    QLabel *modE_niveauLabel;
    QComboBox *modE_niveauComboBox;
    QLabel *modE_parcoursLabel;
    QComboBox *modE_parcoursComboBox;
    QLabel *modE_codageLabel;
    QComboBox *modE_codageComboBox;
    QPushButton *modE_Chercher;
    QWidget *formLayoutWidget_12;
    QFormLayout *formLayout_10;
    QLabel *inscEt_nomLabel_2;
    QLineEdit *inscEt_nomLineEdit_2;
    QLabel *inscEt_prenomLabel_2;
    QLineEdit *inscEt_prenomLineEdit_2;
    QLabel *inscEt_genreLabel_2;
    QLabel *inscEt_dateDeNaissanceLabel_2;
    QDateEdit *inscEt_dateDeNaissanceDateEdit_2;
    QComboBox *inscEt_genreComboBox_2;
    QLabel *inscEt_mentionLabel_2;
    QComboBox *inscEt_mentionComboBox_2;
    QLabel *inscEt_niveauLabel_2;
    QComboBox *inscEt_niveauComboBox_2;
    QLabel *inscEt_parcoursLabel_2;
    QComboBox *inscEt_parcoursLineEdit_2;
    QLabel *inscEt_codageLabel_2;
    QSpinBox *inscEt_codageLineEdit_2;
    QLabel *inscEt_telephonePhoneLabel_2;
    QLineEdit *inscEt_telephoneLineEdit_2;
    QLabel *inscEt_adresseLabel_2;
    QTextEdit *inscEt_adresseTextEdit_2;
    QPushButton *inscEt_Enregistrer_2;
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
            FenetrePrincipale->setObjectName(QStringLiteral("FenetrePrincipale"));
        FenetrePrincipale->resize(956, 652);
        FenetrePrincipale->setAutoFillBackground(true);
        centralWidget = new QWidget(FenetrePrincipale);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(220, 0, 731, 621));
        NonConnecte = new QWidget();
        NonConnecte->setObjectName(QStringLiteral("NonConnecte"));
        nc_Message = new QLabel(NonConnecte);
        nc_Message->setObjectName(QStringLiteral("nc_Message"));
        nc_Message->setGeometry(QRect(180, 140, 331, 141));
        stackedWidget->addWidget(NonConnecte);
        Bienvenue = new QWidget();
        Bienvenue->setObjectName(QStringLiteral("Bienvenue"));
        Bvn_Message1 = new QLabel(Bienvenue);
        Bvn_Message1->setObjectName(QStringLiteral("Bvn_Message1"));
        Bvn_Message1->setGeometry(QRect(220, 50, 221, 101));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(10);
        font.setBold(true);
        Bvn_Message1->setFont(font);
        Bvn_Message2 = new QLabel(Bienvenue);
        Bvn_Message2->setObjectName(QStringLiteral("Bvn_Message2"));
        Bvn_Message2->setGeometry(QRect(120, 170, 441, 131));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(9);
        Bvn_Message2->setFont(font1);
        Bvn_aide = new QPushButton(Bienvenue);
        Bvn_aide->setObjectName(QStringLiteral("Bvn_aide"));
        Bvn_aide->setGeometry(QRect(640, 550, 91, 41));
        stackedWidget->addWidget(Bienvenue);
        Connexion = new QWidget();
        Connexion->setObjectName(QStringLiteral("Connexion"));
        sc_Message = new QLabel(Connexion);
        sc_Message->setObjectName(QStringLiteral("sc_Message"));
        sc_Message->setGeometry(QRect(250, 110, 251, 41));
        formLayoutWidget = new QWidget(Connexion);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(220, 200, 291, 141));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        sc_Deconnexion = new QPushButton(formLayoutWidget);
        sc_Deconnexion->setObjectName(QStringLiteral("sc_Deconnexion"));

        formLayout->setWidget(6, QFormLayout::SpanningRole, sc_Deconnexion);

        sc_Connexion = new QPushButton(formLayoutWidget);
        sc_Connexion->setObjectName(QStringLiteral("sc_Connexion"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, sc_Connexion);

        motDePasseLabel = new QLabel(formLayoutWidget);
        motDePasseLabel->setObjectName(QStringLiteral("motDePasseLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, motDePasseLabel);

        utilisateurLabel = new QLabel(formLayoutWidget);
        utilisateurLabel->setObjectName(QStringLiteral("utilisateurLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, utilisateurLabel);

        sc_utilisateurLineEdit = new QLineEdit(formLayoutWidget);
        sc_utilisateurLineEdit->setObjectName(QStringLiteral("sc_utilisateurLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, sc_utilisateurLineEdit);

        sc_motDePasseLineEdit = new QLineEdit(formLayoutWidget);
        sc_motDePasseLineEdit->setObjectName(QStringLiteral("sc_motDePasseLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, sc_motDePasseLineEdit);

        Bvn_aide_2 = new QPushButton(Connexion);
        Bvn_aide_2->setObjectName(QStringLiteral("Bvn_aide_2"));
        Bvn_aide_2->setGeometry(QRect(640, 550, 91, 41));
        stackedWidget->addWidget(Connexion);
        ConsulterInfos = new QWidget();
        ConsulterInfos->setObjectName(QStringLiteral("ConsulterInfos"));
        ongletConsultation = new QTabWidget(ConsulterInfos);
        ongletConsultation->setObjectName(QStringLiteral("ongletConsultation"));
        ongletConsultation->setGeometry(QRect(0, 0, 731, 621));
        listeEleve = new QWidget();
        listeEleve->setObjectName(QStringLiteral("listeEleve"));
        lstE_listeEtudiant = new QTableWidget(listeEleve);
        if (lstE_listeEtudiant->columnCount() < 4)
            lstE_listeEtudiant->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        lstE_listeEtudiant->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        lstE_listeEtudiant->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        lstE_listeEtudiant->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        lstE_listeEtudiant->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        lstE_listeEtudiant->setObjectName(QStringLiteral("lstE_listeEtudiant"));
        lstE_listeEtudiant->setGeometry(QRect(10, 210, 711, 381));
        lstE_Message = new QLabel(listeEleve);
        lstE_Message->setObjectName(QStringLiteral("lstE_Message"));
        lstE_Message->setGeometry(QRect(280, 10, 241, 16));
        layoutWidget_4 = new QWidget(listeEleve);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(140, 40, 441, 146));
        formLayout_15 = new QFormLayout(layoutWidget_4);
        formLayout_15->setSpacing(6);
        formLayout_15->setContentsMargins(11, 11, 11, 11);
        formLayout_15->setObjectName(QStringLiteral("formLayout_15"));
        formLayout_15->setContentsMargins(0, 0, 0, 0);
        lstEt_mentionLabel = new QLabel(layoutWidget_4);
        lstEt_mentionLabel->setObjectName(QStringLiteral("lstEt_mentionLabel"));

        formLayout_15->setWidget(0, QFormLayout::LabelRole, lstEt_mentionLabel);

        lstEt_mentionComboBox = new QComboBox(layoutWidget_4);
        lstEt_mentionComboBox->setObjectName(QStringLiteral("lstEt_mentionComboBox"));

        formLayout_15->setWidget(0, QFormLayout::FieldRole, lstEt_mentionComboBox);

        lstEt_niveauLabel = new QLabel(layoutWidget_4);
        lstEt_niveauLabel->setObjectName(QStringLiteral("lstEt_niveauLabel"));

        formLayout_15->setWidget(1, QFormLayout::LabelRole, lstEt_niveauLabel);

        lstEt_niveauComboBox = new QComboBox(layoutWidget_4);
        lstEt_niveauComboBox->setObjectName(QStringLiteral("lstEt_niveauComboBox"));

        formLayout_15->setWidget(1, QFormLayout::FieldRole, lstEt_niveauComboBox);

        lstEt_parcoursLabel = new QLabel(layoutWidget_4);
        lstEt_parcoursLabel->setObjectName(QStringLiteral("lstEt_parcoursLabel"));

        formLayout_15->setWidget(2, QFormLayout::LabelRole, lstEt_parcoursLabel);

        lstEt_parcoursComboBox = new QComboBox(layoutWidget_4);
        lstEt_parcoursComboBox->setObjectName(QStringLiteral("lstEt_parcoursComboBox"));

        formLayout_15->setWidget(2, QFormLayout::FieldRole, lstEt_parcoursComboBox);

        lstEt_codageLabel = new QLabel(layoutWidget_4);
        lstEt_codageLabel->setObjectName(QStringLiteral("lstEt_codageLabel"));

        formLayout_15->setWidget(3, QFormLayout::LabelRole, lstEt_codageLabel);

        lstEt_codageComboBox = new QComboBox(layoutWidget_4);
        lstEt_codageComboBox->setObjectName(QStringLiteral("lstEt_codageComboBox"));

        formLayout_15->setWidget(3, QFormLayout::FieldRole, lstEt_codageComboBox);

        lstEt_Enregister = new QPushButton(layoutWidget_4);
        lstEt_Enregister->setObjectName(QStringLiteral("lstEt_Enregister"));

        formLayout_15->setWidget(4, QFormLayout::SpanningRole, lstEt_Enregister);

        ongletConsultation->addTab(listeEleve, QString());
        listeTransaction = new QWidget();
        listeTransaction->setObjectName(QStringLiteral("listeTransaction"));
        tableWidget_2 = new QTableWidget(listeTransaction);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 240, 701, 331));
        layoutWidget_5 = new QWidget(listeTransaction);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(140, 40, 441, 176));
        formLayout_16 = new QFormLayout(layoutWidget_5);
        formLayout_16->setSpacing(6);
        formLayout_16->setContentsMargins(11, 11, 11, 11);
        formLayout_16->setObjectName(QStringLiteral("formLayout_16"));
        formLayout_16->setContentsMargins(0, 0, 0, 0);
        lstT_mentionLabel = new QLabel(layoutWidget_5);
        lstT_mentionLabel->setObjectName(QStringLiteral("lstT_mentionLabel"));

        formLayout_16->setWidget(0, QFormLayout::LabelRole, lstT_mentionLabel);

        lstT_mentionComboBox = new QComboBox(layoutWidget_5);
        lstT_mentionComboBox->setObjectName(QStringLiteral("lstT_mentionComboBox"));

        formLayout_16->setWidget(0, QFormLayout::FieldRole, lstT_mentionComboBox);

        lstT_niveauLabel = new QLabel(layoutWidget_5);
        lstT_niveauLabel->setObjectName(QStringLiteral("lstT_niveauLabel"));

        formLayout_16->setWidget(1, QFormLayout::LabelRole, lstT_niveauLabel);

        lstT_niveauComboBox = new QComboBox(layoutWidget_5);
        lstT_niveauComboBox->setObjectName(QStringLiteral("lstT_niveauComboBox"));

        formLayout_16->setWidget(1, QFormLayout::FieldRole, lstT_niveauComboBox);

        lstT_parcoursLabel = new QLabel(layoutWidget_5);
        lstT_parcoursLabel->setObjectName(QStringLiteral("lstT_parcoursLabel"));

        formLayout_16->setWidget(2, QFormLayout::LabelRole, lstT_parcoursLabel);

        lstT_parcoursComboBox = new QComboBox(layoutWidget_5);
        lstT_parcoursComboBox->setObjectName(QStringLiteral("lstT_parcoursComboBox"));

        formLayout_16->setWidget(2, QFormLayout::FieldRole, lstT_parcoursComboBox);

        lstT_codageLabel = new QLabel(layoutWidget_5);
        lstT_codageLabel->setObjectName(QStringLiteral("lstT_codageLabel"));

        formLayout_16->setWidget(3, QFormLayout::LabelRole, lstT_codageLabel);

        lstT_codageComboBox = new QComboBox(layoutWidget_5);
        lstT_codageComboBox->setObjectName(QStringLiteral("lstT_codageComboBox"));

        formLayout_16->setWidget(3, QFormLayout::FieldRole, lstT_codageComboBox);

        lstT_Enregister = new QPushButton(layoutWidget_5);
        lstT_Enregister->setObjectName(QStringLiteral("lstT_Enregister"));

        formLayout_16->setWidget(5, QFormLayout::SpanningRole, lstT_Enregister);

        lstT_idFactureLabel = new QLabel(layoutWidget_5);
        lstT_idFactureLabel->setObjectName(QStringLiteral("lstT_idFactureLabel"));

        formLayout_16->setWidget(4, QFormLayout::LabelRole, lstT_idFactureLabel);

        lstT_idFactureComboBox = new QComboBox(layoutWidget_5);
        lstT_idFactureComboBox->setObjectName(QStringLiteral("lstT_idFactureComboBox"));

        formLayout_16->setWidget(4, QFormLayout::FieldRole, lstT_idFactureComboBox);

        ongletConsultation->addTab(listeTransaction, QString());
        stackedWidget->addWidget(ConsulterInfos);
        Insertion = new QWidget();
        Insertion->setObjectName(QStringLiteral("Insertion"));
        ongletInsertion = new QTabWidget(Insertion);
        ongletInsertion->setObjectName(QStringLiteral("ongletInsertion"));
        ongletInsertion->setGeometry(QRect(0, 0, 721, 630));
        ongletInsertion->setTabShape(QTabWidget::Rounded);
        ongletInsertion->setElideMode(Qt::ElideNone);
        ongletInsertion->setDocumentMode(false);
        ongletInsertion->setTabsClosable(false);
        ongletInsertion->setMovable(false);
//        ongletInsertion->setTabBarAutoHide(true);
        insc_Etudiant = new QWidget();
        insc_Etudiant->setObjectName(QStringLiteral("insc_Etudiant"));
        inscEt_Message = new QLabel(insc_Etudiant);
        inscEt_Message->setObjectName(QStringLiteral("inscEt_Message"));
        inscEt_Message->setGeometry(QRect(210, 40, 311, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Calibri"));
        inscEt_Message->setFont(font2);
        formLayoutWidget_11 = new QWidget(insc_Etudiant);
        formLayoutWidget_11->setObjectName(QStringLiteral("formLayoutWidget_11"));
        formLayoutWidget_11->setGeometry(QRect(160, 100, 411, 404));
        formLayout_9 = new QFormLayout(formLayoutWidget_11);
        formLayout_9->setSpacing(6);
        formLayout_9->setContentsMargins(11, 11, 11, 11);
        formLayout_9->setObjectName(QStringLiteral("formLayout_9"));
        formLayout_9->setContentsMargins(0, 0, 0, 0);
        inscEt_nomLabel = new QLabel(formLayoutWidget_11);
        inscEt_nomLabel->setObjectName(QStringLiteral("inscEt_nomLabel"));

        formLayout_9->setWidget(0, QFormLayout::LabelRole, inscEt_nomLabel);

        inscEt_nomLineEdit = new QLineEdit(formLayoutWidget_11);
        inscEt_nomLineEdit->setObjectName(QStringLiteral("inscEt_nomLineEdit"));

        formLayout_9->setWidget(0, QFormLayout::FieldRole, inscEt_nomLineEdit);

        inscEt_prenomLabel = new QLabel(formLayoutWidget_11);
        inscEt_prenomLabel->setObjectName(QStringLiteral("inscEt_prenomLabel"));

        formLayout_9->setWidget(1, QFormLayout::LabelRole, inscEt_prenomLabel);

        inscEt_prenomLineEdit = new QLineEdit(formLayoutWidget_11);
        inscEt_prenomLineEdit->setObjectName(QStringLiteral("inscEt_prenomLineEdit"));

        formLayout_9->setWidget(1, QFormLayout::FieldRole, inscEt_prenomLineEdit);

        inscEt_genreLabel = new QLabel(formLayoutWidget_11);
        inscEt_genreLabel->setObjectName(QStringLiteral("inscEt_genreLabel"));

        formLayout_9->setWidget(2, QFormLayout::LabelRole, inscEt_genreLabel);

        inscEt_dateDeNaissanceLabel = new QLabel(formLayoutWidget_11);
        inscEt_dateDeNaissanceLabel->setObjectName(QStringLiteral("inscEt_dateDeNaissanceLabel"));

        formLayout_9->setWidget(3, QFormLayout::LabelRole, inscEt_dateDeNaissanceLabel);

        inscEt_dateDeNaissanceDateEdit = new QDateEdit(formLayoutWidget_11);
        inscEt_dateDeNaissanceDateEdit->setObjectName(QStringLiteral("inscEt_dateDeNaissanceDateEdit"));

        formLayout_9->setWidget(3, QFormLayout::FieldRole, inscEt_dateDeNaissanceDateEdit);

        inscEt_genreComboBox = new QComboBox(formLayoutWidget_11);
        inscEt_genreComboBox->setObjectName(QStringLiteral("inscEt_genreComboBox"));

        formLayout_9->setWidget(2, QFormLayout::FieldRole, inscEt_genreComboBox);

        inscEt_mentionLabel = new QLabel(formLayoutWidget_11);
        inscEt_mentionLabel->setObjectName(QStringLiteral("inscEt_mentionLabel"));

        formLayout_9->setWidget(4, QFormLayout::LabelRole, inscEt_mentionLabel);

        inscEt_mentionComboBox = new QComboBox(formLayoutWidget_11);
        inscEt_mentionComboBox->setObjectName(QStringLiteral("inscEt_mentionComboBox"));

        formLayout_9->setWidget(4, QFormLayout::FieldRole, inscEt_mentionComboBox);

        inscEt_niveauLabel = new QLabel(formLayoutWidget_11);
        inscEt_niveauLabel->setObjectName(QStringLiteral("inscEt_niveauLabel"));

        formLayout_9->setWidget(5, QFormLayout::LabelRole, inscEt_niveauLabel);

        inscEt_niveauComboBox = new QComboBox(formLayoutWidget_11);
        inscEt_niveauComboBox->setObjectName(QStringLiteral("inscEt_niveauComboBox"));

        formLayout_9->setWidget(5, QFormLayout::FieldRole, inscEt_niveauComboBox);

        inscEt_parcoursLabel = new QLabel(formLayoutWidget_11);
        inscEt_parcoursLabel->setObjectName(QStringLiteral("inscEt_parcoursLabel"));

        formLayout_9->setWidget(6, QFormLayout::LabelRole, inscEt_parcoursLabel);

        inscEt_parcoursComboBox = new QComboBox(formLayoutWidget_11);
        inscEt_parcoursComboBox->setObjectName(QStringLiteral("inscEt_parcoursComboBox"));

        formLayout_9->setWidget(6, QFormLayout::FieldRole, inscEt_parcoursComboBox);

        inscEt_codageLabel = new QLabel(formLayoutWidget_11);
        inscEt_codageLabel->setObjectName(QStringLiteral("inscEt_codageLabel"));

        formLayout_9->setWidget(7, QFormLayout::LabelRole, inscEt_codageLabel);

        inscEt_codageLineEdit = new QSpinBox(formLayoutWidget_11);
        inscEt_codageLineEdit->setObjectName(QStringLiteral("inscEt_codageLineEdit"));

        formLayout_9->setWidget(7, QFormLayout::FieldRole, inscEt_codageLineEdit);

        inscEt_telephonePhoneLabel = new QLabel(formLayoutWidget_11);
        inscEt_telephonePhoneLabel->setObjectName(QStringLiteral("inscEt_telephonePhoneLabel"));

        formLayout_9->setWidget(8, QFormLayout::LabelRole, inscEt_telephonePhoneLabel);

        inscEt_telephoneLineEdit = new QLineEdit(formLayoutWidget_11);
        inscEt_telephoneLineEdit->setObjectName(QStringLiteral("inscEt_telephoneLineEdit"));

        formLayout_9->setWidget(8, QFormLayout::FieldRole, inscEt_telephoneLineEdit);

        inscEt_adresseLabel = new QLabel(formLayoutWidget_11);
        inscEt_adresseLabel->setObjectName(QStringLiteral("inscEt_adresseLabel"));

        formLayout_9->setWidget(9, QFormLayout::LabelRole, inscEt_adresseLabel);

        inscEt_adresseTextEdit = new QTextEdit(formLayoutWidget_11);
        inscEt_adresseTextEdit->setObjectName(QStringLiteral("inscEt_adresseTextEdit"));

        formLayout_9->setWidget(9, QFormLayout::FieldRole, inscEt_adresseTextEdit);

        inscEt_Enregistrer = new QPushButton(formLayoutWidget_11);
        inscEt_Enregistrer->setObjectName(QStringLiteral("inscEt_Enregistrer"));

        formLayout_9->setWidget(11, QFormLayout::SpanningRole, inscEt_Enregistrer);

        inscEt_estPassantLabel = new QLabel(formLayoutWidget_11);
        inscEt_estPassantLabel->setObjectName(QStringLiteral("inscEt_estPassantLabel"));

        formLayout_9->setWidget(10, QFormLayout::LabelRole, inscEt_estPassantLabel);

        inscEt_estPassantCheckBox = new QCheckBox(formLayoutWidget_11);
        inscEt_estPassantCheckBox->setObjectName(QStringLiteral("inscEt_estPassantCheckBox"));

        formLayout_9->setWidget(10, QFormLayout::FieldRole, inscEt_estPassantCheckBox);

        QIcon icon;
        icon.addFile(QStringLiteral("Assets/icons8-add-user-group-man-man-skin-type-7-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        ongletInsertion->addTab(insc_Etudiant, icon, QString());
        insc_Achat = new QWidget();
        insc_Achat->setObjectName(QStringLiteral("insc_Achat"));
        layoutWidget_2 = new QWidget(insc_Achat);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(140, 40, 441, 31));
        formLayout_6 = new QFormLayout(layoutWidget_2);
        formLayout_6->setSpacing(6);
        formLayout_6->setContentsMargins(11, 11, 11, 11);
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        inscAchat_identifiantLabel = new QLabel(layoutWidget_2);
        inscAchat_identifiantLabel->setObjectName(QStringLiteral("inscAchat_identifiantLabel"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, inscAchat_identifiantLabel);

        inscAchat_identifiantComboBox = new QComboBox(layoutWidget_2);
        inscAchat_identifiantComboBox->setObjectName(QStringLiteral("inscAchat_identifiantComboBox"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, inscAchat_identifiantComboBox);

        inscAchat_Message = new QLabel(insc_Achat);
        inscAchat_Message->setObjectName(QStringLiteral("inscAchat_Message"));
        inscAchat_Message->setGeometry(QRect(10, 10, 311, 16));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        inscAchat_Message->setFont(font3);
        gridLayoutWidget = new QWidget(insc_Achat);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(80, 70, 541, 140));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        inscAchat_formationsComboBox = new QComboBox(gridLayoutWidget);
        inscAchat_formationsComboBox->setObjectName(QStringLiteral("inscAchat_formationsComboBox"));

        gridLayout->addWidget(inscAchat_formationsComboBox, 1, 0, 1, 1);

        inscAchat_formationsLabel = new QLabel(gridLayoutWidget);
        inscAchat_formationsLabel->setObjectName(QStringLiteral("inscAchat_formationsLabel"));

        gridLayout->addWidget(inscAchat_formationsLabel, 0, 0, 1, 1);

        inscAchat_qtFormSpinBox = new QSpinBox(gridLayoutWidget);
        inscAchat_qtFormSpinBox->setObjectName(QStringLiteral("inscAchat_qtFormSpinBox"));
        inscAchat_qtFormSpinBox->setValue(1);

        gridLayout->addWidget(inscAchat_qtFormSpinBox, 2, 0, 1, 1);

        inscAchat_servicesComboBox = new QComboBox(gridLayoutWidget);
        inscAchat_servicesComboBox->setObjectName(QStringLiteral("inscAchat_servicesComboBox"));

        gridLayout->addWidget(inscAchat_servicesComboBox, 1, 1, 1, 1);

        inscAchat_qtServiceSpinBox = new QSpinBox(gridLayoutWidget);
        inscAchat_qtServiceSpinBox->setObjectName(QStringLiteral("inscAchat_qtServiceSpinBox"));
        inscAchat_qtServiceSpinBox->setValue(1);

        gridLayout->addWidget(inscAchat_qtServiceSpinBox, 2, 1, 1, 1);

        inscAchat_servicesLabel = new QLabel(gridLayoutWidget);
        inscAchat_servicesLabel->setObjectName(QStringLiteral("inscAchat_servicesLabel"));

        gridLayout->addWidget(inscAchat_servicesLabel, 0, 1, 1, 1);

        inscAchat_prixFormSpinBox = new QDoubleSpinBox(gridLayoutWidget);
        inscAchat_prixFormSpinBox->setObjectName(QStringLiteral("inscAchat_prixFormSpinBox"));
        inscAchat_prixFormSpinBox->setMaximum(1e+12);

        gridLayout->addWidget(inscAchat_prixFormSpinBox, 3, 0, 1, 1);

        inscAchat_prixServiceSpinBox = new QDoubleSpinBox(gridLayoutWidget);
        inscAchat_prixServiceSpinBox->setObjectName(QStringLiteral("inscAchat_prixServiceSpinBox"));
        inscAchat_prixServiceSpinBox->setMaximum(1e+12);

        gridLayout->addWidget(inscAchat_prixServiceSpinBox, 3, 1, 1, 1);

        inscAchat_AjFormation = new QPushButton(gridLayoutWidget);
        inscAchat_AjFormation->setObjectName(QStringLiteral("inscAchat_AjFormation"));
        inscAchat_AjFormation->setEnabled(false);

        gridLayout->addWidget(inscAchat_AjFormation, 4, 0, 1, 1);

        inscAchat_AjService = new QPushButton(gridLayoutWidget);
        inscAchat_AjService->setObjectName(QStringLiteral("inscAchat_AjService"));
        inscAchat_AjService->setEnabled(false);

        gridLayout->addWidget(inscAchat_AjService, 4, 1, 1, 1);

        inscAchat_commandeTableWidget = new QTableWidget(insc_Achat);
        if (inscAchat_commandeTableWidget->columnCount() < 4)
            inscAchat_commandeTableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        inscAchat_commandeTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        inscAchat_commandeTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        inscAchat_commandeTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        inscAchat_commandeTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        inscAchat_commandeTableWidget->setObjectName(QStringLiteral("inscAchat_commandeTableWidget"));
        inscAchat_commandeTableWidget->setGeometry(QRect(10, 220, 701, 351));
        QIcon icon1;
        icon1.addFile(QStringLiteral("Assets/icons8-checklist-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        ongletInsertion->addTab(insc_Achat, icon1, QString());
        insc_payement = new QWidget();
        insc_payement->setObjectName(QStringLiteral("insc_payement"));
        layoutWidget_3 = new QWidget(insc_payement);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(140, 40, 441, 121));
        formLayout_14 = new QFormLayout(layoutWidget_3);
        formLayout_14->setSpacing(6);
        formLayout_14->setContentsMargins(11, 11, 11, 11);
        formLayout_14->setObjectName(QStringLiteral("formLayout_14"));
        formLayout_14->setContentsMargins(0, 0, 0, 0);
        inscP_mentionLabel = new QLabel(layoutWidget_3);
        inscP_mentionLabel->setObjectName(QStringLiteral("inscP_mentionLabel"));

        formLayout_14->setWidget(0, QFormLayout::LabelRole, inscP_mentionLabel);

        inscP_mentionComboBox = new QComboBox(layoutWidget_3);
        inscP_mentionComboBox->setObjectName(QStringLiteral("inscP_mentionComboBox"));

        formLayout_14->setWidget(0, QFormLayout::FieldRole, inscP_mentionComboBox);

        inscP_niveauLabel = new QLabel(layoutWidget_3);
        inscP_niveauLabel->setObjectName(QStringLiteral("inscP_niveauLabel"));

        formLayout_14->setWidget(1, QFormLayout::LabelRole, inscP_niveauLabel);

        inscP_niveauComboBox = new QComboBox(layoutWidget_3);
        inscP_niveauComboBox->setObjectName(QStringLiteral("inscP_niveauComboBox"));

        formLayout_14->setWidget(1, QFormLayout::FieldRole, inscP_niveauComboBox);

        inscP_parcoursLabel = new QLabel(layoutWidget_3);
        inscP_parcoursLabel->setObjectName(QStringLiteral("inscP_parcoursLabel"));

        formLayout_14->setWidget(2, QFormLayout::LabelRole, inscP_parcoursLabel);

        inscP_parcoursComboBox = new QComboBox(layoutWidget_3);
        inscP_parcoursComboBox->setObjectName(QStringLiteral("inscP_parcoursComboBox"));

        formLayout_14->setWidget(2, QFormLayout::FieldRole, inscP_parcoursComboBox);

        inscP_codageLabel = new QLabel(layoutWidget_3);
        inscP_codageLabel->setObjectName(QStringLiteral("inscP_codageLabel"));

        formLayout_14->setWidget(3, QFormLayout::LabelRole, inscP_codageLabel);

        inscP_codageComboBox = new QComboBox(layoutWidget_3);
        inscP_codageComboBox->setObjectName(QStringLiteral("inscP_codageComboBox"));

        formLayout_14->setWidget(3, QFormLayout::FieldRole, inscP_codageComboBox);

        tableWidget_3 = new QTableWidget(insc_payement);
        if (tableWidget_3->columnCount() < 2)
            tableWidget_3->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(260, 210, 211, 111));
        ongletInsertion->addTab(insc_payement, QString());
        insc_Form_Msrv = new QWidget();
        insc_Form_Msrv->setObjectName(QStringLiteral("insc_Form_Msrv"));
        gridLayoutWidget_2 = new QWidget(insc_Form_Msrv);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(90, 160, 551, 111));
        inscFM_gridLayout = new QGridLayout(gridLayoutWidget_2);
        inscFM_gridLayout->setSpacing(6);
        inscFM_gridLayout->setContentsMargins(11, 11, 11, 11);
        inscFM_gridLayout->setObjectName(QStringLiteral("inscFM_gridLayout"));
        inscFM_gridLayout->setHorizontalSpacing(6);
        inscFM_gridLayout->setContentsMargins(0, 0, 0, 0);
        inscFM_formLineEdit = new QLineEdit(gridLayoutWidget_2);
        inscFM_formLineEdit->setObjectName(QStringLiteral("inscFM_formLineEdit"));

        inscFM_gridLayout->addWidget(inscFM_formLineEdit, 0, 1, 1, 1);

        inscFM_formLabel = new QLabel(gridLayoutWidget_2);
        inscFM_formLabel->setObjectName(QStringLiteral("inscFM_formLabel"));

        inscFM_gridLayout->addWidget(inscFM_formLabel, 0, 0, 1, 1);

        inscFM_srvLineEdit = new QLineEdit(gridLayoutWidget_2);
        inscFM_srvLineEdit->setObjectName(QStringLiteral("inscFM_srvLineEdit"));

        inscFM_gridLayout->addWidget(inscFM_srvLineEdit, 1, 1, 1, 1);

        inscFM_srvLabel = new QLabel(gridLayoutWidget_2);
        inscFM_srvLabel->setObjectName(QStringLiteral("inscFM_srvLabel"));

        inscFM_gridLayout->addWidget(inscFM_srvLabel, 1, 0, 1, 1);

        inscFM_Enregistrer = new QPushButton(gridLayoutWidget_2);
        inscFM_Enregistrer->setObjectName(QStringLiteral("inscFM_Enregistrer"));

        inscFM_gridLayout->addWidget(inscFM_Enregistrer, 0, 2, 1, 1);

        inscFM_Enregistrer_2 = new QPushButton(gridLayoutWidget_2);
        inscFM_Enregistrer_2->setObjectName(QStringLiteral("inscFM_Enregistrer_2"));

        inscFM_gridLayout->addWidget(inscFM_Enregistrer_2, 1, 2, 1, 1);

        inscFM_gridLayout->setColumnStretch(0, 1);
        inscFM_gridLayout->setColumnStretch(1, 3);
        inscFM_gridLayout->setColumnStretch(2, 2);
        ongletInsertion->addTab(insc_Form_Msrv, QString());
        insc_MentionNvPrc = new QWidget();
        insc_MentionNvPrc->setObjectName(QStringLiteral("insc_MentionNvPrc"));
        formLayoutWidget_6 = new QWidget(insc_MentionNvPrc);
        formLayoutWidget_6->setObjectName(QStringLiteral("formLayoutWidget_6"));
        formLayoutWidget_6->setGeometry(QRect(30, 100, 311, 91));
        inscNv = new QFormLayout(formLayoutWidget_6);
        inscNv->setSpacing(6);
        inscNv->setContentsMargins(11, 11, 11, 11);
        inscNv->setObjectName(QStringLiteral("inscNv"));
        inscNv->setContentsMargins(0, 0, 0, 0);
        inscNv_mentionLabel = new QLabel(formLayoutWidget_6);
        inscNv_mentionLabel->setObjectName(QStringLiteral("inscNv_mentionLabel"));

        inscNv->setWidget(0, QFormLayout::LabelRole, inscNv_mentionLabel);

        InscNv_niveauLabel = new QLabel(formLayoutWidget_6);
        InscNv_niveauLabel->setObjectName(QStringLiteral("InscNv_niveauLabel"));

        inscNv->setWidget(1, QFormLayout::LabelRole, InscNv_niveauLabel);

        InscNv_Enregistrer = new QPushButton(formLayoutWidget_6);
        InscNv_Enregistrer->setObjectName(QStringLiteral("InscNv_Enregistrer"));

        inscNv->setWidget(2, QFormLayout::SpanningRole, InscNv_Enregistrer);

        inscNv_mentionComboBox = new QComboBox(formLayoutWidget_6);
        inscNv_mentionComboBox->setObjectName(QStringLiteral("inscNv_mentionComboBox"));

        inscNv->setWidget(0, QFormLayout::FieldRole, inscNv_mentionComboBox);

        inscNv_niveauLineEdit = new QLineEdit(formLayoutWidget_6);
        inscNv_niveauLineEdit->setObjectName(QStringLiteral("inscNv_niveauLineEdit"));

        inscNv->setWidget(1, QFormLayout::FieldRole, inscNv_niveauLineEdit);

        inscNv_Message = new QLabel(insc_MentionNvPrc);
        inscNv_Message->setObjectName(QStringLiteral("inscNv_Message"));
        inscNv_Message->setGeometry(QRect(90, 60, 171, 31));
        inscNv_Message->setFont(font2);
        formLayoutWidget_8 = new QWidget(insc_MentionNvPrc);
        formLayoutWidget_8->setObjectName(QStringLiteral("formLayoutWidget_8"));
        formLayoutWidget_8->setGeometry(QRect(360, 100, 311, 91));
        inscPrc = new QFormLayout(formLayoutWidget_8);
        inscPrc->setSpacing(6);
        inscPrc->setContentsMargins(11, 11, 11, 11);
        inscPrc->setObjectName(QStringLiteral("inscPrc"));
        inscPrc->setContentsMargins(0, 0, 0, 0);
        inscPrc_mentionLabel = new QLabel(formLayoutWidget_8);
        inscPrc_mentionLabel->setObjectName(QStringLiteral("inscPrc_mentionLabel"));

        inscPrc->setWidget(0, QFormLayout::LabelRole, inscPrc_mentionLabel);

        inscPrc_mentionComboBox = new QComboBox(formLayoutWidget_8);
        inscPrc_mentionComboBox->setObjectName(QStringLiteral("inscPrc_mentionComboBox"));

        inscPrc->setWidget(0, QFormLayout::FieldRole, inscPrc_mentionComboBox);

        inscPrc_parcoursLabel = new QLabel(formLayoutWidget_8);
        inscPrc_parcoursLabel->setObjectName(QStringLiteral("inscPrc_parcoursLabel"));

        inscPrc->setWidget(1, QFormLayout::LabelRole, inscPrc_parcoursLabel);

        inscPrc_Enregistrer = new QPushButton(formLayoutWidget_8);
        inscPrc_Enregistrer->setObjectName(QStringLiteral("inscPrc_Enregistrer"));

        inscPrc->setWidget(2, QFormLayout::SpanningRole, inscPrc_Enregistrer);

        inscPrc_parcoursLineEdit = new QLineEdit(formLayoutWidget_8);
        inscPrc_parcoursLineEdit->setObjectName(QStringLiteral("inscPrc_parcoursLineEdit"));

        inscPrc->setWidget(1, QFormLayout::FieldRole, inscPrc_parcoursLineEdit);

        formLayoutWidget_9 = new QWidget(insc_MentionNvPrc);
        formLayoutWidget_9->setObjectName(QStringLiteral("formLayoutWidget_9"));
        formLayoutWidget_9->setGeometry(QRect(190, 280, 311, 61));
        InscMt = new QFormLayout(formLayoutWidget_9);
        InscMt->setSpacing(6);
        InscMt->setContentsMargins(11, 11, 11, 11);
        InscMt->setObjectName(QStringLiteral("InscMt"));
        InscMt->setContentsMargins(0, 0, 0, 0);
        InscMt_nomMentionLabel = new QLabel(formLayoutWidget_9);
        InscMt_nomMentionLabel->setObjectName(QStringLiteral("InscMt_nomMentionLabel"));

        InscMt->setWidget(0, QFormLayout::LabelRole, InscMt_nomMentionLabel);

        InscMt_nomMentionLineEdit = new QLineEdit(formLayoutWidget_9);
        InscMt_nomMentionLineEdit->setObjectName(QStringLiteral("InscMt_nomMentionLineEdit"));

        InscMt->setWidget(0, QFormLayout::FieldRole, InscMt_nomMentionLineEdit);

        InscMt_Enregistrer = new QPushButton(formLayoutWidget_9);
        InscMt_Enregistrer->setObjectName(QStringLiteral("InscMt_Enregistrer"));

        InscMt->setWidget(1, QFormLayout::SpanningRole, InscMt_Enregistrer);

        inscPrc_Message = new QLabel(insc_MentionNvPrc);
        inscPrc_Message->setObjectName(QStringLiteral("inscPrc_Message"));
        inscPrc_Message->setGeometry(QRect(430, 70, 181, 20));
        inscMt_Message = new QLabel(insc_MentionNvPrc);
        inscMt_Message->setObjectName(QStringLiteral("inscMt_Message"));
        inscMt_Message->setGeometry(QRect(260, 240, 181, 16));
        QIcon icon2;
        icon2.addFile(QStringLiteral("Assets/icons8-class-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        ongletInsertion->addTab(insc_MentionNvPrc, icon2, QString());
        insc_Admin = new QWidget();
        insc_Admin->setObjectName(QStringLiteral("insc_Admin"));
        formLayoutWidget_5 = new QWidget(insc_Admin);
        formLayoutWidget_5->setObjectName(QStringLiteral("formLayoutWidget_5"));
        formLayoutWidget_5->setGeometry(QRect(240, 190, 241, 114));
        formLayout_5 = new QFormLayout(formLayoutWidget_5);
        formLayout_5->setSpacing(6);
        formLayout_5->setContentsMargins(11, 11, 11, 11);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        inscA_nomDeLAdminLineEdit = new QLineEdit(formLayoutWidget_5);
        inscA_nomDeLAdminLineEdit->setObjectName(QStringLiteral("inscA_nomDeLAdminLineEdit"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, inscA_nomDeLAdminLineEdit);

        inscA_motDePasseLabel = new QLabel(formLayoutWidget_5);
        inscA_motDePasseLabel->setObjectName(QStringLiteral("inscA_motDePasseLabel"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, inscA_motDePasseLabel);

        inscA_motDePasseLineEdit = new QLineEdit(formLayoutWidget_5);
        inscA_motDePasseLineEdit->setObjectName(QStringLiteral("inscA_motDePasseLineEdit"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, inscA_motDePasseLineEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_5->setItem(2, QFormLayout::SpanningRole, verticalSpacer);

        inscA_enregistrer = new QPushButton(formLayoutWidget_5);
        inscA_enregistrer->setObjectName(QStringLiteral("inscA_enregistrer"));

        formLayout_5->setWidget(3, QFormLayout::SpanningRole, inscA_enregistrer);

        inscA_nomDeLAdminLabel = new QLabel(formLayoutWidget_5);
        inscA_nomDeLAdminLabel->setObjectName(QStringLiteral("inscA_nomDeLAdminLabel"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, inscA_nomDeLAdminLabel);

        inscA_Message = new QLabel(insc_Admin);
        inscA_Message->setObjectName(QStringLiteral("inscA_Message"));
        inscA_Message->setGeometry(QRect(220, 110, 281, 61));
        inscA_Message->setFont(font2);
        QIcon icon3;
        icon3.addFile(QStringLiteral("Assets/icons8-add-administrator-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        ongletInsertion->addTab(insc_Admin, icon3, QString());
        stackedWidget->addWidget(Insertion);
        Modifications = new QWidget();
        Modifications->setObjectName(QStringLiteral("Modifications"));
        ongletModification = new QTabWidget(Modifications);
        ongletModification->setObjectName(QStringLiteral("ongletModification"));
        ongletModification->setGeometry(QRect(0, 0, 731, 621));
        mod_eleve = new QWidget();
        mod_eleve->setObjectName(QStringLiteral("mod_eleve"));
        modE_Message2_2 = new QLabel(mod_eleve);
        modE_Message2_2->setObjectName(QStringLiteral("modE_Message2_2"));
        modE_Message2_2->setGeometry(QRect(190, 0, 341, 31));
        modE_Message2_2->setFont(font2);
        layoutWidget_6 = new QWidget(mod_eleve);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(130, 30, 451, 146));
        formLayout_8 = new QFormLayout(layoutWidget_6);
        formLayout_8->setSpacing(6);
        formLayout_8->setContentsMargins(11, 11, 11, 11);
        formLayout_8->setObjectName(QStringLiteral("formLayout_8"));
        formLayout_8->setContentsMargins(0, 0, 0, 0);
        modE_mentionLabel = new QLabel(layoutWidget_6);
        modE_mentionLabel->setObjectName(QStringLiteral("modE_mentionLabel"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, modE_mentionLabel);

        modE_mentionComboBox = new QComboBox(layoutWidget_6);
        modE_mentionComboBox->setObjectName(QStringLiteral("modE_mentionComboBox"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, modE_mentionComboBox);

        modE_niveauLabel = new QLabel(layoutWidget_6);
        modE_niveauLabel->setObjectName(QStringLiteral("modE_niveauLabel"));

        formLayout_8->setWidget(1, QFormLayout::LabelRole, modE_niveauLabel);

        modE_niveauComboBox = new QComboBox(layoutWidget_6);
        modE_niveauComboBox->setObjectName(QStringLiteral("modE_niveauComboBox"));

        formLayout_8->setWidget(1, QFormLayout::FieldRole, modE_niveauComboBox);

        modE_parcoursLabel = new QLabel(layoutWidget_6);
        modE_parcoursLabel->setObjectName(QStringLiteral("modE_parcoursLabel"));

        formLayout_8->setWidget(2, QFormLayout::LabelRole, modE_parcoursLabel);

        modE_parcoursComboBox = new QComboBox(layoutWidget_6);
        modE_parcoursComboBox->setObjectName(QStringLiteral("modE_parcoursComboBox"));

        formLayout_8->setWidget(2, QFormLayout::FieldRole, modE_parcoursComboBox);

        modE_codageLabel = new QLabel(layoutWidget_6);
        modE_codageLabel->setObjectName(QStringLiteral("modE_codageLabel"));

        formLayout_8->setWidget(3, QFormLayout::LabelRole, modE_codageLabel);

        modE_codageComboBox = new QComboBox(layoutWidget_6);
        modE_codageComboBox->setObjectName(QStringLiteral("modE_codageComboBox"));

        formLayout_8->setWidget(3, QFormLayout::FieldRole, modE_codageComboBox);

        modE_Chercher = new QPushButton(layoutWidget_6);
        modE_Chercher->setObjectName(QStringLiteral("modE_Chercher"));

        formLayout_8->setWidget(4, QFormLayout::SpanningRole, modE_Chercher);

        formLayoutWidget_12 = new QWidget(mod_eleve);
        formLayoutWidget_12->setObjectName(QStringLiteral("formLayoutWidget_12"));
        formLayoutWidget_12->setGeometry(QRect(150, 180, 411, 374));
        formLayout_10 = new QFormLayout(formLayoutWidget_12);
        formLayout_10->setSpacing(6);
        formLayout_10->setContentsMargins(11, 11, 11, 11);
        formLayout_10->setObjectName(QStringLiteral("formLayout_10"));
        formLayout_10->setContentsMargins(0, 0, 0, 0);
        inscEt_nomLabel_2 = new QLabel(formLayoutWidget_12);
        inscEt_nomLabel_2->setObjectName(QStringLiteral("inscEt_nomLabel_2"));

        formLayout_10->setWidget(0, QFormLayout::LabelRole, inscEt_nomLabel_2);

        inscEt_nomLineEdit_2 = new QLineEdit(formLayoutWidget_12);
        inscEt_nomLineEdit_2->setObjectName(QStringLiteral("inscEt_nomLineEdit_2"));

        formLayout_10->setWidget(0, QFormLayout::FieldRole, inscEt_nomLineEdit_2);

        inscEt_prenomLabel_2 = new QLabel(formLayoutWidget_12);
        inscEt_prenomLabel_2->setObjectName(QStringLiteral("inscEt_prenomLabel_2"));

        formLayout_10->setWidget(1, QFormLayout::LabelRole, inscEt_prenomLabel_2);

        inscEt_prenomLineEdit_2 = new QLineEdit(formLayoutWidget_12);
        inscEt_prenomLineEdit_2->setObjectName(QStringLiteral("inscEt_prenomLineEdit_2"));

        formLayout_10->setWidget(1, QFormLayout::FieldRole, inscEt_prenomLineEdit_2);

        inscEt_genreLabel_2 = new QLabel(formLayoutWidget_12);
        inscEt_genreLabel_2->setObjectName(QStringLiteral("inscEt_genreLabel_2"));

        formLayout_10->setWidget(2, QFormLayout::LabelRole, inscEt_genreLabel_2);

        inscEt_dateDeNaissanceLabel_2 = new QLabel(formLayoutWidget_12);
        inscEt_dateDeNaissanceLabel_2->setObjectName(QStringLiteral("inscEt_dateDeNaissanceLabel_2"));

        formLayout_10->setWidget(3, QFormLayout::LabelRole, inscEt_dateDeNaissanceLabel_2);

        inscEt_dateDeNaissanceDateEdit_2 = new QDateEdit(formLayoutWidget_12);
        inscEt_dateDeNaissanceDateEdit_2->setObjectName(QStringLiteral("inscEt_dateDeNaissanceDateEdit_2"));

        formLayout_10->setWidget(3, QFormLayout::FieldRole, inscEt_dateDeNaissanceDateEdit_2);

        inscEt_genreComboBox_2 = new QComboBox(formLayoutWidget_12);
        inscEt_genreComboBox_2->setObjectName(QStringLiteral("inscEt_genreComboBox_2"));

        formLayout_10->setWidget(2, QFormLayout::FieldRole, inscEt_genreComboBox_2);

        inscEt_mentionLabel_2 = new QLabel(formLayoutWidget_12);
        inscEt_mentionLabel_2->setObjectName(QStringLiteral("inscEt_mentionLabel_2"));

        formLayout_10->setWidget(4, QFormLayout::LabelRole, inscEt_mentionLabel_2);

        inscEt_mentionComboBox_2 = new QComboBox(formLayoutWidget_12);
        inscEt_mentionComboBox_2->setObjectName(QStringLiteral("inscEt_mentionComboBox_2"));

        formLayout_10->setWidget(4, QFormLayout::FieldRole, inscEt_mentionComboBox_2);

        inscEt_niveauLabel_2 = new QLabel(formLayoutWidget_12);
        inscEt_niveauLabel_2->setObjectName(QStringLiteral("inscEt_niveauLabel_2"));

        formLayout_10->setWidget(5, QFormLayout::LabelRole, inscEt_niveauLabel_2);

        inscEt_niveauComboBox_2 = new QComboBox(formLayoutWidget_12);
        inscEt_niveauComboBox_2->setObjectName(QStringLiteral("inscEt_niveauComboBox_2"));

        formLayout_10->setWidget(5, QFormLayout::FieldRole, inscEt_niveauComboBox_2);

        inscEt_parcoursLabel_2 = new QLabel(formLayoutWidget_12);
        inscEt_parcoursLabel_2->setObjectName(QStringLiteral("inscEt_parcoursLabel_2"));

        formLayout_10->setWidget(6, QFormLayout::LabelRole, inscEt_parcoursLabel_2);

        inscEt_parcoursLineEdit_2 = new QComboBox(formLayoutWidget_12);
        inscEt_parcoursLineEdit_2->setObjectName(QStringLiteral("inscEt_parcoursLineEdit_2"));

        formLayout_10->setWidget(6, QFormLayout::FieldRole, inscEt_parcoursLineEdit_2);

        inscEt_codageLabel_2 = new QLabel(formLayoutWidget_12);
        inscEt_codageLabel_2->setObjectName(QStringLiteral("inscEt_codageLabel_2"));

        formLayout_10->setWidget(7, QFormLayout::LabelRole, inscEt_codageLabel_2);

        inscEt_codageLineEdit_2 = new QSpinBox(formLayoutWidget_12);
        inscEt_codageLineEdit_2->setObjectName(QStringLiteral("inscEt_codageLineEdit_2"));

        formLayout_10->setWidget(7, QFormLayout::FieldRole, inscEt_codageLineEdit_2);

        inscEt_telephonePhoneLabel_2 = new QLabel(formLayoutWidget_12);
        inscEt_telephonePhoneLabel_2->setObjectName(QStringLiteral("inscEt_telephonePhoneLabel_2"));

        formLayout_10->setWidget(8, QFormLayout::LabelRole, inscEt_telephonePhoneLabel_2);

        inscEt_telephoneLineEdit_2 = new QLineEdit(formLayoutWidget_12);
        inscEt_telephoneLineEdit_2->setObjectName(QStringLiteral("inscEt_telephoneLineEdit_2"));

        formLayout_10->setWidget(8, QFormLayout::FieldRole, inscEt_telephoneLineEdit_2);

        inscEt_adresseLabel_2 = new QLabel(formLayoutWidget_12);
        inscEt_adresseLabel_2->setObjectName(QStringLiteral("inscEt_adresseLabel_2"));

        formLayout_10->setWidget(9, QFormLayout::LabelRole, inscEt_adresseLabel_2);

        inscEt_adresseTextEdit_2 = new QTextEdit(formLayoutWidget_12);
        inscEt_adresseTextEdit_2->setObjectName(QStringLiteral("inscEt_adresseTextEdit_2"));

        formLayout_10->setWidget(9, QFormLayout::FieldRole, inscEt_adresseTextEdit_2);

        inscEt_Enregistrer_2 = new QPushButton(formLayoutWidget_12);
        inscEt_Enregistrer_2->setObjectName(QStringLiteral("inscEt_Enregistrer_2"));

        formLayout_10->setWidget(10, QFormLayout::SpanningRole, inscEt_Enregistrer_2);

        ongletModification->addTab(mod_eleve, QString());
        Mod_note = new QWidget();
        Mod_note->setObjectName(QStringLiteral("Mod_note"));
        layoutWidget_7 = new QWidget(Mod_note);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(150, 50, 451, 146));
        formLayout_13 = new QFormLayout(layoutWidget_7);
        formLayout_13->setSpacing(6);
        formLayout_13->setContentsMargins(11, 11, 11, 11);
        formLayout_13->setObjectName(QStringLiteral("formLayout_13"));
        formLayout_13->setContentsMargins(0, 0, 0, 0);
        modE_mentionLabel_2 = new QLabel(layoutWidget_7);
        modE_mentionLabel_2->setObjectName(QStringLiteral("modE_mentionLabel_2"));

        formLayout_13->setWidget(0, QFormLayout::LabelRole, modE_mentionLabel_2);

        modE_mentionComboBox_2 = new QComboBox(layoutWidget_7);
        modE_mentionComboBox_2->setObjectName(QStringLiteral("modE_mentionComboBox_2"));

        formLayout_13->setWidget(0, QFormLayout::FieldRole, modE_mentionComboBox_2);

        modE_niveauLabel_2 = new QLabel(layoutWidget_7);
        modE_niveauLabel_2->setObjectName(QStringLiteral("modE_niveauLabel_2"));

        formLayout_13->setWidget(1, QFormLayout::LabelRole, modE_niveauLabel_2);

        modE_niveauComboBox_2 = new QComboBox(layoutWidget_7);
        modE_niveauComboBox_2->setObjectName(QStringLiteral("modE_niveauComboBox_2"));

        formLayout_13->setWidget(1, QFormLayout::FieldRole, modE_niveauComboBox_2);

        modE_parcoursLabel_2 = new QLabel(layoutWidget_7);
        modE_parcoursLabel_2->setObjectName(QStringLiteral("modE_parcoursLabel_2"));

        formLayout_13->setWidget(2, QFormLayout::LabelRole, modE_parcoursLabel_2);

        modE_parcoursComboBox_2 = new QComboBox(layoutWidget_7);
        modE_parcoursComboBox_2->setObjectName(QStringLiteral("modE_parcoursComboBox_2"));

        formLayout_13->setWidget(2, QFormLayout::FieldRole, modE_parcoursComboBox_2);

        modE_codageLabel_2 = new QLabel(layoutWidget_7);
        modE_codageLabel_2->setObjectName(QStringLiteral("modE_codageLabel_2"));

        formLayout_13->setWidget(3, QFormLayout::LabelRole, modE_codageLabel_2);

        modE_codageComboBox_2 = new QComboBox(layoutWidget_7);
        modE_codageComboBox_2->setObjectName(QStringLiteral("modE_codageComboBox_2"));

        formLayout_13->setWidget(3, QFormLayout::FieldRole, modE_codageComboBox_2);

        modE_Chercher_2 = new QPushButton(layoutWidget_7);
        modE_Chercher_2->setObjectName(QStringLiteral("modE_Chercher_2"));

        formLayout_13->setWidget(4, QFormLayout::SpanningRole, modE_Chercher_2);

        ongletModification->addTab(Mod_note, QString());
        stackedWidget->addWidget(Modifications);
        Suppression = new QWidget();
        Suppression->setObjectName(QStringLiteral("Suppression"));
        ongletSuppression = new QTabWidget(Suppression);
        ongletSuppression->setObjectName(QStringLiteral("ongletSuppression"));
        ongletSuppression->setGeometry(QRect(0, 0, 731, 621));
        sup_Etudiants = new QWidget();
        sup_Etudiants->setObjectName(QStringLiteral("sup_Etudiants"));
        label = new QLabel(sup_Etudiants);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 70, 321, 31));
        label->setFont(font2);
        layoutWidget_8 = new QWidget(sup_Etudiants);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(110, 130, 451, 146));
        formLayout_17 = new QFormLayout(layoutWidget_8);
        formLayout_17->setSpacing(6);
        formLayout_17->setContentsMargins(11, 11, 11, 11);
        formLayout_17->setObjectName(QStringLiteral("formLayout_17"));
        formLayout_17->setContentsMargins(0, 0, 0, 0);
        SupE_mentionLabel = new QLabel(layoutWidget_8);
        SupE_mentionLabel->setObjectName(QStringLiteral("SupE_mentionLabel"));

        formLayout_17->setWidget(0, QFormLayout::LabelRole, SupE_mentionLabel);

        SupE_mentionComboBox = new QComboBox(layoutWidget_8);
        SupE_mentionComboBox->setObjectName(QStringLiteral("SupE_mentionComboBox"));

        formLayout_17->setWidget(0, QFormLayout::FieldRole, SupE_mentionComboBox);

        SupE_niveauLabel = new QLabel(layoutWidget_8);
        SupE_niveauLabel->setObjectName(QStringLiteral("SupE_niveauLabel"));

        formLayout_17->setWidget(1, QFormLayout::LabelRole, SupE_niveauLabel);

        SupE_niveauComboBox = new QComboBox(layoutWidget_8);
        SupE_niveauComboBox->setObjectName(QStringLiteral("SupE_niveauComboBox"));

        formLayout_17->setWidget(1, QFormLayout::FieldRole, SupE_niveauComboBox);

        SupE_parcoursLabel = new QLabel(layoutWidget_8);
        SupE_parcoursLabel->setObjectName(QStringLiteral("SupE_parcoursLabel"));

        formLayout_17->setWidget(2, QFormLayout::LabelRole, SupE_parcoursLabel);

        SupE_parcoursComboBox = new QComboBox(layoutWidget_8);
        SupE_parcoursComboBox->setObjectName(QStringLiteral("SupE_parcoursComboBox"));

        formLayout_17->setWidget(2, QFormLayout::FieldRole, SupE_parcoursComboBox);

        SupE_codageLabel = new QLabel(layoutWidget_8);
        SupE_codageLabel->setObjectName(QStringLiteral("SupE_codageLabel"));

        formLayout_17->setWidget(3, QFormLayout::LabelRole, SupE_codageLabel);

        SupE_codageComboBox = new QComboBox(layoutWidget_8);
        SupE_codageComboBox->setObjectName(QStringLiteral("SupE_codageComboBox"));

        formLayout_17->setWidget(3, QFormLayout::FieldRole, SupE_codageComboBox);

        SupE_Chercher = new QPushButton(layoutWidget_8);
        SupE_Chercher->setObjectName(QStringLiteral("SupE_Chercher"));

        formLayout_17->setWidget(4, QFormLayout::SpanningRole, SupE_Chercher);

        ongletSuppression->addTab(sup_Etudiants, QString());
        sup_Mention = new QWidget();
        sup_Mention->setObjectName(QStringLiteral("sup_Mention"));
        supM_Message = new QLabel(sup_Mention);
        supM_Message->setObjectName(QStringLiteral("supM_Message"));
        supM_Message->setGeometry(QRect(220, 120, 251, 41));
        supM_Message->setFont(font2);
        formLayoutWidget_7 = new QWidget(sup_Mention);
        formLayoutWidget_7->setObjectName(QStringLiteral("formLayoutWidget_7"));
        formLayoutWidget_7->setGeometry(QRect(170, 190, 311, 116));
        formLayout_18 = new QFormLayout(formLayoutWidget_7);
        formLayout_18->setSpacing(6);
        formLayout_18->setContentsMargins(11, 11, 11, 11);
        formLayout_18->setObjectName(QStringLiteral("formLayout_18"));
        formLayout_18->setContentsMargins(0, 0, 0, 0);
        inscMNP_nomMentionLabel_3 = new QLabel(formLayoutWidget_7);
        inscMNP_nomMentionLabel_3->setObjectName(QStringLiteral("inscMNP_nomMentionLabel_3"));

        formLayout_18->setWidget(0, QFormLayout::LabelRole, inscMNP_nomMentionLabel_3);

        supM_classeMatiereComboBox = new QComboBox(formLayoutWidget_7);
        supM_classeMatiereComboBox->setObjectName(QStringLiteral("supM_classeMatiereComboBox"));

        formLayout_18->setWidget(0, QFormLayout::FieldRole, supM_classeMatiereComboBox);

        inscMNP_niveauLabel_3 = new QLabel(formLayoutWidget_7);
        inscMNP_niveauLabel_3->setObjectName(QStringLiteral("inscMNP_niveauLabel_3"));

        formLayout_18->setWidget(1, QFormLayout::LabelRole, inscMNP_niveauLabel_3);

        supM_nomMatiereComboBox = new QComboBox(formLayoutWidget_7);
        supM_nomMatiereComboBox->setObjectName(QStringLiteral("supM_nomMatiereComboBox"));

        formLayout_18->setWidget(1, QFormLayout::FieldRole, supM_nomMatiereComboBox);

        inscMNP_parcoursLabel_3 = new QLabel(formLayoutWidget_7);
        inscMNP_parcoursLabel_3->setObjectName(QStringLiteral("inscMNP_parcoursLabel_3"));

        formLayout_18->setWidget(2, QFormLayout::LabelRole, inscMNP_parcoursLabel_3);

        supM_Supprimer = new QPushButton(formLayoutWidget_7);
        supM_Supprimer->setObjectName(QStringLiteral("supM_Supprimer"));

        formLayout_18->setWidget(3, QFormLayout::SpanningRole, supM_Supprimer);

        comboBox = new QComboBox(formLayoutWidget_7);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout_18->setWidget(2, QFormLayout::FieldRole, comboBox);

        ongletSuppression->addTab(sup_Mention, QString());
        sup_Transaction = new QWidget();
        sup_Transaction->setObjectName(QStringLiteral("sup_Transaction"));
        layoutWidget_9 = new QWidget(sup_Transaction);
        layoutWidget_9->setObjectName(QStringLiteral("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(120, 50, 451, 146));
        formLayout_19 = new QFormLayout(layoutWidget_9);
        formLayout_19->setSpacing(6);
        formLayout_19->setContentsMargins(11, 11, 11, 11);
        formLayout_19->setObjectName(QStringLiteral("formLayout_19"));
        formLayout_19->setContentsMargins(0, 0, 0, 0);
        SupE_mentionLabel_2 = new QLabel(layoutWidget_9);
        SupE_mentionLabel_2->setObjectName(QStringLiteral("SupE_mentionLabel_2"));

        formLayout_19->setWidget(0, QFormLayout::LabelRole, SupE_mentionLabel_2);

        SupE_mentionComboBox_2 = new QComboBox(layoutWidget_9);
        SupE_mentionComboBox_2->setObjectName(QStringLiteral("SupE_mentionComboBox_2"));

        formLayout_19->setWidget(0, QFormLayout::FieldRole, SupE_mentionComboBox_2);

        SupE_niveauLabel_2 = new QLabel(layoutWidget_9);
        SupE_niveauLabel_2->setObjectName(QStringLiteral("SupE_niveauLabel_2"));

        formLayout_19->setWidget(1, QFormLayout::LabelRole, SupE_niveauLabel_2);

        SupE_niveauComboBox_2 = new QComboBox(layoutWidget_9);
        SupE_niveauComboBox_2->setObjectName(QStringLiteral("SupE_niveauComboBox_2"));

        formLayout_19->setWidget(1, QFormLayout::FieldRole, SupE_niveauComboBox_2);

        SupE_parcoursLabel_2 = new QLabel(layoutWidget_9);
        SupE_parcoursLabel_2->setObjectName(QStringLiteral("SupE_parcoursLabel_2"));

        formLayout_19->setWidget(2, QFormLayout::LabelRole, SupE_parcoursLabel_2);

        SupE_parcoursComboBox_2 = new QComboBox(layoutWidget_9);
        SupE_parcoursComboBox_2->setObjectName(QStringLiteral("SupE_parcoursComboBox_2"));

        formLayout_19->setWidget(2, QFormLayout::FieldRole, SupE_parcoursComboBox_2);

        SupE_codageLabel_2 = new QLabel(layoutWidget_9);
        SupE_codageLabel_2->setObjectName(QStringLiteral("SupE_codageLabel_2"));

        formLayout_19->setWidget(3, QFormLayout::LabelRole, SupE_codageLabel_2);

        SupE_codageComboBox_2 = new QComboBox(layoutWidget_9);
        SupE_codageComboBox_2->setObjectName(QStringLiteral("SupE_codageComboBox_2"));

        formLayout_19->setWidget(3, QFormLayout::FieldRole, SupE_codageComboBox_2);

        SupE_Chercher_2 = new QPushButton(layoutWidget_9);
        SupE_Chercher_2->setObjectName(QStringLiteral("SupE_Chercher_2"));

        formLayout_19->setWidget(4, QFormLayout::SpanningRole, SupE_Chercher_2);

        ongletSuppression->addTab(sup_Transaction, QString());
        stackedWidget->addWidget(Suppression);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 221, 621));
        Toolbox = new QVBoxLayout(layoutWidget);
        Toolbox->setSpacing(6);
        Toolbox->setContentsMargins(11, 11, 11, 11);
        Toolbox->setObjectName(QStringLiteral("Toolbox"));
        Toolbox->setContentsMargins(0, 0, 0, 0);
        tl_SeConnecter = new QPushButton(layoutWidget);
        tl_SeConnecter->setObjectName(QStringLiteral("tl_SeConnecter"));
        tl_SeConnecter->setMinimumSize(QSize(0, 50));
        tl_SeConnecter->setStyleSheet(QStringLiteral(""));

        Toolbox->addWidget(tl_SeConnecter);

        tl_Lister = new QPushButton(layoutWidget);
        tl_Lister->setObjectName(QStringLiteral("tl_Lister"));
        tl_Lister->setEnabled(false);
        tl_Lister->setMinimumSize(QSize(0, 50));

        Toolbox->addWidget(tl_Lister);

        tl_Insertion = new QPushButton(layoutWidget);
        tl_Insertion->setObjectName(QStringLiteral("tl_Insertion"));
        tl_Insertion->setEnabled(false);
        tl_Insertion->setMinimumSize(QSize(0, 50));

        Toolbox->addWidget(tl_Insertion);

        tl_Modification = new QPushButton(layoutWidget);
        tl_Modification->setObjectName(QStringLiteral("tl_Modification"));
        tl_Modification->setEnabled(false);
        tl_Modification->setMinimumSize(QSize(0, 50));

        Toolbox->addWidget(tl_Modification);

        tl_Suppression = new QPushButton(layoutWidget);
        tl_Suppression->setObjectName(QStringLiteral("tl_Suppression"));
        tl_Suppression->setEnabled(false);
        tl_Suppression->setMinimumSize(QSize(0, 50));

        Toolbox->addWidget(tl_Suppression);

        tl_Quitter = new QPushButton(layoutWidget);
        tl_Quitter->setObjectName(QStringLiteral("tl_Quitter"));
        tl_Quitter->setMinimumSize(QSize(0, 50));

        Toolbox->addWidget(tl_Quitter);

        FenetrePrincipale->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(FenetrePrincipale);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FenetrePrincipale->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FenetrePrincipale);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FenetrePrincipale->setStatusBar(statusBar);
        menuBar = new QMenuBar(FenetrePrincipale);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 956, 21));
        FenetrePrincipale->setMenuBar(menuBar);

        retranslateUi(FenetrePrincipale);

        stackedWidget->setCurrentIndex(4);
        ongletConsultation->setCurrentIndex(1);
        ongletInsertion->setCurrentIndex(0);
        ongletModification->setCurrentIndex(0);
        ongletSuppression->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(FenetrePrincipale);
    } // setupUi

    void retranslateUi(QMainWindow *FenetrePrincipale)
    {
        FenetrePrincipale->setWindowTitle(QApplication::translate("FenetrePrincipale", "FenetrePrincipale", 0));
        nc_Message->setText(QApplication::translate("FenetrePrincipale", "Vous devez vous connecter avant de pouvoir\n"
"   acc\303\251der aux differentes fonctionnalit\303\251s", 0));
        Bvn_Message1->setText(QApplication::translate("FenetrePrincipale", "              Bienvenue sur \n"
"    l'outil de gestion d'\303\251l\303\250ves !", 0));
        Bvn_Message2->setText(QApplication::translate("FenetrePrincipale", "- Vous pouvez cliquer sur les boutons \303\240 gauche de la fen\303\252tre pour parcourir\n"
"les diff\303\251rentes fonctionnalit\303\251s du programme\n"
"\n"
"- Vous devez vous connecter en tant qu'admin avant d'\303\252tre autoris\303\251 \303\240\n"
"parcourir le programme", 0));
        Bvn_aide->setText(QApplication::translate("FenetrePrincipale", "Aide", 0));
        sc_Message->setText(QApplication::translate("FenetrePrincipale", "Authentifiez vous pour acc\303\251der \303\240 l'application", 0));
        sc_Deconnexion->setText(QApplication::translate("FenetrePrincipale", "Se deconnecter", 0));
        sc_Connexion->setText(QApplication::translate("FenetrePrincipale", "Se connecter", 0));
        motDePasseLabel->setText(QApplication::translate("FenetrePrincipale", "Mot de passe	: ", 0));
        utilisateurLabel->setText(QApplication::translate("FenetrePrincipale", "Utilisateur	:", 0));
        sc_motDePasseLineEdit->setText(QString());
        Bvn_aide_2->setText(QApplication::translate("FenetrePrincipale", "Aide", 0));
        QTableWidgetItem *___qtablewidgetitem = lstE_listeEtudiant->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("FenetrePrincipale", "Num\303\251ro", 0));
        QTableWidgetItem *___qtablewidgetitem1 = lstE_listeEtudiant->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("FenetrePrincipale", "Nom", 0));
        QTableWidgetItem *___qtablewidgetitem2 = lstE_listeEtudiant->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("FenetrePrincipale", "Pr\303\251nom", 0));
        QTableWidgetItem *___qtablewidgetitem3 = lstE_listeEtudiant->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("FenetrePrincipale", "Date de naissance", 0));
        lstE_Message->setText(QApplication::translate("FenetrePrincipale", "Entrez la classe \303\240 chercher ", 0));
        lstEt_mentionLabel->setText(QApplication::translate("FenetrePrincipale", "Mention de l'\303\251tudiant	:", 0));
        lstEt_mentionComboBox->clear();
        lstEt_mentionComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez la mention de l'\303\251tudiant :", 0)
        );
        lstEt_niveauLabel->setText(QApplication::translate("FenetrePrincipale", "Niveau de l'\303\251tudiant	:", 0));
        lstEt_niveauComboBox->clear();
        lstEt_niveauComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Renseignez le niveau de l'\303\251tudiant :", 0)
        );
        lstEt_parcoursLabel->setText(QApplication::translate("FenetrePrincipale", "Parcours de l'\303\251tudiant	:", 0));
        lstEt_parcoursComboBox->clear();
        lstEt_parcoursComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez le parcours de l'\303\251tudiant :", 0)
        );
        lstEt_codageLabel->setText(QApplication::translate("FenetrePrincipale", "Codage de l'\303\251tudiant	:", 0));
        lstEt_codageComboBox->clear();
        lstEt_codageComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez le codage de l'\303\251tudiant :", 0)
        );
        lstEt_Enregister->setText(QApplication::translate("FenetrePrincipale", "PushButton", 0));
        ongletConsultation->setTabText(ongletConsultation->indexOf(listeEleve), QApplication::translate("FenetrePrincipale", "Liste des \303\251l\303\250ves", 0));
        lstT_mentionLabel->setText(QApplication::translate("FenetrePrincipale", "Mention de l'\303\251tudiant	:", 0));
        lstT_mentionComboBox->clear();
        lstT_mentionComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez la mention de l'\303\251tudiant :", 0)
        );
        lstT_niveauLabel->setText(QApplication::translate("FenetrePrincipale", "Niveau de l'\303\251tudiant	:", 0));
        lstT_niveauComboBox->clear();
        lstT_niveauComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Renseignez le niveau de l'\303\251tudiant :", 0)
        );
        lstT_parcoursLabel->setText(QApplication::translate("FenetrePrincipale", "Parcours de l'\303\251tudiant	:", 0));
        lstT_parcoursComboBox->clear();
        lstT_parcoursComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez le parcours de l'\303\251tudiant :", 0)
        );
        lstT_codageLabel->setText(QApplication::translate("FenetrePrincipale", "Codage de l'\303\251tudiant	:", 0));
        lstT_codageComboBox->clear();
        lstT_codageComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez le codage de l'\303\251tudiant :", 0)
        );
        lstT_Enregister->setText(QApplication::translate("FenetrePrincipale", "PushButton", 0));
        lstT_idFactureLabel->setText(QApplication::translate("FenetrePrincipale", "ID de facture		:", 0));
        ongletConsultation->setTabText(ongletConsultation->indexOf(listeTransaction), QApplication::translate("FenetrePrincipale", "Page", 0));
        inscEt_Message->setText(QApplication::translate("FenetrePrincipale", "Entrez les informations du nouveau/nouvelle \303\251tudiant(e)", 0));
        inscEt_nomLabel->setText(QApplication::translate("FenetrePrincipale", "Nom		 :", 0));
        inscEt_prenomLabel->setText(QApplication::translate("FenetrePrincipale", "Prenom		 :", 0));
        inscEt_genreLabel->setText(QApplication::translate("FenetrePrincipale", "Genre		 :", 0));
        inscEt_dateDeNaissanceLabel->setText(QApplication::translate("FenetrePrincipale", "Date de naissance	 :", 0));
        inscEt_genreComboBox->clear();
        inscEt_genreComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "- Non sp\303\251cifi\303\251 -", 0)
         << QApplication::translate("FenetrePrincipale", "Homme", 0)
         << QApplication::translate("FenetrePrincipale", "Femme", 0)
        );
        inscEt_mentionLabel->setText(QApplication::translate("FenetrePrincipale", "Mention		 :", 0));
        inscEt_niveauLabel->setText(QApplication::translate("FenetrePrincipale", "Niveau		 :", 0));
        inscEt_parcoursLabel->setText(QApplication::translate("FenetrePrincipale", "Parcours		 :", 0));
        inscEt_codageLabel->setText(QApplication::translate("FenetrePrincipale", "Codage		 :", 0));
        inscEt_telephonePhoneLabel->setText(QApplication::translate("FenetrePrincipale", "T\303\251l\303\251phone	 :", 0));
        inscEt_adresseLabel->setText(QApplication::translate("FenetrePrincipale", "Adresse 		 :", 0));
        inscEt_Enregistrer->setText(QApplication::translate("FenetrePrincipale", "Enregistrer", 0));
        inscEt_estPassantLabel->setText(QApplication::translate("FenetrePrincipale", "Est passant	 :", 0));
        inscEt_estPassantCheckBox->setText(QApplication::translate("FenetrePrincipale", "Oui cauch\303\251 / Non par d\303\251faut", 0));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_Etudiant), QApplication::translate("FenetrePrincipale", "Nouveau/lle \303\251tudiant", 0));
        inscAchat_identifiantLabel->setText(QApplication::translate("FenetrePrincipale", "Identifiant de l'\303\251tudiant	:", 0));
        inscAchat_identifiantComboBox->clear();
        inscAchat_identifiantComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez l'identifiant de l'\303\251tudiant :", 0)
        );
        inscAchat_Message->setText(QApplication::translate("FenetrePrincipale", "Enregistrement d'un achat", 0));
        inscAchat_formationsLabel->setText(QApplication::translate("FenetrePrincipale", "Nos formations :", 0));
        inscAchat_servicesLabel->setText(QApplication::translate("FenetrePrincipale", "Les services disponibles :", 0));
        inscAchat_AjFormation->setText(QApplication::translate("FenetrePrincipale", "Ajouter", 0));
        inscAchat_AjService->setText(QApplication::translate("FenetrePrincipale", "Ajouter", 0));
        QTableWidgetItem *___qtablewidgetitem4 = inscAchat_commandeTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("FenetrePrincipale", "Designation", 0));
        QTableWidgetItem *___qtablewidgetitem5 = inscAchat_commandeTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("FenetrePrincipale", "Quantit\303\251", 0));
        QTableWidgetItem *___qtablewidgetitem6 = inscAchat_commandeTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("FenetrePrincipale", "Prix", 0));
        QTableWidgetItem *___qtablewidgetitem7 = inscAchat_commandeTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("FenetrePrincipale", "Montant", 0));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_Achat), QApplication::translate("FenetrePrincipale", "Achats", 0));
        inscP_mentionLabel->setText(QApplication::translate("FenetrePrincipale", "Mention de l'\303\251tudiant	:", 0));
        inscP_mentionComboBox->clear();
        inscP_mentionComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez la mention de l'\303\251tudiant :", 0)
        );
        inscP_niveauLabel->setText(QApplication::translate("FenetrePrincipale", "Niveau de l'\303\251tudiant	:", 0));
        inscP_niveauComboBox->clear();
        inscP_niveauComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Renseignez le niveau de l'\303\251tudiant :", 0)
        );
        inscP_parcoursLabel->setText(QApplication::translate("FenetrePrincipale", "Parcours de l'\303\251tudiant	:", 0));
        inscP_parcoursComboBox->clear();
        inscP_parcoursComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez le parcours de l'\303\251tudiant :", 0)
        );
        inscP_codageLabel->setText(QApplication::translate("FenetrePrincipale", "Codage de l'\303\251tudiant	:", 0));
        inscP_codageComboBox->clear();
        inscP_codageComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez le codage de l'\303\251tudiant :", 0)
        );
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("FenetrePrincipale", "Facture n\302\260", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("FenetrePrincipale", "Montant", 0));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_payement), QApplication::translate("FenetrePrincipale", "Payements", 0));
        inscFM_formLabel->setText(QApplication::translate("FenetrePrincipale", "Nom de la nouvelle formation	:", 0));
        inscFM_srvLabel->setText(QApplication::translate("FenetrePrincipale", "Nom du nouveau service		:", 0));
        inscFM_Enregistrer->setText(QApplication::translate("FenetrePrincipale", "Enregistrer", 0));
        inscFM_Enregistrer_2->setText(QApplication::translate("FenetrePrincipale", "Enregistrer", 0));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_Form_Msrv), QApplication::translate("FenetrePrincipale", "Formations et services", 0));
        inscNv_mentionLabel->setText(QApplication::translate("FenetrePrincipale", "Mention	 :", 0));
        InscNv_niveauLabel->setText(QApplication::translate("FenetrePrincipale", "Niveau	:", 0));
        InscNv_Enregistrer->setText(QApplication::translate("FenetrePrincipale", "Enregistrer", 0));
        inscNv_Message->setText(QApplication::translate("FenetrePrincipale", "Enregistrer un nouveau niveau", 0));
        inscPrc_mentionLabel->setText(QApplication::translate("FenetrePrincipale", "Mention	 :", 0));
        inscPrc_parcoursLabel->setText(QApplication::translate("FenetrePrincipale", "Parcours	:", 0));
        inscPrc_Enregistrer->setText(QApplication::translate("FenetrePrincipale", "Enregistrer", 0));
        InscMt_nomMentionLabel->setText(QApplication::translate("FenetrePrincipale", "Mention	 :", 0));
        InscMt_Enregistrer->setText(QApplication::translate("FenetrePrincipale", "Enregistrer", 0));
        inscPrc_Message->setText(QApplication::translate("FenetrePrincipale", "Enregistrer un nouveau parcours", 0));
        inscMt_Message->setText(QApplication::translate("FenetrePrincipale", "Enregistrer une nouvelle mention", 0));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_MentionNvPrc), QApplication::translate("FenetrePrincipale", "Mt, nv, prc", 0));
        inscA_motDePasseLabel->setText(QApplication::translate("FenetrePrincipale", "Mot de passe	:", 0));
        inscA_enregistrer->setText(QApplication::translate("FenetrePrincipale", "Enregistrer", 0));
        inscA_nomDeLAdminLabel->setText(QApplication::translate("FenetrePrincipale", "Nom de l'admin	:", 0));
        inscA_Message->setText(QApplication::translate("FenetrePrincipale", "Renseignez les identifications du nouveau admin", 0));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_Admin), QApplication::translate("FenetrePrincipale", "Ajouter un Admin", 0));
        modE_Message2_2->setText(QApplication::translate("FenetrePrincipale", "Renseignez La classe et l'\303\251l\303\250ve de l'\303\251tudiant \303\240 chercher", 0));
        modE_mentionLabel->setText(QApplication::translate("FenetrePrincipale", "Mention de l'\303\251tudiant	:", 0));
        modE_mentionComboBox->clear();
        modE_mentionComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez la mention de l'\303\251tudiant :", 0)
        );
        modE_niveauLabel->setText(QApplication::translate("FenetrePrincipale", "Niveau de l'\303\251tudiant	:", 0));
        modE_niveauComboBox->clear();
        modE_niveauComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Renseignez le niveau de l'\303\251tudiant :", 0)
        );
        modE_parcoursLabel->setText(QApplication::translate("FenetrePrincipale", "Parcours de l'\303\251tudiant	:", 0));
        modE_parcoursComboBox->clear();
        modE_parcoursComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez le parcours de l'\303\251tudiant :", 0)
        );
        modE_codageLabel->setText(QApplication::translate("FenetrePrincipale", "Codage de l'\303\251tudiant	:", 0));
        modE_codageComboBox->clear();
        modE_codageComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez le codage de l'\303\251tudiant :", 0)
        );
        modE_Chercher->setText(QApplication::translate("FenetrePrincipale", "Chercher", 0));
        inscEt_nomLabel_2->setText(QApplication::translate("FenetrePrincipale", "Nom		 :", 0));
        inscEt_prenomLabel_2->setText(QApplication::translate("FenetrePrincipale", "Prenom		 :", 0));
        inscEt_genreLabel_2->setText(QApplication::translate("FenetrePrincipale", "Genre		 :", 0));
        inscEt_dateDeNaissanceLabel_2->setText(QApplication::translate("FenetrePrincipale", "Date de naissance	 :", 0));
        inscEt_genreComboBox_2->clear();
        inscEt_genreComboBox_2->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "- Non sp\303\251cifi\303\251 -", 0)
         << QApplication::translate("FenetrePrincipale", "Homme", 0)
         << QApplication::translate("FenetrePrincipale", "Femme", 0)
        );
        inscEt_mentionLabel_2->setText(QApplication::translate("FenetrePrincipale", "Mention		 :", 0));
        inscEt_niveauLabel_2->setText(QApplication::translate("FenetrePrincipale", "Niveau		 :", 0));
        inscEt_parcoursLabel_2->setText(QApplication::translate("FenetrePrincipale", "Parcours		 :", 0));
        inscEt_codageLabel_2->setText(QApplication::translate("FenetrePrincipale", "Codage		 :", 0));
        inscEt_telephonePhoneLabel_2->setText(QApplication::translate("FenetrePrincipale", "T\303\251l\303\251phone	 :", 0));
        inscEt_adresseLabel_2->setText(QApplication::translate("FenetrePrincipale", "Adresse 		:", 0));
        inscEt_Enregistrer_2->setText(QApplication::translate("FenetrePrincipale", "Enregistrer", 0));
        ongletModification->setTabText(ongletModification->indexOf(mod_eleve), QApplication::translate("FenetrePrincipale", "Modier les information d'un \303\251l\303\250ve", 0));
        modE_mentionLabel_2->setText(QApplication::translate("FenetrePrincipale", "Mention de l'\303\251tudiant	:", 0));
        modE_mentionComboBox_2->clear();
        modE_mentionComboBox_2->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez la mention de l'\303\251tudiant :", 0)
        );
        modE_niveauLabel_2->setText(QApplication::translate("FenetrePrincipale", "Niveau de l'\303\251tudiant	:", 0));
        modE_niveauComboBox_2->clear();
        modE_niveauComboBox_2->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Renseignez le niveau de l'\303\251tudiant :", 0)
        );
        modE_parcoursLabel_2->setText(QApplication::translate("FenetrePrincipale", "Parcours de l'\303\251tudiant	:", 0));
        modE_parcoursComboBox_2->clear();
        modE_parcoursComboBox_2->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez le parcours de l'\303\251tudiant :", 0)
        );
        modE_codageLabel_2->setText(QApplication::translate("FenetrePrincipale", "Codage de l'\303\251tudiant	:", 0));
        modE_codageComboBox_2->clear();
        modE_codageComboBox_2->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez le codage de l'\303\251tudiant :", 0)
        );
        modE_Chercher_2->setText(QApplication::translate("FenetrePrincipale", "Chercher", 0));
        ongletModification->setTabText(ongletModification->indexOf(Mod_note), QApplication::translate("FenetrePrincipale", "Modifier la note d'un \303\251l\303\250ve", 0));
        label->setText(QApplication::translate("FenetrePrincipale", "Veuillez renseigner les informations de l'\303\251l\303\250ve a effacer", 0));
        SupE_mentionLabel->setText(QApplication::translate("FenetrePrincipale", "Mention de l'\303\251tudiant	:", 0));
        SupE_mentionComboBox->clear();
        SupE_mentionComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez la mention de l'\303\251tudiant :", 0)
        );
        SupE_niveauLabel->setText(QApplication::translate("FenetrePrincipale", "Niveau de l'\303\251tudiant	:", 0));
        SupE_niveauComboBox->clear();
        SupE_niveauComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Renseignez le niveau de l'\303\251tudiant :", 0)
        );
        SupE_parcoursLabel->setText(QApplication::translate("FenetrePrincipale", "Parcours de l'\303\251tudiant	:", 0));
        SupE_parcoursComboBox->clear();
        SupE_parcoursComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez le parcours de l'\303\251tudiant :", 0)
        );
        SupE_codageLabel->setText(QApplication::translate("FenetrePrincipale", "Codage de l'\303\251tudiant	:", 0));
        SupE_codageComboBox->clear();
        SupE_codageComboBox->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez le codage de l'\303\251tudiant :", 0)
        );
        SupE_Chercher->setText(QApplication::translate("FenetrePrincipale", "Supprimer", 0));
        ongletSuppression->setTabText(ongletSuppression->indexOf(sup_Etudiants), QApplication::translate("FenetrePrincipale", "Supprimer un \303\251l\303\250ve", 0));
        supM_Message->setText(QApplication::translate("FenetrePrincipale", "Entree la mati\303\250re a supprimer\n"
"        Attention la suppr\303\251ssion est d\303\251finitive !", 0));
        inscMNP_nomMentionLabel_3->setText(QApplication::translate("FenetrePrincipale", "Mention	 :", 0));
        inscMNP_niveauLabel_3->setText(QApplication::translate("FenetrePrincipale", "Niveau	:", 0));
        inscMNP_parcoursLabel_3->setText(QApplication::translate("FenetrePrincipale", "Parcours	:", 0));
        supM_Supprimer->setText(QApplication::translate("FenetrePrincipale", "Supprimer", 0));
        ongletSuppression->setTabText(ongletSuppression->indexOf(sup_Mention), QApplication::translate("FenetrePrincipale", "Supprimer une mati\303\250re", 0));
        SupE_mentionLabel_2->setText(QApplication::translate("FenetrePrincipale", "Mention de l'\303\251tudiant	:", 0));
        SupE_mentionComboBox_2->clear();
        SupE_mentionComboBox_2->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez la mention de l'\303\251tudiant :", 0)
        );
        SupE_niveauLabel_2->setText(QApplication::translate("FenetrePrincipale", "Niveau de l'\303\251tudiant	:", 0));
        SupE_niveauComboBox_2->clear();
        SupE_niveauComboBox_2->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Renseignez le niveau de l'\303\251tudiant :", 0)
        );
        SupE_parcoursLabel_2->setText(QApplication::translate("FenetrePrincipale", "Parcours de l'\303\251tudiant	:", 0));
        SupE_parcoursComboBox_2->clear();
        SupE_parcoursComboBox_2->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez le parcours de l'\303\251tudiant :", 0)
        );
        SupE_codageLabel_2->setText(QApplication::translate("FenetrePrincipale", "Codage de l'\303\251tudiant	:", 0));
        SupE_codageComboBox_2->clear();
        SupE_codageComboBox_2->insertItems(0, QStringList()
         << QApplication::translate("FenetrePrincipale", "Entrez le codage de l'\303\251tudiant :", 0)
        );
        SupE_Chercher_2->setText(QApplication::translate("FenetrePrincipale", "Supprimer", 0));
        ongletSuppression->setTabText(ongletSuppression->indexOf(sup_Transaction), QApplication::translate("FenetrePrincipale", "Supprimer des achats", 0));
        tl_SeConnecter->setText(QApplication::translate("FenetrePrincipale", "Se connecter", 0));
        tl_Lister->setText(QApplication::translate("FenetrePrincipale", "Consulter les informations", 0));
        tl_Insertion->setText(QApplication::translate("FenetrePrincipale", "Insertions", 0));
        tl_Modification->setText(QApplication::translate("FenetrePrincipale", "Modifications et mise \303\240 jour", 0));
        tl_Suppression->setText(QApplication::translate("FenetrePrincipale", "Suppression d'une entr\303\251e", 0));
        tl_Quitter->setText(QApplication::translate("FenetrePrincipale", "Quitter", 0));
    } // retranslateUi

};

namespace Ui {
    class FenetrePrincipale: public Ui_FenetrePrincipale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREPRINCIPALE_H
