#ifndef SETUPSERVICE_H
#define SETUPSERVICE_H

#include <QString>

class SetupService {

public:

    virtual ~SetupService();

    virtual void turnOnServer() = 0;
    virtual void turnOffServer() = 0;
    virtual bool isServerRunning() = 0;

    virtual void selectDirectoryToServe(QString path) = 0;
    virtual QString getServedDirectory() = 0;
};

inline SetupService::~SetupService() {}

#endif // SETUPSERVICE_H
