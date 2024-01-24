#include "fenetreprincipale.h"
#include "ui_fenetreprincipale.h"

// Constructeur de la classe Fenetre Principale
FenetrePrincipale::FenetrePrincipale(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FenetrePrincipale)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    this->ctrl.autoLog();
    ui->tl_Lister->setEnabled(true);
    ui->tl_Insertion->setEnabled(true);
    ui->tl_Modification->setEnabled(true);
    ui->tl_Suppression->setEnabled(true);
}

FenetrePrincipale::~FenetrePrincipale()
{
    delete ui;
}

/** ------------- Boutons de navigation (sidebar) ------------- **/

void FenetrePrincipale::on_tl_SeConnecter_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Connexion);
}

void FenetrePrincipale::on_tl_Lister_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->ConsulterInfos);
    remplirLstEt();
}

void FenetrePrincipale::on_tl_Insertion_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Insertion);
    remplirToutM();
}

void FenetrePrincipale::on_tl_Modification_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Modifications);
}

void FenetrePrincipale::on_tl_Suppression_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Suppression);
}

void FenetrePrincipale::on_tl_Quitter_clicked()
{
    exit(EXIT_SUCCESS);
}

/** ------------- ------------------------------- ------------- **/

void FenetrePrincipale::on_inscEt_mentionComboBox_currentIndexChanged()
{
    autoNvPrc(ui->inscEt_mentionComboBox, ui->inscEt_niveauComboBox, ui->inscEt_parcoursComboBox);
}

/** ------------- ------------------------------- ------------- **/


/** ------------- Section sc (Se connecter)       ------------- **/

void FenetrePrincipale::on_sc_Connexion_clicked()
{
    QString username (ui->sc_utilisateurLineEdit->text());
    QString password (ui->sc_motDePasseLineEdit->text());
    if(this->ctrl.login(username, password)){
        ui->sc_utilisateurLineEdit->setText("");
        ui->sc_motDePasseLineEdit->setText("");

        ui->tl_Lister->setEnabled(true);
        ui->tl_Insertion->setEnabled(true);
        ui->tl_Modification->setEnabled(true);
        ui->tl_Suppression->setEnabled(true);

        ui->sc_Message->setText("Vous êtes désormais connecté !");
    }
    else{
        ui->sc_Message->setText("Les informations d'identifications sont incorrects !");
    }
}

void FenetrePrincipale::on_sc_Deconnexion_clicked()
{
    if(this->ctrl.logOut()){
        ui->tl_Lister->setEnabled(false);
        ui->tl_Insertion->setEnabled(false);
        ui->tl_Modification->setEnabled(false);
        ui->tl_Suppression->setEnabled(false);
        ui->sc_Message->setText("Vous vous êtes déconnecté avec succès");
    }
}

/** ------------- ------------------------------- ------------- **/

/** ------------- Section Enredistremeent d'étudiant  ------------- **/

void FenetrePrincipale::on_inscEt_Enregistrer_clicked()
{
    // Récupération les valeurs des champs de formulaire
    QString nom = ui->inscEt_nomLineEdit->text();
    QString prenom = ui->inscEt_prenomLineEdit->text();
    QString genre = ui->inscEt_genreComboBox->currentText();
    QDate dateDeNaissance = ui->inscEt_dateDeNaissanceDateEdit->date();
    QString mention = ui->inscEt_mentionComboBox->currentText();
    QString niveau = ui->inscEt_niveauComboBox->currentText();
    QString parcours = ui->inscEt_parcoursComboBox->currentText();
    QString codage = ui->inscEt_codageSpinBox->text();
    QString telephone = ui->inscEt_telephoneLineEdit->text();
    QString adresse = ui->inscEt_adresseTextEdit->toPlainText();
    bool passant = ui->inscEt_estPassantCheckBox->isChecked();
    if(this->ctrl.rqtInscEt(nom, prenom, genre, dateDeNaissance, mention,
                            niveau, parcours, codage, passant, telephone, adresse)){
        ui->inscEt_Message->setText("Les informations ont été sauvegardés avec succes !");
        ui->inscEt_nomLineEdit->setText("");
        ui->inscEt_prenomLineEdit->setText("");
        ui->inscEt_codageSpinBox->setValue(0);
        ui->inscEt_telephoneLineEdit->setText("");
        ui->inscEt_adresseTextEdit->clear();
        ui->inscEt_estPassantCheckBox->setChecked(false);
    }
    else{
        ui->inscEt_Message->setText("Vérifiez les informations entrés. Potentielle doublure");
    }
}

/** ------------- ------------------------------- ------------- **/

