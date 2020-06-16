/****************************************************************************
** Meta object code from reading C++ file 'digitalclock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gui/digitalclock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'digitalclock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DigitalClock_t {
    QByteArrayData data[10];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DigitalClock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DigitalClock_t qt_meta_stringdata_DigitalClock = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DigitalClock"
QT_MOC_LITERAL(1, 13, 14), // "StartCountDown"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "start"
QT_MOC_LITERAL(4, 35, 13), // "StopCountDown"
QT_MOC_LITERAL(5, 49, 4), // "stop"
QT_MOC_LITERAL(6, 54, 9), // "ResetTock"
QT_MOC_LITERAL(7, 64, 7), // "useTock"
QT_MOC_LITERAL(8, 72, 9), // "countDown"
QT_MOC_LITERAL(9, 82, 10) // "updateTime"

    },
    "DigitalClock\0StartCountDown\0\0start\0"
    "StopCountDown\0stop\0ResetTock\0useTock\0"
    "countDown\0updateTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DigitalClock[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       1,    0,   47,    2, 0x2a /* Public | MethodCloned */,
       4,    1,   48,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x2a /* Public | MethodCloned */,
       6,    2,   52,    2, 0x0a /* Public */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    7,    8,
    QMetaType::Void,

       0        // eod
};

void DigitalClock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DigitalClock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StartCountDown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->StartCountDown(); break;
        case 2: _t->StopCountDown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->StopCountDown(); break;
        case 4: _t->ResetTock((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->updateTime(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DigitalClock::staticMetaObject = { {
    &QLCDNumber::staticMetaObject,
    qt_meta_stringdata_DigitalClock.data,
    qt_meta_data_DigitalClock,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DigitalClock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DigitalClock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DigitalClock.stringdata0))
        return static_cast<void*>(this);
    return QLCDNumber::qt_metacast(_clname);
}

int DigitalClock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLCDNumber::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
