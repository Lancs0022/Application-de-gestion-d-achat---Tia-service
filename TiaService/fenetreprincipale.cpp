#include "fenetreprincipale.h"
#include "ui_fenetreprincipale.h"
#include "connexionbdd.h"

// Constructeur de la classe Fenetre Principale
FenetrePrincipale::FenetrePrincipale(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FenetrePrincipale)
{
    bdd.ouvrirLaBase();
    ui->setupUi(this);
    QIcon iconeFenetre("Assets\\icons8-school-80.png");
    QApplication::setWindowIcon(iconeFenetre);
    ui->stackedWidget->setCurrentIndex(0);
}

FenetrePrincipale::~FenetrePrincipale()
{
    delete ui;
}

void FenetrePrincipale::on_tl_SeConnecter_clicked()
{
    //bdd.autoLogOn();
    if(!bdd.isConnected()){
        ui->sc_Message->setText("Authentifiez vous pour accéder à l'application");
    }
    else{
        if(bdd.isConnected())
            ui->sc_Message->setText("Vous êtes connecté");
    }
    ui->stackedWidget->setCurrentWidget(ui->Connexion);
}

void FenetrePrincipale::on_tl_Quitter_clicked()
{
    exit(EXIT_SUCCESS);
}

void FenetrePrincipale::on_tl_Insertion_clicked()
{
    if(!bdd.isConnected())
    {
        ui->stackedWidget->setCurrentWidget(ui->Bienvenue);
    }
    // Tous les combo box de "insertion" sont remplies ici
    else{
        ui->stackedWidget->setCurrentWidget(ui->Insertion);
        classeDansCBox(ui->inscE_mentionComboBox);
        classeDansCBox(ui->inscM_classeMatiereCombobox);
        classeDansCBox(ui->inscAchat_niveauComboBox);
        // numElevesSelonCLasseDansCBox(ui->inscN_numeroEleveComboBox);
        // matiereDansCBoxSelonClasse(ui->inscN_matiereComboBox, );
    }
}

void FenetrePrincipale::on_tl_Lister_clicked()
{
    if(!bdd.isConnected())
    {
        ui->stackedWidget->setCurrentWidget(ui->Bienvenue);
    }
    else{
        ui->stackedWidget->setCurrentWidget(ui->ConsulterInfos);
        classeDansCBox(ui->lstEt_mentionComboBox);
        //this->afficherEleves();
    }
}

void FenetrePrincipale::on_sc_Connexion_clicked()
{
    QString user = ui->sc_utilisateurLineEdit->text();
    QString mdp = ui->keySequenceEdit->text();
    if(this->bdd.login(user,mdp)){
        ui->sc_Message->setText("Vous êtes connecté");
        effacerInfosDeLogin();
    }
    else
        ui->sc_Message->setText("Les informations d'identifications sont incorrects !");
}

void FenetrePrincipale::on_sc_Deconnexion_clicked()
{
    if(!bdd.isConnected())
    {
        ui->sc_Message->setText("Vous n'êtes pas encore connecté !");
    }
    else{
        if(this->bdd.logOut() == 0){
            ui->sc_Message->setText("Vous vous êtes déconnecté avec succès");
            effacerInfosDeLogin();
        }
        else if(this->bdd.logOut() == 1){
            qDebug() << bdd.logOut();
            ui->sc_Message->setText("Une erreur est survenue lors de la déconnexion...");
        }
    }
}

void FenetrePrincipale::effacerInfosDeLogin(){
    ui->sc_utilisateurLineEdit->setText("");
    ui->keySequenceEdit->setText("");
}

