#include "serverwidget.h"
#include "ui_serverwidget.h"

ServerWidget::ServerWidget(SetupService* setupService, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServerWidget),
    setupService(setupService)
{
    ui->setupUi(this);
}


ServerWidget::~ServerWidget()
{
    delete ui;
    delete setupService;
}
