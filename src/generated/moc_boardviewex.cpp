/****************************************************************************
** Meta object code from reading C++ file 'boardviewex.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gui/boardviewex.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boardviewex.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BoardViewEx_t {
    QByteArrayData data[23];
    char stringdata0[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoardViewEx_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoardViewEx_t qt_meta_stringdata_BoardViewEx = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BoardViewEx"
QT_MOC_LITERAL(1, 12, 19), // "signalNewAnnotation"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "enterVariation"
QT_MOC_LITERAL(4, 48, 5), // "index"
QT_MOC_LITERAL(5, 54, 15), // "slotReconfigure"
QT_MOC_LITERAL(6, 70, 10), // "saveConfig"
QT_MOC_LITERAL(7, 81, 8), // "showTime"
QT_MOC_LITERAL(8, 90, 4), // "show"
QT_MOC_LITERAL(9, 95, 7), // "setTime"
QT_MOC_LITERAL(10, 103, 5), // "white"
QT_MOC_LITERAL(11, 109, 1), // "t"
QT_MOC_LITERAL(12, 111, 9), // "startTime"
QT_MOC_LITERAL(13, 121, 13), // "configureTime"
QT_MOC_LITERAL(14, 135, 9), // "countDown"
QT_MOC_LITERAL(15, 145, 9), // "stopTimes"
QT_MOC_LITERAL(16, 155, 24), // "setAnnotationPlaceholder"
QT_MOC_LITERAL(17, 180, 14), // "showVariations"
QT_MOC_LITERAL(18, 195, 13), // "QList<MoveId>"
QT_MOC_LITERAL(19, 209, 14), // "boardIsFlipped"
QT_MOC_LITERAL(20, 224, 26), // "on_editComment_textChanged"
QT_MOC_LITERAL(21, 251, 16), // "variationClicked"
QT_MOC_LITERAL(22, 268, 11) // "QModelIndex"

    },
    "BoardViewEx\0signalNewAnnotation\0\0"
    "enterVariation\0index\0slotReconfigure\0"
    "saveConfig\0showTime\0show\0setTime\0white\0"
    "t\0startTime\0configureTime\0countDown\0"
    "stopTimes\0setAnnotationPlaceholder\0"
    "showVariations\0QList<MoveId>\0"
    "boardIsFlipped\0on_editComment_textChanged\0"
    "variationClicked\0QModelIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoardViewEx[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   90,    2, 0x0a /* Public */,
       6,    0,   91,    2, 0x0a /* Public */,
       7,    1,   92,    2, 0x0a /* Public */,
       9,    2,   95,    2, 0x0a /* Public */,
      12,    1,  100,    2, 0x0a /* Public */,
      13,    2,  103,    2, 0x0a /* Public */,
      15,    0,  108,    2, 0x0a /* Public */,
      16,    1,  109,    2, 0x0a /* Public */,
      17,    2,  112,    2, 0x0a /* Public */,
      19,    2,  117,    2, 0x09 /* Protected */,
      20,    0,  122,    2, 0x08 /* Private */,
      21,    1,  123,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   10,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 18, QMetaType::QStringList,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,    4,

       0        // eod
};

void BoardViewEx::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BoardViewEx *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalNewAnnotation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->enterVariation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotReconfigure(); break;
        case 3: _t->saveConfig(); break;
        case 4: _t->showTime((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setTime((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->startTime((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->configureTime((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->stopTimes(); break;
        case 9: _t->setAnnotationPlaceholder((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->showVariations((*reinterpret_cast< QList<MoveId>(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 11: _t->boardIsFlipped((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->on_editComment_textChanged(); break;
        case 13: _t->variationClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BoardViewEx::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoardViewEx::signalNewAnnotation)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BoardViewEx::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoardViewEx::enterVariation)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BoardViewEx::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_BoardViewEx.data,
    qt_meta_data_BoardViewEx,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BoardViewEx::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoardViewEx::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BoardViewEx.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BoardViewEx::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void BoardViewEx::signalNewAnnotation(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BoardViewEx::enterVariation(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
