#include "serversetup.h"
#include "illegalserversetupexception.h"

ServerSetup::ServerSetup()
{
    serverRunning = false;
}

void ServerSetup::turnOnServer()
{
    if(serverRunning) {
        throw IllegalServerSetupException::illegalTurnOn();
    }
    serverRunning = true;
}

void ServerSetup::turnOffServer()
{
    if(!serverRunning) {
        throw IllegalServerSetupException::illegalTurnOff();
    }
    serverRunning = false;
}

bool ServerSetup::isServerRunning()
{
    return serverRunning;
}
