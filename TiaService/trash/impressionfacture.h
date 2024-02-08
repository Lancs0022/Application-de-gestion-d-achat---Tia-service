#ifndef IMPRESSIONFACTURE_H
#define IMPRESSIONFACTURE_H

#include <QWidget>
#include <QPrinter>
#include <QPrintDialog>
#include <QPainter>
#include <QMessageBox>
#include <QVBoxLayout>
#include "ui_facture.h"
#include "ui_factureV2.h"

class ImpressionFacture : public QWidget
{
    Q_OBJECT

public:
    ImpressionFacture(QWidget *parent = nullptr);
    ~ImpressionFacture();  // Ajout d'un destructeur

public slots:
    void imprimerFacture();
    void afficherFacture();

private:
    // Ui::Facture *ui;  // Utilisation du nom correct de la classe défini dans ui_facture.h
    Ui::FactureV2 *ui;
};

#endif // IMPRESSIONFACTURE_H

