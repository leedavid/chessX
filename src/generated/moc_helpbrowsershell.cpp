/****************************************************************************
** Meta object code from reading C++ file 'helpbrowsershell.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gui/helpbrowsershell.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helpbrowsershell.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HelpBrowserShell_t {
    QByteArrayData data[10];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HelpBrowserShell_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HelpBrowserShell_t qt_meta_stringdata_HelpBrowserShell = {
    {
QT_MOC_LITERAL(0, 0, 16), // "HelpBrowserShell"
QT_MOC_LITERAL(1, 17, 19), // "SlotHelpLinkTargets"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "texts"
QT_MOC_LITERAL(4, 44, 5), // "links"
QT_MOC_LITERAL(5, 50, 21), // "SlotIndexItemSelected"
QT_MOC_LITERAL(6, 72, 5), // "index"
QT_MOC_LITERAL(7, 78, 23), // "on_btSearchText_clicked"
QT_MOC_LITERAL(8, 102, 25), // "on_searchText_textChanged"
QT_MOC_LITERAL(9, 128, 4) // "arg1"

    },
    "HelpBrowserShell\0SlotHelpLinkTargets\0"
    "\0texts\0links\0SlotIndexItemSelected\0"
    "index\0on_btSearchText_clicked\0"
    "on_searchText_textChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HelpBrowserShell[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x09 /* Protected */,
       5,    1,   39,    2, 0x09 /* Protected */,
       7,    0,   42,    2, 0x08 /* Private */,
       8,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList, QMetaType::QStringList,    3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void HelpBrowserShell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HelpBrowserShell *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SlotHelpLinkTargets((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 1: _t->SlotIndexItemSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_btSearchText_clicked(); break;
        case 3: _t->on_searchText_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HelpBrowserShell::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_HelpBrowserShell.data,
    qt_meta_data_HelpBrowserShell,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HelpBrowserShell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HelpBrowserShell::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HelpBrowserShell.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int HelpBrowserShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