/* Section d'enregistrement d'un achat */
void FenetrePrincipale::on_inscAchat_identifiantComboBox_currentIndexChanged(int index)
{
    index++;
    qDebug() << "index = " << index;
    ui->inscAchat_nomEtudiantLineEdit->setText(this->ctrl.nomsEtByid(index));

    ui->inscAchat_AjService->setEnabled(true);
    ui->inscAchat_AjFormation->setEnabled(true);
}
/* ----- Section actualisant le prix d'une formation et d'un service selon la formation ou le service choisit -----*/

void FenetrePrincipale::on_lstEt_idEtudiantComboBox_currentIndexChanged(int index)
{
    index++;
    qDebug() << "index = " << index;
    ui->lstEt_nomEtudiantLineEdit->setText(this->ctrl.nomsEtByid(index));
}

// Méthode déclenché lors de la modification de la formation choisie
void FenetrePrincipale::on_inscAchat_formationsComboBox_currentIndexChanged()
{
    on_inscAchat_qtFormSpinBox_valueChanged(ui->inscAchat_qtFormSpinBox->value());
//    ui->inscAchat_prixFormSpinBox->setValue(prixFormation);
}

// Méthode déclenché lors de la modification du service choisie
void FenetrePrincipale::on_inscAchat_servicesComboBox_currentIndexChanged()
{
    on_inscAchat_qtServiceSpinBox_valueChanged(ui->inscAchat_qtServiceSpinBox->value());
//    ui->inscAchat_prixServiceSpinBox->setValue(prixService);
}

void FenetrePrincipale::on_inscAchat_qtServiceSpinBox_valueChanged(int arg1)
{
    int prixService(this->ctrl.getPrixU(ui->inscAchat_servicesComboBox->currentText(), "Multi_Services"));
    ui->inscAchat_prixServiceSpinBox->setValue(prixService * arg1);
}

void FenetrePrincipale::on_inscAchat_qtFormSpinBox_valueChanged(int arg1)
{
    int prixFormation(this->ctrl.getPrixU(ui->inscAchat_formationsComboBox->currentText(), "Formations"));
    ui->inscAchat_prixFormSpinBox->setValue(prixFormation * arg1);
}

void FenetrePrincipale::on_inscP_identifiantComboBox_currentIndexChanged(int index)
{
    index++;
    qDebug() << "index = " << index;
    ui->inscAchat_nomEtudiantLineEdit->setText(this->ctrl.nomsEtByid(index));
}


/*** ------------- ------------------------------------------------------------------------------------------- ------------- **/


/** ------------- -----      Méthodes utilisés      ----- ------------- **/

// Remplit plusieurs combo box à la fois
void FenetrePrincipale::remplirToutM(){
    QVector<QString> mentions = this->ctrl.getColumn("Mention", 1);
    QVector<QString> formations = this->ctrl.getColumn("Formations", 1);
    QVector<QString> services = this->ctrl.getColumn("Multi_Services", 1);
    QVector<QString> idEtudiants = this->ctrl.getColumn("Etudiants", 0);
    qDebug() << "Contenu de idEtudiants :";

    for (const QString& element : idEtudiants) {
        qDebug() << element;
    }
    remplirComboBox(ui->inscAchat_identifiantComboBox, idEtudiants);
    remplirComboBox(ui->inscEt_mentionComboBox, mentions);
//    remplirComboBox(ui->inscAchat_mentionComboBox, mentions);
    remplirComboBox(ui->inscP_identifiantComboBox, idEtudiants);
    remplirComboBox(ui->inscPrc_mentionComboBox, mentions);
    remplirComboBox(ui->inscNv_mentionComboBox, mentions);
    remplirComboBox(ui->inscAchat_formationsComboBox, formations);
    remplirComboBox(ui->inscAchat_servicesComboBox, services);
    qDebug() << "Contenu de formation :";

    for (const QString& element : formations) {
        qDebug() << element;
    }
    qDebug() << "Contenu de service :";
    for (const QString& element : services) {
        qDebug() << element;
    }
}

void FenetrePrincipale::remplirLstEt(){
    QVector<QString> mentions = this->ctrl.getColumn("Mention", 1);
    QVector<QString> niveaux = this->ctrl.getColumn("Niveau", 2);
    QVector<QString> parcours = this->ctrl.getColumn("Parcours", 2);
    QVector<QString> idEtudiants = this->ctrl.getColumn("Etudiants", 0);

    remplirComboBox(ui->lstEt_idEtudiantComboBox, idEtudiants);
    remplirComboBox(ui->lstEt_mentionComboBox, mentions);
    remplirComboBox(ui->lstEt_niveauComboBox, niveaux);
    remplirComboBox(ui->lstEt_parcoursComboBox, parcours);

}

