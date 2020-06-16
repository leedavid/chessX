/****************************************************************************
** Meta object code from reading C++ file 'ecolistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gui/ecolistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ecolistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ECOListWidget_t {
    QByteArrayData data[23];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ECOListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ECOListWidget_t qt_meta_stringdata_ECOListWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ECOListWidget"
QT_MOC_LITERAL(1, 14, 13), // "filterRequest"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 2), // "ts"
QT_MOC_LITERAL(4, 32, 22), // "filterEcoPlayerRequest"
QT_MOC_LITERAL(5, 55, 3), // "tag"
QT_MOC_LITERAL(6, 59, 3), // "eco"
QT_MOC_LITERAL(7, 63, 6), // "player"
QT_MOC_LITERAL(8, 70, 6), // "result"
QT_MOC_LITERAL(9, 77, 13), // "slotSelectECO"
QT_MOC_LITERAL(10, 91, 9), // "selectECO"
QT_MOC_LITERAL(11, 101, 7), // "findECO"
QT_MOC_LITERAL(12, 109, 1), // "s"
QT_MOC_LITERAL(13, 111, 11), // "setDatabase"
QT_MOC_LITERAL(14, 123, 13), // "DatabaseInfo*"
QT_MOC_LITERAL(15, 137, 6), // "dbInfo"
QT_MOC_LITERAL(16, 144, 17), // "filterSelectedECO"
QT_MOC_LITERAL(17, 162, 20), // "filterSelectedECOAdd"
QT_MOC_LITERAL(18, 183, 15), // "slotReconfigure"
QT_MOC_LITERAL(19, 199, 20), // "selectionChangedSlot"
QT_MOC_LITERAL(20, 220, 15), // "slotLinkClicked"
QT_MOC_LITERAL(21, 236, 3), // "url"
QT_MOC_LITERAL(22, 240, 11) // "ecoSelected"

    },
    "ECOListWidget\0filterRequest\0\0ts\0"
    "filterEcoPlayerRequest\0tag\0eco\0player\0"
    "result\0slotSelectECO\0selectECO\0findECO\0"
    "s\0setDatabase\0DatabaseInfo*\0dbInfo\0"
    "filterSelectedECO\0filterSelectedECOAdd\0"
    "slotReconfigure\0selectionChangedSlot\0"
    "slotLinkClicked\0url\0ecoSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ECOListWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    2,   82,    2, 0x06 /* Public */,
       4,    4,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   96,    2, 0x0a /* Public */,
      10,    1,   99,    2, 0x0a /* Public */,
      11,    1,  102,    2, 0x09 /* Protected */,
      13,    1,  105,    2, 0x09 /* Protected */,
      16,    0,  108,    2, 0x09 /* Protected */,
      17,    0,  109,    2, 0x09 /* Protected */,
      18,    0,  110,    2, 0x09 /* Protected */,
      19,    0,  111,    2, 0x09 /* Protected */,
      20,    1,  112,    2, 0x09 /* Protected */,
      22,    1,  115,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   21,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void ECOListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ECOListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filterRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->filterEcoPlayerRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->filterEcoPlayerRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 3: _t->slotSelectECO((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->selectECO((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->findECO((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setDatabase((*reinterpret_cast< DatabaseInfo*(*)>(_a[1]))); break;
        case 7: _t->filterSelectedECO(); break;
        case 8: _t->filterSelectedECOAdd(); break;
        case 9: _t->slotReconfigure(); break;
        case 10: _t->selectionChangedSlot(); break;
        case 11: _t->slotLinkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 12: _t->ecoSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ECOListWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ECOListWidget::filterRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ECOListWidget::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ECOListWidget::filterEcoPlayerRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ECOListWidget::*)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ECOListWidget::filterEcoPlayerRequest)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ECOListWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ECOListWidget.data,
    qt_meta_data_ECOListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ECOListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ECOListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ECOListWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ECOListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void ECOListWidget::filterRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ECOListWidget::filterEcoPlayerRequest(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ECOListWidget::filterEcoPlayerRequest(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
