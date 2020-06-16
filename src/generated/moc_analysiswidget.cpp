/****************************************************************************
** Meta object code from reading C++ file 'analysiswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gui/analysiswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'analysiswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnalysisWidget_t {
    QByteArrayData data[45];
    char stringdata0[528];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnalysisWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnalysisWidget_t qt_meta_stringdata_AnalysisWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AnalysisWidget"
QT_MOC_LITERAL(1, 15, 12), // "addVariation"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "Analysis"
QT_MOC_LITERAL(4, 38, 8), // "analysis"
QT_MOC_LITERAL(5, 47, 3), // "san"
QT_MOC_LITERAL(6, 51, 12), // "requestBoard"
QT_MOC_LITERAL(7, 64, 16), // "receivedBestMove"
QT_MOC_LITERAL(8, 81, 19), // "signalSourceChanged"
QT_MOC_LITERAL(9, 101, 11), // "setPosition"
QT_MOC_LITERAL(10, 113, 5), // "Board"
QT_MOC_LITERAL(11, 119, 5), // "board"
QT_MOC_LITERAL(12, 125, 4), // "line"
QT_MOC_LITERAL(13, 130, 15), // "slotReconfigure"
QT_MOC_LITERAL(14, 146, 10), // "saveConfig"
QT_MOC_LITERAL(15, 157, 11), // "startEngine"
QT_MOC_LITERAL(16, 169, 10), // "stopEngine"
QT_MOC_LITERAL(17, 180, 21), // "slotVisibilityChanged"
QT_MOC_LITERAL(18, 202, 11), // "setMoveTime"
QT_MOC_LITERAL(19, 214, 15), // "EngineParameter"
QT_MOC_LITERAL(20, 230, 2), // "mt"
QT_MOC_LITERAL(21, 233, 8), // "setDepth"
QT_MOC_LITERAL(22, 242, 1), // "n"
QT_MOC_LITERAL(23, 244, 14), // "slotUciNewGame"
QT_MOC_LITERAL(24, 259, 1), // "b"
QT_MOC_LITERAL(25, 261, 15), // "slotUpdateBooks"
QT_MOC_LITERAL(26, 277, 11), // "setGameMode"
QT_MOC_LITERAL(27, 289, 11), // "restoreBook"
QT_MOC_LITERAL(28, 301, 14), // "toggleAnalysis"
QT_MOC_LITERAL(29, 316, 12), // "showAnalysis"
QT_MOC_LITERAL(30, 329, 15), // "engineActivated"
QT_MOC_LITERAL(31, 345, 17), // "engineDeactivated"
QT_MOC_LITERAL(32, 363, 11), // "engineError"
QT_MOC_LITERAL(33, 375, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(34, 398, 15), // "slotLinkClicked"
QT_MOC_LITERAL(35, 414, 4), // "link"
QT_MOC_LITERAL(36, 419, 14), // "slotMpvChanged"
QT_MOC_LITERAL(37, 434, 3), // "mpv"
QT_MOC_LITERAL(38, 438, 17), // "showTablebaseMove"
QT_MOC_LITERAL(39, 456, 11), // "QList<Move>"
QT_MOC_LITERAL(40, 468, 4), // "move"
QT_MOC_LITERAL(41, 473, 5), // "score"
QT_MOC_LITERAL(42, 479, 14), // "slotPinChanged"
QT_MOC_LITERAL(43, 494, 13), // "bookActivated"
QT_MOC_LITERAL(44, 508, 19) // "sendBookMoveTimeout"

    },
    "AnalysisWidget\0addVariation\0\0Analysis\0"
    "analysis\0san\0requestBoard\0receivedBestMove\0"
    "signalSourceChanged\0setPosition\0Board\0"
    "board\0line\0slotReconfigure\0saveConfig\0"
    "startEngine\0stopEngine\0slotVisibilityChanged\0"
    "setMoveTime\0EngineParameter\0mt\0setDepth\0"
    "n\0slotUciNewGame\0b\0slotUpdateBooks\0"
    "setGameMode\0restoreBook\0toggleAnalysis\0"
    "showAnalysis\0engineActivated\0"
    "engineDeactivated\0engineError\0"
    "QProcess::ProcessError\0slotLinkClicked\0"
    "link\0slotMpvChanged\0mpv\0showTablebaseMove\0"
    "QList<Move>\0move\0score\0slotPinChanged\0"
    "bookActivated\0sendBookMoveTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnalysisWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  164,    2, 0x06 /* Public */,
       1,    1,  169,    2, 0x06 /* Public */,
       6,    0,  172,    2, 0x06 /* Public */,
       7,    1,  173,    2, 0x06 /* Public */,
       8,    1,  176,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,  179,    2, 0x0a /* Public */,
       9,    1,  184,    2, 0x2a /* Public | MethodCloned */,
      13,    0,  187,    2, 0x0a /* Public */,
      14,    0,  188,    2, 0x0a /* Public */,
      15,    0,  189,    2, 0x0a /* Public */,
      16,    0,  190,    2, 0x0a /* Public */,
      17,    1,  191,    2, 0x0a /* Public */,
      18,    1,  194,    2, 0x0a /* Public */,
      18,    1,  197,    2, 0x0a /* Public */,
      21,    1,  200,    2, 0x0a /* Public */,
      23,    1,  203,    2, 0x0a /* Public */,
      25,    1,  206,    2, 0x0a /* Public */,
      26,    1,  209,    2, 0x0a /* Public */,
      27,    0,  212,    2, 0x0a /* Public */,
      28,    0,  213,    2, 0x08 /* Private */,
      29,    1,  214,    2, 0x08 /* Private */,
      30,    0,  217,    2, 0x08 /* Private */,
      31,    0,  218,    2, 0x08 /* Private */,
      32,    1,  219,    2, 0x08 /* Private */,
      34,    1,  222,    2, 0x08 /* Private */,
      36,    1,  225,    2, 0x08 /* Private */,
      38,    2,  228,    2, 0x08 /* Private */,
      42,    1,  233,    2, 0x08 /* Private */,
      43,    1,  236,    2, 0x09 /* Protected */,
      44,    0,  239,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    2,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString,   11,   12,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, 0x80000000 | 10,   24,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,    2,
    QMetaType::Void, QMetaType::QUrl,   35,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, 0x80000000 | 39, QMetaType::Int,   40,   41,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void AnalysisWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnalysisWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addVariation((*reinterpret_cast< const Analysis(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->addVariation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->requestBoard(); break;
        case 3: _t->receivedBestMove((*reinterpret_cast< const Analysis(*)>(_a[1]))); break;
        case 4: _t->signalSourceChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setPosition((*reinterpret_cast< const Board(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->setPosition((*reinterpret_cast< const Board(*)>(_a[1]))); break;
        case 7: _t->slotReconfigure(); break;
        case 8: _t->saveConfig(); break;
        case 9: _t->startEngine(); break;
        case 10: _t->stopEngine(); break;
        case 11: _t->slotVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setMoveTime((*reinterpret_cast< EngineParameter(*)>(_a[1]))); break;
        case 13: _t->setMoveTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setDepth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->slotUciNewGame((*reinterpret_cast< const Board(*)>(_a[1]))); break;
        case 16: _t->slotUpdateBooks((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 17: _t->setGameMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->restoreBook(); break;
        case 19: _t->toggleAnalysis(); break;
        case 20: _t->showAnalysis((*reinterpret_cast< Analysis(*)>(_a[1]))); break;
        case 21: _t->engineActivated(); break;
        case 22: _t->engineDeactivated(); break;
        case 23: _t->engineError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 24: _t->slotLinkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 25: _t->slotMpvChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->showTablebaseMove((*reinterpret_cast< QList<Move>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 27: _t->slotPinChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->bookActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->sendBookMoveTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AnalysisWidget::*)(const Analysis & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnalysisWidget::addVariation)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AnalysisWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnalysisWidget::addVariation)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AnalysisWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnalysisWidget::requestBoard)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AnalysisWidget::*)(const Analysis & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnalysisWidget::receivedBestMove)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AnalysisWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnalysisWidget::signalSourceChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AnalysisWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_AnalysisWidget.data,
    qt_meta_data_AnalysisWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AnalysisWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnalysisWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnalysisWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AnalysisWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void AnalysisWidget::addVariation(const Analysis & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AnalysisWidget::addVariation(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AnalysisWidget::requestBoard()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AnalysisWidget::receivedBestMove(const Analysis & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AnalysisWidget::signalSourceChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
