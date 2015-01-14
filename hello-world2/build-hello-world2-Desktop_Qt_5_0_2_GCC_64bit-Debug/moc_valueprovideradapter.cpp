/****************************************************************************
** Meta object code from reading C++ file 'valueprovideradapter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hello-world2/valueprovideradapter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'valueprovideradapter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ValueProviderAdapter_t {
    QByteArrayData data[7];
    char stringdata[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ValueProviderAdapter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ValueProviderAdapter_t qt_meta_stringdata_ValueProviderAdapter = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 15),
QT_MOC_LITERAL(2, 37, 19),
QT_MOC_LITERAL(3, 57, 19),
QT_MOC_LITERAL(4, 77, 150),
QT_MOC_LITERAL(5, 215, 8),
QT_MOC_LITERAL(6, 224, 0)
    },
    "ValueProviderAdapter\0D-Bus Interface\0"
    "local.ValueProvider\0D-Bus Introspection\0"
    "  <interface name=\"local.ValueProvider\">\n    <method name=\"getValu"
    "e\">\n      <arg direction=\"out\" type=\"i\"/>\n    </method>\n  </in"
    "terface>\n\0"
    "getValue\0\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ValueProviderAdapter[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       1,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // slots: name, argc, parameters, tag, flags
       5,    0,   23,    6, 0x0a,

 // slots: parameters
    QMetaType::Int,

       0        // eod
};

void ValueProviderAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ValueProviderAdapter *_t = static_cast<ValueProviderAdapter *>(_o);
        switch (_id) {
        case 0: { int _r = _t->getValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ValueProviderAdapter::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_ValueProviderAdapter.data,
      qt_meta_data_ValueProviderAdapter,  qt_static_metacall, 0, 0}
};


const QMetaObject *ValueProviderAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ValueProviderAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ValueProviderAdapter.stringdata))
        return static_cast<void*>(const_cast< ValueProviderAdapter*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int ValueProviderAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
