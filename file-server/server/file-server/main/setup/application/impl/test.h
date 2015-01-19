#ifndef TEST_H
#define TEST_H

#include <QMetaType>
#include <QtDBus/QDBusArgument>

struct Test {
public:
    Test();
    Test(int a, int b);
    Test(const Test &other);
    ~Test();

    int getA() const;
    int getB() const ;
    void setA(int a);
    void setB(int b);

    friend QDBusArgument &operator<<(QDBusArgument &argument, const Test test);
    friend const QDBusArgument &operator>>(const QDBusArgument &argument, Test test);

    static void registerMetaType();

private:
    int a;
    int b;
};

Q_DECLARE_METATYPE(Test)

#endif // TEST_H
