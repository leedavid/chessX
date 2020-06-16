/****************************************************************************
** Meta object code from reading C++ file 'helpbrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gui/helpbrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helpbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HelpBrowser_t {
    QByteArrayData data[7];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HelpBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HelpBrowser_t qt_meta_stringdata_HelpBrowser = {
    {
QT_MOC_LITERAL(0, 0, 11), // "HelpBrowser"
QT_MOC_LITERAL(1, 12, 11), // "linkTargets"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "texts"
QT_MOC_LITERAL(4, 31, 5), // "links"
QT_MOC_LITERAL(5, 37, 17), // "slotSourceChanged"
QT_MOC_LITERAL(6, 55, 3) // "url"

    },
    "HelpBrowser\0linkTargets\0\0texts\0links\0"
    "slotSourceChanged\0url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HelpBrowser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList, QMetaType::QStringList,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    6,

       0        // eod
};

void HelpBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HelpBrowser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->linkTargets((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 1: _t->slotSourceChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HelpBrowser::*)(const QStringList & , const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HelpBrowser::linkTargets)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HelpBrowser::staticMetaObject = { {
    &QTextBrowser::staticMetaObject,
    qt_meta_stringdata_HelpBrowser.data,
    qt_meta_data_HelpBrowser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HelpBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HelpBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HelpBrowser.stringdata0))
        return static_cast<void*>(this);
    return QTextBrowser::qt_metacast(_clname);
}

int HelpBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void HelpBrowser::linkTargets(const QStringList & _t1, const QStringList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