// Cette méthode définit automatiquement le niveau et le parcours selon la mention choisit
void FenetrePrincipale::autoNvPrc(QComboBox*& mentionCB, QComboBox*& niveauCB, QComboBox*& parcoursCB,
                                  QString mode){
    qDebug() << "Index du combo box relié à auto" << mentionCB->currentIndex();
    int idMention(this->ctrl.getId(mentionCB->currentText(),"Mention"));
    QVector<QString> niveaux;
    QVector<QString> parcours;
    if(mode == "All"){
        niveaux = this->ctrl.getAllSelonMention("Niveau", idMention);
        parcours = this->ctrl.getAllSelonMention("Parcours", idMention);
        remplirComboBox(niveauCB, niveaux);
        remplirComboBox(parcoursCB, parcours);
    }
    if(mode == "Nv"){
        niveaux = this->ctrl.getAllSelonMention("Niveau", idMention);
        remplirComboBox(niveauCB, niveaux);
    }
    if(mode == "Prc"){
        parcours = this->ctrl.getAllSelonMention("Parcours", idMention);
        remplirComboBox(parcoursCB, parcours);
    }
    qDebug() << "Contenu de niveau :";
    for (const QString& element : niveaux) {
        qDebug() << element;
    }
    qDebug() << "Contenu de parcours :";
    for (const QString& element : parcours) {
        qDebug() << element;
    }
}

// Remplit un élément QComboBox avec des éléments QVector<QString>
void FenetrePrincipale::remplirComboBox(QComboBox* comboBox, const QVector<QString>& elements) {
    // int index = comboBox->count();
    // int i;
    // for(i = 1 ; i < index ; i++)
    // {
    //     comboBox->removeItem(i);
    // }
    comboBox->clear();
    // Ajouter les éléments du QVector au combo box
    comboBox->addItems(elements);
}

void FenetrePrincipale::remplirTable(QTableWidget* maTable, QVector<QVector<QString>>& donnees){
    donnees = donnees;
    ui->lstE_listeEtudiant->setRowCount(donnees.size()); // Définir le nombre de lignes
    int row = 0;
    for (const QVector<QString>& eleveInfo : donnees) {
        for (int col = 0; col < eleveInfo.size(); ++col) {
            QTableWidgetItem* item = new QTableWidgetItem(eleveInfo[col]);
            maTable->setItem(row, col, item);
        }
        row++;
    }
}








void FenetrePrincipale::on_lstEt_niveauCheckBox_stateChanged()
{
    bool active(ui->lstEt_niveauCheckBox->isChecked());
    ui->lstEt_niveauComboBox->setEnabled(active);
}

void FenetrePrincipale::on_lstEt_mentionCheckBox_stateChanged()
{
    bool active(ui->lstEt_mentionCheckBox->isChecked());
    ui->lstEt_mentionComboBox->setEnabled(active);
}

void FenetrePrincipale::on_lstEt_parcoursCheckBox_stateChanged()
{
    bool active(ui->lstEt_parcoursCheckBox->isChecked());
    ui->lstEt_parcoursComboBox->setEnabled(active);
}

void FenetrePrincipale::on_lstEt_idEtudiantCheckBox_stateChanged()
{
    bool active(ui->lstEt_idEtudiantCheckBox->isChecked());
    ui->lstEt_idEtudiantComboBox->setEnabled(active);
}

void FenetrePrincipale::on_lstEt_nomEtudiantCheckBox_stateChanged()
{
    bool active(ui->lstEt_nomEtudiantCheckBox->isChecked());
    ui->lstEt_nomEtudiantLineEdit->setEnabled(active);
}

void FenetrePrincipale::on_lstEt_Rechercher_clicked()
{
    qDebug() << "---- action d'enregistrement commencé ----";
    QString mention;
    QString niveau;
    int idEtudiant;
    QString parcours;
    if(ui->lstEt_mentionCheckBox->isChecked())
        mention = ui->lstEt_mentionComboBox->currentText();
    else
        mention = "nc";
    if(ui->lstEt_niveauCheckBox->isChecked())
        niveau = ui->lstEt_niveauComboBox->currentText();
    else
        niveau = "nc";
    if(ui->lstEt_parcoursCheckBox->isChecked())
        parcours = ui->lstEt_parcoursComboBox->currentText();
    else
        parcours = "nc";
    if(ui->lstEt_idEtudiantCheckBox->isChecked())
        idEtudiant = ui->lstEt_idEtudiantComboBox->currentIndex()+1;
    else
        idEtudiant = -1;
    QVector<QVector<QString>> informations(this->ctrl.getStudent(mention, niveau, parcours, idEtudiant));
    this->remplirTable(ui->lstE_listeEtudiant, informations);
}

