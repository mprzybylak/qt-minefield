#ifndef ILLEGALSERVERSETUPEXCEPTION_H
#define ILLEGALSERVERSETUPEXCEPTION_H

#include <QString>

class IllegalServerSetupException
{

public:
    static IllegalServerSetupException illegalTurnOn();
    static IllegalServerSetupException illegalTurnOff();
    QString getDescription();

private:
    IllegalServerSetupException(QString description);

    QString description;
};

#endif // ILLEGALSERVERSETUPEXCEPTION_H
