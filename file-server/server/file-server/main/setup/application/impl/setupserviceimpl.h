#ifndef SETUPSERVICEIMPL_H
#define SETUPSERVICEIMPL_H

#include "../api/SetupService.h"
#include "../../domain/Setup/serversetupfactory.h"
#include "../../domain/Setup/ServerSetupRepository.h"

class ServerServiceImpl : public ServerService
{

public:

    ServerServiceImpl(ServerSetupFactory* serverSetupFactory, ServerSetupRepository* serverSetupRepository);
    virtual ~ServerServiceImpl();

    void turnOnServer();
    void turnOffServer();
    bool isServerRunning();

    void selectDirectoryToServe(QString path);

private:

    ServerSetupFactory* serverSetupFactory;
    ServerSetupRepository* serverSetupRepository;
    QString directoryToServe;
};

#endif // SETUPSERVICEIMPL_H
