/****************************************************************************
** Meta object code from reading C++ file 'databaselist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gui/databaselist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'databaselist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DatabaseList_t {
    QByteArrayData data[49];
    char stringdata0[619];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DatabaseList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DatabaseList_t qt_meta_stringdata_DatabaseList = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DatabaseList"
QT_MOC_LITERAL(1, 13, 8), // "selected"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "raiseRequest"
QT_MOC_LITERAL(4, 36, 19), // "requestOpenDatabase"
QT_MOC_LITERAL(5, 56, 1), // "s"
QT_MOC_LITERAL(6, 58, 4), // "utf8"
QT_MOC_LITERAL(7, 63, 20), // "requestCloseDatabase"
QT_MOC_LITERAL(8, 84, 19), // "requestLinkDatabase"
QT_MOC_LITERAL(9, 104, 18), // "requestAppendGames"
QT_MOC_LITERAL(10, 123, 4), // "path"
QT_MOC_LITERAL(11, 128, 13), // "QList<GameId>"
QT_MOC_LITERAL(12, 142, 7), // "indexes"
QT_MOC_LITERAL(13, 150, 6), // "source"
QT_MOC_LITERAL(14, 157, 21), // "requestAppendDatabase"
QT_MOC_LITERAL(15, 179, 4), // "dest"
QT_MOC_LITERAL(16, 184, 3), // "src"
QT_MOC_LITERAL(17, 188, 15), // "requestMakeBook"
QT_MOC_LITERAL(18, 204, 11), // "addFileOpen"
QT_MOC_LITERAL(19, 216, 15), // "setFileFavorite"
QT_MOC_LITERAL(20, 232, 9), // "bFavorite"
QT_MOC_LITERAL(21, 242, 5), // "index"
QT_MOC_LITERAL(22, 248, 8), // "setStars"
QT_MOC_LITERAL(23, 257, 5), // "stars"
QT_MOC_LITERAL(24, 263, 11), // "setFileUtf8"
QT_MOC_LITERAL(25, 275, 12), // "setFileClose"
QT_MOC_LITERAL(26, 288, 6), // "GameId"
QT_MOC_LITERAL(27, 295, 9), // "lastIndex"
QT_MOC_LITERAL(28, 305, 14), // "setFileCurrent"
QT_MOC_LITERAL(29, 320, 6), // "update"
QT_MOC_LITERAL(30, 327, 23), // "slotCurrentIndexChanged"
QT_MOC_LITERAL(31, 351, 11), // "QModelIndex"
QT_MOC_LITERAL(32, 363, 17), // "slotDoubleClicked"
QT_MOC_LITERAL(33, 381, 12), // "itemSelected"
QT_MOC_LITERAL(34, 394, 15), // "slotContextMenu"
QT_MOC_LITERAL(35, 410, 3), // "pos"
QT_MOC_LITERAL(36, 414, 17), // "dbAddToFavorites2"
QT_MOC_LITERAL(37, 432, 17), // "dbAddToFavorites3"
QT_MOC_LITERAL(38, 450, 20), // "dbAddToOpenAtStartup"
QT_MOC_LITERAL(39, 471, 20), // "dbSetActiveAtStartup"
QT_MOC_LITERAL(40, 492, 10), // "dbKeepFile"
QT_MOC_LITERAL(41, 503, 21), // "dbRemoveFromFavorites"
QT_MOC_LITERAL(42, 525, 16), // "slotShowInFinder"
QT_MOC_LITERAL(43, 542, 12), // "slotMakeBook"
QT_MOC_LITERAL(44, 555, 12), // "slotExtTool1"
QT_MOC_LITERAL(45, 568, 6), // "dbOpen"
QT_MOC_LITERAL(46, 575, 12), // "dbToggleUTF8"
QT_MOC_LITERAL(47, 588, 7), // "dbClose"
QT_MOC_LITERAL(48, 596, 22) // "dbSetStarsForSelection"

    },
    "DatabaseList\0selected\0\0raiseRequest\0"
    "requestOpenDatabase\0s\0utf8\0"
    "requestCloseDatabase\0requestLinkDatabase\0"
    "requestAppendGames\0path\0QList<GameId>\0"
    "indexes\0source\0requestAppendDatabase\0"
    "dest\0src\0requestMakeBook\0addFileOpen\0"
    "setFileFavorite\0bFavorite\0index\0"
    "setStars\0stars\0setFileUtf8\0setFileClose\0"
    "GameId\0lastIndex\0setFileCurrent\0update\0"
    "slotCurrentIndexChanged\0QModelIndex\0"
    "slotDoubleClicked\0itemSelected\0"
    "slotContextMenu\0pos\0dbAddToFavorites2\0"
    "dbAddToFavorites3\0dbAddToOpenAtStartup\0"
    "dbSetActiveAtStartup\0dbKeepFile\0"
    "dbRemoveFromFavorites\0slotShowInFinder\0"
    "slotMakeBook\0slotExtTool1\0dbOpen\0"
    "dbToggleUTF8\0dbClose\0dbSetStarsForSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatabaseList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  174,    2, 0x06 /* Public */,
       3,    0,  177,    2, 0x06 /* Public */,
       4,    2,  178,    2, 0x06 /* Public */,
       7,    1,  183,    2, 0x06 /* Public */,
       8,    1,  186,    2, 0x06 /* Public */,
       9,    3,  189,    2, 0x06 /* Public */,
      14,    2,  196,    2, 0x06 /* Public */,
      17,    1,  201,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    2,  204,    2, 0x0a /* Public */,
      19,    3,  209,    2, 0x0a /* Public */,
      22,    2,  216,    2, 0x0a /* Public */,
      24,    2,  221,    2, 0x0a /* Public */,
      25,    2,  226,    2, 0x0a /* Public */,
      28,    1,  231,    2, 0x0a /* Public */,
      29,    1,  234,    2, 0x0a /* Public */,
      30,    1,  237,    2, 0x0a /* Public */,
      32,    1,  240,    2, 0x0a /* Public */,
      33,    1,  243,    2, 0x08 /* Private */,
      34,    1,  246,    2, 0x08 /* Private */,
      36,    0,  249,    2, 0x08 /* Private */,
      37,    0,  250,    2, 0x08 /* Private */,
      38,    0,  251,    2, 0x08 /* Private */,
      39,    0,  252,    2, 0x08 /* Private */,
      40,    0,  253,    2, 0x08 /* Private */,
      41,    0,  254,    2, 0x08 /* Private */,
      42,    0,  255,    2, 0x08 /* Private */,
      43,    0,  256,    2, 0x08 /* Private */,
      44,    0,  257,    2, 0x08 /* Private */,
      45,    0,  258,    2, 0x08 /* Private */,
      46,    0,  259,    2, 0x08 /* Private */,
      47,    0,  260,    2, 0x08 /* Private */,
      48,    1,  261,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    5,    6,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11, QMetaType::QString,   10,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   15,   16,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Int,    5,   20,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,    5,   27,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 31,    2,
    QMetaType::Void, 0x80000000 | 31,    2,
    QMetaType::Void, 0x80000000 | 31,   21,
    QMetaType::Void, QMetaType::QPoint,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   23,

       0        // eod
};

