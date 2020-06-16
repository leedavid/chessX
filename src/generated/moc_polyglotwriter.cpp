/****************************************************************************
** Meta object code from reading C++ file 'polyglotwriter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../database/polyglotwriter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'polyglotwriter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PolyglotWriter_t {
    QByteArrayData data[7];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PolyglotWriter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PolyglotWriter_t qt_meta_stringdata_PolyglotWriter = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PolyglotWriter"
QT_MOC_LITERAL(1, 15, 17), // "bookBuildFinished"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "PolyglotWriter*"
QT_MOC_LITERAL(4, 50, 14), // "bookBuildError"
QT_MOC_LITERAL(5, 65, 8), // "progress"
QT_MOC_LITERAL(6, 74, 6) // "cancel"

    },
    "PolyglotWriter\0bookBuildFinished\0\0"
    "PolyglotWriter*\0bookBuildError\0progress\0"
    "cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PolyglotWriter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       4,    2,   39,    2, 0x06 /* Public */,
       5,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void PolyglotWriter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PolyglotWriter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bookBuildFinished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< PolyglotWriter*(*)>(_a[2]))); break;
        case 1: _t->bookBuildError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< PolyglotWriter*(*)>(_a[2]))); break;
        case 2: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PolyglotWriter* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PolyglotWriter* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PolyglotWriter::*)(QString , PolyglotWriter * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PolyglotWriter::bookBuildFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PolyglotWriter::*)(QString , PolyglotWriter * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PolyglotWriter::bookBuildError)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PolyglotWriter::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PolyglotWriter::progress)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PolyglotWriter::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_PolyglotWriter.data,
    qt_meta_data_PolyglotWriter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PolyglotWriter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PolyglotWriter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PolyglotWriter.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int PolyglotWriter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void PolyglotWriter::bookBuildFinished(QString _t1, PolyglotWriter * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PolyglotWriter::bookBuildError(QString _t1, PolyglotWriter * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PolyglotWriter::progress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