void FenetrePrincipale::on_inscE_Enregistrer_clicked()
{
    // Récupération les valeurs des champs de formulaire
    QString nom = ui->inscE_nomLineEdit->text();
    QString prenom = ui->inscE_prenomLineEdit->text();
    QDate dateDeNaissance = ui->inscE_dateDeNaissanceDateEdit->date();
    QString pere = ui->inscE_pereLineEdit->text();
    QString mere = ui->inscE_mereLineEdit->text();
    QString classeAssigne = ui->inscE_mentionComboBox->currentText();

    qDebug() << "Valeur de la date de naissance : " << dateDeNaissance;
    // Utilise la fonction d'insertion d'élèves pour insérer les données dans la base de données
    if (bdd.isConnected()) {
        if (bdd.insertionEleves(nom, prenom, dateDeNaissance, pere, mere, classeAssigne)) {
            // L'insertion a réussi
            qDebug() << "L'insertion a réussi !";
            ui->inscEt_Message->setText("L'insertion a été un succès !");
        } else {
            // L'insertion a échoué
            qDebug() << "L'insertion a échoué.";
            ui->inscEt_Message->setText("Erreur lors de l'insertion.");
        }
    } else {
        // La base de données n'est pas connectée
        qDebug() << "La base de données n'est pas connectée.";
        ui->inscEt_Message->setText("La base de données n'est pas connectée.");
    }
}


void FenetrePrincipale::on_ongletInsertion_currentChanged(/*int index*/)
{
//    bdd.recupererClasses();
//    classeDansCBox(ui->lstE_classeAfficherComboBox);
}

//void FenetrePrincipale::afficherEleves(const QString& classeAssigne, int choix){
//    QVector<QVector<QString>> donneesEleves;
//    if(choix == 1){
//        donneesEleves = bdd.recupElevesSelonClasse(classeAssigne);
//    }
//    else if(choix == 2){
//        donneesEleves = bdd.recupNoteElevesSelonMatiere(classeAssigne);
//    }
//    else{
//        donneesEleves = QVector<QVector<QString>>();
//    }

//    ui->lstE_listeEleves->setRowCount(donneesEleves.size()); // Définir le nombre de lignes
//    int ligne = 0;
//    for (const QVector<QString>& eleveInfo : donneesEleves) {
//        for (int col = 0; col < eleveInfo.size(); ++col) {
//            QTableWidgetItem* item = new QTableWidgetItem(eleveInfo[col]);
//            ui->lstE_listeEleves->setItem(ligne, col, item);
//        }
//        ligne++;
//    }
//}

void FenetrePrincipale::afficherEleves(const QString& classeAssigne){
    QVector<QVector<QString>> donneesEleves = bdd.recupElevesSelonClasse(classeAssigne);
    ui->lstE_listeEleves->setRowCount(donneesEleves.size()); // Définir le nombre de lignes
    int row = 0;
    for (const QVector<QString>& eleveInfo : donneesEleves) {
        for (int col = 0; col < eleveInfo.size(); ++col) {
            QTableWidgetItem* item = new QTableWidgetItem(eleveInfo[col]);
            ui->lstE_listeEleves->setItem(row, col, item);
        }
        row++;
    }
}


void FenetrePrincipale::on_lstE_chercher_clicked()
{
    QString classeAssigne = ui->lstEt_mentionComboBox->currentText();
    afficherEleves(classeAssigne);
}

//void FenetrePrincipale::remplissageComboBox(QComboBox *comboBox){
//    comboBox->clear();
//    int i;
//    if(choix == "Matière"){
//        comboBox->clear();
//        comboBox->addItem("Sélectionnez une matière :");
//        QVector<QVector<QString>> matieres = bdd.recupererMatieres();
//        qDebug() << "Contenu de 'matieres' : " << matieres;

//        for (const QVector<QString>& matiereInfo : matieres) {
//            if (matiereInfo.size() >= 3) {
//                QString nomMatiere = matiereInfo[2]; // Le nom de la matière est à l'index 2 du sous-vecteur
//                comboBox->addItem(nomMatiere);
//            }
//        }
//    }
//    else if(choix == "Classe"){
//        QVector<QString> classe;
//        comboBox->addItem("Renseignez la classe a afficher :");
//        classe = bdd.recupererClasses();
//        for (i = 0; i < classe.size() ; i++) {
//            comboBox->addItem(classe[i]);
//        }
//    }
//    else{
//        comboBox->addItem("Un erreur est survenu...");
//    }
//    qDebug() << "Contenue de 'classes' : " << classes;
//}

