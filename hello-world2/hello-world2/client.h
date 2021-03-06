#ifndef CLIENT_H
#define CLIENT_H

#include <QWidget>
#include "valueproviderproxy.h"

namespace Ui {
class Client;
}

class Client : public QWidget
{
    Q_OBJECT
    
public:
    explicit Client(QWidget *parent = 0);
    ~Client();

public slots:
    void sendToServer();
    
private:
    Ui::Client* ui;
    ValueProviderProxy* serverProxy;
};

#endif // CLIENT_H
