#ifndef VALUEPROVIDER_H
#define VALUEPROVIDER_H

#include <QObject>

class ValueProvider : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus value provider interface", "pl.mprzybylak.Server")

public:

    explicit ValueProvider(QObject *parent = 0);
    
public slots:

    int getValue();

private slots:

    void changeValue(QString value);
    
private:

    int value;

};

#endif // VALUEPROVIDER_H
