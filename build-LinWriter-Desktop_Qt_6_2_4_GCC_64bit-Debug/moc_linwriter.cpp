/****************************************************************************
** Meta object code from reading C++ file 'linwriter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../LinWriter/linwriter.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'linwriter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_linwriter_t {
    const uint offsetsAndSize[88];
    char stringdata0[1155];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_linwriter_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_linwriter_t qt_meta_stringdata_linwriter = {
    {
QT_MOC_LITERAL(0, 9), // "linwriter"
QT_MOC_LITERAL(10, 5), // "print"
QT_MOC_LITERAL(16, 0), // ""
QT_MOC_LITERAL(17, 9), // "QPrinter*"
QT_MOC_LITERAL(27, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(50, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(74, 28), // "on_actionSave_Text_triggered"
QT_MOC_LITERAL(103, 24), // "on_actionPrint_triggered"
QT_MOC_LITERAL(128, 26), // "on_actionSave_As_triggered"
QT_MOC_LITERAL(155, 29), // "on_actionQuick_Save_triggered"
QT_MOC_LITERAL(185, 23), // "on_actionUndo_triggered"
QT_MOC_LITERAL(209, 23), // "on_actionRedo_triggered"
QT_MOC_LITERAL(233, 22), // "on_actionCut_triggered"
QT_MOC_LITERAL(256, 23), // "on_actionCopy_triggered"
QT_MOC_LITERAL(280, 24), // "on_actionPaste_triggered"
QT_MOC_LITERAL(305, 25), // "on_actionDelete_triggered"
QT_MOC_LITERAL(331, 29), // "on_actionSelect_All_triggered"
QT_MOC_LITERAL(361, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(385, 23), // "on_actionBold_triggered"
QT_MOC_LITERAL(409, 33), // "on_actionFormatting_Off_trigg..."
QT_MOC_LITERAL(443, 26), // "on_actionItalics_triggered"
QT_MOC_LITERAL(470, 28), // "on_actionUnderline_triggered"
QT_MOC_LITERAL(499, 33), // "on_actionStrike_Through_trigg..."
QT_MOC_LITERAL(533, 23), // "on_actionFont_triggered"
QT_MOC_LITERAL(557, 29), // "on_actionBackground_triggered"
QT_MOC_LITERAL(587, 29), // "on_actionText_Color_triggered"
QT_MOC_LITERAL(617, 28), // "on_actionHighlight_triggered"
QT_MOC_LITERAL(646, 29), // "on_actionAlign_Left_triggered"
QT_MOC_LITERAL(676, 30), // "on_actionAlign_Right_triggered"
QT_MOC_LITERAL(707, 31), // "on_actionAlign_Center_triggered"
QT_MOC_LITERAL(739, 33), // "on_actionAlign_ustified_trigg..."
QT_MOC_LITERAL(773, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(798, 23), // "on_actionHTML_triggered"
QT_MOC_LITERAL(822, 22), // "on_actionPDF_triggered"
QT_MOC_LITERAL(845, 32), // "on_actionText_Markdown_triggered"
QT_MOC_LITERAL(878, 28), // "on_actionRich_Text_triggered"
QT_MOC_LITERAL(907, 30), // "on_actionBullet_List_triggered"
QT_MOC_LITERAL(938, 30), // "on_actionNumber_List_triggered"
QT_MOC_LITERAL(969, 27), // "on_actionCheckbox_triggered"
QT_MOC_LITERAL(997, 24), // "on_actionImage_triggered"
QT_MOC_LITERAL(1022, 44), // "on_actionSpread_Sheet_Table_I..."
QT_MOC_LITERAL(1067, 26), // "on_actionZoom_In_triggered"
QT_MOC_LITERAL(1094, 27), // "on_actionZoom_Out_triggered"
QT_MOC_LITERAL(1122, 32) // "on_actionPrint_Preview_triggered"

    },
    "linwriter\0print\0\0QPrinter*\0"
    "on_actionNew_triggered\0on_actionOpen_triggered\0"
    "on_actionSave_Text_triggered\0"
    "on_actionPrint_triggered\0"
    "on_actionSave_As_triggered\0"
    "on_actionQuick_Save_triggered\0"
    "on_actionUndo_triggered\0on_actionRedo_triggered\0"
    "on_actionCut_triggered\0on_actionCopy_triggered\0"
    "on_actionPaste_triggered\0"
    "on_actionDelete_triggered\0"
    "on_actionSelect_All_triggered\0"
    "on_actionExit_triggered\0on_actionBold_triggered\0"
    "on_actionFormatting_Off_triggered\0"
    "on_actionItalics_triggered\0"
    "on_actionUnderline_triggered\0"
    "on_actionStrike_Through_triggered\0"
    "on_actionFont_triggered\0"
    "on_actionBackground_triggered\0"
    "on_actionText_Color_triggered\0"
    "on_actionHighlight_triggered\0"
    "on_actionAlign_Left_triggered\0"
    "on_actionAlign_Right_triggered\0"
    "on_actionAlign_Center_triggered\0"
    "on_actionAlign_ustified_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionHTML_triggered\0on_actionPDF_triggered\0"
    "on_actionText_Markdown_triggered\0"
    "on_actionRich_Text_triggered\0"
    "on_actionBullet_List_triggered\0"
    "on_actionNumber_List_triggered\0"
    "on_actionCheckbox_triggered\0"
    "on_actionImage_triggered\0"
    "on_actionSpread_Sheet_Table_Insert_triggered\0"
    "on_actionZoom_In_triggered\0"
    "on_actionZoom_Out_triggered\0"
    "on_actionPrint_Preview_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_linwriter[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  260,    2, 0x0a,    1 /* Public */,
       4,    0,  263,    2, 0x08,    3 /* Private */,
       5,    0,  264,    2, 0x08,    4 /* Private */,
       6,    0,  265,    2, 0x08,    5 /* Private */,
       7,    0,  266,    2, 0x08,    6 /* Private */,
       8,    0,  267,    2, 0x08,    7 /* Private */,
       9,    0,  268,    2, 0x08,    8 /* Private */,
      10,    0,  269,    2, 0x08,    9 /* Private */,
      11,    0,  270,    2, 0x08,   10 /* Private */,
      12,    0,  271,    2, 0x08,   11 /* Private */,
      13,    0,  272,    2, 0x08,   12 /* Private */,
      14,    0,  273,    2, 0x08,   13 /* Private */,
      15,    0,  274,    2, 0x08,   14 /* Private */,
      16,    0,  275,    2, 0x08,   15 /* Private */,
      17,    0,  276,    2, 0x08,   16 /* Private */,
      18,    0,  277,    2, 0x08,   17 /* Private */,
      19,    0,  278,    2, 0x08,   18 /* Private */,
      20,    0,  279,    2, 0x08,   19 /* Private */,
      21,    0,  280,    2, 0x08,   20 /* Private */,
      22,    0,  281,    2, 0x08,   21 /* Private */,
      23,    0,  282,    2, 0x08,   22 /* Private */,
      24,    0,  283,    2, 0x08,   23 /* Private */,
      25,    0,  284,    2, 0x08,   24 /* Private */,
      26,    0,  285,    2, 0x08,   25 /* Private */,
      27,    0,  286,    2, 0x08,   26 /* Private */,
      28,    0,  287,    2, 0x08,   27 /* Private */,
      29,    0,  288,    2, 0x08,   28 /* Private */,
      30,    0,  289,    2, 0x08,   29 /* Private */,
      31,    0,  290,    2, 0x08,   30 /* Private */,
      32,    0,  291,    2, 0x08,   31 /* Private */,
      33,    0,  292,    2, 0x08,   32 /* Private */,
      34,    0,  293,    2, 0x08,   33 /* Private */,
      35,    0,  294,    2, 0x08,   34 /* Private */,
      36,    0,  295,    2, 0x08,   35 /* Private */,
      37,    0,  296,    2, 0x08,   36 /* Private */,
      38,    0,  297,    2, 0x08,   37 /* Private */,
      39,    0,  298,    2, 0x08,   38 /* Private */,
      40,    0,  299,    2, 0x08,   39 /* Private */,
      41,    0,  300,    2, 0x08,   40 /* Private */,
      42,    0,  301,    2, 0x08,   41 /* Private */,
      43,    0,  302,    2, 0x08,   42 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void linwriter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<linwriter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->print((*reinterpret_cast< std::add_pointer_t<QPrinter*>>(_a[1]))); break;
        case 1: _t->on_actionNew_triggered(); break;
        case 2: _t->on_actionOpen_triggered(); break;
        case 3: _t->on_actionSave_Text_triggered(); break;
        case 4: _t->on_actionPrint_triggered(); break;
        case 5: _t->on_actionSave_As_triggered(); break;
        case 6: _t->on_actionQuick_Save_triggered(); break;
        case 7: _t->on_actionUndo_triggered(); break;
        case 8: _t->on_actionRedo_triggered(); break;
        case 9: _t->on_actionCut_triggered(); break;
        case 10: _t->on_actionCopy_triggered(); break;
        case 11: _t->on_actionPaste_triggered(); break;
        case 12: _t->on_actionDelete_triggered(); break;
        case 13: _t->on_actionSelect_All_triggered(); break;
        case 14: _t->on_actionExit_triggered(); break;
        case 15: _t->on_actionBold_triggered(); break;
        case 16: _t->on_actionFormatting_Off_triggered(); break;
        case 17: _t->on_actionItalics_triggered(); break;
        case 18: _t->on_actionUnderline_triggered(); break;
        case 19: _t->on_actionStrike_Through_triggered(); break;
        case 20: _t->on_actionFont_triggered(); break;
        case 21: _t->on_actionBackground_triggered(); break;
        case 22: _t->on_actionText_Color_triggered(); break;
        case 23: _t->on_actionHighlight_triggered(); break;
        case 24: _t->on_actionAlign_Left_triggered(); break;
        case 25: _t->on_actionAlign_Right_triggered(); break;
        case 26: _t->on_actionAlign_Center_triggered(); break;
        case 27: _t->on_actionAlign_ustified_triggered(); break;
        case 28: _t->on_actionAbout_triggered(); break;
        case 29: _t->on_actionHTML_triggered(); break;
        case 30: _t->on_actionPDF_triggered(); break;
        case 31: _t->on_actionText_Markdown_triggered(); break;
        case 32: _t->on_actionRich_Text_triggered(); break;
        case 33: _t->on_actionBullet_List_triggered(); break;
        case 34: _t->on_actionNumber_List_triggered(); break;
        case 35: _t->on_actionCheckbox_triggered(); break;
        case 36: _t->on_actionImage_triggered(); break;
        case 37: _t->on_actionSpread_Sheet_Table_Insert_triggered(); break;
        case 38: _t->on_actionZoom_In_triggered(); break;
        case 39: _t->on_actionZoom_Out_triggered(); break;
        case 40: _t->on_actionPrint_Preview_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject linwriter::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_linwriter.offsetsAndSize,
    qt_meta_data_linwriter,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_linwriter_t
, QtPrivate::TypeAndForceComplete<linwriter, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPrinter *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *linwriter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *linwriter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_linwriter.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int linwriter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 41;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
