#ifndef SERVERWIDGET_H
#define SERVERWIDGET_H

#include <QWidget>
#include <QFileSystemModel>
#include "../setup/application/api/SetupService.h"

namespace Ui {
class ServerWidget;
}

class ServerWidget : public QWidget
{
    Q_OBJECT
    
public:

    explicit ServerWidget(SetupService* setupModel, QFileSystemModel* fileModel, QWidget* parent = 0);
    ~ServerWidget();

private slots:
    void startStopServer();
    void selectDirectory();
    
private:
    Ui::ServerWidget *view;
    SetupService* setupModel;
    QFileSystemModel* fileModel;
};

#endif // SERVERWIDGET_H
