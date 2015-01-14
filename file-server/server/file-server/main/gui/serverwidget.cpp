#include "serverwidget.h"
#include "ui_serverwidget.h"
#include <QFileDialog>

ServerWidget::ServerWidget(SetupService* setupService, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServerWidget),
    setupService(setupService)
{
    ui->setupUi(this);

    ui->fileTable->horizontalHeader()->setStretchLastSection(true);

    connect(ui->startStopServerButton, SIGNAL(clicked()), this, SLOT(startStopServer()));
    connect(ui->selectDirectoryButton, SIGNAL(clicked()), this, SLOT(selectDirectory()));
}

void ServerWidget::startStopServer() {

    if(setupService->isServerRunning()) {
        setupService->turnOffServer();
        ui->startStopServerButton->setText("Stoped");
    }
    else {
        setupService->turnOnServer();
        ui->startStopServerButton->setText("Running");
    }
}

void ServerWidget::selectDirectory()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"), "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    setupService->selectDirectoryToServe(dir);
    ui->selectedDirectoryPath->setText(dir);
}

ServerWidget::~ServerWidget()
{
    delete ui;
    delete setupService;
}
