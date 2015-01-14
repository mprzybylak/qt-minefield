#include "valueprovider.h"
#include "valueprovideradapter.h"

ValueProvider::ValueProvider(QObject *parent) :
    QObject(parent)
{
    new ValueProviderAdapter(this);
    QDBusConnection dbus = QDBusConnection::sessionBus();
    dbus.registerObject("/Server", this);
    dbus.registerService("pl.mprzybylak.Server");
}

int ValueProvider::getValue() {
    qDebug() << "Connection from client";
    return value;
}

void ValueProvider::changeValue(QString value) {

    qDebug() << "Signal = " << value;

    bool isInteger;
    int intValue = value.toInt(&isInteger);

    if(isInteger) {
        this->value = intValue;
    }

}
