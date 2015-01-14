#include "serverwidget.h"
#include "ui_serverwidget.h"
#include <QFileDialog>
#include <QDirIterator>
#include <QDebug>

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

    ui->fileTable->clear();
    ui->fileTable->setRowCount(0);

    QDirIterator it(dir);

    while(it.hasNext()) {
        it.next();
        qDebug() << it.fileInfo().fileName();
        QTableWidgetItem* item = new QTableWidgetItem(it.fileInfo().fileName());
        ui->fileTable->insertRow(ui->fileTable->rowCount());
        ui->fileTable->setItem(ui->fileTable->rowCount()-1, 0, item);
    }
}

ServerWidget::~ServerWidget()
{
    delete ui;
    delete setupService;
}
