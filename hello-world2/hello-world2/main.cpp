#include "client.h"
#include "server.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);

    Server server;
    server.show();

    Client client;
    client.show();
    
    return application.exec();
}
