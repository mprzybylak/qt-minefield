#ifndef SETUPSERVICEIMPL_H
#define SETUPSERVICEIMPL_H

#include "../api/SetupService.h"

class SetupServiceImpl : public SetupService
{
public:
    SetupServiceImpl();

    void virtual turnOnServer();
    void virtual turnOffServer();

    void virtual selectDirectoryToServe(QString path);
};

#endif // SETUPSERVICEIMPL_H
