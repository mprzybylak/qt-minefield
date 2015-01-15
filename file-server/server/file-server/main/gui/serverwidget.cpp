#include "serverwidget.h"
#include "ui_serverwidget.h"
#include <QFileDialog>
#include <QDebug>

ServerWidget::ServerWidget(SetupService* setupModel, QFileSystemModel *fileModel, QWidget *parent) :
    setupModel(setupModel),
    view(new Ui::ServerWidget),
    fileModel(fileModel),
    QWidget(parent)
{
    view->setupUi(this);
    view->fileTable->setModel(fileModel);

    connect(view->startStopServerButton, SIGNAL(clicked()), this, SLOT(startStopServer()));
    connect(view->selectDirectoryButton, SIGNAL(clicked()), this, SLOT(selectDirectory()));
}

void ServerWidget::startStopServer()
{
    if(setupModel->isServerRunning()) {
        setupModel->turnOffServer();
        view->startStopServerButton->setText("Stoped"); // TODO text to constants
    }
    else {
        setupModel->turnOnServer();
        view->startStopServerButton->setText("Running");
    }
}

void ServerWidget::selectDirectory()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"), "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);

    setupModel->selectDirectoryToServe(dir);
    view->selectedDirectoryPath->setText(dir);
    view->fileTable->setRootIndex(fileModel->index(dir));
}

ServerWidget::~ServerWidget()
{
    delete view;
    delete setupModel;
    delete fileModel;
}
