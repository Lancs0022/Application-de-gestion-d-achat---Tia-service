// fenetrefacture.cpp

#include "fenetrefacture.h"

FenetreFacture::FenetreFacture(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FactureV2)
{
    ui->setupUi(this);
}

FenetreFacture::~FenetreFacture()
{
    delete ui;
}

bool FenetreFacture::imprimerFacture() {
    // Créer une instance de QPrinter
    QPrinter printer;

    // Créer un dialogue d'impression
    QPrintDialog dialog(&printer, this);

    // Vérifier si l'utilisateur a annulé le dialogue
    if (dialog.exec() != QDialog::Accepted) {
        return false;
    }

    // Créer un QPainter qui dessinera sur l'imprimante
    QPainter painter(&printer);

    // Dessiner le contenu du widget sur l'imprimante
    ui->contenuFacture->render(&painter);

    // Libérer le QPainter
    painter.end();
    return true;
}

bool FenetreFacture::remplirFacture(QVector<QVector<QString>>& listeAchat, QString nomEtudiant){
    remplirTable(ui->transactionsTableWidget, listeAchat);
    ui->nomClientTextEdit->setText(nomEtudiant);
    double totalTransaction = 0.0;

    // Parcourir le QVector<QVector<QString>>
    for (const auto& transaction : listeAchat) {
        // Convertir la chaîne en double et l'ajouter à totalTransaction
        totalTransaction += transaction[4].toDouble();
    }

    ui->montantTransactionTextEdit->setText(QString::number(totalTransaction));
    // Utiliser totalTransaction comme vous le souhaitez
    qDebug() << "Le total des transactions est : " << totalTransaction;
    return true;
}

void FenetreFacture::on_imprimerPushButton_clicked()
{
    if (!imprimerFacture()) {
        QMessageBox::warning(this, "Erreur d'impression", "L'impression a échoué !");
    }
}

void FenetreFacture::remplirTable(QTableWidget* maTable, QVector<QVector<QString>>& donnees){
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
