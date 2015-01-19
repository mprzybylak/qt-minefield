#include <QtTest/QTest>
#include "../../../../main/setup/domain/Setup/serversetup.h"
#include "../../../../main/setup/domain/Setup/illegalserversetupexception.h"
#include <gtest/gtest.h>

// TODO separate files

class ServerSetupTest : public QObject
{

    Q_OBJECT

private slots:
    void shouldAllowToTurnOnServer();
    void shouldAllowToTurnOffServer();
    void shouldNotAllowToTurnOnRunningServer();
    void shouldNotAllowToTurnOffStopedServer();
    void shouldAllowToStoreBaseDirectory();
    void shouldAllowToOverwriteBaseDirectory();
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

void ServerSetupTest::shouldAllowToStoreBaseDirectory()
{
    // given
    const QString PATH = "/home/";
    ServerSetup serverSetup;

    // when
    serverSetup.setBaseDirectoryPath(PATH);

    // then
    QVERIFY(serverSetup.getBaseDirectoryPath() == PATH);

}

void ServerSetupTest::shouldAllowToOverwriteBaseDirectory()
{
    // given
    const QString OLD_PATH = "/home/old";
    const QString NEW_PATH = "/home/new";
    ServerSetup serverSetup;
    serverSetup.setBaseDirectoryPath(OLD_PATH);

    // when
    serverSetup.setBaseDirectoryPath(NEW_PATH);

    // then
    QVERIFY(serverSetup.getBaseDirectoryPath() != OLD_PATH);
    QVERIFY(serverSetup.getBaseDirectoryPath() == NEW_PATH);

}

TEST(SquereRootTest, PositiveNos) {
    EXPECT_EQ(18, 18);
}

int main(int argc, char**argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

 /*
QTEST_MAIN(ServerSetupTest)
#include "serversetuptest.moc"
 */
