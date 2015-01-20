#ifndef SETUPSETUPFACTORYMOCK_H
#define SETUPSETUPFACTORYMOCK_H

#include "../../../main/setup/domain/Setup/serversetupfactory.h"

class ServerSetupFactoryMock : public ServerSetupFactory
{
    public:
    MOCK_METHOD0(createServerSetup, ServerSetup*());
};

#endif // SETUPSETUPFACTORYMOCK_H
