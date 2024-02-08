#include "impressionfacture.h"

ImpressionFacture::ImpressionFacture(QWidget *parent)
    : QWidget(parent), ui(new Ui::FactureV2)
{
    ui->setupUi(this);
}

ImpressionFacture::~ImpressionFacture()
{
    delete ui;
}

void ImpressionFacture::imprimerFacture()
{
    // Créez un objet QPrinter
    QPrinter printer;

    // Affichez la boîte de dialogue d'impression et configurez le printer en fonction des choix de l'utilisateur
    QPrintDialog printDialog(&printer, this);
    if (printDialog.exec() != QDialog::Accepted) {
        // L'utilisateur a annulé la boîte de dialogue d'impression
        return;
    }

    // Utilisez QPainter pour dessiner le contenu du QFrame sur le printer
    QPainter painter(&printer);
    ui->contenuFacture->render(&painter);

    // Terminez l'impression
    painter.end();
}

void ImpressionFacture::afficherFacture()
{
    // Créez un objet QDialog
    QDialog dialog;

    // Créez un layout pour le QDialog
    QVBoxLayout *layout = new QVBoxLayout(&dialog);

    // Utilisez le QFrame contenuFacture dans le QDialog
    layout->addWidget(this);
    dialog.setFixedHeight(720);
    dialog.setFixedWidth(475);

    // Affichez le QDialog avec le contenuFacture à l'intérieur
    dialog.exec();
}
