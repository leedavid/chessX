/****************************************************************************
** Meta object code from reading C++ file 'ficsconsole.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gui/ficsconsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ficsconsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FicsConsole_t {
    QByteArrayData data[62];
    char stringdata0[921];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FicsConsole_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FicsConsole_t qt_meta_stringdata_FicsConsole = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FicsConsole"
QT_MOC_LITERAL(1, 12, 12), // "raiseRequest"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "ReceivedBoard"
QT_MOC_LITERAL(4, 40, 3), // "cmd"
QT_MOC_LITERAL(5, 44, 1), // "s"
QT_MOC_LITERAL(6, 46, 14), // "RequestNewGame"
QT_MOC_LITERAL(7, 61, 15), // "RequestSaveGame"
QT_MOC_LITERAL(8, 77, 15), // "RequestGameMode"
QT_MOC_LITERAL(9, 93, 21), // "RequestRemoveLastMove"
QT_MOC_LITERAL(10, 115, 13), // "RequestAddTag"
QT_MOC_LITERAL(11, 129, 3), // "tag"
QT_MOC_LITERAL(12, 133, 5), // "value"
QT_MOC_LITERAL(13, 139, 16), // "SignalGameResult"
QT_MOC_LITERAL(14, 156, 19), // "SignalPlayerIsBlack"
QT_MOC_LITERAL(15, 176, 15), // "SignalStartTime"
QT_MOC_LITERAL(16, 192, 16), // "RequestCloseFICS"
QT_MOC_LITERAL(17, 209, 17), // "RequestStoredMove"
QT_MOC_LITERAL(18, 227, 13), // "FicsShowTimer"
QT_MOC_LITERAL(19, 241, 12), // "FicsShowTime"
QT_MOC_LITERAL(20, 254, 9), // "Terminate"
QT_MOC_LITERAL(21, 264, 8), // "SendMove"
QT_MOC_LITERAL(22, 273, 1), // "m"
QT_MOC_LITERAL(23, 275, 19), // "SlotGameModeChanged"
QT_MOC_LITERAL(24, 295, 15), // "slotReconfigure"
QT_MOC_LITERAL(25, 311, 11), // "SendCommand"
QT_MOC_LITERAL(26, 323, 13), // "HandleMessage"
QT_MOC_LITERAL(27, 337, 11), // "HandleBoard"
QT_MOC_LITERAL(28, 349, 20), // "HandleObserveRequest"
QT_MOC_LITERAL(29, 370, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(30, 387, 20), // "HandleExamineRequest"
QT_MOC_LITERAL(31, 408, 18), // "HandleRelayRequest"
QT_MOC_LITERAL(32, 427, 20), // "HandleTacticsRequest"
QT_MOC_LITERAL(33, 448, 20), // "HandleHistoryRequest"
QT_MOC_LITERAL(34, 469, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(35, 487, 4), // "item"
QT_MOC_LITERAL(36, 492, 17), // "HandleSeekRequest"
QT_MOC_LITERAL(37, 510, 22), // "CMHandleObserveRequest"
QT_MOC_LITERAL(38, 533, 22), // "CMHandleExamineRequest"
QT_MOC_LITERAL(39, 556, 20), // "CMHandleRelayRequest"
QT_MOC_LITERAL(40, 577, 22), // "CMHandleTacticsRequest"
QT_MOC_LITERAL(41, 600, 22), // "CMHandleHistoryRequest"
QT_MOC_LITERAL(42, 623, 19), // "CMHandleSeekRequest"
QT_MOC_LITERAL(43, 643, 14), // "CommandStarted"
QT_MOC_LITERAL(44, 658, 12), // "Disconnected"
QT_MOC_LITERAL(45, 671, 14), // "SlotTabClicked"
QT_MOC_LITERAL(46, 686, 3), // "tab"
QT_MOC_LITERAL(47, 690, 14), // "SlotTabChanged"
QT_MOC_LITERAL(48, 705, 19), // "SlotSeekTimeChanged"
QT_MOC_LITERAL(49, 725, 14), // "SlotSendAccept"
QT_MOC_LITERAL(50, 740, 12), // "SlotSendDraw"
QT_MOC_LITERAL(51, 753, 15), // "SlotSendDecline"
QT_MOC_LITERAL(52, 769, 13), // "SlotSendAbort"
QT_MOC_LITERAL(53, 783, 14), // "SlotSendResign"
QT_MOC_LITERAL(54, 798, 12), // "SlotSendHint"
QT_MOC_LITERAL(55, 811, 17), // "SlotSendUnexamine"
QT_MOC_LITERAL(56, 829, 15), // "SlotSendRematch"
QT_MOC_LITERAL(57, 845, 12), // "SlotSendSeek"
QT_MOC_LITERAL(58, 858, 14), // "SlotSayMessage"
QT_MOC_LITERAL(59, 873, 13), // "SlotAddNoPlay"
QT_MOC_LITERAL(60, 887, 17), // "SlotNoPlayChanged"
QT_MOC_LITERAL(61, 905, 15) // "SlotContextMenu"

    },
    "FicsConsole\0raiseRequest\0\0ReceivedBoard\0"
    "cmd\0s\0RequestNewGame\0RequestSaveGame\0"
    "RequestGameMode\0RequestRemoveLastMove\0"
    "RequestAddTag\0tag\0value\0SignalGameResult\0"
    "SignalPlayerIsBlack\0SignalStartTime\0"
    "RequestCloseFICS\0RequestStoredMove\0"
    "FicsShowTimer\0FicsShowTime\0Terminate\0"
    "SendMove\0m\0SlotGameModeChanged\0"
    "slotReconfigure\0SendCommand\0HandleMessage\0"
    "HandleBoard\0HandleObserveRequest\0"
    "QListWidgetItem*\0HandleExamineRequest\0"
    "HandleRelayRequest\0HandleTacticsRequest\0"
    "HandleHistoryRequest\0QTableWidgetItem*\0"
    "item\0HandleSeekRequest\0CMHandleObserveRequest\0"
    "CMHandleExamineRequest\0CMHandleRelayRequest\0"
    "CMHandleTacticsRequest\0CMHandleHistoryRequest\0"
    "CMHandleSeekRequest\0CommandStarted\0"
    "Disconnected\0SlotTabClicked\0tab\0"
    "SlotTabChanged\0SlotSeekTimeChanged\0"
    "SlotSendAccept\0SlotSendDraw\0SlotSendDecline\0"
    "SlotSendAbort\0SlotSendResign\0SlotSendHint\0"
    "SlotSendUnexamine\0SlotSendRematch\0"
    "SlotSendSeek\0SlotSayMessage\0SlotAddNoPlay\0"
    "SlotNoPlayChanged\0SlotContextMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FicsConsole[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  269,    2, 0x06 /* Public */,
       3,    2,  270,    2, 0x06 /* Public */,
       6,    0,  275,    2, 0x06 /* Public */,
       7,    0,  276,    2, 0x06 /* Public */,
       8,    1,  277,    2, 0x06 /* Public */,
       9,    0,  280,    2, 0x06 /* Public */,
      10,    2,  281,    2, 0x06 /* Public */,
      13,    1,  286,    2, 0x06 /* Public */,
      14,    2,  289,    2, 0x06 /* Public */,
      15,    1,  294,    2, 0x06 /* Public */,
      16,    0,  297,    2, 0x06 /* Public */,
      17,    0,  298,    2, 0x06 /* Public */,
      18,    1,  299,    2, 0x06 /* Public */,
      19,    2,  302,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    0,  307,    2, 0x0a /* Public */,
      21,    1,  308,    2, 0x0a /* Public */,
      23,    1,  311,    2, 0x0a /* Public */,
      24,    0,  314,    2, 0x0a /* Public */,
      25,    0,  315,    2, 0x09 /* Protected */,
      26,    2,  316,    2, 0x09 /* Protected */,
      27,    2,  321,    2, 0x09 /* Protected */,
      28,    1,  326,    2, 0x09 /* Protected */,
      30,    1,  329,    2, 0x09 /* Protected */,
      31,    1,  332,    2, 0x09 /* Protected */,
      32,    1,  335,    2, 0x09 /* Protected */,
      33,    1,  338,    2, 0x09 /* Protected */,
      36,    1,  341,    2, 0x09 /* Protected */,
      37,    1,  344,    2, 0x09 /* Protected */,
      38,    1,  347,    2, 0x09 /* Protected */,
      39,    1,  350,    2, 0x09 /* Protected */,
      40,    1,  353,    2, 0x09 /* Protected */,
      41,    1,  356,    2, 0x09 /* Protected */,
      42,    1,  359,    2, 0x09 /* Protected */,
      43,    1,  362,    2, 0x09 /* Protected */,
      44,    0,  365,    2, 0x09 /* Protected */,
      45,    1,  366,    2, 0x09 /* Protected */,
      47,    1,  369,    2, 0x09 /* Protected */,
      48,    1,  372,    2, 0x09 /* Protected */,
      49,    0,  375,    2, 0x09 /* Protected */,
      50,    0,  376,    2, 0x09 /* Protected */,
      51,    0,  377,    2, 0x09 /* Protected */,
      52,    0,  378,    2, 0x09 /* Protected */,
      53,    0,  379,    2, 0x09 /* Protected */,
      54,    0,  380,    2, 0x09 /* Protected */,
      55,    0,  381,    2, 0x09 /* Protected */,
      56,    0,  382,    2, 0x09 /* Protected */,
      57,    0,  383,    2, 0x09 /* Protected */,
      58,    0,  384,    2, 0x09 /* Protected */,
      59,    0,  385,    2, 0x09 /* Protected */,
      60,    1,  386,    2, 0x09 /* Protected */,
      61,    1,  389,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, 0x80000000 | 29,   35,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void, QMetaType::Int,   46,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QPoint,    2,

       0        // eod
};

void FicsConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FicsConsole *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->raiseRequest(); break;
        case 1: _t->ReceivedBoard((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->RequestNewGame(); break;
        case 3: _t->RequestSaveGame(); break;
        case 4: _t->RequestGameMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->RequestRemoveLastMove(); break;
        case 6: _t->RequestAddTag((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->SignalGameResult((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->SignalPlayerIsBlack((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->SignalStartTime((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->RequestCloseFICS(); break;
        case 11: _t->RequestStoredMove(); break;
        case 12: _t->FicsShowTimer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->FicsShowTime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: _t->Terminate(); break;
        case 15: _t->SendMove((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->SlotGameModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->slotReconfigure(); break;
        case 18: _t->SendCommand(); break;
        case 19: _t->HandleMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 20: _t->HandleBoard((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 21: _t->HandleObserveRequest((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 22: _t->HandleExamineRequest((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 23: _t->HandleRelayRequest((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 24: _t->HandleTacticsRequest((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 25: _t->HandleHistoryRequest((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 26: _t->HandleSeekRequest((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 27: _t->CMHandleObserveRequest((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 28: _t->CMHandleExamineRequest((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 29: _t->CMHandleRelayRequest((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 30: _t->CMHandleTacticsRequest((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 31: _t->CMHandleHistoryRequest((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 32: _t->CMHandleSeekRequest((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 33: _t->CommandStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->Disconnected(); break;
        case 35: _t->SlotTabClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->SlotTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->SlotSeekTimeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->SlotSendAccept(); break;
        case 39: _t->SlotSendDraw(); break;
        case 40: _t->SlotSendDecline(); break;
        case 41: _t->SlotSendAbort(); break;
        case 42: _t->SlotSendResign(); break;
        case 43: _t->SlotSendHint(); break;
        case 44: _t->SlotSendUnexamine(); break;
        case 45: _t->SlotSendRematch(); break;
        case 46: _t->SlotSendSeek(); break;
        case 47: _t->SlotSayMessage(); break;
        case 48: _t->SlotAddNoPlay(); break;
        case 49: _t->SlotNoPlayChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 50: _t->SlotContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FicsConsole::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FicsConsole::raiseRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FicsConsole::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FicsConsole::ReceivedBoard)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FicsConsole::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FicsConsole::RequestNewGame)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FicsConsole::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FicsConsole::RequestSaveGame)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FicsConsole::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FicsConsole::RequestGameMode)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FicsConsole::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FicsConsole::RequestRemoveLastMove)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FicsConsole::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FicsConsole::RequestAddTag)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FicsConsole::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FicsConsole::SignalGameResult)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FicsConsole::*)(bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FicsConsole::SignalPlayerIsBlack)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FicsConsole::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FicsConsole::SignalStartTime)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FicsConsole::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FicsConsole::RequestCloseFICS)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (FicsConsole::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FicsConsole::RequestStoredMove)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (FicsConsole::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FicsConsole::FicsShowTimer)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (FicsConsole::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FicsConsole::FicsShowTime)) {
                *result = 13;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FicsConsole::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_FicsConsole.data,
    qt_meta_data_FicsConsole,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FicsConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FicsConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FicsConsole.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FicsConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 51)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 51;
    }
    return _id;
}

// SIGNAL 0
void FicsConsole::raiseRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FicsConsole::ReceivedBoard(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FicsConsole::RequestNewGame()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FicsConsole::RequestSaveGame()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FicsConsole::RequestGameMode(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FicsConsole::RequestRemoveLastMove()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void FicsConsole::RequestAddTag(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FicsConsole::SignalGameResult(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FicsConsole::SignalPlayerIsBlack(bool _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FicsConsole::SignalStartTime(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FicsConsole::RequestCloseFICS()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void FicsConsole::RequestStoredMove()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void FicsConsole::FicsShowTimer(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void FicsConsole::FicsShowTime(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
