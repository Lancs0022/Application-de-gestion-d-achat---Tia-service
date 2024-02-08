#-------------------------------------------------
#
# Project created by QtCreator 2023-12-14T15:32:41
#
#-------------------------------------------------

QT       +=   core gui    \
              sql \
              widgets \
              printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TiaService
TEMPLATE = app


SOURCES += main.cpp\
        controleur.cpp \
    fenetrefacture.cpp \
        fenetreprincipale.cpp \
        connexionbdd.cpp \

HEADERS  += fenetreprincipale.h \
        connexionbdd.h \
        controleur.h \
    fenetrefacture.h

FORMS    += fenetreprincipale.ui \
    facture.ui \
    factureV2.ui

DISTFILES += \
    TIA SERVICE.MDB
