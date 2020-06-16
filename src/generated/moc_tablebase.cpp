/****************************************************************************
** Meta object code from reading C++ file 'tablebase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../database/tablebase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tablebase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tablebase_t {
    QByteArrayData data[9];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tablebase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tablebase_t qt_meta_stringdata_Tablebase = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Tablebase"
QT_MOC_LITERAL(1, 10, 8), // "bestMove"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 4), // "Move"
QT_MOC_LITERAL(4, 25, 4), // "move"
QT_MOC_LITERAL(5, 30, 5), // "score"
QT_MOC_LITERAL(6, 36, 11), // "getBestMove"
QT_MOC_LITERAL(7, 48, 3), // "fen"
QT_MOC_LITERAL(8, 52, 11) // "abortLookup"

    },
    "Tablebase\0bestMove\0\0Move\0move\0score\0"
    "getBestMove\0fen\0abortLookup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tablebase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   34,    2, 0x0a /* Public */,
       8,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void Tablebase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Tablebase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bestMove((*reinterpret_cast< Move(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->getBestMove((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->abortLookup(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Tablebase::*)(Move , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tablebase::bestMove)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Tablebase::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Tablebase.data,
    qt_meta_data_Tablebase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Tablebase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tablebase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tablebase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Tablebase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Tablebase::bestMove(Move _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_OnlineTablebase_t {
    QByteArrayData data[13];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OnlineTablebase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OnlineTablebase_t qt_meta_stringdata_OnlineTablebase = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OnlineTablebase"
QT_MOC_LITERAL(1, 16, 8), // "bestMove"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "QList<Move>"
QT_MOC_LITERAL(4, 38, 9), // "bestMoves"
QT_MOC_LITERAL(5, 48, 5), // "score"
QT_MOC_LITERAL(6, 54, 11), // "getBestMove"
QT_MOC_LITERAL(7, 66, 3), // "fen"
QT_MOC_LITERAL(8, 70, 11), // "abortLookup"
QT_MOC_LITERAL(9, 82, 8), // "httpDone"
QT_MOC_LITERAL(10, 91, 14), // "QNetworkReply*"
QT_MOC_LITERAL(11, 106, 5), // "reply"
QT_MOC_LITERAL(12, 112, 6) // "sendIt"

    },
    "OnlineTablebase\0bestMove\0\0QList<Move>\0"
    "bestMoves\0score\0getBestMove\0fen\0"
    "abortLookup\0httpDone\0QNetworkReply*\0"
    "reply\0sendIt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OnlineTablebase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   44,    2, 0x0a /* Public */,
       8,    0,   47,    2, 0x0a /* Public */,
       9,    1,   48,    2, 0x08 /* Private */,
      12,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void OnlineTablebase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OnlineTablebase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bestMove((*reinterpret_cast< QList<Move>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->getBestMove((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->abortLookup(); break;
        case 3: _t->httpDone((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->sendIt(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OnlineTablebase::*)(QList<Move> , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OnlineTablebase::bestMove)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OnlineTablebase::staticMetaObject = { {
    &Tablebase::staticMetaObject,
    qt_meta_stringdata_OnlineTablebase.data,
    qt_meta_data_OnlineTablebase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OnlineTablebase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OnlineTablebase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OnlineTablebase.stringdata0))
        return static_cast<void*>(this);
    return Tablebase::qt_metacast(_clname);
}

int OnlineTablebase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Tablebase::qt_metacall(_c, _id, _a);
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
void OnlineTablebase::bestMove(QList<Move> _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
