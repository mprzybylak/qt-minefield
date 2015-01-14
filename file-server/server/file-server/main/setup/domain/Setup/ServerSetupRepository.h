#ifndef SERVERSETUPREPOSITORY_H
#define SERVERSETUPREPOSITORY_H

#include "serversetup.h"

class ServerSetupRepository {

public:
    virtual ~ServerSetupRepository() = 0;
    virtual void store(ServerSetup* serverSetup) = 0;
    virtual ServerSetup* load() = 0;
};

ServerSetupRepository::~ServerSetupRepository() {}

#endif // SERVERSETUPREPOSITORY_H
