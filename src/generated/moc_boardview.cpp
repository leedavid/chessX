/****************************************************************************
** Meta object code from reading C++ file 'boardview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gui/boardview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boardview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BoardView_t {
    QByteArrayData data[38];
    char stringdata0[323];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoardView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoardView_t qt_meta_stringdata_BoardView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "BoardView"
QT_MOC_LITERAL(1, 10, 8), // "moveMade"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 6), // "Square"
QT_MOC_LITERAL(4, 27, 4), // "from"
QT_MOC_LITERAL(5, 32, 2), // "to"
QT_MOC_LITERAL(6, 35, 6), // "button"
QT_MOC_LITERAL(7, 42, 11), // "evalRequest"
QT_MOC_LITERAL(8, 54, 8), // "evalMove"
QT_MOC_LITERAL(9, 63, 12), // "evalModeDone"
QT_MOC_LITERAL(10, 76, 9), // "copyPiece"
QT_MOC_LITERAL(11, 86, 11), // "invalidMove"
QT_MOC_LITERAL(12, 98, 7), // "clicked"
QT_MOC_LITERAL(13, 106, 6), // "square"
QT_MOC_LITERAL(14, 113, 3), // "pos"
QT_MOC_LITERAL(15, 117, 13), // "wheelScrolled"
QT_MOC_LITERAL(16, 131, 3), // "dir"
QT_MOC_LITERAL(17, 135, 12), // "pieceDropped"
QT_MOC_LITERAL(18, 148, 5), // "Piece"
QT_MOC_LITERAL(19, 154, 1), // "p"
QT_MOC_LITERAL(20, 156, 10), // "actionHint"
QT_MOC_LITERAL(21, 167, 13), // "signalFlipped"
QT_MOC_LITERAL(22, 181, 8), // "oldState"
QT_MOC_LITERAL(23, 190, 8), // "newState"
QT_MOC_LITERAL(24, 199, 10), // "setFlipped"
QT_MOC_LITERAL(25, 210, 7), // "flipped"
QT_MOC_LITERAL(26, 218, 4), // "flip"
QT_MOC_LITERAL(27, 223, 9), // "configure"
QT_MOC_LITERAL(28, 233, 10), // "setEnabled"
QT_MOC_LITERAL(29, 244, 7), // "enabled"
QT_MOC_LITERAL(30, 252, 11), // "setDisabled"
QT_MOC_LITERAL(31, 264, 8), // "disabled"
QT_MOC_LITERAL(32, 273, 13), // "setStoredMove"
QT_MOC_LITERAL(33, 287, 10), // "showThreat"
QT_MOC_LITERAL(34, 298, 13), // "Guess::Result"
QT_MOC_LITERAL(35, 312, 2), // "sm"
QT_MOC_LITERAL(36, 315, 5), // "Board"
QT_MOC_LITERAL(37, 321, 1) // "b"

    },
    "BoardView\0moveMade\0\0Square\0from\0to\0"
    "button\0evalRequest\0evalMove\0evalModeDone\0"
    "copyPiece\0invalidMove\0clicked\0square\0"
    "pos\0wheelScrolled\0dir\0pieceDropped\0"
    "Piece\0p\0actionHint\0signalFlipped\0"
    "oldState\0newState\0setFlipped\0flipped\0"
    "flip\0configure\0setEnabled\0enabled\0"
    "setDisabled\0disabled\0setStoredMove\0"
    "showThreat\0Guess::Result\0sm\0Board\0b"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoardView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  104,    2, 0x06 /* Public */,
       7,    2,  111,    2, 0x06 /* Public */,
       8,    2,  116,    2, 0x06 /* Public */,
       9,    0,  121,    2, 0x06 /* Public */,
      10,    2,  122,    2, 0x06 /* Public */,
      11,    1,  127,    2, 0x06 /* Public */,
      12,    4,  130,    2, 0x06 /* Public */,
      15,    1,  139,    2, 0x06 /* Public */,
      17,    2,  142,    2, 0x06 /* Public */,
      20,    1,  147,    2, 0x06 /* Public */,
      21,    2,  150,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    1,  155,    2, 0x0a /* Public */,
      26,    0,  158,    2, 0x0a /* Public */,
      27,    0,  159,    2, 0x0a /* Public */,
      28,    1,  160,    2, 0x0a /* Public */,
      30,    1,  163,    2, 0x0a /* Public */,
      32,    2,  166,    2, 0x0a /* Public */,
      33,    2,  171,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::QPoint, 0x80000000 | 3,   13,    6,   14,    4,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 18,    5,   19,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   22,   23,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 34, 0x80000000 | 36,   35,   37,

       0        // eod
};

