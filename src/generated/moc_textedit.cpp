/****************************************************************************
** Meta object code from reading C++ file 'textedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gui/textedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PasteTextEdit_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PasteTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PasteTextEdit_t qt_meta_stringdata_PasteTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 13) // "PasteTextEdit"

    },
    "PasteTextEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PasteTextEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PasteTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PasteTextEdit::staticMetaObject = { {
    &QTextEdit::staticMetaObject,
    qt_meta_stringdata_PasteTextEdit.data,
    qt_meta_data_PasteTextEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PasteTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PasteTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PasteTextEdit.stringdata0))
        return static_cast<void*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int PasteTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_TextEdit_t {
    QByteArrayData data[36];
    char stringdata0[394];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextEdit_t qt_meta_stringdata_TextEdit = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TextEdit"
QT_MOC_LITERAL(1, 9, 17), // "requestBoardImage"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "QImage&"
QT_MOC_LITERAL(4, 36, 5), // "image"
QT_MOC_LITERAL(5, 42, 7), // "scaling"
QT_MOC_LITERAL(6, 50, 7), // "fileNew"
QT_MOC_LITERAL(7, 58, 8), // "fileOpen"
QT_MOC_LITERAL(8, 67, 8), // "fileSave"
QT_MOC_LITERAL(9, 76, 10), // "fileSaveAs"
QT_MOC_LITERAL(10, 87, 9), // "filePrint"
QT_MOC_LITERAL(11, 97, 16), // "filePrintPreview"
QT_MOC_LITERAL(12, 114, 12), // "filePrintPdf"
QT_MOC_LITERAL(13, 127, 8), // "textBold"
QT_MOC_LITERAL(14, 136, 13), // "textUnderline"
QT_MOC_LITERAL(15, 150, 10), // "textItalic"
QT_MOC_LITERAL(16, 161, 10), // "textFamily"
QT_MOC_LITERAL(17, 172, 1), // "f"
QT_MOC_LITERAL(18, 174, 8), // "textSize"
QT_MOC_LITERAL(19, 183, 1), // "p"
QT_MOC_LITERAL(20, 185, 9), // "textStyle"
QT_MOC_LITERAL(21, 195, 10), // "styleIndex"
QT_MOC_LITERAL(22, 206, 9), // "textColor"
QT_MOC_LITERAL(23, 216, 9), // "textAlign"
QT_MOC_LITERAL(24, 226, 8), // "QAction*"
QT_MOC_LITERAL(25, 235, 1), // "a"
QT_MOC_LITERAL(26, 237, 24), // "currentCharFormatChanged"
QT_MOC_LITERAL(27, 262, 15), // "QTextCharFormat"
QT_MOC_LITERAL(28, 278, 6), // "format"
QT_MOC_LITERAL(29, 285, 21), // "cursorPositionChanged"
QT_MOC_LITERAL(30, 307, 20), // "clipboardDataChanged"
QT_MOC_LITERAL(31, 328, 12), // "printPreview"
QT_MOC_LITERAL(32, 341, 9), // "QPrinter*"
QT_MOC_LITERAL(33, 351, 11), // "imageResize"
QT_MOC_LITERAL(34, 363, 9), // "pickBoard"
QT_MOC_LITERAL(35, 373, 20) // "setupDocumentActions"

    },
    "TextEdit\0requestBoardImage\0\0QImage&\0"
    "image\0scaling\0fileNew\0fileOpen\0fileSave\0"
    "fileSaveAs\0filePrint\0filePrintPreview\0"
    "filePrintPdf\0textBold\0textUnderline\0"
    "textItalic\0textFamily\0f\0textSize\0p\0"
    "textStyle\0styleIndex\0textColor\0textAlign\0"
    "QAction*\0a\0currentCharFormatChanged\0"
    "QTextCharFormat\0format\0cursorPositionChanged\0"
    "clipboardDataChanged\0printPreview\0"
    "QPrinter*\0imageResize\0pickBoard\0"
    "setupDocumentActions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  129,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  134,    2, 0x08 /* Private */,
       7,    0,  135,    2, 0x08 /* Private */,
       8,    0,  136,    2, 0x08 /* Private */,
       9,    0,  137,    2, 0x08 /* Private */,
      10,    0,  138,    2, 0x08 /* Private */,
      11,    0,  139,    2, 0x08 /* Private */,
      12,    0,  140,    2, 0x08 /* Private */,
      13,    0,  141,    2, 0x08 /* Private */,
      14,    0,  142,    2, 0x08 /* Private */,
      15,    0,  143,    2, 0x08 /* Private */,
      16,    1,  144,    2, 0x08 /* Private */,
      18,    1,  147,    2, 0x08 /* Private */,
      20,    1,  150,    2, 0x08 /* Private */,
      22,    0,  153,    2, 0x08 /* Private */,
      23,    1,  154,    2, 0x08 /* Private */,
      26,    1,  157,    2, 0x08 /* Private */,
      29,    0,  160,    2, 0x08 /* Private */,
      30,    0,  161,    2, 0x08 /* Private */,
      31,    1,  162,    2, 0x08 /* Private */,
      33,    0,  165,    2, 0x08 /* Private */,
      34,    0,  166,    2, 0x08 /* Private */,
      35,    0,  167,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestBoardImage((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->fileNew(); break;
        case 2: _t->fileOpen(); break;
        case 3: { bool _r = _t->fileSave();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->fileSaveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->filePrint(); break;
        case 6: _t->filePrintPreview(); break;
        case 7: _t->filePrintPdf(); break;
        case 8: _t->textBold(); break;
        case 9: _t->textUnderline(); break;
        case 10: _t->textItalic(); break;
        case 11: _t->textFamily((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->textSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->textStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->textColor(); break;
        case 15: _t->textAlign((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 16: _t->currentCharFormatChanged((*reinterpret_cast< const QTextCharFormat(*)>(_a[1]))); break;
        case 17: _t->cursorPositionChanged(); break;
        case 18: _t->clipboardDataChanged(); break;
        case 19: _t->printPreview((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 20: _t->imageResize(); break;
        case 21: _t->pickBoard(); break;
        case 22: _t->setupDocumentActions(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TextEdit::*)(QImage & , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextEdit::requestBoardImage)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TextEdit::staticMetaObject = { {
    &ToolMainWindow::staticMetaObject,
    qt_meta_stringdata_TextEdit.data,
    qt_meta_data_TextEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextEdit.stringdata0))
        return static_cast<void*>(this);
    return ToolMainWindow::qt_metacast(_clname);
}

int TextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToolMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void TextEdit::requestBoardImage(QImage & _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