void FenetrePrincipale::numElevesSelonCLasseDansCBox(QComboBox *comboBoxEleve, int &idClasse){
    int nbEleves = bdd.compterEntreesSelonClasse("ELEVE", idClasse);
    int i;
    comboBoxEleve->clear();
    for(i=0; i<nbEleves; i++)
        comboBoxEleve->addItem(QString::number(i+1));
}

void FenetrePrincipale::classeDansCBox(QComboBox *comboBoxClasse){
    comboBoxClasse->clear();
    // comboBoxClasse->addItem("Renseignez la classe à afficher :");
        QVector<QString> classes = bdd.recupererClasses();
    qDebug() << "Contenue de 'classes' : " << classes;

    for (const QString& classe : classes) {
        comboBoxClasse->addItem(classe);
    }
}

void FenetrePrincipale::matiereDansCBoxSelonClasse(QComboBox *comboBox,int &idClasse){
    comboBox->clear();
    QVector<QVector<QString>> matieres = bdd.recupererMatieresSelonClasse(idClasse);
    qDebug() << "Contenu de 'matieres' : " << matieres;
    for (const QVector<QString>& matiereInfo : matieres) {
        if (matiereInfo.size() >= 3) {
            QString nomMatiere = matiereInfo[2]; // Le nom de la matière est à l'index 2 du sous-vecteur
            comboBox->addItem(nomMatiere);
        }
    }
}

//void FenetrePrincipale::classeDansCBox(QComboBox *comboBoxEleve){
//    int nbEleves = bdd.compterEntrees("ELEVE");
//    int i;
//    comboBoxEleve->clear();
//    for(i=0; i<nbEleves; i++)
//        comboBoxEleve->addItem(QString::number(i+1));
//}

void FenetrePrincipale::on_inscC_Enregistrer_clicked()
{
    QString nomClasse = ui->inscMNP_nomMentionLineEdit->text();

    if (bdd.isConnected()) {
        if (bdd.enregistrerClasse(nomClasse)) {
            // L'insertion a réussi
            qDebug() << "L'insertion d'une nouvelle classe a réussi !";
            ui->inscC_Message->setText("L'insertion d'une nouvelle classe a été un succès !");
        } else {
            // L'insertion a échoué
            qDebug() << "Un erreur est survenu lors de l'insertion de la classe";
            ui->inscC_Message->setText("Un erreur est survenu lors de l'insertion de la classe");
        }
    } else {
        // La base de données n'est pas connectée
        qDebug() << "La base de données n'est pas connectée.";
        ui->inscEt_Message->setText("La base de données n'est pas connectée.");
    }
}


void FenetrePrincipale::on_inscM_Enregistrer_clicked()
{
    QString classeDelaMatière(ui->inscM_classeMatiereCombobox->currentText());
    QString nomDelaMatière(ui->inscM_nomDuMatiReLineEdit->text());
    QString coefficientTxt(ui->inscM_coefficientLineEdit->text());
    double coefficient = coefficientTxt.toDouble();

    if (bdd.isConnected()) {
        if (bdd.enregistrerMatiere(classeDelaMatière, nomDelaMatière, coefficient)) {
            // L'insertion a réussi
            qDebug() << "L'insertion a réussi !";
            ui->inscM_Message->setText("L'insertion a été un succès !");
        } else {
            // L'insertion a échoué
            qDebug() << "L'insertion a échoué.";
            ui->inscM_Message->setText("Erreur lors de l'insertion.");
        }
    } else {
        // La base de données n'est pas connectée
        qDebug() << "La base de données n'est pas connectée.";
        ui->inscM_Message->setText("La base de données n'est pas connectée.");
    }
}

