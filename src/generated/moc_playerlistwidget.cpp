/****************************************************************************
** Meta object code from reading C++ file 'playerlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gui/playerlistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playerlistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlayerListWidget_t {
    QByteArrayData data[25];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayerListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayerListWidget_t qt_meta_stringdata_PlayerListWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PlayerListWidget"
QT_MOC_LITERAL(1, 17, 13), // "filterRequest"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 2), // "ts"
QT_MOC_LITERAL(4, 35, 13), // "renameRequest"
QT_MOC_LITERAL(5, 49, 22), // "filterEcoPlayerRequest"
QT_MOC_LITERAL(6, 72, 3), // "tag"
QT_MOC_LITERAL(7, 76, 3), // "eco"
QT_MOC_LITERAL(8, 80, 6), // "player"
QT_MOC_LITERAL(9, 87, 6), // "result"
QT_MOC_LITERAL(10, 94, 11), // "findPlayers"
QT_MOC_LITERAL(11, 106, 1), // "s"
QT_MOC_LITERAL(12, 108, 16), // "slotSelectPlayer"
QT_MOC_LITERAL(13, 125, 11), // "setDatabase"
QT_MOC_LITERAL(14, 137, 13), // "DatabaseInfo*"
QT_MOC_LITERAL(15, 151, 6), // "dbInfo"
QT_MOC_LITERAL(16, 158, 20), // "filterSelectedPlayer"
QT_MOC_LITERAL(17, 179, 23), // "filterSelectedPlayerAdd"
QT_MOC_LITERAL(18, 203, 20), // "renameSelectedPlayer"
QT_MOC_LITERAL(19, 224, 15), // "slotReconfigure"
QT_MOC_LITERAL(20, 240, 20), // "selectionChangedSlot"
QT_MOC_LITERAL(21, 261, 15), // "slotLinkClicked"
QT_MOC_LITERAL(22, 277, 3), // "url"
QT_MOC_LITERAL(23, 281, 12), // "selectPlayer"
QT_MOC_LITERAL(24, 294, 14) // "playerSelected"

    },
    "PlayerListWidget\0filterRequest\0\0ts\0"
    "renameRequest\0filterEcoPlayerRequest\0"
    "tag\0eco\0player\0result\0findPlayers\0s\0"
    "slotSelectPlayer\0setDatabase\0DatabaseInfo*\0"
    "dbInfo\0filterSelectedPlayer\0"
    "filterSelectedPlayerAdd\0renameSelectedPlayer\0"
    "slotReconfigure\0selectionChangedSlot\0"
    "slotLinkClicked\0url\0selectPlayer\0"
    "playerSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayerListWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    4,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   99,    2, 0x0a /* Public */,
      12,    1,  102,    2, 0x0a /* Public */,
      13,    1,  105,    2, 0x0a /* Public */,
      16,    0,  108,    2, 0x0a /* Public */,
      17,    0,  109,    2, 0x0a /* Public */,
      18,    0,  110,    2, 0x0a /* Public */,
      19,    0,  111,    2, 0x0a /* Public */,
      20,    0,  112,    2, 0x0a /* Public */,
      21,    1,  113,    2, 0x0a /* Public */,
      23,    1,  116,    2, 0x09 /* Protected */,
      24,    1,  119,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   22,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void PlayerListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlayerListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filterRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->renameRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->filterEcoPlayerRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 3: _t->findPlayers((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotSelectPlayer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setDatabase((*reinterpret_cast< DatabaseInfo*(*)>(_a[1]))); break;
        case 6: _t->filterSelectedPlayer(); break;
        case 7: _t->filterSelectedPlayerAdd(); break;
        case 8: _t->renameSelectedPlayer(); break;
        case 9: _t->slotReconfigure(); break;
        case 10: _t->selectionChangedSlot(); break;
        case 11: _t->slotLinkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 12: _t->selectPlayer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->playerSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlayerListWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerListWidget::filterRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlayerListWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerListWidget::renameRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlayerListWidget::*)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerListWidget::filterEcoPlayerRequest)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlayerListWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_PlayerListWidget.data,
    qt_meta_data_PlayerListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlayerListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlayerListWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PlayerListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void PlayerListWidget::filterRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlayerListWidget::renameRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlayerListWidget::filterEcoPlayerRequest(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
