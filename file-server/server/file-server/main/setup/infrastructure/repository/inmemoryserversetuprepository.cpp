#include "inmemoryserversetuprepository.h"
#include <QDebug>

InMemoryServerSetupRepository::~InMemoryServerSetupRepository() {
    delete serverSetup;
}

void InMemoryServerSetupRepository::store(ServerSetup* serverSetup)
{
    if(serverSetup == 0 || this->serverSetup == serverSetup) {
        return;
    }

    delete this->serverSetup;
    this->serverSetup = serverSetup;
}

ServerSetup *InMemoryServerSetupRepository::load()
{
    return serverSetup;
}