// Slot activé lors de l'enregistrement des notes
void FenetrePrincipale::on_inscN_Enregistrer_clicked()
{
    int idEleve = ui->inscAchat_mentionComboBox->currentText().toInt();
    QString classeEleve = ui->inscAchat_niveauComboBox->currentText();
    QString matiere = ui->inscAchat_parcoursComboBox->currentText();
    double note = ui->inscN_noteLineEdit->text().toDouble();

    bdd.enregistrerNote(idEleve, matiere, classeEleve, note);
}

void FenetrePrincipale::on_inscN_classeEleveComboBox_currentTextChanged(const QString &arg1)
{
    QString nomClasse = ui->inscAchat_niveauComboBox->currentText();
    int idClasse = bdd.recupererIdClasse(nomClasse);
    numElevesSelonCLasseDansCBox(ui->inscAchat_mentionComboBox, idClasse);
    matiereDansCBoxSelonClasse(ui->inscAchat_parcoursComboBox, idClasse);
}

void FenetrePrincipale::on_inscN_afficherEleves_clicked()
{
    afficherElevesV2();
}

void FenetrePrincipale::afficherElevesV2() {
    QString nomMatiere = ui->inscAchat_parcoursComboBox->currentText();
    QString nomClasse = ui->inscAchat_niveauComboBox->currentText();
    //QString matiereAfficheM = "";
    ui->inscN_matiereAffiche->setText("Notes pour la matiere " + nomMatiere);
    QVector<QVector<QString>> eleveData = bdd.recupNoteElevesSelonMatiereEtClasse(nomMatiere, nomClasse); // Remplacez "classeAssigne" par la valeur appropriée
    // Le QTableWidget doit contenir au moins une ligne pour l'en-tête
    int numRows = eleveData.size();
    if (numRows <= 0) {
        return; // Pas de données à afficher
    }

    // Définis le nombre de lignes dans le QTableWidget
    ui->inscN_noteMatiereClasse->setRowCount(numRows);

    // Remplis le QTableWidget avec les données des élèves
    for (int row = 0; row < numRows; ++row) {
        for (int col = 0; col < eleveData[row].size(); ++col) {
            QTableWidgetItem* item = new QTableWidgetItem(eleveData[row][col]);
            ui->inscN_noteMatiereClasse->setItem(row, col, item);
        }
    }
}

// Slot activé lors de l'enregistrement d'un admin
void FenetrePrincipale::on_inscA_enregistrer_clicked()
{
    QString nomAdmin = ui->inscA_nomDeLAdminLineEdit->text();
    QString mdpAdmin = ui->inscA_motDePasseLineEdit->text();
    bool reussite = bdd.enregistrerAdmin(nomAdmin, mdpAdmin);

    if(reussite){
        ui->inscA_Message->setText("L'admin a été ajouté avec succès !");
    }
    else{
        ui->inscA_Message->setText("L'ajout d'un nouveau admin a échoué");
    }
}

void FenetrePrincipale::on_tl_Modification_clicked()
{
    if(!bdd.isConnected())
    {
        ui->stackedWidget->setCurrentWidget(ui->Bienvenue);
    }
    // Tous les combo box de "insertion" sont remplies ici
    else{
        ui->stackedWidget->setCurrentWidget(ui->Modifications);
        classeDansCBox(ui->modE_classeEleveComboBox);
        ui->modE_nomLineEdit->setText("");
        ui->modE_prenomLineEdit->setText("");
        //ui->modE_dateDeNaissanceDateEdit->setDate("");
        ui->modE_pereLineEdit->setText("");
        ui->modE_mereLineEdit->setText("");
        //ui->modE_classeAssigneComboBox->setText();
        // numElevesSelonCLasseDansCBox(ui->inscN_numeroEleveComboBox);
        // matiereDansCBoxSelonClasse(ui->inscN_matiereComboBox, );
    }
}

void FenetrePrincipale::on_modE_classeEleveComboBox_currentTextChanged(const QString &arg1)
{
    QString nomClasse = ui->modE_classeEleveComboBox->currentText();
    int idClasse = bdd.recupererIdClasse(nomClasse);
    numElevesSelonCLasseDansCBox(ui->modE_numeroComboBox, idClasse);
}

