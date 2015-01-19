#include "test.h"
#include <QMetaType>
#include <QDBusArgument>
#include <QDBusMetaType>
Test::Test() : a(0), b(0){}

Test::Test(int a, int b) : a(a), b(b) {}

Test::Test(const Test &other) { a = other.a; b = other.b; }

Test::~Test() {}

int Test::getA() const {return a;}

int Test::getB() const {return b;}

QDBusArgument &operator<<(QDBusArgument &argument, const Test test) {
    argument.beginStructure();
    argument << test.getA() << test.getB();
    argument.endStructure();
    return argument;
}
const QDBusArgument &operator>>(const QDBusArgument &argument, Test test) {
    argument.beginStructure();
    argument >> test.a >> test.b;
    argument.endStructure();
    return argument;
}
