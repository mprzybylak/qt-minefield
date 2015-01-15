#ifndef ILLEGALSERVERSETUPEXCEPTION_H
#define ILLEGALSERVERSETUPEXCEPTION_H

#include <QString>

class IllegalServerSetupException
{

public:
    static IllegalServerSetupException illegalTurnOn();
    static IllegalServerSetupException illegalTurnOff();
    static IllegalServerSetupException nonExistingSetup();
    static IllegalServerSetupException serverStoped();

    QString getDescription();

private:

    IllegalServerSetupException(QString description);

    QString description;
};

#endif // ILLEGALSERVERSETUPEXCEPTION_H
