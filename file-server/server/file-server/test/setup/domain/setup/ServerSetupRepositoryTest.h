#ifndef SERVERSETUPREPOSITORYTEST_H
#define SERVERSETUPREPOSITORYTEST_H

#include "../../../main/setup/domain/Setup/ServerSetupRepository.h"

class ServerSetupRepositoryMock : public ServerSetupRepository
{
public:
   MOCK_METHOD1(store, void(ServerSetup* serverSetup));
   MOCK_METHOD0(load, ServerSetup*());
};

#endif // SERVERSETUPREPOSITORYTEST_H
