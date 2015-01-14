#include "client.h"
#include "ui_client.h"
#include <QApplication>
#include <QDBusMessage>
#include <QDBusConnection>

Client::Client(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Client)
{
    ui->setupUi(this);
    serverProxy = new ValueProviderProxy("pl.mprzybylak.Server", "/Server", QDBusConnection::sessionBus());

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(sendToServer()));
}

Client::~Client()
{
    delete ui;
}


void Client::sendToServer() {
    int value = serverProxy->getValue();
    ui->textEdit->append(QString::number(value));
    /*
    // d-bus classic
    // create message (message call)
    QDBusMessage message = QDBusMessage::createMethodCall(
                "org.foo.bar", // service name
                "/network", // object name
                "", // interface name - can be omitted if uniqe
                "ping" // method name
                );

    // arguments for method call - stream notation
    message << "test";

    // send message to session bus - async
    //bool queued = QDBusConnection::sessionBus().send(message);

    // wrapper for sync call
    QDBusMessage response = QDBusConnection::sessionBus().call(message);
    ui->textEdit->append(response.errorMessage());
    */
}
