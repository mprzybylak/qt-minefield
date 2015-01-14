#include "server.h"
#include "ui_server.h"

Server::Server(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Server), valueProvider(new ValueProvider)
{
    ui->setupUi(this);

    // connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(sendToServer()));
    connect(ui->value_edit, SIGNAL(textChanged(QString)), this->valueProvider , SLOT(changeValue(QString)));

}

Server::~Server()
{
    delete ui;
    delete valueProvider;
}
