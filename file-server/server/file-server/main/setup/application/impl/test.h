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

    friend QDBusArgument &operator<<(QDBusArgument &argument, const Test test);
    friend const QDBusArgument &operator>>(const QDBusArgument &argument, Test test);

private:
    int a;
    int b;
};

typedef QList<Test> TestList;

Q_DECLARE_METATYPE(Test)
Q_DECLARE_METATYPE(TestList)

#endif // TEST_H
