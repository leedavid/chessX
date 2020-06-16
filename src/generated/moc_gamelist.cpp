/****************************************************************************
** Meta object code from reading C++ file 'gamelist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gui/gamelist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameList_t {
    QByteArrayData data[72];
    char stringdata0[979];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameList_t qt_meta_stringdata_GameList = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GameList"
QT_MOC_LITERAL(1, 9, 12), // "gameSelected"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "GameId"
QT_MOC_LITERAL(4, 30, 12), // "raiseRequest"
QT_MOC_LITERAL(5, 43, 16), // "requestMergeGame"
QT_MOC_LITERAL(6, 60, 13), // "QList<GameId>"
QT_MOC_LITERAL(7, 74, 20), // "requestMergeAllGames"
QT_MOC_LITERAL(8, 95, 18), // "requestMergeFilter"
QT_MOC_LITERAL(9, 114, 15), // "requestCopyGame"
QT_MOC_LITERAL(10, 130, 21), // "requestFindDuplicates"
QT_MOC_LITERAL(11, 152, 17), // "requestDeleteGame"
QT_MOC_LITERAL(12, 170, 15), // "requestGameData"
QT_MOC_LITERAL(13, 186, 5), // "Game&"
QT_MOC_LITERAL(14, 192, 21), // "signalFirstGameLoaded"
QT_MOC_LITERAL(15, 214, 20), // "signalLastGameLoaded"
QT_MOC_LITERAL(16, 235, 16), // "signalFilterSize"
QT_MOC_LITERAL(17, 252, 15), // "signalDropEvent"
QT_MOC_LITERAL(18, 268, 11), // "QDropEvent*"
QT_MOC_LITERAL(19, 280, 14), // "searchProgress"
QT_MOC_LITERAL(20, 295, 14), // "searchFinished"
QT_MOC_LITERAL(21, 310, 18), // "requestAppendGames"
QT_MOC_LITERAL(22, 329, 4), // "path"
QT_MOC_LITERAL(23, 334, 7), // "indexes"
QT_MOC_LITERAL(24, 342, 6), // "source"
QT_MOC_LITERAL(25, 349, 9), // "setFilter"
QT_MOC_LITERAL(26, 359, 7), // "Filter*"
QT_MOC_LITERAL(27, 367, 6), // "filter"
QT_MOC_LITERAL(28, 374, 12), // "updateFilter"
QT_MOC_LITERAL(29, 387, 5), // "index"
QT_MOC_LITERAL(30, 393, 5), // "value"
QT_MOC_LITERAL(31, 399, 12), // "simpleSearch"
QT_MOC_LITERAL(32, 412, 3), // "tag"
QT_MOC_LITERAL(33, 416, 13), // "executeSearch"
QT_MOC_LITERAL(34, 430, 7), // "Search*"
QT_MOC_LITERAL(35, 438, 6), // "search"
QT_MOC_LITERAL(36, 445, 14), // "FilterOperator"
QT_MOC_LITERAL(37, 460, 14), // "searchOperator"
QT_MOC_LITERAL(38, 475, 9), // "endSearch"
QT_MOC_LITERAL(39, 485, 10), // "selectGame"
QT_MOC_LITERAL(40, 496, 22), // "slotFilterListByPlayer"
QT_MOC_LITERAL(41, 519, 2), // "ns"
QT_MOC_LITERAL(42, 522, 21), // "slotFilterListByEvent"
QT_MOC_LITERAL(43, 544, 19), // "slotFilterListByEco"
QT_MOC_LITERAL(44, 564, 27), // "slotFilterListByEventPlayer"
QT_MOC_LITERAL(45, 592, 6), // "player"
QT_MOC_LITERAL(46, 599, 5), // "event"
QT_MOC_LITERAL(47, 605, 25), // "slotFilterListByEcoPlayer"
QT_MOC_LITERAL(48, 631, 3), // "eco"
QT_MOC_LITERAL(49, 635, 6), // "result"
QT_MOC_LITERAL(50, 642, 14), // "selectNextGame"
QT_MOC_LITERAL(51, 657, 16), // "selectRandomGame"
QT_MOC_LITERAL(52, 674, 18), // "selectPreviousGame"
QT_MOC_LITERAL(53, 693, 15), // "ShowContextMenu"
QT_MOC_LITERAL(54, 709, 3), // "pos"
QT_MOC_LITERAL(55, 713, 15), // "slotReconfigure"
QT_MOC_LITERAL(56, 729, 12), // "filterInvert"
QT_MOC_LITERAL(57, 742, 12), // "filterSetAll"
QT_MOC_LITERAL(58, 755, 12), // "itemSelected"
QT_MOC_LITERAL(59, 768, 11), // "QModelIndex"
QT_MOC_LITERAL(60, 780, 15), // "slotContextMenu"
QT_MOC_LITERAL(61, 796, 17), // "slotMergeAllGames"
QT_MOC_LITERAL(62, 814, 15), // "slotMergeFilter"
QT_MOC_LITERAL(63, 830, 22), // "slotMergeSelectedGames"
QT_MOC_LITERAL(64, 853, 12), // "slotCopyGame"
QT_MOC_LITERAL(65, 866, 17), // "slotFindDuplicate"
QT_MOC_LITERAL(66, 884, 14), // "slotDeleteGame"
QT_MOC_LITERAL(67, 899, 12), // "slotHideGame"
QT_MOC_LITERAL(68, 912, 20), // "slotHideDeletedGames"
QT_MOC_LITERAL(69, 933, 16), // "slotItemSelected"
QT_MOC_LITERAL(70, 950, 20), // "triggerGameSelection"
QT_MOC_LITERAL(71, 971, 7) // "sortRow"

    },
    "GameList\0gameSelected\0\0GameId\0"
    "raiseRequest\0requestMergeGame\0"
    "QList<GameId>\0requestMergeAllGames\0"
    "requestMergeFilter\0requestCopyGame\0"
    "requestFindDuplicates\0requestDeleteGame\0"
    "requestGameData\0Game&\0signalFirstGameLoaded\0"
    "signalLastGameLoaded\0signalFilterSize\0"
    "signalDropEvent\0QDropEvent*\0searchProgress\0"
    "searchFinished\0requestAppendGames\0"
    "path\0indexes\0source\0setFilter\0Filter*\0"
    "filter\0updateFilter\0index\0value\0"
    "simpleSearch\0tag\0executeSearch\0Search*\0"
    "search\0FilterOperator\0searchOperator\0"
    "endSearch\0selectGame\0slotFilterListByPlayer\0"
    "ns\0slotFilterListByEvent\0slotFilterListByEco\0"
    "slotFilterListByEventPlayer\0player\0"
    "event\0slotFilterListByEcoPlayer\0eco\0"
    "result\0selectNextGame\0selectRandomGame\0"
    "selectPreviousGame\0ShowContextMenu\0"
    "pos\0slotReconfigure\0filterInvert\0"
    "filterSetAll\0itemSelected\0QModelIndex\0"
    "slotContextMenu\0slotMergeAllGames\0"
    "slotMergeFilter\0slotMergeSelectedGames\0"
    "slotCopyGame\0slotFindDuplicate\0"
    "slotDeleteGame\0slotHideGame\0"
    "slotHideDeletedGames\0slotItemSelected\0"
    "triggerGameSelection\0sortRow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  254,    2, 0x06 /* Public */,
       4,    0,  257,    2, 0x06 /* Public */,
       5,    1,  258,    2, 0x06 /* Public */,
       7,    0,  261,    2, 0x06 /* Public */,
       8,    0,  262,    2, 0x06 /* Public */,
       9,    1,  263,    2, 0x06 /* Public */,
      10,    1,  266,    2, 0x06 /* Public */,
      11,    1,  269,    2, 0x06 /* Public */,
      12,    1,  272,    2, 0x06 /* Public */,
      14,    1,  275,    2, 0x06 /* Public */,
      15,    1,  278,    2, 0x06 /* Public */,
      16,    1,  281,    2, 0x06 /* Public */,
      17,    1,  284,    2, 0x06 /* Public */,
      19,    1,  287,    2, 0x06 /* Public */,
      20,    0,  290,    2, 0x06 /* Public */,
      21,    3,  291,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    1,  298,    2, 0x0a /* Public */,
      28,    2,  301,    2, 0x0a /* Public */,
      31,    1,  306,    2, 0x0a /* Public */,
      33,    2,  309,    2, 0x0a /* Public */,
      33,    1,  314,    2, 0x2a /* Public | MethodCloned */,
      38,    0,  317,    2, 0x0a /* Public */,
      39,    1,  318,    2, 0x0a /* Public */,
      40,    1,  321,    2, 0x0a /* Public */,
      42,    1,  324,    2, 0x0a /* Public */,
      43,    1,  327,    2, 0x0a /* Public */,
      44,    2,  330,    2, 0x0a /* Public */,
      47,    4,  335,    2, 0x0a /* Public */,
      50,    0,  344,    2, 0x0a /* Public */,
      51,    0,  345,    2, 0x0a /* Public */,
      52,    0,  346,    2, 0x0a /* Public */,
      53,    1,  347,    2, 0x0a /* Public */,
      55,    0,  350,    2, 0x0a /* Public */,
      56,    0,  351,    2, 0x0a /* Public */,
      57,    1,  352,    2, 0x0a /* Public */,
      57,    0,  355,    2, 0x2a /* Public | MethodCloned */,
      58,    1,  356,    2, 0x08 /* Private */,
      60,    1,  359,    2, 0x08 /* Private */,
      61,    0,  362,    2, 0x08 /* Private */,
      62,    0,  363,    2, 0x08 /* Private */,
      63,    0,  364,    2, 0x08 /* Private */,
      64,    0,  365,    2, 0x08 /* Private */,
      65,    0,  366,    2, 0x08 /* Private */,
      66,    0,  367,    2, 0x08 /* Private */,
      67,    0,  368,    2, 0x08 /* Private */,
      68,    0,  369,    2, 0x08 /* Private */,
      69,    1,  370,    2, 0x08 /* Private */,
      70,    1,  373,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::ULongLong,    2,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6, QMetaType::QString,   22,   23,   24,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,   29,   30,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void, 0x80000000 | 34, 0x80000000 | 36,   35,   37,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   29,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   45,   46,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   32,   48,   45,   49,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 59,   29,
    QMetaType::Void, QMetaType::QPoint,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 59,    2,
    QMetaType::Bool, QMetaType::Int,   71,

       0        // eod
};

