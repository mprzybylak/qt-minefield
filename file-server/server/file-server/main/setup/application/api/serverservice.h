#ifndef SETUPSERVICE_H
#define SETUPSERVICE_H

#include <QString>

class ServerService {

public:

    virtual ~ServerService();

    void virtual turnOnServer() = 0;
    void virtual turnOffServer() = 0;
    bool virtual isServerRunning() = 0;

    void virtual selectDirectoryToServe(QString path) = 0;
};

inline ServerService::~ServerService() {}

#endif // SETUPSERVICE_H
