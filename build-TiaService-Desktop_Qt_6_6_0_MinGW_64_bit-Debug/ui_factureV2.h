/********************************************************************************
** Form generated from reading UI file 'factureV2.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTUREV2_H
#define UI_FACTUREV2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FactureV2
{
public:
    QWidget *contenuFacture;
    QTextEdit *nomClientTextEdit;
    QTableWidget *transactionsTableWidget;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QDateTimeEdit *dateFactureTimeEdit;
    QLabel *label_10;
    QTextEdit *montantTransactionTextEdit;
    QPushButton *imprimerPushButton;

    void setupUi(QWidget *FactureV2)
    {
        if (FactureV2->objectName().isEmpty())
            FactureV2->setObjectName("FactureV2");
        FactureV2->resize(461, 659);
        contenuFacture = new QWidget(FactureV2);
        contenuFacture->setObjectName("contenuFacture");
        contenuFacture->setGeometry(QRect(0, 0, 461, 571));
        contenuFacture->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        nomClientTextEdit = new QTextEdit(contenuFacture);
        nomClientTextEdit->setObjectName("nomClientTextEdit");
        nomClientTextEdit->setGeometry(QRect(110, 160, 161, 26));
        transactionsTableWidget = new QTableWidget(contenuFacture);
        if (transactionsTableWidget->columnCount() < 4)
            transactionsTableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        transactionsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        transactionsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        transactionsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        transactionsTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (transactionsTableWidget->rowCount() < 1)
            transactionsTableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        transactionsTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        transactionsTableWidget->setItem(0, 3, __qtablewidgetitem5);
        transactionsTableWidget->setObjectName("transactionsTableWidget");
        transactionsTableWidget->setGeometry(QRect(10, 190, 441, 221));
        transactionsTableWidget->setShowGrid(false);
        transactionsTableWidget->setGridStyle(Qt::CustomDashLine);
        transactionsTableWidget->setWordWrap(false);
        transactionsTableWidget->setCornerButtonEnabled(false);
        label_4 = new QLabel(contenuFacture);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(330, 490, 91, 20));
        label_4->setStyleSheet(QString::fromUtf8("font: 11pt \"Berlin Sans FB\";"));
        label_2 = new QLabel(contenuFacture);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 160, 101, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 11pt \"Berlin Sans FB\";"));
        label = new QLabel(contenuFacture);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 130, 291, 16));
        label->setStyleSheet(QString::fromUtf8("font: 11pt \"Berlin Sans FB\";\n"
""));
        label_3 = new QLabel(contenuFacture);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 30, 161, 20));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"Berlin Sans FB\";"));
        label_5 = new QLabel(contenuFacture);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(290, 160, 41, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 11pt \"Berlin Sans FB\";"));
        label_6 = new QLabel(contenuFacture);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 490, 81, 16));
        label_6->setStyleSheet(QString::fromUtf8("font: 11pt \"Berlin Sans FB\";"));
        label_7 = new QLabel(contenuFacture);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(160, 50, 111, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 11pt \"Berlin Sans FB\";\n"
""));
        label_8 = new QLabel(contenuFacture);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(70, 110, 291, 16));
        label_8->setStyleSheet(QString::fromUtf8("font: 11pt \"Berlin Sans FB\";\n"
""));
        label_9 = new QLabel(contenuFacture);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(90, 80, 281, 16));
        label_9->setStyleSheet(QString::fromUtf8("font: 13pt \"Berlin Sans FB\";\n"
""));
        dateFactureTimeEdit = new QDateTimeEdit(contenuFacture);
        dateFactureTimeEdit->setObjectName("dateFactureTimeEdit");
        dateFactureTimeEdit->setGeometry(QRect(330, 160, 121, 22));
        dateFactureTimeEdit->setWrapping(false);
        dateFactureTimeEdit->setFrame(true);
        dateFactureTimeEdit->setAccelerated(false);
        label_10 = new QLabel(contenuFacture);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 430, 161, 16));
        label_10->setStyleSheet(QString::fromUtf8("font: 11pt \"Berlin Sans FB\";"));
        montantTransactionTextEdit = new QTextEdit(contenuFacture);
        montantTransactionTextEdit->setObjectName("montantTransactionTextEdit");
        montantTransactionTextEdit->setGeometry(QRect(160, 420, 291, 41));
        imprimerPushButton = new QPushButton(FactureV2);
        imprimerPushButton->setObjectName("imprimerPushButton");
        imprimerPushButton->setGeometry(QRect(110, 580, 231, 71));

        retranslateUi(FactureV2);

        QMetaObject::connectSlotsByName(FactureV2);
    } // setupUi

    void retranslateUi(QWidget *FactureV2)
    {
        FactureV2->setWindowTitle(QCoreApplication::translate("FactureV2", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = transactionsTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("FactureV2", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = transactionsTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("FactureV2", "D\303\251si", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = transactionsTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("FactureV2", "Qte", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = transactionsTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("FactureV2", "MTT", nullptr));

        const bool __sortingEnabled = transactionsTableWidget->isSortingEnabled();
        transactionsTableWidget->setSortingEnabled(false);
        transactionsTableWidget->setSortingEnabled(__sortingEnabled);

#if QT_CONFIG(tooltip)
        transactionsTableWidget->setToolTip(QCoreApplication::translate("FactureV2", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("FactureV2", "Le responsable", nullptr));
        label_2->setText(QCoreApplication::translate("FactureV2", "Nom du client :", nullptr));
        label->setText(QCoreApplication::translate("FactureV2", "Adresse : Campus Barikadimy 501 Toamasina", nullptr));
        label_3->setText(QCoreApplication::translate("FactureV2", "Jireh Students", nullptr));
        label_5->setText(QCoreApplication::translate("FactureV2", "Date :", nullptr));
        label_6->setText(QCoreApplication::translate("FactureV2", "client", nullptr));
        label_7->setText(QCoreApplication::translate("FactureV2", "Soutient \303\251ducatif", nullptr));
        label_8->setText(QCoreApplication::translate("FactureV2", "Tel : 0347958704 / 0326066910", nullptr));
        label_9->setText(QCoreApplication::translate("FactureV2", "\"Veille \303\240 l'\303\251panouissement des \303\251tudiants\"", nullptr));
        label_10->setText(QCoreApplication::translate("FactureV2", "Arr\303\252t\303\251 \303\240 la somme de : ", nullptr));
        imprimerPushButton->setText(QCoreApplication::translate("FactureV2", "Imprimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FactureV2: public Ui_FactureV2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTUREV2_H
