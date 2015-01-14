#ifndef INMEMORYSERVERSETUPREPOSITORY_H
#define INMEMORYSERVERSETUPREPOSITORY_H

#include "../../domain/Setup/ServerSetupRepository.h"

class InMemoryServerSetupRepository : public ServerSetupRepository
{
public:
    virtual ~InMemoryServerSetupRepository();
    void store(ServerSetup* serverSetup);
    ServerSetup* load();
private:
    ServerSetup* serverSetup;
};

#endif // INMEMORYSERVERSETUPREPOSITORY_H
