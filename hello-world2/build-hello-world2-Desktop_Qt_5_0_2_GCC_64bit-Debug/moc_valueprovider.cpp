/****************************************************************************
** Meta object code from reading C++ file 'valueprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hello-world2/valueprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'valueprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ValueProvider_t {
    QByteArrayData data[7];
    char stringdata[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ValueProvider_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ValueProvider_t qt_meta_stringdata_ValueProvider = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 30),
QT_MOC_LITERAL(2, 45, 20),
QT_MOC_LITERAL(3, 66, 8),
QT_MOC_LITERAL(4, 75, 0),
QT_MOC_LITERAL(5, 76, 11),
QT_MOC_LITERAL(6, 88, 5)
    },
    "ValueProvider\0D-Bus value provider interface\0"
    "pl.mprzybylak.Server\0getValue\0\0"
    "changeValue\0value\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ValueProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       2,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    0,   26,    4, 0x0a,
       5,    1,   27,    4, 0x08,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void ValueProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ValueProvider *_t = static_cast<ValueProvider *>(_o);
        switch (_id) {
        case 0: { int _r = _t->getValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->changeValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ValueProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ValueProvider.data,
      qt_meta_data_ValueProvider,  qt_static_metacall, 0, 0}
};


const QMetaObject *ValueProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ValueProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ValueProvider.stringdata))
        return static_cast<void*>(const_cast< ValueProvider*>(this));
    return QObject::qt_metacast(_clname);
}

int ValueProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
