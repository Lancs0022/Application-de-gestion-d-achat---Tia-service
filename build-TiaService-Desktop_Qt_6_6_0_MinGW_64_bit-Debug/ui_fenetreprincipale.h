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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QKeySequenceEdit>
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
    QKeySequenceEdit *keySequenceEdit;
    QPushButton *Bvn_aide_2;
    QWidget *ConsulterInfos;
    QTabWidget *ongletConsultation;
    QWidget *listeEleve;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *lstE_classeAfficherLabel;
    QLabel *lstE_eleveRecherchLabel;
    QLineEdit *lstE_eleveRecherchLineEdit;
    QSpacerItem *verticalSpacer_3;
    QPushButton *lstE_chercher;
    QComboBox *lstE_classeAfficherComboBox;
    QTableWidget *lstE_listeEleves;
    QLabel *lstE_Message;
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
    QComboBox *inscEt_parcoursLineEdit;
    QLabel *inscEt_codageLabel;
    QSpinBox *inscEt_codageLineEdit;
    QLabel *inscEt_telephonePhoneLabel;
    QLineEdit *inscEt_telephoneLineEdit;
    QLabel *inscEt_adresseLabel;
    QTextEdit *inscEt_adresseTextEdit;
    QPushButton *inscEt_Enregistrer;
    QWidget *insc_Note;
    QWidget *layoutWidget_2;
    QFormLayout *formLayout_6;
    QLabel *inscN_numeroEleveLabel;
    QComboBoinscAchat_mentionLabelmboBox;
    QLabel *insinscAchat_mentionComboBoxQLabel *inscAchat_niveauLabel  QComboBox *inscN_matiereComboBox;
    QLabel *inscAchat_parcoursLabel   QLineEdit *inscAchat_parcoursComboBox   QPushButton *inscN_Enregistrer;
    QComboBox *ininscAchat_EnregistrermboBox;
    QTableWiinscAchat_codageLabelveauComboBoxe;
    QPushButton *inscN_afficherEleves;
    QLabel *inscN_matiereAffiche;
    QLabel *inscN_Message;
    QWidget *ininscAchat_codageComboBoxonNvPrc;
    QWidget *formLayoutWidget_6;
    QFormLayout *formLayout_7;
    QLabel *inscMNP_nomMentionLabel;
    QLineEdit *inscMNP_nomMentionLineEdit;
    QPushButton *inscMNP_Enregistrer;
    QLabel *inscMNP_niveauLabel;
    QLineEdit *inscMNP_niveauLineEdit;
    QLabel *inscMNP_parcoursLabel;
    QLineEdit *inscMNP_parcoursLineEdit;
    QLabel *inscC_Message;
    QWidget *insc_matiere;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *inscM_pourLaClasseLabel;
    QLabel *inscM_nomDuMatiReLabel;
    QLineEdit *inscM_nomDuMatiReLineEdit;
    QLabel *inscM_coefficientLabel;
    QLineEdit *inscM_coefficientLineEdit;
    QSpacerItem *inscM_verticalSpacer;
    QPushButton *inscM_Enregistrer;
    QComboBox *inscM_classeMatiereCombobox;
    QLabel *inscM_Message;
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
    QWidget *formLayoutWidget_7;
    QFormLayout *formLayout_8;
    QLabel *modE_classeEleveLabel;
    QLabel *modE_numeroLabel;
    QComboBox *modE_classeEleveComboBox;
    QComboBox *modE_numeroComboBox;
    QPushButton *modE_chercher;
    QWidget *formLayoutWidget_8;
    QFormLayout *formLayout_10;
    QLabel *modE_nomLabel;
    QLineEdit *modE_nomLineEdit;
    QLabel *modE_prenomLabel;
    QLineEdit *modE_prenomLineEdit;
    QLabel *modE_dateDeNaissanceLabel;
    QDateEdit *modE_dateDeNaissanceDateEdit;
    QLabel *modE_classeAssignLabel;
    QLabel *modE_pereLabel;
    QLineEdit *modE_pereLineEdit;
    QLabel *modE_mereLabel;
    QLineEdit *modE_mereLineEdit;
    QSpacerItem *verticalSpacer_4;
    QPushButton *modE_Enregistrer;
    QComboBox *modE_classeAssigneComboBox;
    QLabel *modE_Message2;
    QLabel *modE_Message2_2;
    QWidget *Mod_note;
    QLabel *label_2;
    QWidget *Suppression;
    QTabWidget *ongletSuppression;
    QWidget *sup_Eleves;
    QWidget *formLayoutWidget_9;
    QFormLayout *formLayout_11;
    QLabel *lstE_classeAfficherLabel_2;
    QLabel *lstE_eleveRecherchLabel_2;
    QLineEdit *lstE_eleveRecherchLineEdit_2;
    QSpacerItem *verticalSpacer_5;
    QPushButton *lstE_chercher_2;
    QComboBox *lstE_classeAfficherComboBox_2;
    QLabel *label;
    QWidget *sup_Matiere;
    QLabel *supM_Message;
    QWidget *formLayoutWidget_10;
    QFormLayout *formLayout_12;
    QLabel *supM_classeMatiereLabel;
    QComboBox *supM_classeMatiereComboBox;
    QLabel *supM_nomMatiereLabel;
    QComboBox *supM_nomMatiereComboBox;
    QPushButton *supM_Supprimer;
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

        keySequenceEdit = new QKeySequenceEdit(formLayoutWidget);
        keySequenceEdit->setObjectName("sc_motDePasseLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, keySequenceEdit);

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
        formLayoutWidget_4 = new QWidget(listeEleve);
        formLayoutWidget_4->setObjectName("formLayoutWidget_4");
        formLayoutWidget_4->setGeometry(QRect(130, 60, 391, 114));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName("formLayout_4");
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        lstE_classeAfficherLabel = new QLabel(formLayoutWidget_4);
        lstE_classeAfficherLabel->setObjectName("lstE_classeAfficherLabel");

        formLayout_4->setWidget(0, QFormLayout::LabelRole, lstE_classeAfficherLabel);

        lstE_eleveRecherchLabel = new QLabel(formLayoutWidget_4);
        lstE_eleveRecherchLabel->setObjectName("lstE_eleveRecherchLabel");

        formLayout_4->setWidget(1, QFormLayout::LabelRole, lstE_eleveRecherchLabel);

        lstE_eleveRecherchLineEdit = new QLineEdit(formLayoutWidget_4);
        lstE_eleveRecherchLineEdit->setObjectName("lstE_eleveRecherchLineEdit");

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lstE_eleveRecherchLineEdit);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(2, QFormLayout::LabelRole, verticalSpacer_3);

        lstE_chercher = new QPushButton(formLayoutWidget_4);
        lstE_chercher->setObjectName("lstE_chercher");

        formLayout_4->setWidget(3, QFormLayout::SpanningRole, lstE_chercher);

        lstE_classeAfficherComboBox = new QComboBox(formLayoutWidget_4);
        lstE_classeAfficherComboBox->setObjectName("lstE_classeAfficherComboBox");

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lstE_classeAfficherComboBox);

        lstE_listeEleves = new QTableWidget(listeEleve);
        if (lstE_listeEleves->columnCount() < 6)
            lstE_listeEleves->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        lstE_listeEleves->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        lstE_listeEleves->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        lstE_listeEleves->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        lstE_listeEleves->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        lstE_listeEleves->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        lstE_listeEleves->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        lstE_listeEleves->setObjectName("lstE_listeEleves");
        lstE_listeEleves->setGeometry(QRect(10, 210, 711, 381));
        lstE_Message = new QLabel(listeEleve);
        lstE_Message->setObjectName("lstE_Message");
        lstE_Message->setGeometry(QRect(260, 30, 241, 16));
        ongletConsultation->addTab(listeEleve, QString());
        stackedWidget->addWidget(ConsulterInfos);
        Insertion = new QWidget();
        Insertion->setObjectName("Insertion");
        ongletInsertion = new QTabWidget(Insertion);
        ongletInsertion->setObjectName("ongletInsertion");
        ongletInsertion->setGeometry(QRect(0, 0, 731, 630));
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
        formLayoutWidget_11->setGeometry(QRect(160, 100, 411, 374));
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

        inscEt_parcoursLineEdit = new QComboBox(formLayoutWidget_11);
        inscEt_parcoursLineEdit->setObjectName("inscEt_parcoursLineEdit");

        formLayout_9->setWidget(6, QFormLayout::FieldRole, inscEt_parcoursLineEdit);

        inscEt_codageLabel = new QLabel(formLayoutWidget_11);
        inscEt_codageLabel->setObjectName("inscEt_codageLabel");

        formLayout_9->setWidget(7, QFormLayout::LabelRole, inscEt_codageLabel);

        inscEt_codageLineEdit = new QSpinBox(formLayoutWidget_11);
        inscEt_codageLineEdit->setObjectName("inscEt_codageLineEdit");

        formLayout_9->setWidget(7, QFormLayout::FieldRole, inscEt_codageLineEdit);

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

        formLayout_9->setWidget(10, QFormLayout::SpanningRole, inscEt_Enregistrer);

        QIcon icon;
        icon.addFile(QString::fromUtf8("Assets/icons8-add-user-group-man-man-skin-type-7-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        ongletInsertion->addTab(insc_Etudiant, icon, QString());
        insc_Note = new QWidget();
        insc_Note->setObjectName("insc_Note");
        layoutWidget_2 = new QWidget(insc_Note);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(170, 50, 411, 151));
        formLayout_6 = new QFormLayout(layoutWidget_2);
        formLayout_6->setSpacing(6);
        formLayout_6->setContentsMargins(11, 11, 11, 11);
        formLayout_6->setObjectName("formLayout_6");
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        inscN_numeroEleveLabel = new QLabel(layoutWidget_2);
        inscN_numeroEleveLabel->setObjectName("inscN_numeroEleveLabel");

        formLayout_6->setWidget(0, QFormLayout::LabelRole, inscN_numeroEleveLabel);

        inscN_numeroEleveComboBox = new QComboBox(layoutWidget_2);
        inscN_numeroEleveComboBox->addItem(QString());
        inscN_numeroEleveComboBox->setObjectName("inscN_numeroEleveComboBox");

        formLayout_6->setWidget(0, QFormLayout::FieldRole, inscN_numeroEleveComboBox);

        inscN_classeEleveLabel = new QLabel(layoutWidget_2);
        inscAchat_mentionLabel->setObjectName("inscN_classeEleveLabel");

       inscAchat_mentionLabelet(1, QFormLayout::LabelRole, inscN_classeEleveLabel);

        inscAchat_mentionComboBoxQLabel(layoutWidget_2);
 inscAchat_mentionLabelonComboBoxjectName("inscN_matiereLabel");

       inscAchat_mentionComboBox, QFormLayout::LabelRole, inscN_matiereLabel);

       inscAchat_niveauLabel = new QComboBox(layoutWidget_inscAchat_mentionComboBoxComboBox->addItem(QString());
        inscAchat_niveauLabel>setObjectName("inscN_matiereComboBox");

        formLayout_6->setWidget(2, QFormLayout::FieldRole, inscN_matiereComboBox);

       inscAcinscAchat_parcoursLabelnew QLabel(layoutWidget_2);
        inscN_noteLabel->setObjectName("inscN_noteLabel");

        inscAchat_parcoursComboBoxet(3, QFormLayout::LabelinscAchat_parcoursLabelbel);

       inscAcinscAchat_parcoursComboBoxnew QLineEdit(layoutWidget_2);
        inscN_noteLineEdit->setObjectName("inscN_noteLineEdit");

        formLayout_6->setWidget(3, QFormLayout::FieldRole,inscAchat_parcoursComboBox

        inscN_Enregistrer = new QPushButton(layoutWidget_2);
        inscAchat_codageLabeler->setObjectName("inscN_Enregistrer");

       inscAchat_codageLabelsetWidget(4, QFormLayout::SpanningRole, inscN_Enregistrer);

        inscN_classeEleveComboBox = new QComboBox(layoutWiinscAchat_codageLabel  inscN_classeEleveComboBox->addItem(QString());
        inscN_classeEleveComboBox->setObjectName("inscN_classeEleveComboBox");

       insinscAchat_EnregistrererWidget(1, QFormLayout::FieldRole, inscN_classeEleveComboBox);

        inscN_noteMatiereClasse = new QTableWidget(insc_Note);inscAchat_EnregistrerN_noteMatiereClasse->columnCount() < 4)
            inscN_noteMatiereClasse->setColumnCount(4);
        inscAchat_niveauComboBoxAchat_classeEleveComboBox    inscAchat_classeEleveComboBoxewidgetitem6 = new QTableWidgetItem();
        inscAchat_niveauComboBoxfont3);
        inscAchat_niveauComboBoxorizontalHeaderItem(0,inscAchat_classeEleveComboBox      QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        inscN_noteMatiereClasse->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWinscAchat_niveauComboBoxteMatiereClasse->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font3);
        inscAchat_codageComboBoxteMatiereClasse->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        inscAchat_codageComboBoxteMatiereClasse->setObjectName("inscN_noteMatiereClasse");
        inscAchat_codageComboBoxteMatiereClasse->setGeometry(QRect(10, 240, 711, 341));
        inscN_afficherEleves = new QPushButton(insc_Note);
        inscN_afficherEleves->setObjectName("inscN_afficherinscAchat_codageComboBox;
        inscN_afficherEleves->setGeometry(QRect(10, 210, 111, 24));
        inscN_matiereAffiche = new QLabel(insc_Note);
        inscN_matiereAffiche->setObjectName("inscN_matiereAffiche");
        inscN_matiereAffiche->setGeometry(QRect(190, 210, 401, 21));
        inscN_matiereAffiche->setFont(font2);
        inscN_Message = new QLabel(insc_Note);
        inscN_Message->setObjectName("inscN_Message");
        inscN_Message->setGeometry(QRect(220, 20, 311, 16));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        inscN_Message->setFont(font4);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("Assets/icons8-checklist-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        ongletInsertion->addTab(insc_Note, icon1, QString());
        insc_MentionNvPrc = new QWidget();
        insc_MentionNvPrc->setObjectName("insc_MentionNvPrc");
        formLayoutWidget_6 = new QWidget(insc_MentionNvPrc);
        formLayoutWidget_6->setObjectName("formLayoutWidget_6");
        formLayoutWidget_6->setGeometry(QRect(210, 220, 311, 116));
        formLayout_7 = new QFormLayout(formLayoutWidget_6);
        formLayout_7->setSpacing(6);
        formLayout_7->setContentsMargins(11, 11, 11, 11);
        formLayout_7->setObjectName("formLayout_7");
        formLayout_7->setContentsMargins(0, 0, 0, 0);
        inscMNP_nomMentionLabel = new QLabel(formLayoutWidget_6);
        inscMNP_nomMentionLabel->setObjectName("inscMNP_nomMentionLabel");

        formLayout_7->setWidget(0, QFormLayout::LabelRole, inscMNP_nomMentionLabel);

        inscMNP_nomMentionLineEdit = new QLineEdit(formLayoutWidget_6);
        inscMNP_nomMentionLineEdit->setObjectName("inscMNP_nomMentionLineEdit");

        formLayout_7->setWidget(0, QFormLayout::FieldRole, inscMNP_nomMentionLineEdit);

        inscMNP_Enregistrer = new QPushButton(formLayoutWidget_6);
        inscMNP_Enregistrer->setObjectName("inscMNP_Enregistrer");

        formLayout_7->setWidget(3, QFormLayout::SpanningRole, inscMNP_Enregistrer);

        inscMNP_niveauLabel = new QLabel(formLayoutWidget_6);
        inscMNP_niveauLabel->setObjectName("inscMNP_niveauLabel");

        formLayout_7->setWidget(1, QFormLayout::LabelRole, inscMNP_niveauLabel);

        inscMNP_niveauLineEdit = new QLineEdit(formLayoutWidget_6);
        inscMNP_niveauLineEdit->setObjectName("inscMNP_niveauLineEdit");

        formLayout_7->setWidget(1, QFormLayout::FieldRole, inscMNP_niveauLineEdit);

        inscMNP_parcoursLabel = new QLabel(formLayoutWidget_6);
        inscMNP_parcoursLabel->setObjectName("inscMNP_parcoursLabel");

        formLayout_7->setWidget(2, QFormLayout::LabelRole, inscMNP_parcoursLabel);

        inscMNP_parcoursLineEdit = new QLineEdit(formLayoutWidget_6);
        inscMNP_parcoursLineEdit->setObjectName("inscMNP_parcoursLineEdit");

        formLayout_7->setWidget(2, QFormLayout::FieldRole, inscMNP_parcoursLineEdit);

        inscC_Message = new QLabel(insc_MentionNvPrc);
        inscC_Message->setObjectName("inscC_Message");
        inscC_Message->setGeometry(QRect(230, 150, 331, 31));
        inscC_Message->setFont(font2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("Assets/icons8-class-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        ongletInsertion->addTab(insc_MentionNvPrc, icon2, QString());
        insc_matiere = new QWidget();
        insc_matiere->setObjectName("insc_matiere");
        formLayoutWidget_3 = new QWidget(insc_matiere);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(190, 190, 291, 131));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        inscM_pourLaClasseLabel = new QLabel(formLayoutWidget_3);
        inscM_pourLaClasseLabel->setObjectName("inscM_pourLaClasseLabel");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, inscM_pourLaClasseLabel);

        inscM_nomDuMatiReLabel = new QLabel(formLayoutWidget_3);
        inscM_nomDuMatiReLabel->setObjectName("inscM_nomDuMatiReLabel");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, inscM_nomDuMatiReLabel);

        inscM_nomDuMatiReLineEdit = new QLineEdit(formLayoutWidget_3);
        inscM_nomDuMatiReLineEdit->setObjectName("inscM_nomDuMatiReLineEdit");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, inscM_nomDuMatiReLineEdit);

        inscM_coefficientLabel = new QLabel(formLayoutWidget_3);
        inscM_coefficientLabel->setObjectName("inscM_coefficientLabel");

        formLayout_3->setWidget(2, QFormLayout::LabelRole, inscM_coefficientLabel);

        inscM_coefficientLineEdit = new QLineEdit(formLayoutWidget_3);
        inscM_coefficientLineEdit->setObjectName("inscM_coefficientLineEdit");

        formLayout_3->setWidget(2, QFormLayout::FieldRole, inscM_coefficientLineEdit);

        inscM_verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_3->setItem(3, QFormLayout::LabelRole, inscM_verticalSpacer);

        inscM_Enregistrer = new QPushButton(formLayoutWidget_3);
        inscM_Enregistrer->setObjectName("inscM_Enregistrer");

        formLayout_3->setWidget(4, QFormLayout::SpanningRole, inscM_Enregistrer);

        inscM_classeMatiereCombobox = new QComboBox(formLayoutWidget_3);
        inscM_classeMatiereCombobox->setObjectName("inscM_classeMatiereCombobox");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, inscM_classeMatiereCombobox);

        inscM_Message = new QLabel(insc_matiere);
        inscM_Message->setObjectName("inscM_Message");
        inscM_Message->setGeometry(QRect(220, 110, 301, 51));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Calibri")});
        font5.setUnderline(false);
        inscM_Message->setFont(font5);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("Assets/icons8-bookcase-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        ongletInsertion->addTab(insc_matiere, icon3, QString());
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
        inscA_Message->setGeometry(QRect(230, 100, 331, 61));
        inscA_Message->setFont(font2);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("Assets/icons8-add-administrator-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        ongletInsertion->addTab(insc_Admin, icon4, QString());
        stackedWidget->addWidget(Insertion);
        Modifications = new QWidget();
        Modifications->setObjectName("Modifications");
        ongletModification = new QTabWidget(Modifications);
        ongletModification->setObjectName("ongletModification");
        ongletModification->setGeometry(QRect(0, 0, 731, 621));
        mod_eleve = new QWidget();
        mod_eleve->setObjectName("mod_eleve");
        formLayoutWidget_7 = new QWidget(mod_eleve);
        formLayoutWidget_7->setObjectName("formLayoutWidget_7");
        formLayoutWidget_7->setGeometry(QRect(180, 90, 311, 91));
        formLayout_8 = new QFormLayout(formLayoutWidget_7);
        formLayout_8->setSpacing(6);
        formLayout_8->setContentsMargins(11, 11, 11, 11);
        formLayout_8->setObjectName("formLayout_8");
        formLayout_8->setContentsMargins(0, 0, 0, 0);
        modE_classeEleveLabel = new QLabel(formLayoutWidget_7);
        modE_classeEleveLabel->setObjectName("modE_classeEleveLabel");

        formLayout_8->setWidget(0, QFormLayout::LabelRole, modE_classeEleveLabel);

        modE_numeroLabel = new QLabel(formLayoutWidget_7);
        modE_numeroLabel->setObjectName("modE_numeroLabel");

        formLayout_8->setWidget(1, QFormLayout::LabelRole, modE_numeroLabel);

        modE_classeEleveComboBox = new QComboBox(formLayoutWidget_7);
        modE_classeEleveComboBox->setObjectName("modE_classeEleveComboBox");

        formLayout_8->setWidget(0, QFormLayout::FieldRole, modE_classeEleveComboBox);

        modE_numeroComboBox = new QComboBox(formLayoutWidget_7);
        modE_numeroComboBox->setObjectName("modE_numeroComboBox");

        formLayout_8->setWidget(1, QFormLayout::FieldRole, modE_numeroComboBox);

        modE_chercher = new QPushButton(formLayoutWidget_7);
        modE_chercher->setObjectName("modE_chercher");

        formLayout_8->setWidget(2, QFormLayout::SpanningRole, modE_chercher);

        formLayoutWidget_8 = new QWidget(mod_eleve);
        formLayoutWidget_8->setObjectName("formLayoutWidget_8");
        formLayoutWidget_8->setGeometry(QRect(200, 290, 261, 213));
        formLayout_10 = new QFormLayout(formLayoutWidget_8);
        formLayout_10->setSpacing(6);
        formLayout_10->setContentsMargins(11, 11, 11, 11);
        formLayout_10->setObjectName("formLayout_10");
        formLayout_10->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_10->setContentsMargins(0, 0, 0, 0);
        modE_nomLabel = new QLabel(formLayoutWidget_8);
        modE_nomLabel->setObjectName("modE_nomLabel");

        formLayout_10->setWidget(0, QFormLayout::LabelRole, modE_nomLabel);

        modE_nomLineEdit = new QLineEdit(formLayoutWidget_8);
        modE_nomLineEdit->setObjectName("modE_nomLineEdit");

        formLayout_10->setWidget(0, QFormLayout::FieldRole, modE_nomLineEdit);

        modE_prenomLabel = new QLabel(formLayoutWidget_8);
        modE_prenomLabel->setObjectName("modE_prenomLabel");

        formLayout_10->setWidget(1, QFormLayout::LabelRole, modE_prenomLabel);

        modE_prenomLineEdit = new QLineEdit(formLayoutWidget_8);
        modE_prenomLineEdit->setObjectName("modE_prenomLineEdit");

        formLayout_10->setWidget(1, QFormLayout::FieldRole, modE_prenomLineEdit);

        modE_dateDeNaissanceLabel = new QLabel(formLayoutWidget_8);
        modE_dateDeNaissanceLabel->setObjectName("modE_dateDeNaissanceLabel");

        formLayout_10->setWidget(2, QFormLayout::LabelRole, modE_dateDeNaissanceLabel);

        modE_dateDeNaissanceDateEdit = new QDateEdit(formLayoutWidget_8);
        modE_dateDeNaissanceDateEdit->setObjectName("modE_dateDeNaissanceDateEdit");

        formLayout_10->setWidget(2, QFormLayout::FieldRole, modE_dateDeNaissanceDateEdit);

        modE_classeAssignLabel = new QLabel(formLayoutWidget_8);
        modE_classeAssignLabel->setObjectName("modE_classeAssignLabel");

        formLayout_10->setWidget(3, QFormLayout::LabelRole, modE_classeAssignLabel);

        modE_pereLabel = new QLabel(formLayoutWidget_8);
        modE_pereLabel->setObjectName("modE_pereLabel");

        formLayout_10->setWidget(4, QFormLayout::LabelRole, modE_pereLabel);

        modE_pereLineEdit = new QLineEdit(formLayoutWidget_8);
        modE_pereLineEdit->setObjectName("modE_pereLineEdit");

        formLayout_10->setWidget(4, QFormLayout::FieldRole, modE_pereLineEdit);

        modE_mereLabel = new QLabel(formLayoutWidget_8);
        modE_mereLabel->setObjectName("modE_mereLabel");

        formLayout_10->setWidget(5, QFormLayout::LabelRole, modE_mereLabel);

        modE_mereLineEdit = new QLineEdit(formLayoutWidget_8);
        modE_mereLineEdit->setObjectName("modE_mereLineEdit");

        formLayout_10->setWidget(5, QFormLayout::FieldRole, modE_mereLineEdit);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_10->setItem(6, QFormLayout::FieldRole, verticalSpacer_4);

        modE_Enregistrer = new QPushButton(formLayoutWidget_8);
        modE_Enregistrer->setObjectName("modE_Enregistrer");

        formLayout_10->setWidget(7, QFormLayout::SpanningRole, modE_Enregistrer);

        modE_classeAssigneComboBox = new QComboBox(formLayoutWidget_8);
        modE_classeAssigneComboBox->setObjectName("modE_classeAssigneComboBox");

        formLayout_10->setWidget(3, QFormLayout::FieldRole, modE_classeAssigneComboBox);

        modE_Message2 = new QLabel(mod_eleve);
        modE_Message2->setObjectName("modE_Message2");
        modE_Message2->setGeometry(QRect(190, 220, 341, 31));
        modE_Message2->setFont(font2);
        modE_Message2_2 = new QLabel(mod_eleve);
        modE_Message2_2->setObjectName("modE_Message2_2");
        modE_Message2_2->setGeometry(QRect(180, 40, 341, 31));
        modE_Message2_2->setFont(font2);
        ongletModification->addTab(mod_eleve, QString());
        Mod_note = new QWidget();
        Mod_note->setObjectName("Mod_note");
        label_2 = new QLabel(Mod_note);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(250, 230, 271, 71));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Calibri")});
        font6.setPointSize(14);
        font6.setBold(true);
        label_2->setFont(font6);
        label_2->setCursor(QCursor(Qt::CrossCursor));
        ongletModification->addTab(Mod_note, QString());
        stackedWidget->addWidget(Modifications);
        Suppression = new QWidget();
        Suppression->setObjectName("Suppression");
        ongletSuppression = new QTabWidget(Suppression);
        ongletSuppression->setObjectName("ongletSuppression");
        ongletSuppression->setGeometry(QRect(0, 0, 731, 621));
        sup_Eleves = new QWidget();
        sup_Eleves->setObjectName("sup_Eleves");
        formLayoutWidget_9 = new QWidget(sup_Eleves);
        formLayoutWidget_9->setObjectName("formLayoutWidget_9");
        formLayoutWidget_9->setGeometry(QRect(130, 180, 391, 114));
        formLayout_11 = new QFormLayout(formLayoutWidget_9);
        formLayout_11->setSpacing(6);
        formLayout_11->setContentsMargins(11, 11, 11, 11);
        formLayout_11->setObjectName("formLayout_11");
        formLayout_11->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_11->setContentsMargins(0, 0, 0, 0);
        lstE_classeAfficherLabel_2 = new QLabel(formLayoutWidget_9);
        lstE_classeAfficherLabel_2->setObjectName("lstE_classeAfficherLabel_2");

        formLayout_11->setWidget(0, QFormLayout::LabelRole, lstE_classeAfficherLabel_2);

        lstE_eleveRecherchLabel_2 = new QLabel(formLayoutWidget_9);
        lstE_eleveRecherchLabel_2->setObjectName("lstE_eleveRecherchLabel_2");

        formLayout_11->setWidget(1, QFormLayout::LabelRole, lstE_eleveRecherchLabel_2);

        lstE_eleveRecherchLineEdit_2 = new QLineEdit(formLayoutWidget_9);
        lstE_eleveRecherchLineEdit_2->setObjectName("lstE_eleveRecherchLineEdit_2");

        formLayout_11->setWidget(1, QFormLayout::FieldRole, lstE_eleveRecherchLineEdit_2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_11->setItem(2, QFormLayout::LabelRole, verticalSpacer_5);

        lstE_chercher_2 = new QPushButton(formLayoutWidget_9);
        lstE_chercher_2->setObjectName("lstE_chercher_2");

        formLayout_11->setWidget(3, QFormLayout::SpanningRole, lstE_chercher_2);

        lstE_classeAfficherComboBox_2 = new QComboBox(formLayoutWidget_9);
        lstE_classeAfficherComboBox_2->setObjectName("lstE_classeAfficherComboBox_2");

        formLayout_11->setWidget(0, QFormLayout::FieldRole, lstE_classeAfficherComboBox_2);

        label = new QLabel(sup_Eleves);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 110, 321, 31));
        label->setFont(font2);
        ongletSuppression->addTab(sup_Eleves, QString());
        sup_Matiere = new QWidget();
        sup_Matiere->setObjectName("sup_Matiere");
        supM_Message = new QLabel(sup_Matiere);
        supM_Message->setObjectName("supM_Message");
        supM_Message->setGeometry(QRect(220, 120, 251, 41));
        supM_Message->setFont(font2);
        formLayoutWidget_10 = new QWidget(sup_Matiere);
        formLayoutWidget_10->setObjectName("formLayoutWidget_10");
        formLayoutWidget_10->setGeometry(QRect(190, 210, 301, 91));
        formLayout_12 = new QFormLayout(formLayoutWidget_10);
        formLayout_12->setSpacing(6);
        formLayout_12->setContentsMargins(11, 11, 11, 11);
        formLayout_12->setObjectName("formLayout_12");
        formLayout_12->setContentsMargins(0, 0, 0, 0);
        supM_classeMatiereLabel = new QLabel(formLayoutWidget_10);
        supM_classeMatiereLabel->setObjectName("supM_classeMatiereLabel");

        formLayout_12->setWidget(0, QFormLayout::LabelRole, supM_classeMatiereLabel);

        supM_classeMatiereComboBox = new QComboBox(formLayoutWidget_10);
        supM_classeMatiereComboBox->setObjectName("supM_classeMatiereComboBox");

        formLayout_12->setWidget(0, QFormLayout::FieldRole, supM_classeMatiereComboBox);

        supM_nomMatiereLabel = new QLabel(formLayoutWidget_10);
        supM_nomMatiereLabel->setObjectName("supM_nomMatiereLabel");

        formLayout_12->setWidget(1, QFormLayout::LabelRole, supM_nomMatiereLabel);

        supM_nomMatiereComboBox = new QComboBox(formLayoutWidget_10);
        supM_nomMatiereComboBox->setObjectName("supM_nomMatiereComboBox");

        formLayout_12->setWidget(1, QFormLayout::FieldRole, supM_nomMatiereComboBox);

        supM_Supprimer = new QPushButton(formLayoutWidget_10);
        supM_Supprimer->setObjectName("supM_Supprimer");

        formLayout_12->setWidget(2, QFormLayout::SpanningRole, supM_Supprimer);

        ongletSuppression->addTab(sup_Matiere, QString());
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

        stackedWidget->setCurrentIndex(2);
        ongletConsultation->setCurrentIndex(0);
        ongletInsertion->setCurrentIndex(2);
        ongletModification->setCurrentIndex(0);
        ongletSuppression->setCurrentIndex(0);


        inscAchat_niveauLabelotsByName(FenetrePrincipale);
    } //inscAct_Enregistrerd retranslateUi(QMainWindow *FenetrePrincipale)
    {
  inscAcinscAchat_mentionComboBoxmboBoxComboBoxindowTitle(QCoreApplication::translate("FenetrePrincipale", "FenetrePrincipale", nullptr));
        inscAchat_mentionLabeloreApplication::translate("FenetrePrincipale", "Vous devez vous connecter avant de pouvoir\n"
"   acc\303\251der aux differentes fonctionnalit\303\251s", nullptr));
        inscAchat_niveauEtudiantComboBoxplication::translate("FenetrePrincipale", "              Bienvenue sur \n"
"    l'oinscAchat_codageLabeluComboBox250ves !", nullptr));
        Bvn_Message2->setText(QCoreApplication::translate("FenetrePrincipale", "- Vous pouvez cliquer sur les boutons \303\240 gauche de la fen\303\252tre pour parcourir\n"
"les diff\303\251rentes fonctionnalit\303\251s du programme\n"
"\n"
"- Vous devez vous connecter en tant qu'admin avant d'\303\252tre autoris\303\251 \303\240\n"
"parcourir le programme", nullptr));
        Bvn_aide->setText(QCoreApplication::translate("FenetrePrincipale", "Aide", nullptr));
        sc_Message->setText(QCoreApplication::translate("FenetrePrincipale", "Authentifiez vous pour acc\303\251der \303\240 l'application", nullptr));
        inscAchat_codageComboBoxnexion->setText(QCoreApplication::translate("FenetrePrincipale", "Se deconnecter", nullptr));
        sc_Connexion->setText(QCoreApplication::translate("FenetrePrincipale", "Se connecter", nullptr));
        motDePasseLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Mot de passe	: ", nullptr));
        utilisateurLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Utilisateur	:", nullptr));
        Bvn_aide_2->setText(QCoreApplication::translate("FenetrePrincipale", "Aide", nullptr));
        lstE_classeAfficherLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Classe \303\240 afficher	:", nullptr));
        lstE_eleveRecherchLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Nom de l'\303\251leve	:", nullptr));
        lstE_chercher->setText(QCoreApplication::translate("FenetrePrincipale", "Chercher", nullptr));
        QTableWidgetItem *___qtablewidgetitem = lstE_listeEleves->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("FenetrePrincipale", "Num\303\251ro", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = lstE_listeEleves->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("FenetrePrincipale", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = lstE_listeEleves->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("FenetrePrincipale", "Pr\303\251nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = lstE_listeEleves->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("FenetrePrincipale", "Date de naissance", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = lstE_listeEleves->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("FenetrePrincipale", "P\303\250re", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = lstE_listeEleves->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("FenetrePrincipale", "M\303\250re", nullptr));
        lstE_Message->setText(QCoreApplication::translate("FenetrePrincipale", "Entrez la classe \303\240 chercher ", nullptr));
        ongletConsultation->setTabText(ongletConsultation->indexOf(listeEleve), QCoreApplication::translate("FenetrePrincipale", "Liste des \303\251l\303\250ves", nullptr));
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
        inscEt_adresseLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Adresse 		:", nullptr));
        inscEt_Enregistrer->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrer", nullptr));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_Etudiant), QCoreApplication::translate("FenetrePrincipale", "Inscrire un \303\251l\303\250ve", nullptr));
        inscN_numeroEleveLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Num\303\251ro de l'\303\251l\303\250ve	:", nullptr));
        inscN_numeroEleveComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez le num\303\251ro de l'\303\251l\303\250ve :", nullptr));

        inscN_classeEleveLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Classe de l'\303\251l\303\250ve		:", nullptr));
        inscN_matiereLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Mati\303\250re			:", nullptr));
        inscN_matiereComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Entrez la mati\303\250re \303\240 noter :", nullptr));

        inscN_noteLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Note			:", nullptr));
        inscN_noteLineEdit->setText(QString());
        inscN_Enregistrer->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrer", nullptr));
        inscN_classeEleveComboBox->setItemText(0, QCoreApplication::translate("FenetrePrincipale", "Renseignez la classe a afficher :", nullptr));

        QTableWidgetItem *___qtablewidgetitem6 = inscN_noteMatiereClasse->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("FenetrePrincipale", "Num\303\251ro", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = inscN_noteMatiereClasse->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("FenetrePrincipale", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = inscN_noteMatiereClasse->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("FenetrePrincipale", "Pr\303\251nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = inscN_noteMatiereClasse->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("FenetrePrincipale", "Note", nullptr));
        inscN_afficherEleves->setText(QCoreApplication::translate("FenetrePrincipale", "Afficher les \303\251l\303\250ves", nullptr));
        inscN_matiereAffiche->setText(QString());
        inscN_Message->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrement de notes pour une mati\303\250re", nullptr));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_Note), QCoreApplication::translate("FenetrePrincipale", "Inscrire des notes", nullptr));
        inscMNP_nomMentionLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Mention	 :", nullptr));
        inscMNP_Enregistrer->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrer", nullptr));
        inscMNP_niveauLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Niveau	:", nullptr));
        inscMNP_parcoursLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Parcours	:", nullptr));
        inscC_Message->setText(QCoreApplication::translate("FenetrePrincipale", "Veuillez enregistrer la classe", nullptr));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_MentionNvPrc), QCoreApplication::translate("FenetrePrincipale", "Inscrire une classe", nullptr));
        inscM_pourLaClasseLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Pour la classe	:", nullptr));
        inscM_nomDuMatiReLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Nom du mati\303\250re	:", nullptr));
        inscM_coefficientLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Coefficient	:", nullptr));
        inscM_Enregistrer->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrer", nullptr));
        inscM_Message->setText(QCoreApplication::translate("FenetrePrincipale", "Veuillez enregistrer la nouvelle mati\303\250re", nullptr));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_matiere), QCoreApplication::translate("FenetrePrincipale", "Inscrire une mati\303\250re", nullptr));
        inscA_motDePasseLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Mot de passe	:", nullptr));
        inscA_enregistrer->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrer", nullptr));
        inscA_nomDeLAdminLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Nom de l'admin	:", nullptr));
        inscA_Message->setText(QCoreApplication::translate("FenetrePrincipale", "Renseignez les identifications du nouveau admin", nullptr));
        ongletInsertion->setTabText(ongletInsertion->indexOf(insc_Admin), QCoreApplication::translate("FenetrePrincipale", "Ajouter un Admin", nullptr));
        modE_classeEleveLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Classe de l'\303\251l\303\250ve		:", nullptr));
        modE_numeroLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Num\303\251ro de l'\303\251l\303\250ve	:", nullptr));
        modE_chercher->setText(QCoreApplication::translate("FenetrePrincipale", "Chercher", nullptr));
        modE_nomLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Nom		:", nullptr));
        modE_prenomLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Pr\303\251nom		:", nullptr));
        modE_dateDeNaissanceLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Date de naissance	:", nullptr));
        modE_classeAssignLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Classe assign\303\251	:", nullptr));
        modE_pereLabel->setText(QCoreApplication::translate("FenetrePrincipale", "P\303\250re		:", nullptr));
        modE_mereLabel->setText(QCoreApplication::translate("FenetrePrincipale", "M\303\250re		:", nullptr));
        modE_Enregistrer->setText(QCoreApplication::translate("FenetrePrincipale", "Enregistrer", nullptr));
        modE_Message2->setText(QString());
        modE_Message2_2->setText(QCoreApplication::translate("FenetrePrincipale", "Renseignez La classe et l'\303\251l\303\250ve de l'\303\251tudiant \303\240 chercher", nullptr));
        ongletModification->setTabText(ongletModification->indexOf(mod_eleve), QCoreApplication::translate("FenetrePrincipale", "Modier les information d'un \303\251l\303\250ve", nullptr));
        label_2->setText(QCoreApplication::translate("FenetrePrincipale", "D\303\251veloppement en cours...", nullptr));
        ongletModification->setTabText(ongletModification->indexOf(Mod_note), QCoreApplication::translate("FenetrePrincipale", "Modifier la note d'un \303\251l\303\250ve", nullptr));
        lstE_classeAfficherLabel_2->setText(QCoreApplication::translate("FenetrePrincipale", "Classe de l'\303\251l\303\250ve	:", nullptr));
        lstE_eleveRecherchLabel_2->setText(QCoreApplication::translate("FenetrePrincipale", "Nom de l'\303\251leve	:", nullptr));
        lstE_chercher_2->setText(QCoreApplication::translate("FenetrePrincipale", "Supprimer", nullptr));
        label->setText(QCoreApplication::translate("FenetrePrincipale", "Veuillez renseigner les informations de l'\303\251l\303\250ve a effacer", nullptr));
        ongletSuppression->setTabText(ongletSuppression->indexOf(sup_Eleves), QCoreApplication::translate("FenetrePrincipale", "Supprimer un \303\251l\303\250ve", nullptr));
        supM_Message->setText(QCoreApplication::translate("FenetrePrincipale", "Entree la mati\303\250re a supprimer\n"
"        Attention la suppr\303\251ssion est d\303\251finitive !", nullptr));
        supM_classeMatiereLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Classe		:", nullptr));
        supM_nomMatiereLabel->setText(QCoreApplication::translate("FenetrePrincipale", "Mati\303\250re		:", nullptr));
        supM_Supprimer->setText(QCoreApplication::translate("FenetrePrincipale", "Supprimer", nullptr));
        ongletSuppression->setTabText(ongletSuppression->indexOf(sup_Matiere), QCoreApplication::translate("FenetrePrincipale", "Supprimer une mati\303\250re", nullptr));
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
