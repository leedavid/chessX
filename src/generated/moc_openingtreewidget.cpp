/****************************************************************************
** Meta object code from reading C++ file 'openingtreewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gui/openingtreewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openingtreewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpeningTreeWidget_t {
    QByteArrayData data[17];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpeningTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpeningTreeWidget_t qt_meta_stringdata_OpeningTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OpeningTreeWidget"
QT_MOC_LITERAL(1, 18, 17), // "signalTreeUpdated"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "signalSourceChanged"
QT_MOC_LITERAL(4, 57, 23), // "requestGameFilterUpdate"
QT_MOC_LITERAL(5, 81, 6), // "cancel"
QT_MOC_LITERAL(6, 88, 10), // "saveConfig"
QT_MOC_LITERAL(7, 99, 15), // "slotReconfigure"
QT_MOC_LITERAL(8, 115, 17), // "updateFilterIndex"
QT_MOC_LITERAL(9, 133, 11), // "restoreBook"
QT_MOC_LITERAL(10, 145, 14), // "slotTreeUpdate"
QT_MOC_LITERAL(11, 160, 21), // "slotOperationProgress"
QT_MOC_LITERAL(12, 182, 5), // "value"
QT_MOC_LITERAL(13, 188, 21), // "slotTreeUpdateStarted"
QT_MOC_LITERAL(14, 210, 17), // "slotSourceChanged"
QT_MOC_LITERAL(15, 228, 17), // "slotFilterClicked"
QT_MOC_LITERAL(16, 246, 7) // "checked"

    },
    "OpeningTreeWidget\0signalTreeUpdated\0"
    "\0signalSourceChanged\0requestGameFilterUpdate\0"
    "cancel\0saveConfig\0slotReconfigure\0"
    "updateFilterIndex\0restoreBook\0"
    "slotTreeUpdate\0slotOperationProgress\0"
    "value\0slotTreeUpdateStarted\0"
    "slotSourceChanged\0slotFilterClicked\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpeningTreeWidget[] = {

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
       3,    0,   82,    2, 0x06 /* Public */,
       4,    2,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   88,    2, 0x0a /* Public */,
       6,    0,   89,    2, 0x0a /* Public */,
       7,    0,   90,    2, 0x0a /* Public */,
       8,    1,   91,    2, 0x0a /* Public */,
       9,    0,   94,    2, 0x0a /* Public */,
      10,    0,   95,    2, 0x09 /* Protected */,
      11,    1,   96,    2, 0x09 /* Protected */,
      13,    0,   99,    2, 0x09 /* Protected */,
      14,    1,  100,    2, 0x09 /* Protected */,
      15,    1,  103,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,   16,

       0        // eod
};

void OpeningTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpeningTreeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalTreeUpdated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->signalSourceChanged(); break;
        case 2: _t->requestGameFilterUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->cancel(); break;
        case 4: _t->saveConfig(); break;
        case 5: _t->slotReconfigure(); break;
        case 6: _t->updateFilterIndex((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 7: _t->restoreBook(); break;
        case 8: _t->slotTreeUpdate(); break;
        case 9: _t->slotOperationProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->slotTreeUpdateStarted(); break;
        case 11: _t->slotSourceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->slotFilterClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OpeningTreeWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpeningTreeWidget::signalTreeUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OpeningTreeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpeningTreeWidget::signalSourceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OpeningTreeWidget::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OpeningTreeWidget::requestGameFilterUpdate)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpeningTreeWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_OpeningTreeWidget.data,
    qt_meta_data_OpeningTreeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpeningTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpeningTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpeningTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OpeningTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OpeningTreeWidget::signalTreeUpdated(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpeningTreeWidget::signalSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OpeningTreeWidget::requestGameFilterUpdate(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
