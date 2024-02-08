// fenetrefacture.h

#ifndef FENETREFACTURE_H
#define FENETREFACTURE_H

#include <QMainWindow>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include <QPainter>
#include "ui_factureV2.h"

namespace Ui {
class FenetreFacture;
}

class FenetreFacture : public QMainWindow
{
    Q_OBJECT

public:
    explicit FenetreFacture(QWidget *parent = nullptr);

    bool imprimerFacture();
    void remplirTable(QTableWidget* maTable, QVector<QVector<QString>>& donnees);
    bool remplirFacture(QVector<QVector<QString>>& listeAchat, QString nomEtudiant);

    ~FenetreFacture();

private slots:
    void on_imprimerPushButton_clicked();

private:
    Ui::FactureV2 *ui;
};

#endif // FENETREFACTURE_H
