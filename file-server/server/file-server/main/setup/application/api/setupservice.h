#ifndef SETUPSERVICE_H
#define SETUPSERVICE_H

#include <QString>

class SetupService {

public:

    virtual ~SetupService();

    void virtual turnOnServer() = 0;
    void virtual turnOffServer() = 0;
    bool virtual isServerRunning() = 0;

    void virtual selectDirectoryToServe(QString path) = 0;
};

inline SetupService::~SetupService() {}

#endif // SETUPSERVICE_H
