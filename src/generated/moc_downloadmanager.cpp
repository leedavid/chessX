/****************************************************************************
** Meta object code from reading C++ file 'downloadmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../database/downloadmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'downloadmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DownloadManager_t {
    QByteArrayData data[8];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DownloadManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DownloadManager_t qt_meta_stringdata_DownloadManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DownloadManager"
QT_MOC_LITERAL(1, 16, 18), // "onDownloadFinished"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "downloadError"
QT_MOC_LITERAL(4, 50, 19), // "downloadManagerIdle"
QT_MOC_LITERAL(5, 70, 7), // "execute"
QT_MOC_LITERAL(6, 78, 4), // "args"
QT_MOC_LITERAL(7, 83, 16) // "downloadFinished"

    },
    "DownloadManager\0onDownloadFinished\0\0"
    "downloadError\0downloadManagerIdle\0"
    "execute\0args\0downloadFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DownloadManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       3,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   48,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void,

       0        // eod
};

void DownloadManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DownloadManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onDownloadFinished((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->downloadError((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 2: _t->downloadManagerIdle(); break;
        case 3: _t->execute((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 4: _t->downloadFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DownloadManager::*)(QUrl , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DownloadManager::onDownloadFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DownloadManager::*)(QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DownloadManager::downloadError)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DownloadManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DownloadManager::downloadManagerIdle)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DownloadManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DownloadManager.data,
    qt_meta_data_DownloadManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DownloadManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DownloadManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DownloadManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void DownloadManager::onDownloadFinished(QUrl _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DownloadManager::downloadError(QUrl _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DownloadManager::downloadManagerIdle()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
