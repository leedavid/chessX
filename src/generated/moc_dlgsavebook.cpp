/****************************************************************************
** Meta object code from reading C++ file 'dlgsavebook.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../dialogs/dlgsavebook.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgsavebook.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DlgSaveBook_t {
    QByteArrayData data[7];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DlgSaveBook_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DlgSaveBook_t qt_meta_stringdata_DlgSaveBook = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DlgSaveBook"
QT_MOC_LITERAL(1, 12, 11), // "bookWritten"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 6), // "accept"
QT_MOC_LITERAL(4, 32, 6), // "reject"
QT_MOC_LITERAL(5, 39, 20), // "slotSelectTargetPath"
QT_MOC_LITERAL(6, 60, 13) // "restoreLayout"

    },
    "DlgSaveBook\0bookWritten\0\0accept\0reject\0"
    "slotSelectTargetPath\0restoreLayout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DlgSaveBook[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   42,    2, 0x09 /* Protected */,
       4,    0,   43,    2, 0x09 /* Protected */,
       5,    0,   44,    2, 0x09 /* Protected */,
       6,    0,   45,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DlgSaveBook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgSaveBook *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bookWritten((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->accept(); break;
        case 2: _t->reject(); break;
        case 3: _t->slotSelectTargetPath(); break;
        case 4: _t->restoreLayout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DlgSaveBook::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DlgSaveBook::bookWritten)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DlgSaveBook::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_DlgSaveBook.data,
    qt_meta_data_DlgSaveBook,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DlgSaveBook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DlgSaveBook::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DlgSaveBook.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DlgSaveBook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DlgSaveBook::bookWritten(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
