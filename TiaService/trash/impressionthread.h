// impressionfacturethread.h

#ifndef IMPRESSIONFACTURETHREAD_H
#define IMPRESSIONFACTURETHREAD_H

#include <QThread>
#include "impressionfacture.h"

class ImpressionThread : public QThread
{
    Q_OBJECT
public:
    ImpressionThread(QObject *parent = nullptr);

protected:
    void run() override;

private:
    ImpressionFacture *facture;

signals:
    void impressionTerminee();
};

#endif // IMPRESSIONFACTURETHREAD_H