void BoardView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BoardView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->moveMade((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< Square(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->evalRequest((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< Square(*)>(_a[2]))); break;
        case 2: _t->evalMove((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< Square(*)>(_a[2]))); break;
        case 3: _t->evalModeDone(); break;
        case 4: _t->copyPiece((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< Square(*)>(_a[2]))); break;
        case 5: _t->invalidMove((*reinterpret_cast< Square(*)>(_a[1]))); break;
        case 6: _t->clicked((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QPoint(*)>(_a[3])),(*reinterpret_cast< Square(*)>(_a[4]))); break;
        case 7: _t->wheelScrolled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->pieceDropped((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< Piece(*)>(_a[2]))); break;
        case 9: _t->actionHint((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->signalFlipped((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->setFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->flip(); break;
        case 13: _t->configure(); break;
        case 14: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setDisabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->setStoredMove((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< Square(*)>(_a[2]))); break;
        case 17: _t->showThreat((*reinterpret_cast< Guess::Result(*)>(_a[1])),(*reinterpret_cast< Board(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BoardView::*)(Square , Square , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoardView::moveMade)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BoardView::*)(Square , Square );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoardView::evalRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BoardView::*)(Square , Square );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoardView::evalMove)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BoardView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoardView::evalModeDone)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BoardView::*)(Square , Square );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoardView::copyPiece)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BoardView::*)(Square );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoardView::invalidMove)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (BoardView::*)(Square , int , QPoint , Square );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoardView::clicked)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (BoardView::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoardView::wheelScrolled)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (BoardView::*)(Square , Piece );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoardView::pieceDropped)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (BoardView::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoardView::actionHint)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (BoardView::*)(bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoardView::signalFlipped)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BoardView::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_BoardView.data,
    qt_meta_data_BoardView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BoardView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoardView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BoardView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BoardView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void BoardView::moveMade(Square _t1, Square _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BoardView::evalRequest(Square _t1, Square _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BoardView::evalMove(Square _t1, Square _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BoardView::evalModeDone()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void BoardView::copyPiece(Square _t1, Square _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void BoardView::invalidMove(Square _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void BoardView::clicked(Square _t1, int _t2, QPoint _t3, Square _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void BoardView::wheelScrolled(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void BoardView::pieceDropped(Square _t1, Piece _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void BoardView::actionHint(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void BoardView::signalFlipped(bool _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
struct qt_meta_stringdata_BoardViewMimeData_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoardViewMimeData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoardViewMimeData_t qt_meta_stringdata_BoardViewMimeData = {
    {
QT_MOC_LITERAL(0, 0, 17) // "BoardViewMimeData"

    },
    "BoardViewMimeData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoardViewMimeData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void BoardViewMimeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BoardViewMimeData::staticMetaObject = { {
    &QMimeData::staticMetaObject,
    qt_meta_stringdata_BoardViewMimeData.data,
    qt_meta_data_BoardViewMimeData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BoardViewMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoardViewMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BoardViewMimeData.stringdata0))
        return static_cast<void*>(this);
    return QMimeData::qt_metacast(_clname);
}

int BoardViewMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMimeData::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
