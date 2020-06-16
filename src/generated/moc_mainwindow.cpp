/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gui/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[301];
    char stringdata0[4627];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "reconfigure"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "boardChange"
QT_MOC_LITERAL(4, 36, 5), // "Board"
QT_MOC_LITERAL(5, 42, 5), // "board"
QT_MOC_LITERAL(6, 48, 4), // "line"
QT_MOC_LITERAL(7, 53, 15), // "databaseChanged"
QT_MOC_LITERAL(8, 69, 13), // "DatabaseInfo*"
QT_MOC_LITERAL(9, 83, 12), // "databaseInfo"
QT_MOC_LITERAL(10, 96, 12), // "LoadFinished"
QT_MOC_LITERAL(11, 109, 11), // "displayTime"
QT_MOC_LITERAL(12, 121, 5), // "Color"
QT_MOC_LITERAL(13, 127, 22), // "signalMoveHasVariation"
QT_MOC_LITERAL(14, 150, 25), // "signalVariationHasSibling"
QT_MOC_LITERAL(15, 176, 25), // "signalMoveHasPreviousMove"
QT_MOC_LITERAL(16, 202, 21), // "signalMoveHasNextMove"
QT_MOC_LITERAL(17, 224, 19), // "signalMoveHasParent"
QT_MOC_LITERAL(18, 244, 17), // "signalGameIsEmpty"
QT_MOC_LITERAL(19, 262, 21), // "signalGameAtLineStart"
QT_MOC_LITERAL(20, 284, 17), // "signalFilterEmpty"
QT_MOC_LITERAL(21, 302, 21), // "signalGameModeChanged"
QT_MOC_LITERAL(22, 324, 18), // "signalGameModified"
QT_MOC_LITERAL(23, 343, 15), // "gameNeedsSaving"
QT_MOC_LITERAL(24, 359, 26), // "signalCurrentDBisReadWrite"
QT_MOC_LITERAL(25, 386, 26), // "signalCurrentDBcanBeClosed"
QT_MOC_LITERAL(26, 413, 23), // "signalCurrentDBhasGames"
QT_MOC_LITERAL(27, 437, 16), // "signalGameLoaded"
QT_MOC_LITERAL(28, 454, 8), // "startPos"
QT_MOC_LITERAL(29, 463, 18), // "signalVersionFound"
QT_MOC_LITERAL(30, 482, 16), // "databaseModified"
QT_MOC_LITERAL(31, 499, 23), // "signalDatabaseOpenClose"
QT_MOC_LITERAL(32, 523, 24), // "signalUpdateDatabaseList"
QT_MOC_LITERAL(33, 548, 9), // "enterText"
QT_MOC_LITERAL(34, 558, 18), // "slotToggleGameMode"
QT_MOC_LITERAL(35, 577, 12), // "slotFlipView"
QT_MOC_LITERAL(36, 590, 13), // "enterGameMode"
QT_MOC_LITERAL(37, 604, 8), // "gameMode"
QT_MOC_LITERAL(38, 613, 15), // "enterNoHintMode"
QT_MOC_LITERAL(39, 629, 12), // "openDatabase"
QT_MOC_LITERAL(40, 642, 5), // "fname"
QT_MOC_LITERAL(41, 648, 15), // "openDatabaseUrl"
QT_MOC_LITERAL(42, 664, 4), // "utf8"
QT_MOC_LITERAL(43, 669, 19), // "openDatabaseArchive"
QT_MOC_LITERAL(44, 689, 16), // "openDatabaseFile"
QT_MOC_LITERAL(45, 706, 19), // "setFavoriteDatabase"
QT_MOC_LITERAL(46, 726, 18), // "slotEditVarPromote"
QT_MOC_LITERAL(47, 745, 17), // "slotEditVarRemove"
QT_MOC_LITERAL(48, 763, 13), // "slotEditBoard"
QT_MOC_LITERAL(49, 777, 15), // "slotEditComment"
QT_MOC_LITERAL(50, 793, 21), // "slotEditCommentBefore"
QT_MOC_LITERAL(51, 815, 15), // "slotEditCopyFEN"
QT_MOC_LITERAL(52, 831, 20), // "slotEditCopyHumanFEN"
QT_MOC_LITERAL(53, 852, 16), // "slotEditPasteFEN"
QT_MOC_LITERAL(54, 869, 15), // "slotEditCopyPGN"
QT_MOC_LITERAL(55, 885, 16), // "slotEditPastePGN"
QT_MOC_LITERAL(56, 902, 13), // "slotEditPaste"
QT_MOC_LITERAL(57, 916, 17), // "slotEditCopyImage"
QT_MOC_LITERAL(58, 934, 19), // "slotEditTruncateEnd"
QT_MOC_LITERAL(59, 954, 21), // "slotEditTruncateStart"
QT_MOC_LITERAL(60, 976, 12), // "slotSendMail"
QT_MOC_LITERAL(61, 989, 15), // "slotReconfigure"
QT_MOC_LITERAL(62, 1005, 13), // "slotConfigure"
QT_MOC_LITERAL(63, 1019, 4), // "page"
QT_MOC_LITERAL(64, 1024, 13), // "slotHelpAbout"
QT_MOC_LITERAL(65, 1038, 11), // "slotHelpBug"
QT_MOC_LITERAL(66, 1050, 17), // "slotConfigureFlip"
QT_MOC_LITERAL(67, 1068, 17), // "slotGameMoveFirst"
QT_MOC_LITERAL(68, 1086, 16), // "slotGameMoveNext"
QT_MOC_LITERAL(69, 1103, 20), // "slotGameMovePrevious"
QT_MOC_LITERAL(70, 1124, 16), // "slotGameMoveLast"
QT_MOC_LITERAL(71, 1141, 17), // "slotGameMoveNextN"
QT_MOC_LITERAL(72, 1159, 21), // "slotGameMovePreviousN"
QT_MOC_LITERAL(73, 1181, 16), // "slotGameLoadNext"
QT_MOC_LITERAL(74, 1198, 20), // "slotGameLoadPrevious"
QT_MOC_LITERAL(75, 1219, 18), // "slotGameLoadRandom"
QT_MOC_LITERAL(76, 1238, 18), // "slotGameLoadChosen"
QT_MOC_LITERAL(77, 1257, 16), // "slotGameVarEnter"
QT_MOC_LITERAL(78, 1274, 13), // "slotGameVarUp"
QT_MOC_LITERAL(79, 1288, 15), // "slotGameVarDown"
QT_MOC_LITERAL(80, 1304, 15), // "slotGameVarExit"
QT_MOC_LITERAL(81, 1320, 14), // "slotGameModify"
QT_MOC_LITERAL(82, 1335, 10), // "EditAction"
QT_MOC_LITERAL(83, 1346, 6), // "action"
QT_MOC_LITERAL(84, 1353, 17), // "slotGetActiveGame"
QT_MOC_LITERAL(85, 1371, 12), // "const Game**"
QT_MOC_LITERAL(86, 1384, 4), // "game"
QT_MOC_LITERAL(87, 1389, 19), // "slotMergeActiveGame"
QT_MOC_LITERAL(88, 1409, 13), // "QList<GameId>"
QT_MOC_LITERAL(89, 1423, 13), // "gameIndexList"
QT_MOC_LITERAL(90, 1437, 6), // "GameId"
QT_MOC_LITERAL(91, 1444, 9), // "gameIndex"
QT_MOC_LITERAL(92, 1454, 6), // "source"
QT_MOC_LITERAL(93, 1461, 17), // "slotMergeAllGames"
QT_MOC_LITERAL(94, 1479, 15), // "slotMergeFilter"
QT_MOC_LITERAL(95, 1495, 15), // "slotGameChanged"
QT_MOC_LITERAL(96, 1511, 9), // "bModified"
QT_MOC_LITERAL(97, 1521, 16), // "slotGameViewLink"
QT_MOC_LITERAL(98, 1538, 4), // "link"
QT_MOC_LITERAL(99, 1543, 18), // "slotGameViewSource"
QT_MOC_LITERAL(100, 1562, 21), // "slotGameDumpMoveNodes"
QT_MOC_LITERAL(101, 1584, 17), // "slotGameDumpBoard"
QT_MOC_LITERAL(102, 1602, 11), // "slotGameNew"
QT_MOC_LITERAL(103, 1614, 12), // "slotGameSave"
QT_MOC_LITERAL(104, 1627, 16), // "slotGameSaveOnly"
QT_MOC_LITERAL(105, 1644, 16), // "slotGameEditTags"
QT_MOC_LITERAL(106, 1661, 20), // "slotGameAddVariation"
QT_MOC_LITERAL(107, 1682, 8), // "Analysis"
QT_MOC_LITERAL(108, 1691, 8), // "analysis"
QT_MOC_LITERAL(109, 1700, 10), // "annotation"
QT_MOC_LITERAL(110, 1711, 3), // "san"
QT_MOC_LITERAL(111, 1715, 17), // "slotGameUncomment"
QT_MOC_LITERAL(112, 1733, 18), // "slotGameRemoveTime"
QT_MOC_LITERAL(113, 1752, 21), // "slotDatabaseUncomment"
QT_MOC_LITERAL(114, 1774, 22), // "slotDatabaseRemoveTime"
QT_MOC_LITERAL(115, 1797, 24), // "slotGameRemoveVariations"
QT_MOC_LITERAL(116, 1822, 28), // "slotDatabaseRemoveVariations"
QT_MOC_LITERAL(117, 1851, 18), // "slotGameSetComment"
QT_MOC_LITERAL(118, 1870, 20), // "slotToggleAutoPlayer"
QT_MOC_LITERAL(119, 1891, 20), // "slotToggleGamePlayer"
QT_MOC_LITERAL(120, 1912, 22), // "slotToggleAutoAnalysis"
QT_MOC_LITERAL(121, 1935, 19), // "slotAutoPlayTimeout"
QT_MOC_LITERAL(122, 1955, 17), // "slotEngineTimeout"
QT_MOC_LITERAL(123, 1973, 10), // "addAutoNag"
QT_MOC_LITERAL(124, 1984, 6), // "toMove"
QT_MOC_LITERAL(125, 1991, 9), // "scoreText"
QT_MOC_LITERAL(126, 2001, 9), // "lastScore"
QT_MOC_LITERAL(127, 2011, 10), // "threashold"
QT_MOC_LITERAL(128, 2022, 6), // "MoveId"
QT_MOC_LITERAL(129, 2029, 4), // "node"
QT_MOC_LITERAL(130, 2034, 17), // "slotFilterChanged"
QT_MOC_LITERAL(131, 2052, 10), // "selectGame"
QT_MOC_LITERAL(132, 2063, 21), // "slotFilterSizeChanged"
QT_MOC_LITERAL(133, 2085, 7), // "newSize"
QT_MOC_LITERAL(134, 2093, 14), // "slotFilterLoad"
QT_MOC_LITERAL(135, 2108, 5), // "index"
QT_MOC_LITERAL(136, 2114, 11), // "slotFileNew"
QT_MOC_LITERAL(137, 2126, 12), // "slotFileOpen"
QT_MOC_LITERAL(138, 2139, 16), // "slotFileOpenUtf8"
QT_MOC_LITERAL(139, 2156, 12), // "slotFileSave"
QT_MOC_LITERAL(140, 2169, 18), // "slotFileOpenRecent"
QT_MOC_LITERAL(141, 2188, 18), // "slotFileExportGame"
QT_MOC_LITERAL(142, 2207, 20), // "slotFileExportFilter"
QT_MOC_LITERAL(143, 2228, 17), // "slotFileExportAll"
QT_MOC_LITERAL(144, 2246, 13), // "slotFileClose"
QT_MOC_LITERAL(145, 2260, 18), // "slotFileCloseIndex"
QT_MOC_LITERAL(146, 2279, 7), // "dontAsk"
QT_MOC_LITERAL(147, 2287, 17), // "slotFileCloseName"
QT_MOC_LITERAL(148, 2305, 12), // "slotFileQuit"
QT_MOC_LITERAL(149, 2318, 13), // "slotSearchTag"
QT_MOC_LITERAL(150, 2332, 15), // "slotSearchBoard"
QT_MOC_LITERAL(151, 2348, 22), // "slotBoardSearchStarted"
QT_MOC_LITERAL(152, 2371, 21), // "slotBoardSearchUpdate"
QT_MOC_LITERAL(153, 2393, 8), // "progress"
QT_MOC_LITERAL(154, 2402, 23), // "slotBoardSearchFinished"
QT_MOC_LITERAL(155, 2426, 15), // "slotSearchReset"
QT_MOC_LITERAL(156, 2442, 18), // "slotToggleTraining"
QT_MOC_LITERAL(157, 2461, 19), // "slotToggleTraining2"
QT_MOC_LITERAL(158, 2481, 21), // "slotToggleAutoRespond"
QT_MOC_LITERAL(159, 2503, 17), // "slotSearchReverse"
QT_MOC_LITERAL(160, 2521, 14), // "slotTreeUpdate"
QT_MOC_LITERAL(161, 2536, 16), // "dbIsFilterSource"
QT_MOC_LITERAL(162, 2553, 20), // "slotGameFilterUpdate"
QT_MOC_LITERAL(163, 2574, 5), // "value"
QT_MOC_LITERAL(164, 2580, 14), // "slotSearchTree"
QT_MOC_LITERAL(165, 2595, 18), // "slotSearchTreeMove"
QT_MOC_LITERAL(166, 2614, 11), // "QModelIndex"
QT_MOC_LITERAL(167, 2626, 13), // "slotBoardMove"
QT_MOC_LITERAL(168, 2640, 6), // "Square"
QT_MOC_LITERAL(169, 2647, 4), // "from"
QT_MOC_LITERAL(170, 2652, 2), // "to"
QT_MOC_LITERAL(171, 2655, 6), // "button"
QT_MOC_LITERAL(172, 2662, 15), // "slotEvalRequest"
QT_MOC_LITERAL(173, 2678, 12), // "slotEvalMove"
QT_MOC_LITERAL(174, 2691, 15), // "slotResumeBoard"
QT_MOC_LITERAL(175, 2707, 14), // "slotBoardClick"
QT_MOC_LITERAL(176, 2722, 6), // "square"
QT_MOC_LITERAL(177, 2729, 3), // "pos"
QT_MOC_LITERAL(178, 2733, 18), // "slotBoardMoveWheel"
QT_MOC_LITERAL(179, 2752, 5), // "wheel"
QT_MOC_LITERAL(180, 2758, 15), // "slotMoveChanged"
QT_MOC_LITERAL(181, 2774, 17), // "slotGameMoveToPly"
QT_MOC_LITERAL(182, 2792, 3), // "ply"
QT_MOC_LITERAL(183, 2796, 17), // "slotStatusMessage"
QT_MOC_LITERAL(184, 2814, 3), // "msg"
QT_MOC_LITERAL(185, 2818, 21), // "slotStatusMessageHint"
QT_MOC_LITERAL(186, 2840, 21), // "slotOperationProgress"
QT_MOC_LITERAL(187, 2862, 18), // "slotDatabaseChange"
QT_MOC_LITERAL(188, 2881, 16), // "slotDatabaseCopy"
QT_MOC_LITERAL(189, 2898, 32), // "slotDatabaseFilterDuplicateGames"
QT_MOC_LITERAL(190, 2931, 31), // "slotDatabaseFilterDuplicateTags"
QT_MOC_LITERAL(191, 2963, 26), // "slotDatabaseClearClipboard"
QT_MOC_LITERAL(192, 2990, 26), // "slotDatabaseFindDuplicates"
QT_MOC_LITERAL(193, 3017, 9), // "listGames"
QT_MOC_LITERAL(194, 3027, 19), // "slotDatabaseChanged"
QT_MOC_LITERAL(195, 3047, 22), // "slotDatabaseDeleteGame"
QT_MOC_LITERAL(196, 3070, 18), // "slotDataBaseLoaded"
QT_MOC_LITERAL(197, 3089, 2), // "db"
QT_MOC_LITERAL(198, 3092, 18), // "slotDbRestoreState"
QT_MOC_LITERAL(199, 3111, 4), // "Game"
QT_MOC_LITERAL(200, 3116, 15), // "slotGetGameData"
QT_MOC_LITERAL(201, 3132, 5), // "Game&"
QT_MOC_LITERAL(202, 3138, 1), // "g"
QT_MOC_LITERAL(203, 3140, 9), // "copyGames"
QT_MOC_LITERAL(204, 3150, 11), // "destination"
QT_MOC_LITERAL(205, 3162, 7), // "indexes"
QT_MOC_LITERAL(206, 3170, 12), // "copyDatabase"
QT_MOC_LITERAL(207, 3183, 6), // "target"
QT_MOC_LITERAL(208, 3190, 3), // "src"
QT_MOC_LITERAL(209, 3194, 15), // "slotRenameEvent"
QT_MOC_LITERAL(210, 3210, 2), // "ts"
QT_MOC_LITERAL(211, 3213, 16), // "slotRenamePlayer"
QT_MOC_LITERAL(212, 3230, 17), // "slotRenameRequest"
QT_MOC_LITERAL(213, 3248, 3), // "tag"
QT_MOC_LITERAL(214, 3252, 8), // "newValue"
QT_MOC_LITERAL(215, 3261, 8), // "oldValue"
QT_MOC_LITERAL(216, 3270, 15), // "slotExportImage"
QT_MOC_LITERAL(217, 3286, 12), // "slotMakeBook"
QT_MOC_LITERAL(218, 3299, 1), // "s"
QT_MOC_LITERAL(219, 3301, 16), // "slotShowInFinder"
QT_MOC_LITERAL(220, 3318, 4), // "path"
QT_MOC_LITERAL(221, 3323, 12), // "slotBookDone"
QT_MOC_LITERAL(222, 3336, 15), // "PolyglotWriter*"
QT_MOC_LITERAL(223, 3352, 6), // "writer"
QT_MOC_LITERAL(224, 3359, 18), // "slotBookBuildError"
QT_MOC_LITERAL(225, 3378, 16), // "slotEditMergePGN"
QT_MOC_LITERAL(226, 3395, 20), // "slotCreateBoardImage"
QT_MOC_LITERAL(227, 3416, 7), // "QImage&"
QT_MOC_LITERAL(228, 3424, 7), // "scaling"
QT_MOC_LITERAL(229, 3432, 22), // "HandleFicsBoardRequest"
QT_MOC_LITERAL(230, 3455, 23), // "HandleFicsResultRequest"
QT_MOC_LITERAL(231, 3479, 24), // "HandleFicsNewGameRequest"
QT_MOC_LITERAL(232, 3504, 25), // "HandleFicsSaveGameRequest"
QT_MOC_LITERAL(233, 3530, 23), // "HandleFicsAddTagRequest"
QT_MOC_LITERAL(234, 3554, 22), // "HandleFicsCloseRequest"
QT_MOC_LITERAL(235, 3577, 13), // "SlotShowTimer"
QT_MOC_LITERAL(236, 3591, 4), // "show"
QT_MOC_LITERAL(237, 3596, 15), // "SlotDisplayTime"
QT_MOC_LITERAL(238, 3612, 5), // "color"
QT_MOC_LITERAL(239, 3618, 1), // "t"
QT_MOC_LITERAL(240, 3620, 19), // "slotDatabaseDropped"
QT_MOC_LITERAL(241, 3640, 11), // "QDropEvent*"
QT_MOC_LITERAL(242, 3652, 26), // "slotDatabaseDroppedHandler"
QT_MOC_LITERAL(243, 3679, 3), // "url"
QT_MOC_LITERAL(244, 3683, 8), // "filename"
QT_MOC_LITERAL(245, 3692, 25), // "slotDatabaseDroppedFailed"
QT_MOC_LITERAL(246, 3718, 21), // "slotEngineModeChanged"
QT_MOC_LITERAL(247, 3740, 4), // "mode"
QT_MOC_LITERAL(248, 3745, 16), // "updateMenuRecent"
QT_MOC_LITERAL(249, 3762, 19), // "updateMenuDatabases"
QT_MOC_LITERAL(250, 3782, 9), // "loadError"
QT_MOC_LITERAL(251, 3792, 9), // "loadReady"
QT_MOC_LITERAL(252, 3802, 8), // "fileName"
QT_MOC_LITERAL(253, 3811, 17), // "slotNoColorSquare"
QT_MOC_LITERAL(254, 3829, 15), // "slotGreenSquare"
QT_MOC_LITERAL(255, 3845, 16), // "slotYellowSquare"
QT_MOC_LITERAL(256, 3862, 13), // "slotRedSquare"
QT_MOC_LITERAL(257, 3876, 15), // "slotNoArrowHere"
QT_MOC_LITERAL(258, 3892, 18), // "slotGreenArrowHere"
QT_MOC_LITERAL(259, 3911, 19), // "slotYellowArrowHere"
QT_MOC_LITERAL(260, 3931, 16), // "slotRedArrowHere"
QT_MOC_LITERAL(261, 3948, 19), // "slotToggleStayOnTop"
QT_MOC_LITERAL(262, 3968, 21), // "slotActivateBoardView"
QT_MOC_LITERAL(263, 3990, 18), // "slotCloseTabWidget"
QT_MOC_LITERAL(264, 4009, 1), // "n"
QT_MOC_LITERAL(265, 4011, 14), // "slotScreenShot"
QT_MOC_LITERAL(266, 4026, 14), // "slotCompileECO"
QT_MOC_LITERAL(267, 4041, 17), // "slotAutoSwitchTab"
QT_MOC_LITERAL(268, 4059, 15), // "slotEditActions"
QT_MOC_LITERAL(269, 4075, 23), // "slotMoveIntervalChanged"
QT_MOC_LITERAL(270, 4099, 17), // "slotSetSliderText"
QT_MOC_LITERAL(271, 4117, 17), // "QueryLoadDatabase"
QT_MOC_LITERAL(272, 4135, 16), // "FicsDisconnected"
QT_MOC_LITERAL(273, 4152, 13), // "FicsConnected"
QT_MOC_LITERAL(274, 4166, 27), // "HandleFicsRequestRemoveMove"
QT_MOC_LITERAL(275, 4194, 8), // "openFICS"
QT_MOC_LITERAL(276, 4203, 15), // "openWebFavorite"
QT_MOC_LITERAL(277, 4219, 21), // "slotToggleEngineMatch"
QT_MOC_LITERAL(278, 4241, 21), // "slotUpdateOpeningBook"
QT_MOC_LITERAL(279, 4263, 4), // "name"
QT_MOC_LITERAL(280, 4268, 19), // "slotRestartAnalysis"
QT_MOC_LITERAL(281, 4288, 19), // "slotBoardStoredMove"
QT_MOC_LITERAL(282, 4308, 18), // "slotLoadRecentGame"
QT_MOC_LITERAL(283, 4327, 15), // "slotToggleBrush"
QT_MOC_LITERAL(284, 4343, 20), // "slotShowTargetFields"
QT_MOC_LITERAL(285, 4364, 14), // "slotShowThreat"
QT_MOC_LITERAL(286, 4379, 20), // "slotShowWhiteAttacks"
QT_MOC_LITERAL(287, 4400, 20), // "slotShowBlackAttacks"
QT_MOC_LITERAL(288, 4421, 27), // "slotShowUnderprotectedWhite"
QT_MOC_LITERAL(289, 4449, 27), // "slotShowUnderprotectedBlack"
QT_MOC_LITERAL(290, 4477, 21), // "cancelPolyglotWriters"
QT_MOC_LITERAL(291, 4499, 9), // "ecoLoaded"
QT_MOC_LITERAL(292, 4509, 20), // "slotDatabaseModified"
QT_MOC_LITERAL(293, 4530, 12), // "slotHttpDone"
QT_MOC_LITERAL(294, 4543, 14), // "QNetworkReply*"
QT_MOC_LITERAL(295, 4558, 5), // "reply"
QT_MOC_LITERAL(296, 4564, 16), // "slotVersionFound"
QT_MOC_LITERAL(297, 4581, 5), // "major"
QT_MOC_LITERAL(298, 4587, 5), // "minor"
QT_MOC_LITERAL(299, 4593, 5), // "build"
QT_MOC_LITERAL(300, 4599, 27) // "slotUpdateOpeningTreeWidget"

    },
    "MainWindow\0reconfigure\0\0boardChange\0"
    "Board\0board\0line\0databaseChanged\0"
    "DatabaseInfo*\0databaseInfo\0LoadFinished\0"
    "displayTime\0Color\0signalMoveHasVariation\0"
    "signalVariationHasSibling\0"
    "signalMoveHasPreviousMove\0"
    "signalMoveHasNextMove\0signalMoveHasParent\0"
    "signalGameIsEmpty\0signalGameAtLineStart\0"
    "signalFilterEmpty\0signalGameModeChanged\0"
    "signalGameModified\0gameNeedsSaving\0"
    "signalCurrentDBisReadWrite\0"
    "signalCurrentDBcanBeClosed\0"
    "signalCurrentDBhasGames\0signalGameLoaded\0"
    "startPos\0signalVersionFound\0"
    "databaseModified\0signalDatabaseOpenClose\0"
    "signalUpdateDatabaseList\0enterText\0"
    "slotToggleGameMode\0slotFlipView\0"
    "enterGameMode\0gameMode\0enterNoHintMode\0"
    "openDatabase\0fname\0openDatabaseUrl\0"
    "utf8\0openDatabaseArchive\0openDatabaseFile\0"
    "setFavoriteDatabase\0slotEditVarPromote\0"
    "slotEditVarRemove\0slotEditBoard\0"
    "slotEditComment\0slotEditCommentBefore\0"
    "slotEditCopyFEN\0slotEditCopyHumanFEN\0"
    "slotEditPasteFEN\0slotEditCopyPGN\0"
    "slotEditPastePGN\0slotEditPaste\0"
    "slotEditCopyImage\0slotEditTruncateEnd\0"
    "slotEditTruncateStart\0slotSendMail\0"
    "slotReconfigure\0slotConfigure\0page\0"
    "slotHelpAbout\0slotHelpBug\0slotConfigureFlip\0"
    "slotGameMoveFirst\0slotGameMoveNext\0"
    "slotGameMovePrevious\0slotGameMoveLast\0"
    "slotGameMoveNextN\0slotGameMovePreviousN\0"
    "slotGameLoadNext\0slotGameLoadPrevious\0"
    "slotGameLoadRandom\0slotGameLoadChosen\0"
    "slotGameVarEnter\0slotGameVarUp\0"
    "slotGameVarDown\0slotGameVarExit\0"
    "slotGameModify\0EditAction\0action\0"
    "slotGetActiveGame\0const Game**\0game\0"
    "slotMergeActiveGame\0QList<GameId>\0"
    "gameIndexList\0GameId\0gameIndex\0source\0"
    "slotMergeAllGames\0slotMergeFilter\0"
    "slotGameChanged\0bModified\0slotGameViewLink\0"
    "link\0slotGameViewSource\0slotGameDumpMoveNodes\0"
    "slotGameDumpBoard\0slotGameNew\0"
    "slotGameSave\0slotGameSaveOnly\0"
    "slotGameEditTags\0slotGameAddVariation\0"
    "Analysis\0analysis\0annotation\0san\0"
    "slotGameUncomment\0slotGameRemoveTime\0"
    "slotDatabaseUncomment\0slotDatabaseRemoveTime\0"
    "slotGameRemoveVariations\0"
    "slotDatabaseRemoveVariations\0"
    "slotGameSetComment\0slotToggleAutoPlayer\0"
    "slotToggleGamePlayer\0slotToggleAutoAnalysis\0"
    "slotAutoPlayTimeout\0slotEngineTimeout\0"
    "addAutoNag\0toMove\0scoreText\0lastScore\0"
    "threashold\0MoveId\0node\0slotFilterChanged\0"
    "selectGame\0slotFilterSizeChanged\0"
    "newSize\0slotFilterLoad\0index\0slotFileNew\0"
    "slotFileOpen\0slotFileOpenUtf8\0"
    "slotFileSave\0slotFileOpenRecent\0"
    "slotFileExportGame\0slotFileExportFilter\0"
    "slotFileExportAll\0slotFileClose\0"
    "slotFileCloseIndex\0dontAsk\0slotFileCloseName\0"
    "slotFileQuit\0slotSearchTag\0slotSearchBoard\0"
    "slotBoardSearchStarted\0slotBoardSearchUpdate\0"
    "progress\0slotBoardSearchFinished\0"
    "slotSearchReset\0slotToggleTraining\0"
    "slotToggleTraining2\0slotToggleAutoRespond\0"
    "slotSearchReverse\0slotTreeUpdate\0"
    "dbIsFilterSource\0slotGameFilterUpdate\0"
    "value\0slotSearchTree\0slotSearchTreeMove\0"
    "QModelIndex\0slotBoardMove\0Square\0from\0"
    "to\0button\0slotEvalRequest\0slotEvalMove\0"
    "slotResumeBoard\0slotBoardClick\0square\0"
    "pos\0slotBoardMoveWheel\0wheel\0"
    "slotMoveChanged\0slotGameMoveToPly\0ply\0"
    "slotStatusMessage\0msg\0slotStatusMessageHint\0"
    "slotOperationProgress\0slotDatabaseChange\0"
    "slotDatabaseCopy\0slotDatabaseFilterDuplicateGames\0"
    "slotDatabaseFilterDuplicateTags\0"
    "slotDatabaseClearClipboard\0"
    "slotDatabaseFindDuplicates\0listGames\0"
    "slotDatabaseChanged\0slotDatabaseDeleteGame\0"
    "slotDataBaseLoaded\0db\0slotDbRestoreState\0"
    "Game\0slotGetGameData\0Game&\0g\0copyGames\0"
    "destination\0indexes\0copyDatabase\0"
    "target\0src\0slotRenameEvent\0ts\0"
    "slotRenamePlayer\0slotRenameRequest\0"
    "tag\0newValue\0oldValue\0slotExportImage\0"
    "slotMakeBook\0s\0slotShowInFinder\0path\0"
    "slotBookDone\0PolyglotWriter*\0writer\0"
    "slotBookBuildError\0slotEditMergePGN\0"
    "slotCreateBoardImage\0QImage&\0scaling\0"
    "HandleFicsBoardRequest\0HandleFicsResultRequest\0"
    "HandleFicsNewGameRequest\0"
    "HandleFicsSaveGameRequest\0"
    "HandleFicsAddTagRequest\0HandleFicsCloseRequest\0"
    "SlotShowTimer\0show\0SlotDisplayTime\0"
    "color\0t\0slotDatabaseDropped\0QDropEvent*\0"
    "slotDatabaseDroppedHandler\0url\0filename\0"
    "slotDatabaseDroppedFailed\0"
    "slotEngineModeChanged\0mode\0updateMenuRecent\0"
    "updateMenuDatabases\0loadError\0loadReady\0"
    "fileName\0slotNoColorSquare\0slotGreenSquare\0"
    "slotYellowSquare\0slotRedSquare\0"
    "slotNoArrowHere\0slotGreenArrowHere\0"
    "slotYellowArrowHere\0slotRedArrowHere\0"
    "slotToggleStayOnTop\0slotActivateBoardView\0"
    "slotCloseTabWidget\0n\0slotScreenShot\0"
    "slotCompileECO\0slotAutoSwitchTab\0"
    "slotEditActions\0slotMoveIntervalChanged\0"
    "slotSetSliderText\0QueryLoadDatabase\0"
    "FicsDisconnected\0FicsConnected\0"
    "HandleFicsRequestRemoveMove\0openFICS\0"
    "openWebFavorite\0slotToggleEngineMatch\0"
    "slotUpdateOpeningBook\0name\0"
    "slotRestartAnalysis\0slotBoardStoredMove\0"
    "slotLoadRecentGame\0slotToggleBrush\0"
    "slotShowTargetFields\0slotShowThreat\0"
    "slotShowWhiteAttacks\0slotShowBlackAttacks\0"
    "slotShowUnderprotectedWhite\0"
    "slotShowUnderprotectedBlack\0"
    "cancelPolyglotWriters\0ecoLoaded\0"
    "slotDatabaseModified\0slotHttpDone\0"
    "QNetworkReply*\0reply\0slotVersionFound\0"
    "major\0minor\0build\0slotUpdateOpeningTreeWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     229,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      24,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0, 1159,    2, 0x06 /* Public */,
       3,    2, 1160,    2, 0x06 /* Public */,
       7,    1, 1165,    2, 0x06 /* Public */,
      10,    1, 1168,    2, 0x06 /* Public */,
      11,    3, 1171,    2, 0x06 /* Public */,
      13,    1, 1178,    2, 0x06 /* Public */,
      14,    1, 1181,    2, 0x06 /* Public */,
      15,    1, 1184,    2, 0x06 /* Public */,
      16,    1, 1187,    2, 0x06 /* Public */,
      17,    1, 1190,    2, 0x06 /* Public */,
      18,    1, 1193,    2, 0x06 /* Public */,
      19,    1, 1196,    2, 0x06 /* Public */,
      20,    1, 1199,    2, 0x06 /* Public */,
      21,    1, 1202,    2, 0x06 /* Public */,
      22,    1, 1205,    2, 0x06 /* Public */,
      24,    1, 1208,    2, 0x06 /* Public */,
      25,    1, 1211,    2, 0x06 /* Public */,
      26,    1, 1214,    2, 0x06 /* Public */,
      27,    1, 1217,    2, 0x06 /* Public */,
      29,    3, 1220,    2, 0x06 /* Public */,
      30,    0, 1227,    2, 0x06 /* Public */,
      31,    0, 1228,    2, 0x06 /* Public */,
      32,    1, 1229,    2, 0x06 /* Public */,
      33,    1, 1232,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      34,    0, 1235,    2, 0x0a /* Public */,
      35,    1, 1236,    2, 0x0a /* Public */,
      36,    1, 1239,    2, 0x0a /* Public */,
      38,    1, 1242,    2, 0x0a /* Public */,
      39,    1, 1245,    2, 0x0a /* Public */,
      41,    2, 1248,    2, 0x0a /* Public */,
      43,    2, 1253,    2, 0x0a /* Public */,
      44,    2, 1258,    2, 0x0a /* Public */,
      45,    1, 1263,    2, 0x0a /* Public */,
      46,    0, 1266,    2, 0x0a /* Public */,
      47,    0, 1267,    2, 0x0a /* Public */,
      48,    0, 1268,    2, 0x0a /* Public */,
      49,    0, 1269,    2, 0x0a /* Public */,
      50,    0, 1270,    2, 0x0a /* Public */,
      51,    0, 1271,    2, 0x0a /* Public */,
      52,    0, 1272,    2, 0x0a /* Public */,
      53,    0, 1273,    2, 0x0a /* Public */,
      54,    0, 1274,    2, 0x0a /* Public */,
      55,    0, 1275,    2, 0x0a /* Public */,
      56,    0, 1276,    2, 0x0a /* Public */,
      57,    0, 1277,    2, 0x0a /* Public */,
      58,    0, 1278,    2, 0x0a /* Public */,
      59,    0, 1279,    2, 0x0a /* Public */,
      60,    0, 1280,    2, 0x0a /* Public */,
      61,    0, 1281,    2, 0x0a /* Public */,
      62,    1, 1282,    2, 0x0a /* Public */,
      62,    0, 1285,    2, 0x2a /* Public | MethodCloned */,
      64,    0, 1286,    2, 0x0a /* Public */,
      65,    0, 1287,    2, 0x0a /* Public */,
      66,    0, 1288,    2, 0x0a /* Public */,
      67,    0, 1289,    2, 0x0a /* Public */,
      68,    0, 1290,    2, 0x0a /* Public */,
      69,    0, 1291,    2, 0x0a /* Public */,
      70,    0, 1292,    2, 0x0a /* Public */,
      71,    0, 1293,    2, 0x0a /* Public */,
      72,    0, 1294,    2, 0x0a /* Public */,
      73,    0, 1295,    2, 0x0a /* Public */,
      74,    0, 1296,    2, 0x0a /* Public */,
      75,    0, 1297,    2, 0x0a /* Public */,
      76,    0, 1298,    2, 0x0a /* Public */,
      77,    0, 1299,    2, 0x0a /* Public */,
      78,    0, 1300,    2, 0x0a /* Public */,
      79,    0, 1301,    2, 0x0a /* Public */,
      80,    0, 1302,    2, 0x0a /* Public */,
      81,    1, 1303,    2, 0x0a /* Public */,
      84,    1, 1306,    2, 0x0a /* Public */,
      87,    1, 1309,    2, 0x0a /* Public */,
      87,    2, 1312,    2, 0x0a /* Public */,
      93,    0, 1317,    2, 0x0a /* Public */,
      94,    0, 1318,    2, 0x0a /* Public */,
      95,    1, 1319,    2, 0x0a /* Public */,
      97,    1, 1322,    2, 0x0a /* Public */,
      97,    1, 1325,    2, 0x0a /* Public */,
      99,    0, 1328,    2, 0x0a /* Public */,
     100,    0, 1329,    2, 0x0a /* Public */,
     101,    0, 1330,    2, 0x0a /* Public */,
     102,    0, 1331,    2, 0x0a /* Public */,
     103,    0, 1332,    2, 0x0a /* Public */,
     104,    0, 1333,    2, 0x0a /* Public */,
     105,    0, 1334,    2, 0x0a /* Public */,
     106,    2, 1335,    2, 0x0a /* Public */,
     106,    1, 1340,    2, 0x2a /* Public | MethodCloned */,
     106,    1, 1343,    2, 0x0a /* Public */,
     111,    0, 1346,    2, 0x0a /* Public */,
     112,    0, 1347,    2, 0x0a /* Public */,
     113,    0, 1348,    2, 0x0a /* Public */,
     114,    0, 1349,    2, 0x0a /* Public */,
     115,    0, 1350,    2, 0x0a /* Public */,
     116,    0, 1351,    2, 0x0a /* Public */,
     117,    1, 1352,    2, 0x0a /* Public */,
     118,    0, 1355,    2, 0x0a /* Public */,
     119,    0, 1356,    2, 0x0a /* Public */,
     120,    0, 1357,    2, 0x0a /* Public */,
     121,    0, 1358,    2, 0x0a /* Public */,
     122,    1, 1359,    2, 0x0a /* Public */,
     123,    5, 1362,    2, 0x0a /* Public */,
     130,    1, 1373,    2, 0x0a /* Public */,
     130,    0, 1376,    2, 0x2a /* Public | MethodCloned */,
     132,    1, 1377,    2, 0x0a /* Public */,
     134,    1, 1380,    2, 0x0a /* Public */,
     136,    0, 1383,    2, 0x0a /* Public */,
     137,    0, 1384,    2, 0x0a /* Public */,
     138,    0, 1385,    2, 0x0a /* Public */,
     139,    0, 1386,    2, 0x0a /* Public */,
     140,    0, 1387,    2, 0x0a /* Public */,
     141,    0, 1388,    2, 0x0a /* Public */,
     142,    0, 1389,    2, 0x0a /* Public */,
     143,    0, 1390,    2, 0x0a /* Public */,
     144,    0, 1391,    2, 0x0a /* Public */,
     145,    2, 1392,    2, 0x0a /* Public */,
     145,    1, 1397,    2, 0x2a /* Public | MethodCloned */,
     147,    1, 1400,    2, 0x0a /* Public */,
     148,    0, 1403,    2, 0x0a /* Public */,
     149,    0, 1404,    2, 0x0a /* Public */,
     150,    0, 1405,    2, 0x0a /* Public */,
     151,    0, 1406,    2, 0x0a /* Public */,
     152,    1, 1407,    2, 0x0a /* Public */,
     154,    0, 1410,    2, 0x0a /* Public */,
     155,    0, 1411,    2, 0x0a /* Public */,
     156,    0, 1412,    2, 0x0a /* Public */,
     157,    0, 1413,    2, 0x0a /* Public */,
     158,    0, 1414,    2, 0x0a /* Public */,
     159,    0, 1415,    2, 0x0a /* Public */,
     160,    1, 1416,    2, 0x0a /* Public */,
     162,    2, 1419,    2, 0x0a /* Public */,
     164,    0, 1424,    2, 0x0a /* Public */,
     165,    1, 1425,    2, 0x0a /* Public */,
     167,    3, 1428,    2, 0x0a /* Public */,
     167,    2, 1435,    2, 0x2a /* Public | MethodCloned */,
     172,    2, 1440,    2, 0x0a /* Public */,
     173,    2, 1445,    2, 0x0a /* Public */,
     174,    0, 1450,    2, 0x0a /* Public */,
     175,    4, 1451,    2, 0x0a /* Public */,
     178,    1, 1460,    2, 0x0a /* Public */,
     180,    0, 1463,    2, 0x0a /* Public */,
     181,    1, 1464,    2, 0x0a /* Public */,
     183,    1, 1467,    2, 0x0a /* Public */,
     183,    0, 1470,    2, 0x2a /* Public | MethodCloned */,
     185,    1, 1471,    2, 0x0a /* Public */,
     185,    0, 1474,    2, 0x2a /* Public | MethodCloned */,
     186,    1, 1475,    2, 0x0a /* Public */,
     187,    0, 1478,    2, 0x0a /* Public */,
     188,    1, 1479,    2, 0x0a /* Public */,
     188,    0, 1482,    2, 0x2a /* Public | MethodCloned */,
     189,    0, 1483,    2, 0x0a /* Public */,
     190,    0, 1484,    2, 0x0a /* Public */,
     191,    0, 1485,    2, 0x0a /* Public */,
     192,    1, 1486,    2, 0x0a /* Public */,
     194,    0, 1489,    2, 0x0a /* Public */,
     195,    1, 1490,    2, 0x0a /* Public */,
     196,    1, 1493,    2, 0x0a /* Public */,
     198,    1, 1496,    2, 0x0a /* Public */,
     200,    1, 1499,    2, 0x0a /* Public */,
     203,    3, 1502,    2, 0x0a /* Public */,
     206,    2, 1509,    2, 0x0a /* Public */,
     209,    1, 1514,    2, 0x0a /* Public */,
     211,    1, 1517,    2, 0x0a /* Public */,
     212,    3, 1520,    2, 0x0a /* Public */,
     216,    0, 1527,    2, 0x0a /* Public */,
     217,    1, 1528,    2, 0x0a /* Public */,
     219,    1, 1531,    2, 0x0a /* Public */,
     221,    2, 1534,    2, 0x0a /* Public */,
     224,    2, 1539,    2, 0x0a /* Public */,
     225,    0, 1544,    2, 0x0a /* Public */,
     226,    2, 1545,    2, 0x0a /* Public */,
     229,    2, 1550,    2, 0x0a /* Public */,
     230,    1, 1555,    2, 0x0a /* Public */,
     231,    0, 1558,    2, 0x0a /* Public */,
     232,    0, 1559,    2, 0x0a /* Public */,
     233,    2, 1560,    2, 0x0a /* Public */,
     234,    0, 1565,    2, 0x0a /* Public */,
     235,    1, 1566,    2, 0x0a /* Public */,
     237,    2, 1569,    2, 0x0a /* Public */,
     240,    1, 1574,    2, 0x0a /* Public */,
     242,    2, 1577,    2, 0x0a /* Public */,
     245,    1, 1582,    2, 0x0a /* Public */,
     246,    1, 1585,    2, 0x0a /* Public */,
     248,    0, 1588,    2, 0x09 /* Protected */,
     249,    0, 1589,    2, 0x09 /* Protected */,
     250,    1, 1590,    2, 0x09 /* Protected */,
     251,    2, 1593,    2, 0x09 /* Protected */,
     253,    0, 1598,    2, 0x09 /* Protected */,
     254,    0, 1599,    2, 0x09 /* Protected */,
     255,    0, 1600,    2, 0x09 /* Protected */,
     256,    0, 1601,    2, 0x09 /* Protected */,
     257,    0, 1602,    2, 0x09 /* Protected */,
     258,    0, 1603,    2, 0x09 /* Protected */,
     259,    0, 1604,    2, 0x09 /* Protected */,
     260,    0, 1605,    2, 0x09 /* Protected */,
     261,    0, 1606,    2, 0x09 /* Protected */,
     262,    1, 1607,    2, 0x09 /* Protected */,
     263,    1, 1610,    2, 0x09 /* Protected */,
     263,    0, 1613,    2, 0x29 /* Protected | MethodCloned */,
     265,    0, 1614,    2, 0x09 /* Protected */,
     266,    0, 1615,    2, 0x09 /* Protected */,
     267,    0, 1616,    2, 0x09 /* Protected */,
     268,    0, 1617,    2, 0x09 /* Protected */,
     269,    1, 1618,    2, 0x09 /* Protected */,
     270,    1, 1621,    2, 0x09 /* Protected */,
     270,    0, 1624,    2, 0x29 /* Protected | MethodCloned */,
     271,    0, 1625,    2, 0x09 /* Protected */,
     272,    0, 1626,    2, 0x09 /* Protected */,
     273,    0, 1627,    2, 0x09 /* Protected */,
     274,    0, 1628,    2, 0x09 /* Protected */,
     275,    0, 1629,    2, 0x09 /* Protected */,
     276,    0, 1630,    2, 0x09 /* Protected */,
      77,    1, 1631,    2, 0x09 /* Protected */,
     277,    0, 1634,    2, 0x09 /* Protected */,
     278,    1, 1635,    2, 0x09 /* Protected */,
     280,    0, 1638,    2, 0x09 /* Protected */,
     281,    0, 1639,    2, 0x09 /* Protected */,
     282,    0, 1640,    2, 0x09 /* Protected */,
     283,    0, 1641,    2, 0x09 /* Protected */,
     284,    0, 1642,    2, 0x09 /* Protected */,
     285,    0, 1643,    2, 0x09 /* Protected */,
     286,    0, 1644,    2, 0x09 /* Protected */,
     287,    0, 1645,    2, 0x09 /* Protected */,
     288,    0, 1646,    2, 0x09 /* Protected */,
     289,    0, 1647,    2, 0x09 /* Protected */,
     290,    0, 1648,    2, 0x09 /* Protected */,
     291,    2, 1649,    2, 0x08 /* Private */,
     292,    0, 1654,    2, 0x08 /* Private */,
     293,    1, 1655,    2, 0x08 /* Private */,
     296,    3, 1658,    2, 0x08 /* Private */,
     300,    0, 1665,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 12, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 4,   28,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   40,   42,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   40,   42,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   40,   42,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
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
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 82,   83,
    QMetaType::Void, 0x80000000 | 85,   86,
    QMetaType::Void, 0x80000000 | 88,   89,
    QMetaType::Void, 0x80000000 | 90, QMetaType::QString,   91,   92,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   96,
    QMetaType::Void, QMetaType::QUrl,   98,
    QMetaType::Void, QMetaType::QString,   98,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 107, QMetaType::QString,  108,  109,
    QMetaType::Void, 0x80000000 | 107,  108,
    QMetaType::Bool, QMetaType::QString,  110,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 107,  108,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 128,  124,  125,  126,  127,  129,
    QMetaType::Void, QMetaType::Bool,  131,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong,  133,
    QMetaType::Void, 0x80000000 | 90,  135,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,  146,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  153,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  161,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  135,  163,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 166,  135,
    QMetaType::Void, 0x80000000 | 168, 0x80000000 | 168, QMetaType::Int,  169,  170,  171,
    QMetaType::Void, 0x80000000 | 168, 0x80000000 | 168,  169,  170,
    QMetaType::Void, 0x80000000 | 168, 0x80000000 | 168,  169,  170,
    QMetaType::Void, 0x80000000 | 168, 0x80000000 | 168,  169,  170,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 168, QMetaType::Int, QMetaType::QPoint, 0x80000000 | 168,  176,  171,  177,  169,
    QMetaType::Void, QMetaType::Int,  179,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  182,
    QMetaType::Void, QMetaType::QString,  184,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  184,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  153,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 88,   89,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 88,  193,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 88,   89,
    QMetaType::Void, 0x80000000 | 8,  197,
    QMetaType::Void, 0x80000000 | 199,    2,
    QMetaType::Void, 0x80000000 | 201,  202,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 88, QMetaType::QString,  204,  205,   92,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  207,  208,
    QMetaType::Void, QMetaType::QString,  210,
    QMetaType::Void, QMetaType::QString,  210,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,  213,  214,  215,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  218,
    QMetaType::Void, QMetaType::QString,  220,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 222,  220,  223,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 222,  220,  223,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 227, QMetaType::Double,    2,  228,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,  218,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  213,  163,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  236,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,  238,  239,
    QMetaType::Void, 0x80000000 | 241,    2,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString,  243,  244,
    QMetaType::Void, QMetaType::QUrl,  243,
    QMetaType::Void, QMetaType::Int,  247,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,  243,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString,  243,  252,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,  264,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,  163,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  135,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  279,
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
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Bool,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 294,  295,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,  297,  298,  299,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reconfigure(); break;
        case 1: _t->boardChange((*reinterpret_cast< const Board(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->databaseChanged((*reinterpret_cast< DatabaseInfo*(*)>(_a[1]))); break;
        case 3: _t->LoadFinished((*reinterpret_cast< DatabaseInfo*(*)>(_a[1]))); break;
        case 4: _t->displayTime((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Color(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->signalMoveHasVariation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->signalVariationHasSibling((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->signalMoveHasPreviousMove((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->signalMoveHasNextMove((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->signalMoveHasParent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->signalGameIsEmpty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->signalGameAtLineStart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->signalFilterEmpty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->signalGameModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->signalGameModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->signalCurrentDBisReadWrite((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->signalCurrentDBcanBeClosed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->signalCurrentDBhasGames((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->signalGameLoaded((*reinterpret_cast< const Board(*)>(_a[1]))); break;
        case 19: _t->signalVersionFound((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 20: _t->databaseModified(); break;
        case 21: _t->signalDatabaseOpenClose(); break;
        case 22: _t->signalUpdateDatabaseList((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 23: _t->enterText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->slotToggleGameMode(); break;
        case 25: _t->slotFlipView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->enterGameMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->enterNoHintMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->openDatabase((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->openDatabaseUrl((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 30: _t->openDatabaseArchive((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->openDatabaseFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 32: _t->setFavoriteDatabase((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 33: _t->slotEditVarPromote(); break;
        case 34: _t->slotEditVarRemove(); break;
        case 35: _t->slotEditBoard(); break;
        case 36: _t->slotEditComment(); break;
        case 37: _t->slotEditCommentBefore(); break;
        case 38: _t->slotEditCopyFEN(); break;
        case 39: _t->slotEditCopyHumanFEN(); break;
        case 40: _t->slotEditPasteFEN(); break;
        case 41: _t->slotEditCopyPGN(); break;
        case 42: { bool _r = _t->slotEditPastePGN();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 43: _t->slotEditPaste(); break;
        case 44: _t->slotEditCopyImage(); break;
        case 45: _t->slotEditTruncateEnd(); break;
        case 46: _t->slotEditTruncateStart(); break;
        case 47: _t->slotSendMail(); break;
        case 48: _t->slotReconfigure(); break;
        case 49: _t->slotConfigure((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->slotConfigure(); break;
        case 51: _t->slotHelpAbout(); break;
        case 52: _t->slotHelpBug(); break;
        case 53: _t->slotConfigureFlip(); break;
        case 54: _t->slotGameMoveFirst(); break;
        case 55: { bool _r = _t->slotGameMoveNext();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 56: _t->slotGameMovePrevious(); break;
        case 57: _t->slotGameMoveLast(); break;
        case 58: _t->slotGameMoveNextN(); break;
        case 59: _t->slotGameMovePreviousN(); break;
        case 60: _t->slotGameLoadNext(); break;
        case 61: _t->slotGameLoadPrevious(); break;
        case 62: _t->slotGameLoadRandom(); break;
        case 63: _t->slotGameLoadChosen(); break;
        case 64: _t->slotGameVarEnter(); break;
        case 65: _t->slotGameVarUp(); break;
        case 66: _t->slotGameVarDown(); break;
        case 67: _t->slotGameVarExit(); break;
        case 68: _t->slotGameModify((*reinterpret_cast< const EditAction(*)>(_a[1]))); break;
        case 69: _t->slotGetActiveGame((*reinterpret_cast< const Game**(*)>(_a[1]))); break;
        case 70: _t->slotMergeActiveGame((*reinterpret_cast< QList<GameId>(*)>(_a[1]))); break;
        case 71: _t->slotMergeActiveGame((*reinterpret_cast< GameId(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 72: _t->slotMergeAllGames(); break;
        case 73: _t->slotMergeFilter(); break;
        case 74: _t->slotGameChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 75: _t->slotGameViewLink((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 76: _t->slotGameViewLink((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 77: _t->slotGameViewSource(); break;
        case 78: _t->slotGameDumpMoveNodes(); break;
        case 79: _t->slotGameDumpBoard(); break;
        case 80: _t->slotGameNew(); break;
        case 81: { bool _r = _t->slotGameSave();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 82: _t->slotGameSaveOnly(); break;
        case 83: _t->slotGameEditTags(); break;
        case 84: _t->slotGameAddVariation((*reinterpret_cast< const Analysis(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 85: _t->slotGameAddVariation((*reinterpret_cast< const Analysis(*)>(_a[1]))); break;
        case 86: { bool _r = _t->slotGameAddVariation((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 87: _t->slotGameUncomment(); break;
        case 88: _t->slotGameRemoveTime(); break;
        case 89: _t->slotDatabaseUncomment(); break;
        case 90: _t->slotDatabaseRemoveTime(); break;
        case 91: _t->slotGameRemoveVariations(); break;
        case 92: _t->slotDatabaseRemoveVariations(); break;
        case 93: _t->slotGameSetComment((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 94: _t->slotToggleAutoPlayer(); break;
        case 95: _t->slotToggleGamePlayer(); break;
        case 96: _t->slotToggleAutoAnalysis(); break;
        case 97: _t->slotAutoPlayTimeout(); break;
        case 98: _t->slotEngineTimeout((*reinterpret_cast< const Analysis(*)>(_a[1]))); break;
        case 99: _t->addAutoNag((*reinterpret_cast< Color(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< MoveId(*)>(_a[5]))); break;
        case 100: _t->slotFilterChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 101: _t->slotFilterChanged(); break;
        case 102: _t->slotFilterSizeChanged((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 103: _t->slotFilterLoad((*reinterpret_cast< GameId(*)>(_a[1]))); break;
        case 104: _t->slotFileNew(); break;
        case 105: _t->slotFileOpen(); break;
        case 106: _t->slotFileOpenUtf8(); break;
        case 107: _t->slotFileSave(); break;
        case 108: _t->slotFileOpenRecent(); break;
        case 109: _t->slotFileExportGame(); break;
        case 110: _t->slotFileExportFilter(); break;
        case 111: _t->slotFileExportAll(); break;
        case 112: _t->slotFileClose(); break;
        case 113: _t->slotFileCloseIndex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 114: _t->slotFileCloseIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 115: _t->slotFileCloseName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 116: _t->slotFileQuit(); break;
        case 117: _t->slotSearchTag(); break;
        case 118: _t->slotSearchBoard(); break;
        case 119: _t->slotBoardSearchStarted(); break;
        case 120: _t->slotBoardSearchUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 121: _t->slotBoardSearchFinished(); break;
        case 122: _t->slotSearchReset(); break;
        case 123: _t->slotToggleTraining(); break;
        case 124: _t->slotToggleTraining2(); break;
        case 125: _t->slotToggleAutoRespond(); break;
        case 126: _t->slotSearchReverse(); break;
        case 127: _t->slotTreeUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 128: _t->slotGameFilterUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 129: _t->slotSearchTree(); break;
        case 130: _t->slotSearchTreeMove((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 131: _t->slotBoardMove((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< Square(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 132: _t->slotBoardMove((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< Square(*)>(_a[2]))); break;
        case 133: _t->slotEvalRequest((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< Square(*)>(_a[2]))); break;
        case 134: _t->slotEvalMove((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< Square(*)>(_a[2]))); break;
        case 135: _t->slotResumeBoard(); break;
        case 136: _t->slotBoardClick((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QPoint(*)>(_a[3])),(*reinterpret_cast< Square(*)>(_a[4]))); break;
        case 137: _t->slotBoardMoveWheel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 138: _t->slotMoveChanged(); break;
        case 139: _t->slotGameMoveToPly((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 140: _t->slotStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 141: _t->slotStatusMessage(); break;
        case 142: _t->slotStatusMessageHint((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 143: _t->slotStatusMessageHint(); break;
        case 144: _t->slotOperationProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 145: _t->slotDatabaseChange(); break;
        case 146: _t->slotDatabaseCopy((*reinterpret_cast< QList<GameId>(*)>(_a[1]))); break;
        case 147: _t->slotDatabaseCopy(); break;
        case 148: _t->slotDatabaseFilterDuplicateGames(); break;
        case 149: _t->slotDatabaseFilterDuplicateTags(); break;
        case 150: _t->slotDatabaseClearClipboard(); break;
        case 151: _t->slotDatabaseFindDuplicates((*reinterpret_cast< QList<GameId>(*)>(_a[1]))); break;
        case 152: _t->slotDatabaseChanged(); break;
        case 153: _t->slotDatabaseDeleteGame((*reinterpret_cast< QList<GameId>(*)>(_a[1]))); break;
        case 154: _t->slotDataBaseLoaded((*reinterpret_cast< DatabaseInfo*(*)>(_a[1]))); break;
        case 155: _t->slotDbRestoreState((*reinterpret_cast< const Game(*)>(_a[1]))); break;
        case 156: _t->slotGetGameData((*reinterpret_cast< Game(*)>(_a[1]))); break;
        case 157: _t->copyGames((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QList<GameId>(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 158: _t->copyDatabase((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 159: _t->slotRenameEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 160: _t->slotRenamePlayer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 161: _t->slotRenameRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 162: _t->slotExportImage(); break;
        case 163: _t->slotMakeBook((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 164: _t->slotShowInFinder((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 165: _t->slotBookDone((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< PolyglotWriter*(*)>(_a[2]))); break;
        case 166: _t->slotBookBuildError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< PolyglotWriter*(*)>(_a[2]))); break;
        case 167: _t->slotEditMergePGN(); break;
        case 168: _t->slotCreateBoardImage((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 169: _t->HandleFicsBoardRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 170: _t->HandleFicsResultRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 171: _t->HandleFicsNewGameRequest(); break;
        case 172: _t->HandleFicsSaveGameRequest(); break;
        case 173: _t->HandleFicsAddTagRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 174: _t->HandleFicsCloseRequest(); break;
        case 175: _t->SlotShowTimer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 176: _t->SlotDisplayTime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 177: _t->slotDatabaseDropped((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 178: _t->slotDatabaseDroppedHandler((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 179: _t->slotDatabaseDroppedFailed((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 180: _t->slotEngineModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 181: _t->updateMenuRecent(); break;
        case 182: _t->updateMenuDatabases(); break;
        case 183: _t->loadError((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 184: _t->loadReady((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 185: _t->slotNoColorSquare(); break;
        case 186: _t->slotGreenSquare(); break;
        case 187: _t->slotYellowSquare(); break;
        case 188: _t->slotRedSquare(); break;
        case 189: _t->slotNoArrowHere(); break;
        case 190: _t->slotGreenArrowHere(); break;
        case 191: _t->slotYellowArrowHere(); break;
        case 192: _t->slotRedArrowHere(); break;
        case 193: _t->slotToggleStayOnTop(); break;
        case 194: _t->slotActivateBoardView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 195: _t->slotCloseTabWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 196: _t->slotCloseTabWidget(); break;
        case 197: _t->slotScreenShot(); break;
        case 198: _t->slotCompileECO(); break;
        case 199: _t->slotAutoSwitchTab(); break;
        case 200: _t->slotEditActions(); break;
        case 201: _t->slotMoveIntervalChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 202: _t->slotSetSliderText((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 203: _t->slotSetSliderText(); break;
        case 204: _t->QueryLoadDatabase(); break;
        case 205: _t->FicsDisconnected(); break;
        case 206: _t->FicsConnected(); break;
        case 207: _t->HandleFicsRequestRemoveMove(); break;
        case 208: _t->openFICS(); break;
        case 209: _t->openWebFavorite(); break;
        case 210: _t->slotGameVarEnter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 211: _t->slotToggleEngineMatch(); break;
        case 212: _t->slotUpdateOpeningBook((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 213: _t->slotRestartAnalysis(); break;
        case 214: _t->slotBoardStoredMove(); break;
        case 215: _t->slotLoadRecentGame(); break;
        case 216: _t->slotToggleBrush(); break;
        case 217: _t->slotShowTargetFields(); break;
        case 218: _t->slotShowThreat(); break;
        case 219: _t->slotShowWhiteAttacks(); break;
        case 220: _t->slotShowBlackAttacks(); break;
        case 221: _t->slotShowUnderprotectedWhite(); break;
        case 222: _t->slotShowUnderprotectedBlack(); break;
        case 223: _t->cancelPolyglotWriters(); break;
        case 224: _t->ecoLoaded((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 225: _t->slotDatabaseModified(); break;
        case 226: _t->slotHttpDone((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 227: _t->slotVersionFound((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 228: _t->slotUpdateOpeningTreeWidget(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::reconfigure)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const Board & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::boardChange)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(DatabaseInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::databaseChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(DatabaseInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::LoadFinished)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QString & , Color , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::displayTime)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalMoveHasVariation)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalVariationHasSibling)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalMoveHasPreviousMove)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalMoveHasNextMove)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalMoveHasParent)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalGameIsEmpty)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalGameAtLineStart)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalFilterEmpty)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalGameModeChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalGameModified)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalCurrentDBisReadWrite)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalCurrentDBcanBeClosed)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalCurrentDBhasGames)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const Board & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalGameLoaded)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalVersionFound)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::databaseModified)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalDatabaseOpenClose)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalUpdateDatabaseList)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::enterText)) {
                *result = 23;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 229)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 229;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 229)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 229;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::reconfigure()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::boardChange(const Board & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::databaseChanged(DatabaseInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::LoadFinished(DatabaseInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::displayTime(const QString & _t1, Color _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::signalMoveHasVariation(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::signalVariationHasSibling(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::signalMoveHasPreviousMove(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::signalMoveHasNextMove(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindow::signalMoveHasParent(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWindow::signalGameIsEmpty(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MainWindow::signalGameAtLineStart(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainWindow::signalFilterEmpty(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MainWindow::signalGameModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MainWindow::signalGameModified(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MainWindow::signalCurrentDBisReadWrite(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MainWindow::signalCurrentDBcanBeClosed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MainWindow::signalCurrentDBhasGames(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MainWindow::signalGameLoaded(const Board & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MainWindow::signalVersionFound(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MainWindow::databaseModified()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void MainWindow::signalDatabaseOpenClose()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void MainWindow::signalUpdateDatabaseList(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void MainWindow::enterText(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
