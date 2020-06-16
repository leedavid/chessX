/****************************************************************************
** Meta object code from reading C++ file 'eventlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gui/eventlistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eventlistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EventListWidget_t {
    QByteArrayData data[23];
    char stringdata0[293];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EventListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EventListWidget_t qt_meta_stringdata_EventListWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "EventListWidget"
QT_MOC_LITERAL(1, 16, 13), // "filterRequest"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 2), // "ts"
QT_MOC_LITERAL(4, 34, 13), // "renameRequest"
QT_MOC_LITERAL(5, 48, 24), // "filterEventPlayerRequest"
QT_MOC_LITERAL(6, 73, 6), // "player"
QT_MOC_LITERAL(7, 80, 5), // "event"
QT_MOC_LITERAL(8, 86, 11), // "selectEvent"
QT_MOC_LITERAL(9, 98, 11), // "setDatabase"
QT_MOC_LITERAL(10, 110, 13), // "DatabaseInfo*"
QT_MOC_LITERAL(11, 124, 6), // "dbInfo"
QT_MOC_LITERAL(12, 131, 15), // "slotSelectEvent"
QT_MOC_LITERAL(13, 147, 9), // "findEvent"
QT_MOC_LITERAL(14, 157, 1), // "s"
QT_MOC_LITERAL(15, 159, 19), // "filterSelectedEvent"
QT_MOC_LITERAL(16, 179, 22), // "filterSelectedEventAdd"
QT_MOC_LITERAL(17, 202, 19), // "renameSelectedEvent"
QT_MOC_LITERAL(18, 222, 15), // "slotReconfigure"
QT_MOC_LITERAL(19, 238, 20), // "selectionChangedSlot"
QT_MOC_LITERAL(20, 259, 15), // "slotLinkClicked"
QT_MOC_LITERAL(21, 275, 3), // "url"
QT_MOC_LITERAL(22, 279, 13) // "eventSelected"

    },
    "EventListWidget\0filterRequest\0\0ts\0"
    "renameRequest\0filterEventPlayerRequest\0"
    "player\0event\0selectEvent\0setDatabase\0"
    "DatabaseInfo*\0dbInfo\0slotSelectEvent\0"
    "findEvent\0s\0filterSelectedEvent\0"
    "filterSelectedEventAdd\0renameSelectedEvent\0"
    "slotReconfigure\0selectionChangedSlot\0"
    "slotLinkClicked\0url\0eventSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EventListWidget[] = {

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
       5,    2,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   95,    2, 0x0a /* Public */,
       9,    1,   98,    2, 0x0a /* Public */,
      12,    1,  101,    2, 0x0a /* Public */,
      13,    1,  104,    2, 0x09 /* Protected */,
      15,    0,  107,    2, 0x09 /* Protected */,
      16,    0,  108,    2, 0x09 /* Protected */,
      17,    0,  109,    2, 0x09 /* Protected */,
      18,    0,  110,    2, 0x09 /* Protected */,
      19,    0,  111,    2, 0x09 /* Protected */,
      20,    1,  112,    2, 0x09 /* Protected */,
      22,    1,  115,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   21,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void EventListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EventListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filterRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->renameRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->filterEventPlayerRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->selectEvent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setDatabase((*reinterpret_cast< DatabaseInfo*(*)>(_a[1]))); break;
        case 5: _t->slotSelectEvent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->findEvent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->filterSelectedEvent(); break;
        case 8: _t->filterSelectedEventAdd(); break;
        case 9: _t->renameSelectedEvent(); break;
        case 10: _t->slotReconfigure(); break;
        case 11: _t->selectionChangedSlot(); break;
        case 12: _t->slotLinkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 13: _t->eventSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EventListWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventListWidget::filterRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EventListWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventListWidget::renameRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EventListWidget::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventListWidget::filterEventPlayerRequest)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EventListWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_EventListWidget.data,
    qt_meta_data_EventListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EventListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EventListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EventListWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EventListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void EventListWidget::filterRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EventListWidget::renameRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EventListWidget::filterEventPlayerRequest(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
