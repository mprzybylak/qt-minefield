#ifndef SERVERSETUPREPOSITORY_H
#define SERVERSETUPREPOSITORY_H

#include "serversetup.h"

class ServerSetupRepository {

public:
    virtual ~ServerSetupRepository() {}
    virtual void store(ServerSetup* serverSetup) = 0;
    virtual ServerSetup* load() = 0;
};



#endif // SERVERSETUPREPOSITORY_H
