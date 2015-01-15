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

IllegalServerSetupException IllegalServerSetupException::nonExistingSetup() {
    return IllegalServerSetupException("Server configuration corrupted");
}

IllegalServerSetupException IllegalServerSetupException::serverStoped() {
    return IllegalServerSetupException("Server offline");
}

QString IllegalServerSetupException::getDescription() {
    return description;
}
