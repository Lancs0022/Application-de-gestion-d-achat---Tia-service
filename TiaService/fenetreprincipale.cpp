#include "fenetreprincipale.h"
#include "ui_fenetreprincipale.h"

// Constructeur de la classe Fenetre Principale
FenetrePrincipale::FenetrePrincipale(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Fenetre_Principale)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    // this->ctrl.autoLog();
    // ui->tl_Lister->setEnabled(true);
    // ui->tl_Insertion->setEnabled(true);
    // ui->tl_Modification->setEnabled(true);
    // ui->tl_Suppression->setEnabled(true);
    ui->ongletCentrale->setFixedWidth(956);
    ui->ongletCentrale->setFixedHeight(592);
    // facture.afficherFacture();
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
    // remplirLstEt();
}

void FenetrePrincipale::on_tl_Insertion_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Insertion);
    remplirToutM();
}

void FenetrePrincipale::on_tl_Modification_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Modifications);
    remplirModEt();
}

// Remplit plusieurs combo box à la fois
void FenetrePrincipale::remplirModEt(){
    QVector<QString> faculte = this->ctrl.getColumn("Faculte", 1);
    QVector<QString> idEtudiants = this->ctrl.getColumn("Etudiants", 0);
    qDebug() << "Contenu de idEtudiants :";

    for (const QString& element : idEtudiants) {
        qDebug() << element;
    }
    if(!idEtudiants.isEmpty()){
        remplirComboBox(ui->modEt_identifiantComboBox, idEtudiants);
        // remplirComboBox(ui->inscP_identifiantComboBox, idEtudiants);
    }
    if(!faculte.isEmpty()){
        remplirComboBox(ui->modEt_faculteComboBox, faculte);
        //    remplirComboBox(ui->inscAchat_mentionComboBox, mentions);
        // remplirComboBox(ui->inscMt_faculteComboBox, faculte);
        // remplirComboBox(ui->inscEt_faculteComboBox, faculte);
    }
    qDebug() << "Contenu de formation :";
}

void FenetrePrincipale::on_tl_Suppression_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Suppression);
    remplirSupEt();
}

void FenetrePrincipale::on_tl_Quitter_clicked()
{
    exit(EXIT_SUCCESS);
}

/** ------------- ------------------------------- ------------- **/

// void FenetrePrincipale::on_inscEt_mentionComboBox_currentIndexChanged()
// {
//     autoNvPrc(ui->inscEt_faculteComboBox, ui->inscEt_mentionComboBox, ui->inscEt_niveauComboBox);
// }

void FenetrePrincipale::on_inscEt_faculteComboBox_currentTextChanged(const QString &arg1)
{
    autoNvMt(ui->inscEt_mentionComboBox, arg1, "Fc-Mt");
}

void FenetrePrincipale::on_modEt_faculteComboBox_currentTextChanged(const QString &arg1)
{
    autoNvMt(ui->modEt_mentionComboBox, arg1, "Fc-Mt");
}


void FenetrePrincipale::on_inscEt_mentionComboBox_currentTextChanged(const QString &arg1)
{
    autoNvMt(ui->inscEt_niveauComboBox, arg1, "Mt-Nv");
}

void FenetrePrincipale::on_modEt_mentionComboBox_currentTextChanged(const QString &arg1)
{
    autoNvMt(ui->modEt_niveauComboBox, arg1, "Mt-Nv");
}

void FenetrePrincipale::autoNvMt(QComboBox*& CBInf, const QString& modification, QString mode){
    if(mode == "Fc-Mt"){
        QVector<QString> mentions;
        int idFaculte(this->ctrl.getId(modification, "Faculte"));
        mentions = this->ctrl.getAllSelonIdEtranger("Mention", idFaculte);
        if(mentions.isEmpty())
            return;
        else{
            remplirComboBox(CBInf, mentions);
        }
    }
    else if(mode == "Mt-Nv"){
        QVector<QString> niveaux;
        int idMention(this->ctrl.getId(modification, "Mention"));
        niveaux = this->ctrl.getAllSelonIdEtranger("Niveau", idMention);
        if(niveaux.isEmpty())
            return;
        else{
            remplirComboBox(CBInf, niveaux);
        }
    }
    else{
        return;
    }
}

