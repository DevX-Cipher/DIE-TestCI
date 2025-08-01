/****************************************************************************
** Meta object code from reading C++ file 'elfwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/FormatWidgets/ELF/elfwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elfwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSELFWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSELFWidgetENDCLASS = QtMocHelpers::stringData(
    "ELFWidget",
    "reloadData",
    "",
    "bSaveSelection",
    "addDatasets",
    "XELF*",
    "pElf",
    "QTreeWidgetItem*",
    "pParent",
    "QList<XBinary::DATASET>*",
    "pListDataSets",
    "on_treeWidgetNavi_currentItemChanged",
    "pItemCurrent",
    "pItemPrevious",
    "on_checkBoxReadonly_toggled",
    "bChecked",
    "on_toolButtonReload_clicked",
    "enableButton",
    "loadShdr",
    "nRow",
    "loadPhdr",
    "loadNote",
    "on_tableWidget_Elf_Ehdr_currentCellChanged",
    "nCurrentRow",
    "nCurrentColumn",
    "nPreviousRow",
    "nPreviousColumn",
    "editSectionHeader",
    "sectionHex",
    "sectionDisasm",
    "sectionEntropy",
    "sectionDump",
    "editProgramHeader",
    "programHex",
    "programDisasm",
    "programEntropy",
    "programDump",
    "editDynamicArrayTag",
    "on_tableView_SymbolTable_customContextMenuRequested",
    "pos",
    "editSymbolHeader",
    "symbolDemangle",
    "showSectionHeader",
    "nType",
    "QTableView*",
    "pTableView",
    "on_tableView_Elf_Shdr_doubleClicked",
    "QModelIndex",
    "index",
    "on_tableView_Elf_Shdr_customContextMenuRequested",
    "on_tableView_SymbolTable_doubleClicked",
    "onTableView_Elf_Shdr_currentRowChanged",
    "current",
    "previous",
    "onTableView_Elf_Phdr_currentRowChanged",
    "onTableView_DynamicArrayTags_currentRowChanged",
    "onTableView_Notes_currentRowChanged",
    "onTableView_Libraries_currentRowChanged",
    "on_tableView_Elf_Phdr_doubleClicked",
    "on_tableView_Elf_Phdr_customContextMenuRequested",
    "on_tableView_DynamicArrayTags_doubleClicked",
    "on_tableView_DynamicArrayTags_customContextMenuRequested",
    "on_tableView_Notes_doubleClicked",
    "on_tableView_Rela_doubleClicked",
    "on_tableView_Rel_doubleClicked",
    "on_tableView_Rela_customContextMenuRequested",
    "on_tableView_Rel_customContextMenuRequested",
    "editRelaHeaderTag",
    "editRelHeaderTag",
    "on_toolButtonPrev_clicked",
    "on_toolButtonNext_clicked",
    "on_pushButtonSaveSections_clicked",
    "on_pushButtonSavePrograms_clicked",
    "on_pushButtonSave_Rela_clicked",
    "on_pushButtonSave_Rel_clicked",
    "on_pushButtonSave_Elf_Ehdr_clicked",
    "on_pushButtonSave_SymbolTable_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSELFWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  326,    2, 0x08,    1 /* Private */,
       4,    3,  329,    2, 0x08,    3 /* Private */,
      11,    2,  336,    2, 0x08,    7 /* Private */,
      14,    1,  341,    2, 0x08,   10 /* Private */,
      16,    0,  344,    2, 0x08,   12 /* Private */,
      17,    0,  345,    2, 0x08,   13 /* Private */,
      18,    1,  346,    2, 0x08,   14 /* Private */,
      20,    1,  349,    2, 0x08,   16 /* Private */,
      21,    1,  352,    2, 0x08,   18 /* Private */,
      22,    4,  355,    2, 0x08,   20 /* Private */,
      27,    0,  364,    2, 0x08,   25 /* Private */,
      28,    0,  365,    2, 0x08,   26 /* Private */,
      29,    0,  366,    2, 0x08,   27 /* Private */,
      30,    0,  367,    2, 0x08,   28 /* Private */,
      31,    0,  368,    2, 0x08,   29 /* Private */,
      32,    0,  369,    2, 0x08,   30 /* Private */,
      33,    0,  370,    2, 0x08,   31 /* Private */,
      34,    0,  371,    2, 0x08,   32 /* Private */,
      35,    0,  372,    2, 0x08,   33 /* Private */,
      36,    0,  373,    2, 0x08,   34 /* Private */,
      37,    0,  374,    2, 0x08,   35 /* Private */,
      38,    1,  375,    2, 0x08,   36 /* Private */,
      40,    0,  378,    2, 0x08,   38 /* Private */,
      41,    0,  379,    2, 0x08,   39 /* Private */,
      42,    2,  380,    2, 0x08,   40 /* Private */,
      46,    1,  385,    2, 0x08,   43 /* Private */,
      49,    1,  388,    2, 0x08,   45 /* Private */,
      50,    1,  391,    2, 0x08,   47 /* Private */,
      51,    2,  394,    2, 0x08,   49 /* Private */,
      54,    2,  399,    2, 0x08,   52 /* Private */,
      55,    2,  404,    2, 0x08,   55 /* Private */,
      56,    2,  409,    2, 0x08,   58 /* Private */,
      57,    2,  414,    2, 0x08,   61 /* Private */,
      58,    1,  419,    2, 0x08,   64 /* Private */,
      59,    1,  422,    2, 0x08,   66 /* Private */,
      60,    1,  425,    2, 0x08,   68 /* Private */,
      61,    1,  428,    2, 0x08,   70 /* Private */,
      62,    1,  431,    2, 0x08,   72 /* Private */,
      63,    1,  434,    2, 0x08,   74 /* Private */,
      64,    1,  437,    2, 0x08,   76 /* Private */,
      65,    1,  440,    2, 0x08,   78 /* Private */,
      66,    1,  443,    2, 0x08,   80 /* Private */,
      67,    0,  446,    2, 0x08,   82 /* Private */,
      68,    0,  447,    2, 0x08,   83 /* Private */,
      69,    0,  448,    2, 0x08,   84 /* Private */,
      70,    0,  449,    2, 0x08,   85 /* Private */,
      71,    0,  450,    2, 0x08,   86 /* Private */,
      72,    0,  451,    2, 0x08,   87 /* Private */,
      73,    0,  452,    2, 0x08,   88 /* Private */,
      74,    0,  453,    2, 0x08,   89 /* Private */,
      75,    0,  454,    2, 0x08,   90 /* Private */,
      76,    0,  455,    2, 0x08,   91 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 9,    6,    8,   10,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,   12,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   23,   24,   25,   26,
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
    QMetaType::Void, QMetaType::QPoint,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 44,   43,   45,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, QMetaType::QPoint,   39,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 47, 0x80000000 | 47,   52,   53,
    QMetaType::Void, 0x80000000 | 47, 0x80000000 | 47,   52,   53,
    QMetaType::Void, 0x80000000 | 47, 0x80000000 | 47,   52,   53,
    QMetaType::Void, 0x80000000 | 47, 0x80000000 | 47,   52,   53,
    QMetaType::Void, 0x80000000 | 47, 0x80000000 | 47,   52,   53,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, QMetaType::QPoint,   39,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, QMetaType::QPoint,   39,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, QMetaType::QPoint,   39,
    QMetaType::Void, QMetaType::QPoint,   39,
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

