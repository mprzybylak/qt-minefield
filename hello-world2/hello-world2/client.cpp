#include "client.h"
#include "ui_client.h"
#include <QApplication>
#include <QDBusConnection>

Client::Client(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Client)
{
    ui->setupUi(this);

    // d-bus
    QDBusConnection::sessionBus().registerObject("/", this);

}

Client::~Client()
{
    delete ui;
}
