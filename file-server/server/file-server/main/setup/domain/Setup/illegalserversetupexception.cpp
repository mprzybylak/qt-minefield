#include "illegalserversetupexception.h"

IllegalServerSetupException::IllegalServerSetupException(QString description): description(description)
{
}

IllegalServerSetupException IllegalServerSetupException::illegalTurnOn() {
    return IllegalServerSetupException("Cannot turn on running server");
}

IllegalServerSetupException IllegalServerSetupException::illegalTurnOff() {
    return IllegalServerSetupException("Cannot turn off stoped server");
}

QString IllegalServerSetupException::getDescription() {
    return description;
}
