#-------------------------------------------------
#
# Project created by QtCreator 2023-12-14T15:32:41
#
#-------------------------------------------------

QT       +=   core gui    \
sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TiaService
TEMPLATE = app


SOURCES += main.cpp\
        controleur.cpp \
        fenetreprincipale.cpp \
        connexionbdd.cpp

HEADERS  += fenetreprincipale.h \
        connexionbdd.h \
        controleur.h

FORMS    += fenetreprincipale.ui

DISTFILES += \
    TIA SERVICE.MDB