void DatabaseList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DatabaseList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->raiseRequest(); break;
        case 2: _t->requestOpenDatabase((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->requestCloseDatabase((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->requestLinkDatabase((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->requestAppendGames((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QList<GameId>(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->requestAppendDatabase((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->requestMakeBook((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->addFileOpen((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->setFileFavorite((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->setStars((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->setFileUtf8((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->setFileClose((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< GameId(*)>(_a[2]))); break;
        case 13: _t->setFileCurrent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->update((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->slotCurrentIndexChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 16: _t->slotDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 17: _t->itemSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 18: _t->slotContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 19: _t->dbAddToFavorites2(); break;
        case 20: _t->dbAddToFavorites3(); break;
        case 21: _t->dbAddToOpenAtStartup(); break;
        case 22: _t->dbSetActiveAtStartup(); break;
        case 23: _t->dbKeepFile(); break;
        case 24: _t->dbRemoveFromFavorites(); break;
        case 25: _t->slotShowInFinder(); break;
        case 26: _t->slotMakeBook(); break;
        case 27: _t->slotExtTool1(); break;
        case 28: _t->dbOpen(); break;
        case 29: _t->dbToggleUTF8(); break;
        case 30: _t->dbClose(); break;
        case 31: _t->dbSetStarsForSelection((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DatabaseList::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseList::selected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DatabaseList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseList::raiseRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DatabaseList::*)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseList::requestOpenDatabase)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DatabaseList::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseList::requestCloseDatabase)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DatabaseList::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseList::requestLinkDatabase)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DatabaseList::*)(QString , QList<GameId> , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseList::requestAppendGames)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DatabaseList::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseList::requestAppendDatabase)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DatabaseList::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatabaseList::requestMakeBook)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DatabaseList::staticMetaObject = { {
    &TableView::staticMetaObject,
    qt_meta_stringdata_DatabaseList.data,
    qt_meta_data_DatabaseList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DatabaseList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DatabaseList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DatabaseList.stringdata0))
        return static_cast<void*>(this);
    return TableView::qt_metacast(_clname);
}

int DatabaseList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void DatabaseList::selected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DatabaseList::raiseRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DatabaseList::requestOpenDatabase(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DatabaseList::requestCloseDatabase(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DatabaseList::requestLinkDatabase(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DatabaseList::requestAppendGames(QString _t1, QList<GameId> _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DatabaseList::requestAppendDatabase(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DatabaseList::requestMakeBook(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
