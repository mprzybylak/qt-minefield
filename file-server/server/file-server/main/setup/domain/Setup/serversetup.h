#ifndef SERVERSETUP_H
#define SERVERSETUP_H

class ServerSetup
{
public:
    ServerSetup();

    void turnOnServer();
    void turnOffServer();

    bool isServerRunning();


private:
    bool serverRunning;
};

#endif // SERVERSETUP_H
