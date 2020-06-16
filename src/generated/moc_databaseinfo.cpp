/****************************************************************************
** Meta object code from reading C++ file 'databaseinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../database/databaseinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'databaseinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DatabaseInfo_t {
    QByteArrayData data[15];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DatabaseInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DatabaseInfo_t qt_meta_stringdata_DatabaseInfo = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DatabaseInfo"
QT_MOC_LITERAL(1, 13, 12), // "LoadFinished"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "DatabaseInfo*"
QT_MOC_LITERAL(4, 41, 18), // "signalRestoreState"
QT_MOC_LITERAL(5, 60, 4), // "Game"
QT_MOC_LITERAL(6, 65, 4), // "game"
QT_MOC_LITERAL(7, 70, 18), // "signalGameModified"
QT_MOC_LITERAL(8, 89, 15), // "gameNeedsSaving"
QT_MOC_LITERAL(9, 105, 17), // "signalMoveChanged"
QT_MOC_LITERAL(10, 123, 14), // "dbCleanChanged"
QT_MOC_LITERAL(11, 138, 11), // "setModified"
QT_MOC_LITERAL(12, 150, 8), // "modified"
QT_MOC_LITERAL(13, 159, 1), // "g"
QT_MOC_LITERAL(14, 161, 6) // "action"

    },
    "DatabaseInfo\0LoadFinished\0\0DatabaseInfo*\0"
    "signalRestoreState\0Game\0game\0"
    "signalGameModified\0gameNeedsSaving\0"
    "signalMoveChanged\0dbCleanChanged\0"
    "setModified\0modified\0g\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatabaseInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,
       9,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   54,    2, 0x0a /* Public */,
      11,    3,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 5, QMetaType::QString,   12,   13,   14,

       0        // eod
};

void DatabaseInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DatabaseInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LoadFinished((*reinterpret_cast< DatabaseInfo*(*)>(_a[1]))); break;
        case 1: _t->signalRestoreState((*reinterpret_cast< const Game(*)>(_a[1]))); break;
        case 2: _t->signalGameModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->signalMoveChanged(); break;
        case 4: _t->dbCleanChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setModified((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const Game(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DatabaseInfo* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DatabaseInfo::*)(DatabaseInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseInfo::LoadFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DatabaseInfo::*)(const Game & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseInfo::signalRestoreState)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DatabaseInfo::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseInfo::signalGameModified)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DatabaseInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseInfo::signalMoveChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DatabaseInfo::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_DatabaseInfo.data,
    qt_meta_data_DatabaseInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DatabaseInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DatabaseInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DatabaseInfo.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int DatabaseInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DatabaseInfo::LoadFinished(DatabaseInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DatabaseInfo::signalRestoreState(const Game & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DatabaseInfo::signalGameModified(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DatabaseInfo::signalMoveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