void FenetrePrincipale::on_modE_chercher_clicked()
{
    classeDansCBox(ui->modE_classeAssigneComboBox);
    QString nomClasse = ui->modE_classeAssigneComboBox->currentText();
    int idEleve = ui->modE_numeroComboBox->currentText().toInt();

    ui->modE_nomLineEdit->clear();
    ui->modE_prenomLineEdit->clear();
    ui->modE_dateDeNaissanceDateEdit->clear();
    ui->modE_pereLineEdit->clear();
    ui->modE_mereLineEdit->clear();
    //ui->modE_classeAssigneComboBox->setText();

    QVector<QString> infoEleve = bdd.recupEleveParClasseEtID(nomClasse, idEleve);

    if (!infoEleve.isEmpty()) {
        ui->modE_Message2->setText("L'élève a été trouvé avec succès");
        // Supposons que vous souhaitez remplir les champs avec les données du premier élève de la liste
        // QVector<QString> infoEleve = elevesData[0];

        // Remplis les champs de l'interface utilisateur avec les informations de l'élève
        this->idEleveTemp = infoEleve[0].toInt();
        ui->modE_nomLineEdit->setText(infoEleve[1]); // Nom de l'élève
        ui->modE_prenomLineEdit->setText(infoEleve[2]); // Prénom de l'élève
        ui->modE_dateDeNaissanceDateEdit->setDate(QDate::fromString(infoEleve[3], "yyyy-MM-dd")); // Date de naissance
        ui->modE_pereLineEdit->setText(infoEleve[4]); // Nom du père
        ui->modE_mereLineEdit->setText(infoEleve[5]); // Nom de la mère
    } else {
        ui->modE_Message2->setText("Un erreur s'est produit lors de la récupération des informations sur l'élève");
    }
}

void FenetrePrincipale::on_modE_Enregistrer_clicked()
{
    QString nom = ui->inscE_nomLineEdit->text();
    QString prenom = ui->inscE_prenomLineEdit->text();
    QDate dateDeNaissance = ui->inscE_dateDeNaissanceDateEdit->date();
    QString pere = ui->inscE_pereLineEdit->text();
    QString mere = ui->inscE_mereLineEdit->text();
    QString classeAssigne = ui->inscE_mentionComboBox->currentText();

    if (bdd.isConnected()) {
        if (bdd.mettreAJourEleve(this->idEleveTemp ,nom, prenom, dateDeNaissance, pere, mere, classeAssigne)) {
            // L'insertion a réussi
            qDebug() << "L'insertion a réussi !";
            ui->modE_Message2->setText("L'insertion a été un succès !");
        } else {
            // L'insertion a échoué
            qDebug() << "L'insertion a échoué.";
            ui->modE_Message2->setText("Erreur lors de l'insertion.");
        }
    } else {
        // La base de données n'est pas connectée
        qDebug() << "La base de données n'est pas connectée.";
        ui->inscEt_Message->setText("La base de données n'est pas connectée.");
    }
}


void FenetrePrincipale::on_tl_Suppression_clicked()
{
    if(!bdd.isConnected())
    {
        ui->stackedWidget->setCurrentWidget(ui->Bienvenue);
    }
    // Tous les combo box de "Suppréssion" sont remplies ici
    else{
        ui->stackedWidget->setCurrentWidget(ui->Suppression);
        classeDansCBox(ui->supM_classeMatiereComboBox);
        int idClasse = bdd.recupererIdClasse(ui->supM_classeMatiereComboBox->currentText());
        matiereDansCBoxSelonClasse(ui->supM_nomMatiereComboBox, idClasse);
        // ui->modE_classeAssigneComboBox->setText();
        // numElevesSelonCLasseDansCBox(ui->inscN_numeroEleveComboBox);
        // matiereDansCBoxSelonClasse(ui->inscN_matiereComboBox, );
    }
}


void FenetrePrincipale::on_supM_Supprimer_clicked()
{

}

