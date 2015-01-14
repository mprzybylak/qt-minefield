#ifndef SERVERWIDGET_H
#define SERVERWIDGET_H

#include <QWidget>
#include "../setup/application/api/SetupService.h"

namespace Ui {
class ServerWidget;
}

class ServerWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit ServerWidget(SetupService* setupService, QWidget* parent = 0);
    ~ServerWidget();
    
private:
    Ui::ServerWidget *ui;
    SetupService* setupService;
};

#endif // SERVERWIDGET_H
