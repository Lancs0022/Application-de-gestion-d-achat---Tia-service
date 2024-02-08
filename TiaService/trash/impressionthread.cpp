#include "impressionthread.h"

ImpressionThread::ImpressionThread(QObject *parent){

}

void ImpressionThread::run() {
    // Exécute l'impression de la facture
    facture->afficherFacture();

    // Émet le signal d'impression terminée
    emit impressionTerminee();
}