Q_CONSTINIT const QMetaObject ELFWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<FormatWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSELFWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSELFWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSELFWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ELFWidget, std::true_type>,
        // method 'reloadData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'addDatasets'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<XELF *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<XBinary::DATASET> *, std::false_type>,
        // method 'on_treeWidgetNavi_currentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'on_checkBoxReadonly_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_toolButtonReload_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadShdr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'loadPhdr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'loadNote'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'on_tableWidget_Elf_Ehdr_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'editSectionHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sectionHex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sectionDisasm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sectionEntropy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sectionDump'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editProgramHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'programHex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'programDisasm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'programEntropy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'programDump'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editDynamicArrayTag'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableView_SymbolTable_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'editSymbolHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'symbolDemangle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showSectionHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableView *, std::false_type>,
        // method 'on_tableView_Elf_Shdr_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_Elf_Shdr_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_SymbolTable_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTableView_Elf_Shdr_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTableView_Elf_Phdr_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTableView_DynamicArrayTags_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTableView_Notes_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTableView_Libraries_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_Elf_Phdr_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_Elf_Phdr_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_DynamicArrayTags_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_DynamicArrayTags_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_Notes_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_Rela_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_Rel_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_Rela_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_Rel_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'editRelaHeaderTag'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editRelHeaderTag'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonPrev_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonNext_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSaveSections_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSavePrograms_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_Rela_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_Rel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_Elf_Ehdr_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_SymbolTable_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ELFWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ELFWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->reloadData((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->addDatasets((*reinterpret_cast< std::add_pointer_t<XELF*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<XBinary::DATASET>*>>(_a[3]))); break;
        case 2: _t->on_treeWidgetNavi_currentItemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 3: _t->on_checkBoxReadonly_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->on_toolButtonReload_clicked(); break;
        case 5: _t->enableButton(); break;
        case 6: _t->loadShdr((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        case 7: _t->loadPhdr((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        case 8: _t->loadNote((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        case 9: _t->on_tableWidget_Elf_Ehdr_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 10: _t->editSectionHeader(); break;
        case 11: _t->sectionHex(); break;
        case 12: _t->sectionDisasm(); break;
        case 13: _t->sectionEntropy(); break;
        case 14: _t->sectionDump(); break;
        case 15: _t->editProgramHeader(); break;
        case 16: _t->programHex(); break;
        case 17: _t->programDisasm(); break;
        case 18: _t->programEntropy(); break;
        case 19: _t->programDump(); break;
        case 20: _t->editDynamicArrayTag(); break;
        case 21: _t->on_tableView_SymbolTable_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 22: _t->editSymbolHeader(); break;
        case 23: _t->symbolDemangle(); break;
        case 24: _t->showSectionHeader((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTableView*>>(_a[2]))); break;
        case 25: _t->on_tableView_Elf_Shdr_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 26: _t->on_tableView_Elf_Shdr_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 27: _t->on_tableView_SymbolTable_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 28: _t->onTableView_Elf_Shdr_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 29: _t->onTableView_Elf_Phdr_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 30: _t->onTableView_DynamicArrayTags_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 31: _t->onTableView_Notes_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 32: _t->onTableView_Libraries_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 33: _t->on_tableView_Elf_Phdr_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 34: _t->on_tableView_Elf_Phdr_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 35: _t->on_tableView_DynamicArrayTags_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 36: _t->on_tableView_DynamicArrayTags_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 37: _t->on_tableView_Notes_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 38: _t->on_tableView_Rela_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 39: _t->on_tableView_Rel_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 40: _t->on_tableView_Rela_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 41: _t->on_tableView_Rel_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 42: _t->editRelaHeaderTag(); break;
        case 43: _t->editRelHeaderTag(); break;
        case 44: _t->on_toolButtonPrev_clicked(); break;
        case 45: _t->on_toolButtonNext_clicked(); break;
        case 46: _t->on_pushButtonSaveSections_clicked(); break;
        case 47: _t->on_pushButtonSavePrograms_clicked(); break;
        case 48: _t->on_pushButtonSave_Rela_clicked(); break;
        case 49: _t->on_pushButtonSave_Rel_clicked(); break;
        case 50: _t->on_pushButtonSave_Elf_Ehdr_clicked(); break;
        case 51: _t->on_pushButtonSave_SymbolTable_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< XELF* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTableView* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *ELFWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ELFWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSELFWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FormatWidget::qt_metacast(_clname);
}

int ELFWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FormatWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    }
    return _id;
}
QT_WARNING_POP
