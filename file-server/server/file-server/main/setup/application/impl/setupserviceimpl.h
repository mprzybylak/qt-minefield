#ifndef SETUPSERVICEIMPL_H
#define SETUPSERVICEIMPL_H

#include "../api/SetupService.h"
#include "../../domain/Setup/serversetupfactory.h"
#include "../../domain/Setup/ServerSetupRepository.h"

class SetupServiceImpl : public SetupService
{
public:
    SetupServiceImpl(ServerSetupFactory* serverSetupFactory, ServerSetupRepository* serverSetupRepository);
    virtual ~SetupServiceImpl();

    void turnOnServer();
    void turnOffServer();
    bool isServerRunning();

    void selectDirectoryToServe(QString path);

private:

    ServerSetupFactory* serverSetupFactory;
    ServerSetupRepository* serverSetupRepository;
};

#endif // SETUPSERVICEIMPL_H
