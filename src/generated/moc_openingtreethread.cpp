/****************************************************************************
** Meta object code from reading C++ file 'openingtreethread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../database/openingtreethread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openingtreethread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpeningTreeThread_t {
    QByteArrayData data[11];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpeningTreeThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpeningTreeThread_t qt_meta_stringdata_OpeningTreeThread = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OpeningTreeThread"
QT_MOC_LITERAL(1, 18, 23), // "requestGameFilterUpdate"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "index"
QT_MOC_LITERAL(4, 49, 5), // "value"
QT_MOC_LITERAL(5, 55, 10), // "MoveUpdate"
QT_MOC_LITERAL(6, 66, 6), // "Board*"
QT_MOC_LITERAL(7, 73, 15), // "QList<MoveData>"
QT_MOC_LITERAL(8, 89, 14), // "UpdateFinished"
QT_MOC_LITERAL(9, 104, 16), // "UpdateTerminated"
QT_MOC_LITERAL(10, 121, 8) // "progress"

    },
    "OpeningTreeThread\0requestGameFilterUpdate\0"
    "\0index\0value\0MoveUpdate\0Board*\0"
    "QList<MoveData>\0UpdateFinished\0"
    "UpdateTerminated\0progress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpeningTreeThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    2,   44,    2, 0x06 /* Public */,
       8,    1,   49,    2, 0x06 /* Public */,
       9,    1,   52,    2, 0x06 /* Public */,
      10,    1,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 7,    2,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void OpeningTreeThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpeningTreeThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestGameFilterUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->MoveUpdate((*reinterpret_cast< Board*(*)>(_a[1])),(*reinterpret_cast< QList<MoveData>(*)>(_a[2]))); break;
        case 2: _t->UpdateFinished((*reinterpret_cast< Board*(*)>(_a[1]))); break;
        case 3: _t->UpdateTerminated((*reinterpret_cast< Board*(*)>(_a[1]))); break;
        case 4: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OpeningTreeThread::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpeningTreeThread::requestGameFilterUpdate)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OpeningTreeThread::*)(Board * , QList<MoveData> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpeningTreeThread::MoveUpdate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OpeningTreeThread::*)(Board * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpeningTreeThread::UpdateFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OpeningTreeThread::*)(Board * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpeningTreeThread::UpdateTerminated)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OpeningTreeThread::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpeningTreeThread::progress)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpeningTreeThread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_OpeningTreeThread.data,
    qt_meta_data_OpeningTreeThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpeningTreeThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpeningTreeThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpeningTreeThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int OpeningTreeThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OpeningTreeThread::requestGameFilterUpdate(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpeningTreeThread::MoveUpdate(Board * _t1, QList<MoveData> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OpeningTreeThread::UpdateFinished(Board * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OpeningTreeThread::UpdateTerminated(Board * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OpeningTreeThread::progress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
