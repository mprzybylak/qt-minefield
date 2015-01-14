#include <QtTest/QTest>
#include "../../../../main/setup/domain/Setup/serversetup.h"
#include "../../../../main/setup/domain/Setup/illegalserversetupexception.h"




class ServerSetupTest : public QObject
{

    Q_OBJECT

private slots:
    void shouldAllowToTurnOnServer();
    void shouldAllowToTurnOffServer();
    void shouldNotAllowToTurnOnRunningServer();
    void shouldNotAllowToTurnOffStopedServer();
};




void ServerSetupTest::shouldAllowToTurnOnServer()
{
    // given
    ServerSetup serverSetup;

    // when
    serverSetup.turnOnServer();

    // then
    QVERIFY(serverSetup.isServerRunning() == true);
}

void ServerSetupTest::shouldAllowToTurnOffServer()
{
    // given
    ServerSetup serverSetup;
    serverSetup.turnOnServer();

    // when
    serverSetup.turnOffServer();

    // then
    QVERIFY(serverSetup.isServerRunning() == false);
}

void ServerSetupTest::shouldNotAllowToTurnOnRunningServer()
{
    // given
    ServerSetup serverSetup;
    serverSetup.turnOnServer();

    // when
    try {
        serverSetup.turnOnServer();
        throw 0;
    }
    catch(IllegalServerSetupException) {

    }
}

void ServerSetupTest::shouldNotAllowToTurnOffStopedServer()
{
    // given
    ServerSetup serverSetup;

    // when
    try {
        serverSetup.turnOffServer();
        throw 0;
    }
    catch(IllegalServerSetupException) {

    }
}


QTEST_MAIN(ServerSetupTest)
#include "serversetuptest.moc"
