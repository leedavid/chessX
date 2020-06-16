/****************************************************************************
** Meta object code from reading C++ file 'chessbrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gui/chessbrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chessbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChessBrowser_t {
    QByteArrayData data[30];
    char stringdata0[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChessBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChessBrowser_t qt_meta_stringdata_ChessBrowser = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ChessBrowser"
QT_MOC_LITERAL(1, 13, 15), // "actionRequested"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "EditAction"
QT_MOC_LITERAL(4, 41, 6), // "action"
QT_MOC_LITERAL(5, 48, 15), // "queryActiveGame"
QT_MOC_LITERAL(6, 64, 12), // "const Game**"
QT_MOC_LITERAL(7, 77, 4), // "game"
QT_MOC_LITERAL(8, 82, 15), // "signalMergeGame"
QT_MOC_LITERAL(9, 98, 6), // "GameId"
QT_MOC_LITERAL(10, 105, 9), // "gameIndex"
QT_MOC_LITERAL(11, 115, 6), // "source"
QT_MOC_LITERAL(12, 122, 10), // "saveConfig"
QT_MOC_LITERAL(13, 133, 15), // "slotReconfigure"
QT_MOC_LITERAL(14, 149, 8), // "showMove"
QT_MOC_LITERAL(15, 158, 2), // "id"
QT_MOC_LITERAL(16, 161, 10), // "slotAction"
QT_MOC_LITERAL(17, 172, 8), // "QAction*"
QT_MOC_LITERAL(18, 181, 15), // "slotContextMenu"
QT_MOC_LITERAL(19, 197, 3), // "pos"
QT_MOC_LITERAL(20, 201, 15), // "slotDisplayTime"
QT_MOC_LITERAL(21, 217, 4), // "text"
QT_MOC_LITERAL(22, 222, 5), // "Color"
QT_MOC_LITERAL(23, 228, 5), // "color"
QT_MOC_LITERAL(24, 234, 9), // "otherText"
QT_MOC_LITERAL(25, 244, 19), // "slotDisplayMaterial"
QT_MOC_LITERAL(26, 264, 13), // "QList<double>"
QT_MOC_LITERAL(27, 278, 8), // "material"
QT_MOC_LITERAL(28, 287, 14), // "slotDisplayPly"
QT_MOC_LITERAL(29, 302, 3) // "ply"

    },
    "ChessBrowser\0actionRequested\0\0EditAction\0"
    "action\0queryActiveGame\0const Game**\0"
    "game\0signalMergeGame\0GameId\0gameIndex\0"
    "source\0saveConfig\0slotReconfigure\0"
    "showMove\0id\0slotAction\0QAction*\0"
    "slotContextMenu\0pos\0slotDisplayTime\0"
    "text\0Color\0color\0otherText\0"
    "slotDisplayMaterial\0QList<double>\0"
    "material\0slotDisplayPly\0ply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChessBrowser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       8,    2,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   80,    2, 0x0a /* Public */,
      13,    0,   81,    2, 0x0a /* Public */,
      14,    1,   82,    2, 0x0a /* Public */,
      16,    1,   85,    2, 0x0a /* Public */,
      18,    1,   88,    2, 0x0a /* Public */,
      20,    3,   91,    2, 0x0a /* Public */,
      25,    1,   98,    2, 0x0a /* Public */,
      28,    1,  101,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   10,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, 0x80000000 | 17,    4,
    QMetaType::Void, QMetaType::QPoint,   19,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 22, QMetaType::QString,   21,   23,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::Int,   29,

       0        // eod
};

void ChessBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChessBrowser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionRequested((*reinterpret_cast< const EditAction(*)>(_a[1]))); break;
        case 1: _t->queryActiveGame((*reinterpret_cast< const Game**(*)>(_a[1]))); break;
        case 2: _t->signalMergeGame((*reinterpret_cast< GameId(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->saveConfig(); break;
        case 4: _t->slotReconfigure(); break;
        case 5: _t->showMove((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: _t->slotContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 8: _t->slotDisplayTime((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Color(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 9: _t->slotDisplayMaterial((*reinterpret_cast< const QList<double>(*)>(_a[1]))); break;
        case 10: _t->slotDisplayPly((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChessBrowser::*)(const EditAction & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChessBrowser::actionRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChessBrowser::*)(const Game * * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChessBrowser::queryActiveGame)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChessBrowser::*)(GameId , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChessBrowser::signalMergeGame)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChessBrowser::staticMetaObject = { {
    &QTextBrowser::staticMetaObject,
    qt_meta_stringdata_ChessBrowser.data,
    qt_meta_data_ChessBrowser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChessBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChessBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChessBrowser.stringdata0))
        return static_cast<void*>(this);
    return QTextBrowser::qt_metacast(_clname);
}

int ChessBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ChessBrowser::actionRequested(const EditAction & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChessBrowser::queryActiveGame(const Game * * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChessBrowser::signalMergeGame(GameId _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
