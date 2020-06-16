/****************************************************************************
** Meta object code from reading C++ file 'openingtree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../database/openingtree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openingtree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpeningTree_t {
    QByteArrayData data[14];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpeningTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpeningTree_t qt_meta_stringdata_OpeningTree = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OpeningTree"
QT_MOC_LITERAL(1, 12, 8), // "progress"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 23), // "requestGameFilterUpdate"
QT_MOC_LITERAL(4, 46, 18), // "openingTreeUpdated"
QT_MOC_LITERAL(5, 65, 24), // "openingTreeUpdateStarted"
QT_MOC_LITERAL(6, 90, 6), // "cancel"
QT_MOC_LITERAL(7, 97, 14), // "updateFinished"
QT_MOC_LITERAL(8, 112, 6), // "Board*"
QT_MOC_LITERAL(9, 119, 16), // "updateTerminated"
QT_MOC_LITERAL(10, 136, 11), // "moveUpdated"
QT_MOC_LITERAL(11, 148, 1), // "b"
QT_MOC_LITERAL(12, 150, 15), // "QList<MoveData>"
QT_MOC_LITERAL(13, 166, 8) // "moveList"

    },
    "OpeningTree\0progress\0\0requestGameFilterUpdate\0"
    "openingTreeUpdated\0openingTreeUpdateStarted\0"
    "cancel\0updateFinished\0Board*\0"
    "updateTerminated\0moveUpdated\0b\0"
    "QList<MoveData>\0moveList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpeningTree[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    2,   57,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,
       5,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   64,    2, 0x0a /* Public */,
       7,    1,   65,    2, 0x09 /* Protected */,
       9,    1,   68,    2, 0x09 /* Protected */,
      10,    2,   71,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 12,   11,   13,

       0        // eod
};

void OpeningTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpeningTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->requestGameFilterUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->openingTreeUpdated(); break;
        case 3: _t->openingTreeUpdateStarted(); break;
        case 4: _t->cancel(); break;
        case 5: _t->updateFinished((*reinterpret_cast< Board*(*)>(_a[1]))); break;
        case 6: _t->updateTerminated((*reinterpret_cast< Board*(*)>(_a[1]))); break;
        case 7: _t->moveUpdated((*reinterpret_cast< Board*(*)>(_a[1])),(*reinterpret_cast< QList<MoveData>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OpeningTree::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpeningTree::progress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OpeningTree::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpeningTree::requestGameFilterUpdate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OpeningTree::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpeningTree::openingTreeUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OpeningTree::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpeningTree::openingTreeUpdateStarted)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpeningTree::staticMetaObject = { {
    &QAbstractTableModel::staticMetaObject,
    qt_meta_stringdata_OpeningTree.data,
    qt_meta_data_OpeningTree,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpeningTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpeningTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpeningTree.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int OpeningTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void OpeningTree::progress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpeningTree::requestGameFilterUpdate(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OpeningTree::openingTreeUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OpeningTree::openingTreeUpdateStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