// // Cette méthode définit automatiquement le niveau et le parcours selon la mention choisit
// void FenetrePrincipale::autoNvMt(QComboBox*& faculteCB, QComboBox*& mentionCB, QComboBox*& niveauCB,
//                                  QString mode){
//     qDebug() << "Index du combo box relié à auto" << mentionCB->currentIndex();
//     int idFaculte(this->ctrl.getId(faculteCB->currentText(), "Faculte"));
//     QVector<QString> niveaux;
//     QVector<QString> mention;
//     if(mode == "All") {
//         niveaux = this->ctrl.getAllSelonIdEtranger("Niveau", idFaculte);
//         mention = this->ctrl.getAllSelonIdEtranger("Mention", idFaculte);
//         if(!niveaux.isEmpty() || !mention.isEmpty())
//             return;
//         remplirComboBox(niveauCB, niveaux);
//         remplirComboBox(mentionCB, mention);
//     }
//     if(mode == "Nv") {
//         niveaux = this->ctrl.getAllSelonIdEtranger("Niveau", idFaculte);
//         if(!niveaux.isEmpty())
//             return;
//         remplirComboBox(niveauCB, niveaux);
//     }
//     if(mode == "Mt") {
//         mention = this->ctrl.getAllSelonIdEtranger("Mention", idFaculte);
//         if(!mention.isEmpty())
//             return;
//         remplirComboBox(mentionCB, mention);
//     }
//     qDebug() << "Contenu de niveau :";
//     for (const QString& element : niveaux) {
//         qDebug() << element;
//     }
//     qDebug() << "Contenu de mention :";
//     for (const QString& element : mention) {
//         qDebug() << element;
//     }
// }

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
    QString faculte = ui->inscEt_faculteComboBox->currentText();
    QString mention = ui->inscEt_mentionComboBox->currentText();
    QString niveau = ui->inscEt_niveauComboBox->currentText();
    QString codage = ui->inscEt_codageSpinBox->text();
    QString telephone = ui->inscEt_telephoneLineEdit->text();
    QString adresse = ui->inscEt_adresseTextEdit->toPlainText();
    bool passant = ui->inscEt_estPassantCheckBox->isChecked();
    if(this->ctrl.rqtInscEt(nom, prenom, genre, dateDeNaissance, faculte, mention,
                            niveau, codage, passant, telephone, adresse)){
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

void FenetrePrincipale::on_inscAchat_identifiantComboBox_currentTextChanged(const QString &arg1)
{
    int idEtudiant(arg1.toInt());
    ui->inscAchat_nomEtudiantLineEdit->setText(this->ctrl.nomsEtByid(idEtudiant));

    ui->inscAchat_AjService->setEnabled(true);
    ui->inscAchat_AjFormation->setEnabled(true);
}

void FenetrePrincipale::on_modEt_identifiantComboBox_currentTextChanged(const QString &arg1)
{
    int idEtudiant(arg1.toInt());
    ui->modEt_nomEtudiantLineEdit->setText(this->ctrl.nomsEtByid(idEtudiant));
    QVector<QVector<QString>> data(this->ctrl.getStudent("nc", "nc", "nc", idEtudiant, "Modification"));
    for(QVector<QString> donnees : data){
        ui->modEt_nomLineEdit->setText(donnees[0]);
        ui->modEt_prenomLineEdit->setText(donnees[1]);
        ui->modEt_genreComboBox->setCurrentText(donnees[2]);
        ui->modEt_dateDeNaissanceDateEdit->setDate(QDate::fromString(donnees[3], "yyyy-MM-dd"));
        ui->modEt_codageSpinBox->setValue(donnees[4].toDouble());
        ui->modEt_estPassantCheckBox->setChecked(donnees[5].toUInt());
        ui->modEt_telephoneLineEdit->setText(donnees[6]);
        ui->modEt_adresseTextEdit->setText(donnees[7]);
        ui->modEt_faculteComboBox->setCurrentText(donnees[8]);
        ui->modEt_mentionComboBox->setCurrentText(donnees[9]);
        ui->modEt_niveauComboBox->setCurrentText(donnees[10]);
    }
}

void FenetrePrincipale::on_modEt_Enregistrer_clicked()
{
    // Récupération les valeurs des champs de formulaire
    QString nom = ui->modEt_nomLineEdit->text();
    QString prenom = ui->modEt_prenomLineEdit->text();
    QString genre = ui->modEt_genreComboBox->currentText();
    QDate dateDeNaissance = ui->modEt_dateDeNaissanceDateEdit->date();
    QString faculte = ui->modEt_faculteComboBox->currentText();
    QString mention = ui->modEt_mentionComboBox->currentText();
    QString niveau = ui->modEt_niveauComboBox->currentText();
    QString codage = ui->modEt_codageSpinBox->text();
    QString telephone = ui->modEt_telephoneLineEdit->text();
    QString adresse = ui->modEt_adresseTextEdit->toPlainText();
    bool passant = ui->modEt_estPassantCheckBox->isChecked();
    if(this->ctrl.majEt(nom, prenom, genre, dateDeNaissance, faculte, mention,
                             niveau, codage, passant, telephone, adresse)){
        ui->modEt_Message->setText("Les informations ont été sauvegardés avec succes !");
        ui->modEt_nomLineEdit->setText("");
        ui->modEt_prenomLineEdit->setText("");
        ui->modEt_codageSpinBox->setValue(0);
        ui->modEt_telephoneLineEdit->setText("");
        ui->modEt_adresseTextEdit->clear();
        ui->modEt_estPassantCheckBox->setChecked(false);
    }
    else{
        ui->inscEt_Message->setText("Un erreur est survenu lors de la modification");
    }
}


/* ----- Section actualisant le prix d'une formation et d'un service selon la formation ou le service choisit -----*/
void FenetrePrincipale::on_lstEt_idEtudiantComboBox_currentTextChanged(const QString &arg1)
{
    int idEtudiant(arg1.toInt());
    ui->lstEt_nomEtudiantLineEdit->setText(this->ctrl.nomsEtByid(idEtudiant));
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
    double prixService(this->ctrl.getPrixU(ui->inscAchat_servicesComboBox->currentText(), "Services"));
    ui->inscAchat_prixServiceSpinBox->setValue(prixService * arg1);
}

void FenetrePrincipale::on_inscAchat_qtFormSpinBox_valueChanged(int arg1)
{
    double prixFormation(this->ctrl.getPrixU(ui->inscAchat_formationsComboBox->currentText(), "Formations"));
    ui->inscAchat_prixFormSpinBox->setValue(prixFormation * arg1);
}


void FenetrePrincipale::on_inscP_identifiantComboBox_currentTextChanged(const QString &arg1)
{
    int idEtudiant(arg1.toInt());
    ui->inscP_nomEtudiantLineEdit->setText(this->ctrl.nomsEtByid(idEtudiant));
    QVector<QString> listeTransaction(this->ctrl.getAllSelonIdEtranger("Transaction", idEtudiant));
    if(!listeTransaction.isEmpty())
        remplirComboBox(ui->inscP_idTransactionComboBox, listeTransaction);
    else{
        ui->inscP_idTransactionComboBox->clear();
        ui->inscP_idTransactionComboBox->setPlaceholderText("Aucun transaction pour cet étudiant");
    }
}

void FenetrePrincipale::on_inscP_idTransactionComboBox_currentTextChanged(const QString &arg1)
{
    int idTransaction(arg1.toInt());
    int idEtudiant(ui->inscP_identifiantComboBox->currentText().toInt());
    QVector<QVector<QString>> listeAchat(this->ctrl.reconstituerTransaction(idTransaction, idEtudiant));
    remplirTable(ui->inscP_commandeTableWidget, listeAchat);

}

void FenetrePrincipale::on_inscP_vPaiementPushButton_clicked()
{
    this->ctrl.transactionPayee(ui->inscP_idTransactionComboBox->currentText().toInt());
}

void FenetrePrincipale::on_inscP_imprimerFacturePushButton_clicked()
{
    QVector<QVector<QString>> listeAchat(this->recupererContenuTable(ui->inscP_commandeTableWidget));
    for (const QVector<QString>& vecteur : listeAchat) {
        qDebug() << "---- Nouveau vecteur ----";
        for (const QString& element : vecteur) {
            qDebug() << element;
        }
    }
    if(listeAchat.isEmpty())
        return;
    // Créer un nouveau thread
    QThread* thread = new QThread;
    // Créer une instance de FenetreFacture
    FenetreFacture* fenetreFacture = new FenetreFacture;
    // Déplacer l'instance de FenetreFacture dans le thread
    fenetreFacture->moveToThread(thread);
    // Connecter le signal de fin de thread pour nettoyer les ressources
    connect(thread, &QThread::finished, fenetreFacture, &FenetreFacture::deleteLater);
    // Démarrer le thread
    thread->start();
    fenetreFacture->remplirFacture(listeAchat, ui->inscP_nomEtudiantLineEdit->text());
    // Afficher la fenêtre de la facture
    fenetreFacture->show();
}

void FenetrePrincipale::on_inscAchat_AjFormation_clicked()
{
    double nbr(ui->inscAchat_qtFormSpinBox->value());
    double ct(ui->inscAchat_prixFormSpinBox->value());
    double prx(ct / nbr);

    QString designation(ui->inscAchat_formationsComboBox->currentText());
    QString nombre(QString::number(nbr));
    QString cout(QString::number(ct));
    QString prix(QString::number(prx));

    QVector<QString> donneesAchat;

    donneesAchat.push_back("Formations");
    donneesAchat.push_back(designation);
    donneesAchat.push_back(nombre);
    donneesAchat.push_back(prix);
    donneesAchat.push_back(cout);

    remplirUneLigneTable(ui->inscAchat_commandeTableWidget, donneesAchat);
}

void FenetrePrincipale::on_inscAchat_AjService_clicked()
{
    double nbr(ui->inscAchat_qtServiceSpinBox->value());
    double ct(ui->inscAchat_prixServiceSpinBox->value());
    double prx(ct / nbr);

    QString designation(ui->inscAchat_servicesComboBox->currentText());
    QString nombre(QString::number(nbr));
    QString cout(QString::number(ct));
    QString prix(QString::number(prx));

    QVector<QString> donneesAchat;

    donneesAchat.push_back("Services");
    donneesAchat.push_back(designation);
    donneesAchat.push_back(nombre);
    donneesAchat.push_back(prix);
    donneesAchat.push_back(cout);
    remplirUneLigneTable(ui->inscAchat_commandeTableWidget, donneesAchat);
}
/*** ------------- ------------------------------------------------------------------------------------------- ------------- **/

void FenetrePrincipale::on_inscNv_faculteComboBox_currentTextChanged(const QString &arg1)
{
    int idFaculte = this->ctrl.getId(arg1, "Faculte");
    QVector<QString> mentions (this->ctrl.getAllSelonIdEtranger("Mention", idFaculte));
    remplirComboBox(ui->inscNv_mentionComboBox, mentions);
    qDebug() << "mentions ajoutés !";
    for (const QString& element : mentions) {
        qDebug() << element;
    }
}

void FenetrePrincipale::on_inscMt_faculteComboBox_currentTextChanged(const QString &arg1)
{
    QString nomFaculte = arg1;
}

/** ------------- -----      Méthodes utilisés      ----- ------------- **/

// Remplit plusieurs combo box à la fois
void FenetrePrincipale::remplirToutM(){
    QVector<QString> faculte = this->ctrl.getColumn("Faculte", 1);
    QVector<QString> formations = this->ctrl.getColumn("Formations", 1);
    QVector<QString> services = this->ctrl.getColumn("Services", 1);
    QVector<QString> idEtudiants = this->ctrl.getColumn("Etudiants", 0);
    qDebug() << "Contenu de idEtudiants :";

    for (const QString& element : idEtudiants) {
        qDebug() << element;
    }
    if(!idEtudiants.isEmpty()){
        remplirComboBox(ui->inscAchat_identifiantComboBox, idEtudiants);
        remplirComboBox(ui->inscP_identifiantComboBox, idEtudiants);
    }
    if(!faculte.isEmpty()){
        //    remplirComboBox(ui->inscAchat_mentionComboBox, mentions);
        remplirComboBox(ui->inscNv_faculteComboBox, faculte);
        remplirComboBox(ui->inscMt_faculteComboBox, faculte);
        remplirComboBox(ui->inscEt_faculteComboBox, faculte);
    }
    if(!formations.isEmpty()){
        remplirComboBox(ui->inscAchat_formationsComboBox, formations);
    }
    if(!services.isEmpty()){
        remplirComboBox(ui->inscAchat_servicesComboBox, services);
    }
    qDebug() << "Contenu de formation :";

    for (const QString& element : formations) {
        qDebug() << element;
    }
    qDebug() << "Contenu de service :";
    for (const QString& element : services) {
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
    maTable->setRowCount(donnees.size()); // Définir le nombre de lignes
    int row = 0;
    for (const QVector<QString>& eleveInfo : donnees) {
        for (int col = 0; col < eleveInfo.size(); ++col) {
            QTableWidgetItem* item = new QTableWidgetItem(eleveInfo[col]);
            maTable->setItem(row, col, item);
        }
        row++;
    }
}

// void FenetrePrincipale::remplirUneLigneTable(QTableWidget* maTable, const QVector<QString>& donnees)
// {
//     int ligne = maTable->rowCount();
//     maTable->insertRow(ligne);

//     for (int col = 0; col < donnees.size(); ++col) {
//         QTableWidgetItem* item = new QTableWidgetItem(donnees[col]);
//         maTable->setItem(ligne, col, item);
//     }
// }

void FenetrePrincipale::remplirUneLigneTable(QTableWidget* maTable, const QVector<QString>& donnees)
{
    int ligne = maTable->rowCount();
    maTable->setRowCount(ligne + 1); // Ajoute une nouvelle ligne

    for (int col = 0; col < donnees.size(); ++col) {
        QTableWidgetItem* item = new QTableWidgetItem(donnees[col]);
        maTable->setItem(ligne, col, item);
    }

    // Ajouter un bouton "Supprimer"
    QPushButton* boutonSupprimer = new QPushButton("Supprimer");

    // Utiliser une lambda pour capturer la ligne et la table
    connect(boutonSupprimer, &QPushButton::clicked, this, [=]() {
        // Récupérer la ligne du bouton
        int row = maTable->indexAt(qobject_cast<QPushButton*>(sender())->pos()).row();
        supprimerLigneTable(maTable, row);
    });

    // Ajouter le bouton à la dernière colonne de la ligne
    maTable->setCellWidget(ligne, maTable->columnCount() - 1, boutonSupprimer);

    // Parcourir chaque ligne et chaque colonne de la table
    for (int row = 0; row < maTable->rowCount(); ++row) {
        for (int col = 0; col < maTable->columnCount(); ++col) {
            // Obtenir l'élément à la position (row, col)
            QTableWidgetItem* item = maTable->item(row, col);

            // S'assurer que l'élément existe avant de définir les drapeaux
            if (item) {
                // Définir les drapeaux pour rendre l'élément non modifiable
                item->setFlags(item->flags() & ~Qt::ItemIsEditable);
            }
        }
    }
}

// Fonction pour supprimer une ligne du QTableWidget
void FenetrePrincipale::supprimerLigneTable(QTableWidget* maTable, int ligne)
{
    maTable->removeRow(ligne);
}

QVector<QVector<QString>> FenetrePrincipale::recupererContenuTable(QTableWidget* maTable) {
    QVector<QVector<QString>> contenuTable;
    int lignes = maTable->rowCount();
    int colonnes = maTable->columnCount();

    for (int ligne = 0; ligne < lignes; ++ligne) {
        QVector<QString> ligneTable;

        for (int colonne = 0; colonne < colonnes; ++colonne) {
            QTableWidgetItem* item = maTable->item(ligne, colonne);
            if (item) {
                ligneTable.push_back(item->text());
            } else {
                // Gérer le cas où l'élément est nul (peut arriver si aucune donnée n'est définie)
                ligneTable.push_back("");
            }
        }
        contenuTable.push_back(ligneTable);
    }
    return contenuTable;
}



void FenetrePrincipale::on_lstEt_niveauCheckBox_stateChanged()
{
    bool active(ui->lstEt_niveauCheckBox->isChecked());
    ui->lstEt_niveauComboBox->setEnabled(active);
    if(ui->lstEt_mentionCheckBox->isChecked() && active && !ui->lstEt_mentionComboBox->currentText().isEmpty()){
        autoNvMt(ui->lstEt_niveauComboBox, ui->lstEt_mentionComboBox->currentText(), "Mt-Nv");
    }
    else if(ui->lstEt_mentionComboBox->currentText().isEmpty() || !ui->lstEt_mentionCheckBox->isChecked()){
        ui->lstEt_niveauComboBox->clear();
        ui->lstEt_niveauComboBox->addItem("L1");
        ui->lstEt_niveauComboBox->addItem("L2");
        ui->lstEt_niveauComboBox->addItem("L3");
        ui->lstEt_niveauComboBox->addItem("M1");
        ui->lstEt_niveauComboBox->addItem("M2");
    }
}

void FenetrePrincipale::on_lstEt_mentionCheckBox_stateChanged()
{
    bool active(ui->lstEt_mentionCheckBox->isChecked());
    ui->lstEt_mentionComboBox->setEnabled(active);
    if(ui->lstEt_faculteCheckBox->isChecked() && active && !ui->lstEt_faculteComboBox->currentText().isEmpty()){
        autoNvMt(ui->lstEt_mentionComboBox, ui->lstEt_faculteComboBox->currentText(), "Fc-Mt");
    }
    else if(ui->lstEt_faculteComboBox->currentText().isEmpty() || !ui->lstEt_faculteCheckBox->isChecked()){
        QVector<QString> mention = this->ctrl.getColumn("Mention", 2);
        remplirComboBox(ui->lstEt_mentionComboBox, mention);
    }
}

void FenetrePrincipale::on_lstEt_faculteCheckBox_stateChanged()
{
    bool active(ui->lstEt_faculteCheckBox->isChecked());
    ui->lstEt_faculteComboBox->setEnabled(active);
    if(active){
        QVector<QString> faculte = this->ctrl.getColumn("faculte", 1);
        remplirComboBox(ui->lstEt_faculteComboBox, faculte);
    }
}

void FenetrePrincipale::on_lstEt_idEtudiantCheckBox_stateChanged()
{
    bool active(ui->lstEt_idEtudiantCheckBox->isChecked());
    ui->lstEt_idEtudiantComboBox->setEnabled(active);
    if(active){
        QVector<QString> idEtudiants = this->ctrl.getColumn("Etudiants", 0);
        remplirComboBox(ui->lstEt_idEtudiantComboBox, idEtudiants);
    }
}

void FenetrePrincipale::on_lstEt_nomEtudiantCheckBox_stateChanged()
{
    bool active(ui->lstEt_nomEtudiantCheckBox->isChecked());
    ui->lstEt_nomEtudiantLineEdit->setEnabled(active);
}

// void FenetrePrincipale::remplirLstEt(){
//     QVector<QString> mentions = this->ctrl.getColumn("Mention", 2);
//     QVector<QString> niveaux = this->ctrl.getColumn("Niveau", 2);
//     QVector<QString> faculte = this->ctrl.getColumn("faculte", 1);
//     QVector<QString> idEtudiants = this->ctrl.getColumn("Etudiants", 0);

//     remplirComboBox(ui->lstEt_idEtudiantComboBox, idEtudiants);
//     remplirComboBox(ui->lstEt_mentionComboBox, mentions);
//     remplirComboBox(ui->lstEt_niveauComboBox, niveaux);
//     remplirComboBox(ui->lstEt_faculteComboBox, faculte);

// }

void FenetrePrincipale::on_lstEt_Rechercher_clicked()
{
    qDebug() << "---- action d'enregistrement commencé ----";
    clearTableWidget(ui->lstE_listeEtudiant);
    QString mention;
    QString niveau;
    int idEtudiant;
    QString faculte;
    if(ui->lstEt_mentionCheckBox->isChecked())
        mention = ui->lstEt_mentionComboBox->currentText();
    else
        mention = "nc";
    if(ui->lstEt_niveauCheckBox->isChecked())
        niveau = ui->lstEt_niveauComboBox->currentText();
    else
        niveau = "nc";
    if(ui->lstEt_faculteCheckBox->isChecked())
        faculte = ui->lstEt_faculteComboBox->currentText();
    else
        faculte = "nc";
    if(ui->lstEt_idEtudiantCheckBox->isChecked())
        idEtudiant = ui->lstEt_idEtudiantComboBox->currentIndex()+1;
    else
        idEtudiant = -1;
    qDebug() << "mention : " << mention;
    qDebug() << "niveau : " << niveau;
    qDebug() << "faculte : " << faculte;
    qDebug() << "idEtudiant : " << idEtudiant;

    QVector<QVector<QString>> informations(this->ctrl.getStudent(faculte, mention, niveau, idEtudiant, "Selectif"));
    this->remplirTable(ui->lstE_listeEtudiant, informations);
}



void FenetrePrincipale::on_supEt_Supprimer_clicked()
{
    int idEtudiant(ui->supEt_identifiantComboBox->currentText().toInt());
    bool isDeleted(this->ctrl.deleteEtudiant("nc", "nc", "nc", idEtudiant));
    if(isDeleted){
        qDebug() << "Suppression effectué avec succès";
    }
    else qDebug() << "Erreur de suppression";
}

void FenetrePrincipale::on_supEt_identifiantComboBox_currentTextChanged(const QString &arg1)
{
    int idEtudiant = arg1.toInt();
    QVector<QVector<QString>> data(this->ctrl.getStudent("nc", "nc", "nc", idEtudiant, "Modification"));
    for(QVector<QString> donnees : data){
        ui->supEt_nomLineEdit->setText(donnees[0]);
        ui->supEt_prenomLineEdit->setText(donnees[1]);
        ui->supEt_genreComboBox->setCurrentText(donnees[2]);
        ui->supEt_dateDeNaissanceDateEdit->setDate(QDate::fromString(donnees[3], "yyyy-MM-dd"));
        ui->supEt_codageSpinBox->setValue(donnees[4].toDouble());
        ui->supEt_estPassantCheckBox->setChecked(donnees[5].toUInt());
        ui->supEt_telephoneLineEdit->setText(donnees[6]);
        ui->supEt_adresseTextEdit->setText(donnees[7]);
        ui->supEt_faculteComboBox->setCurrentText(donnees[8]);
        ui->supEt_mentionComboBox->setCurrentText(donnees[9]);
        ui->supEt_niveauComboBox->setCurrentText(donnees[10]);
    }
    ui->supEt_nomEtudiantLineEdit->setText(this->ctrl.nomsEtByid(idEtudiant));
}

void FenetrePrincipale::on_inscAchat_suppCmdPushButton_clicked()
{
    ui->inscAchat_commandeTableWidget->setRowCount(0);
}

void FenetrePrincipale::on_inscAchat_confirmCmdPushButton_clicked()
{
    QVector<QVector<QString>> listeAchats(this->recupererContenuTable(ui->inscAchat_commandeTableWidget));
    if(!listeAchats.isEmpty())
        this->ctrl.enregistrerTransaction(listeAchats, ui->inscAchat_identifiantComboBox->currentText().toInt());
    else
        ui->inscAchat_Message->setText("La liste des achats est vide");
}

// void FenetrePrincipale::actualiserVecteur(QVector<QString> vecteur, QString nomVecteur){
//     this->ctrl.
// }

void FenetrePrincipale::on_inscMt_Enregistrer_clicked()
{
    QString nomFaculte(ui->inscMt_faculteComboBox->currentText());
    QString nomMention(ui->inscMt_mentionLineEdit->text());

    if(this->ctrl.enregistrerMention(nomMention, nomFaculte))
        ui->inscMt_Message->setText("Mention enregistré !");
    else
        ui->inscMt_Message->setText("Echec de l'enregistrement !");
}

void FenetrePrincipale::on_inscFc_Enregistrer_clicked()
{
    QString nomFaculte(ui->inscFc_nomFaculteLineEdit->text());
    if(this->ctrl.enregistrerFaculte(nomFaculte))
        ui->inscMt_Message->setText("Faculte enregistré !");
    else
        ui->inscMt_Message->setText("Echec de l'enregistrement !");
}

void FenetrePrincipale::on_inscNv_Enregistrer_clicked()
{
    QString nomMention(ui->inscNv_mentionComboBox->currentText());
    QString nomNiveau(ui->inscNv_niveauLineEdit->text());
    if(this->ctrl.enregistrerNiveau(nomNiveau, nomMention))
        ui->inscMt_Message->setText("Niveau enregistré !");
    else
        ui->inscMt_Message->setText("Echec de l'enregistrement !");
}



void FenetrePrincipale::on_lstEt_faculteComboBox_currentTextChanged(const QString &arg1)
{
    if(ui->lstEt_faculteCheckBox->isChecked() && ui->lstEt_mentionCheckBox->isChecked()){
        autoNvMt(ui->lstEt_mentionComboBox, arg1, "Fc-Mt");
    }
}

// Effacer le contenu d'un QTableWidget
void FenetrePrincipale::clearTableWidget(QTableWidget* tableWidget) {
    tableWidget->clearContents(); // Effacer le contenu des cellules
    tableWidget->setRowCount(0); // Réinitialiser le nombre de lignes à zéro
}

void FenetrePrincipale::on_inscFM_EnregistrerF_clicked()
{
    QString nomFormation = ui->inscFM_nomFormLineEdit->text();
    QString dureeFormation = ui->inscFM_dureeFormLineEdit->text();
    double prixFormation = ui->inscFM_prixFormDoubleSpinBox->value();
    if(ctrl.enregistrerSrvOUForm(nomFormation, prixFormation, dureeFormation, "Formations"))
        ui->inscFS_Message->setText("Enregistrement effectué");
    else ui->inscFS_Message->setText("Enregistrement échoué");
}



void FenetrePrincipale::on_inscSV_EnregistrerS_clicked()
{
    QString nomService = ui->inscSV_nomSrvLineEdit->text();
    double prixService = ui->inscSV_prixSrvDoubleSpinBox->value();
    if(ctrl.enregistrerSrvOUForm(nomService, prixService, "", "Services")){
        ui->inscFS_Message->setText("Enregistrement effectué");
    }
    else ui->inscFS_Message->setText("Enregistrement échoué");
}

void FenetrePrincipale::on_supMt_faculteComboBox_currentTextChanged(const QString &arg1)
{
    autoNvMt(ui->supMt_mentionComboBox,arg1,"Fc-Mt");
}

void FenetrePrincipale::on_supNv_faculteComboBox_currentTextChanged(const QString &arg1)
{
    autoNvMt(ui->supNv_mentionComboBox,arg1,"Fc-Mt");
}

void FenetrePrincipale::on_supNv_mentionComboBox_currentTextChanged(const QString &arg1)
{
    autoNvMt(ui->supNv_niveauComboBox,arg1,"Mt-Nv");
}

void FenetrePrincipale::remplirSupEt(){
    QVector<QString> mentions = this->ctrl.getColumn("Mention", 2);
    QVector<QString> niveaux = this->ctrl.getColumn("Niveau", 2);
    QVector<QString> faculte = this->ctrl.getColumn("Faculte", 1);
    QVector<QString> idEtudiants = this->ctrl.getColumn("Etudiants", 0);


    if(!idEtudiants.isEmpty()){
        remplirComboBox(ui->supEt_identifiantComboBox, idEtudiants);
    }
    if(!faculte.isEmpty()){
        //    remplirComboBox(ui->inscAchat_mentionComboBox, mentions);
        remplirComboBox(ui->supNv_faculteComboBox, faculte);
        remplirComboBox(ui->supMt_faculteComboBox, faculte);
        remplirComboBox(ui->supFc_nomFaculteComboBox, faculte);
        remplirComboBox(ui->supEt_faculteComboBox, faculte);
    }
    if(!mentions.isEmpty()){
        remplirComboBox(ui->supEt_mentionComboBox, mentions);
    }
    if(!niveaux.isEmpty()){
        remplirComboBox(ui->supEt_niveauComboBox, niveaux);
    }
    qDebug() << "Contenu de formation :";

}


void FenetrePrincipale::on_supMt_Enregistrer_clicked()
{
    QString mention = ui->supMt_mentionComboBox->currentText();
    if(this->ctrl.eraseFMN(mention, "Mention")){
        ui->supM_Message->setText("Suppression de la mention réussi");
    }
    else
        ui->supM_Message->setText("Suppression de la mention échoué");
}

void FenetrePrincipale::on_supNv_Enregistrer_clicked()
{
    QString niveau = ui->supNv_niveauComboBox->currentText();
    if(this->ctrl.eraseFMN(niveau, "Niveau"))
         ui->supM_Message->setText("Suppression du niveau réussi");
    else
         ui->supM_Message->setText("Suppression du niveau échoué");
}

void FenetrePrincipale::on_supFc_Enregistrer_clicked()
{
    QString faculte = ui->supMt_faculteComboBox->currentText();
    if(this->ctrl.eraseFMN(faculte, "Faculte"))
         ui->supM_Message->setText("Suppression de la faculte réussi");
    else
         ui->supM_Message->setText("Suppression de la faculte échoué");
}
