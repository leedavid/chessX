/****************************************************************************
** Meta object code from reading C++ file 'boardsetuptoolbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gui/boardsetuptoolbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boardsetuptoolbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BoardSetupToolButton_t {
    QByteArrayData data[10];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoardSetupToolButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoardSetupToolButton_t qt_meta_stringdata_BoardSetupToolButton = {
    {
QT_MOC_LITERAL(0, 0, 20), // "BoardSetupToolButton"
QT_MOC_LITERAL(1, 21, 17), // "signalDragStarted"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8), // "QWidget*"
QT_MOC_LITERAL(4, 49, 12), // "QMouseEvent*"
QT_MOC_LITERAL(5, 62, 13), // "signalClicked"
QT_MOC_LITERAL(6, 76, 5), // "Piece"
QT_MOC_LITERAL(7, 82, 1), // "p"
QT_MOC_LITERAL(8, 84, 19), // "slotClearBackground"
QT_MOC_LITERAL(9, 104, 15) // "slotSetSelected"

    },
    "BoardSetupToolButton\0signalDragStarted\0"
    "\0QWidget*\0QMouseEvent*\0signalClicked\0"
    "Piece\0p\0slotClearBackground\0slotSetSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoardSetupToolButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       5,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   42,    2, 0x0a /* Public */,
       9,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void BoardSetupToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BoardSetupToolButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalDragStarted((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 1: _t->signalClicked((*reinterpret_cast< Piece(*)>(_a[1]))); break;
        case 2: _t->slotClearBackground((*reinterpret_cast< Piece(*)>(_a[1]))); break;
        case 3: _t->slotSetSelected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BoardSetupToolButton::*)(QWidget * , QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoardSetupToolButton::signalDragStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BoardSetupToolButton::*)(Piece );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoardSetupToolButton::signalClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BoardSetupToolButton::staticMetaObject = { {
    &QLabel::staticMetaObject,
    qt_meta_stringdata_BoardSetupToolButton.data,
    qt_meta_data_BoardSetupToolButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BoardSetupToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoardSetupToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BoardSetupToolButton.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int BoardSetupToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void BoardSetupToolButton::signalDragStarted(QWidget * _t1, QMouseEvent * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BoardSetupToolButton::signalClicked(Piece _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
