#ifndef SETUPSERVICEIMPL_H
#define SETUPSERVICEIMPL_H

#include "../api/setupservice.h"
#include "../../domain/Setup/serversetupfactory.h"
#include "../../domain/Setup/ServerSetupRepository.h"

class SetupServiceImpl : public SetupService
{

public:

    SetupServiceImpl(ServerSetupFactory* serverSetupFactory, ServerSetupRepository* serverSetupRepository);

    void turnOnServer();
    void turnOffServer();
    bool isServerRunning();

    void selectDirectoryToServe(QString path);
    QString getServedDirectory();

private:

    ServerSetupFactory* serverSetupFactory;
    ServerSetupRepository* serverSetupRepository;
    QString directoryToServe;
};

#endif // SETUPSERVICEIMPL_H
