#include "inmemoryserversetuprepository.h"

void InMemoryServerSetupRepository::store(ServerSetup* serverSetup)
{
    if(serverSetup != 0) {
        this->serverSetup = serverSetup;
    }
}

ServerSetup *InMemoryServerSetupRepository::load()
{
    return serverSetup;
}