void GameList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gameSelected((*reinterpret_cast< GameId(*)>(_a[1]))); break;
        case 1: _t->raiseRequest(); break;
        case 2: _t->requestMergeGame((*reinterpret_cast< QList<GameId>(*)>(_a[1]))); break;
        case 3: _t->requestMergeAllGames(); break;
        case 4: _t->requestMergeFilter(); break;
        case 5: _t->requestCopyGame((*reinterpret_cast< QList<GameId>(*)>(_a[1]))); break;
        case 6: _t->requestFindDuplicates((*reinterpret_cast< QList<GameId>(*)>(_a[1]))); break;
        case 7: _t->requestDeleteGame((*reinterpret_cast< QList<GameId>(*)>(_a[1]))); break;
        case 8: _t->requestGameData((*reinterpret_cast< Game(*)>(_a[1]))); break;
        case 9: _t->signalFirstGameLoaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->signalLastGameLoaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->signalFilterSize((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 12: _t->signalDropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 13: _t->searchProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->searchFinished(); break;
        case 15: _t->requestAppendGames((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QList<GameId>(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 16: _t->setFilter((*reinterpret_cast< Filter*(*)>(_a[1]))); break;
        case 17: _t->updateFilter((*reinterpret_cast< GameId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->simpleSearch((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->executeSearch((*reinterpret_cast< Search*(*)>(_a[1])),(*reinterpret_cast< FilterOperator(*)>(_a[2]))); break;
        case 20: _t->executeSearch((*reinterpret_cast< Search*(*)>(_a[1]))); break;
        case 21: _t->endSearch(); break;
        case 22: _t->selectGame((*reinterpret_cast< GameId(*)>(_a[1]))); break;
        case 23: _t->slotFilterListByPlayer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->slotFilterListByEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->slotFilterListByEco((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->slotFilterListByEventPlayer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 27: _t->slotFilterListByEcoPlayer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 28: { bool _r = _t->selectNextGame();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->selectRandomGame(); break;
        case 30: _t->selectPreviousGame(); break;
        case 31: _t->ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 32: _t->slotReconfigure(); break;
        case 33: _t->filterInvert(); break;
        case 34: _t->filterSetAll((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->filterSetAll(); break;
        case 36: _t->itemSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 37: _t->slotContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 38: _t->slotMergeAllGames(); break;
        case 39: _t->slotMergeFilter(); break;
        case 40: _t->slotMergeSelectedGames(); break;
        case 41: _t->slotCopyGame(); break;
        case 42: _t->slotFindDuplicate(); break;
        case 43: _t->slotDeleteGame(); break;
        case 44: _t->slotHideGame(); break;
        case 45: _t->slotHideDeletedGames(); break;
        case 46: _t->slotItemSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 47: { bool _r = _t->triggerGameSelection((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameList::*)(GameId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::gameSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GameList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::raiseRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GameList::*)(QList<GameId> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::requestMergeGame)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GameList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::requestMergeAllGames)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GameList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::requestMergeFilter)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GameList::*)(QList<GameId> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::requestCopyGame)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GameList::*)(QList<GameId> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::requestFindDuplicates)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GameList::*)(QList<GameId> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::requestDeleteGame)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GameList::*)(Game & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::requestGameData)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (GameList::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::signalFirstGameLoaded)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (GameList::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::signalLastGameLoaded)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (GameList::*)(quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::signalFilterSize)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (GameList::*)(QDropEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::signalDropEvent)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (GameList::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::searchProgress)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (GameList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::searchFinished)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (GameList::*)(QString , QList<GameId> , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::requestAppendGames)) {
                *result = 15;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GameList::staticMetaObject = { {
    &TableView::staticMetaObject,
    qt_meta_stringdata_GameList.data,
    qt_meta_data_GameList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GameList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameList.stringdata0))
        return static_cast<void*>(this);
    return TableView::qt_metacast(_clname);
}

int GameList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 48;
    }
    return _id;
}

// SIGNAL 0
void GameList::gameSelected(GameId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GameList::raiseRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GameList::requestMergeGame(QList<GameId> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GameList::requestMergeAllGames()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GameList::requestMergeFilter()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void GameList::requestCopyGame(QList<GameId> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GameList::requestFindDuplicates(QList<GameId> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GameList::requestDeleteGame(QList<GameId> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GameList::requestGameData(Game & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GameList::signalFirstGameLoaded(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GameList::signalLastGameLoaded(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GameList::signalFilterSize(quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GameList::signalDropEvent(QDropEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void GameList::searchProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void GameList::searchFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void GameList::requestAppendGames(QString _t1, QList<GameId> _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
