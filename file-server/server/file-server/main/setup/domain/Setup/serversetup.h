#ifndef SERVERSETUP_H
#define SERVERSETUP_H

#include <QString>

class ServerSetup
{
public:
    ServerSetup();

    void turnOnServer();
    void turnOffServer();
    bool isServerRunning();

    void setBaseDirectoryPath(QString path);
    QString getBaseDirectoryPath();


private:
    bool serverRunning;
    QString baseDirectoryPath;
};

#endif // SERVERSETUP_H
