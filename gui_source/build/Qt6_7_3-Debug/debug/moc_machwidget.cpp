/****************************************************************************
** Meta object code from reading C++ file 'machwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/FormatWidgets/MACH/machwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'machwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMACHWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMACHWidgetENDCLASS = QtMocHelpers::stringData(
    "MACHWidget",
    "reloadData",
    "",
    "bSaveSelection",
    "on_treeWidgetNavi_currentItemChanged",
    "QTreeWidgetItem*",
    "pItemCurrent",
    "pItemPrevious",
    "on_checkBoxReadonly_toggled",
    "bChecked",
    "on_toolButtonReload_clicked",
    "enableButton",
    "on_tableWidget_mach_header_currentCellChanged",
    "nCurrentRow",
    "nCurrentColumn",
    "nPreviousRow",
    "nPreviousColumn",
    "on_tableWidget_dyld_info_only_currentCellChanged",
    "on_tableWidget_symtab_currentCellChanged",
    "on_tableWidget_dysymtab_currentCellChanged",
    "on_tableWidget_version_min_currentCellChanged",
    "on_tableWidget_build_version_currentCellChanged",
    "on_tableWidget_source_version_currentCellChanged",
    "on_tableWidget_encryption_info_currentCellChanged",
    "on_tableWidget_function_starts_currentCellChanged",
    "on_tableWidget_data_in_code_currentCellChanged",
    "on_tableWidget_code_signature_currentCellChanged",
    "on_tableWidget_SuperBlob_currentCellChanged",
    "on_tableWidget_main_currentCellChanged",
    "on_tableWidget_unix_thread_currentCellChanged",
    "on_tableWidget_unix_thread_x86_32_currentCellChanged",
    "on_tableWidget_unix_thread_x86_64_currentCellChanged",
    "on_tableWidget_unix_thread_arm_32_currentCellChanged",
    "on_tableWidget_unix_thread_arm_64_currentCellChanged",
    "on_tableWidget_unix_thread_ppc_32_currentCellChanged",
    "on_toolButtonPrev_clicked",
    "on_toolButtonNext_clicked",
    "onTableView_commands_currentRowChanged",
    "QModelIndex",
    "current",
    "previous",
    "onTableView_segments_currentRowChanged",
    "onTableView_sections_currentRowChanged",
    "onTableView_libraries_currentRowChanged",
    "onTableView_weak_libraries_currentRowChanged",
    "onTableView_id_library_currentRowChanged",
    "onTableView_LOADFVMLIB_currentRowChanged",
    "onTableView_IDFVMLIB_currentRowChanged",
    "on_tableView_commands_doubleClicked",
    "index",
    "on_tableView_commands_customContextMenuRequested",
    "pos",
    "on_tableView_segments_doubleClicked",
    "on_tableView_segments_customContextMenuRequested",
    "on_tableView_sections_doubleClicked",
    "on_tableView_sections_customContextMenuRequested",
    "on_tableView_libraries_doubleClicked",
    "on_tableView_libraries_customContextMenuRequested",
    "on_tableView_weak_libraries_doubleClicked",
    "on_tableView_weak_libraries_customContextMenuRequested",
    "on_tableView_id_library_doubleClicked",
    "on_tableView_id_library_customContextMenuRequested",
    "on_tableView_LOADFVMLIB_doubleClicked",
    "on_tableView_LOADFVMLIB_customContextMenuRequested",
    "on_tableView_IDFVMLIB_doubleClicked",
    "on_tableView_IDFVMLIB_customContextMenuRequested",
    "on_tableView_SymbolTable_doubleClicked",
    "on_tableView_SymbolTable_customContextMenuRequested",
    "on_tableView_Functions_doubleClicked",
    "on_tableView_Functions_customContextMenuRequested",
    "on_tableView_data_in_code_entry_doubleClicked",
    "on_tableView_data_in_code_entry_customContextMenuRequested",
    "on_tableView_DYSYMTAB_modtab_doubleClicked",
    "on_tableView_DYSYMTAB_modtab_customContextMenuRequested",
    "on_tableView_DYSYMTAB_toc_doubleClicked",
    "on_tableView_DYSYMTAB_toc_customContextMenuRequested",
    "on_tableView_DYSYMTAB_extrel_doubleClicked",
    "on_tableView_DYSYMTAB_extrel_customContextMenuRequested",
    "on_tableView_DYSYMTAB_locrel_doubleClicked",
    "on_tableView_DYSYMTAB_locrel_customContextMenuRequested",
    "on_tableView_DYSYMTAB_indirectsyms_doubleClicked",
    "on_tableView_DYSYMTAB_indirectsyms_customContextMenuRequested",
    "on_tableView_DYSYMTAB_extrefsyms_doubleClicked",
    "on_tableView_DYSYMTAB_extrefsyms_customContextMenuRequested",
    "onTableView_DYLD_INFO_rebase_currentRowChanged",
    "onTableView_DYLD_INFO_bind_currentRowChanged",
    "onTableView_DYLD_INFO_weak_bind_currentRowChanged",
    "onTableView_DYLD_INFO_lazy_bind_currentRowChanged",
    "onTableView_DYLD_INFO_export_currentRowChanged",
    "editCommandHeader",
    "editSegmentHeader",
    "segmentHex",
    "segmentDisasm",
    "segmentEntropy",
    "editSectionHeader",
    "sectionHex",
    "sectionDisasm",
    "sectionEntropy",
    "editLibraryHeader",
    "editWeakLibraryHeader",
    "editIdLibraryHeader",
    "editIDFVMLIBHeader",
    "editLOADFVMLIBHeader",
    "editSymbolHeader",
    "functionHex",
    "functionDisasm",
    "functionDemangle",
    "editDiceHeader",
    "editModTabHeader",
    "editTocHeader",
    "editExtrelHeader",
    "editLocrelHeader",
    "editIndirectSymbolHeader",
    "editExtRefSymbolHeader",
    "diceHex",
    "showSectionHeader",
    "nType",
    "QTableView*",
    "pTableView",
    "symbolDemangle",
    "indirectsymsDemangle",
    "tocDemangle",
    "extrefsymsDemangle"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMACHWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
     104,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  638,    2, 0x08,    1 /* Private */,
       4,    2,  641,    2, 0x08,    3 /* Private */,
       8,    1,  646,    2, 0x08,    6 /* Private */,
      10,    0,  649,    2, 0x08,    8 /* Private */,
      11,    0,  650,    2, 0x08,    9 /* Private */,
      12,    4,  651,    2, 0x08,   10 /* Private */,
      17,    4,  660,    2, 0x08,   15 /* Private */,
      18,    4,  669,    2, 0x08,   20 /* Private */,
      19,    4,  678,    2, 0x08,   25 /* Private */,
      20,    4,  687,    2, 0x08,   30 /* Private */,
      21,    4,  696,    2, 0x08,   35 /* Private */,
      22,    4,  705,    2, 0x08,   40 /* Private */,
      23,    4,  714,    2, 0x08,   45 /* Private */,
      24,    4,  723,    2, 0x08,   50 /* Private */,
      25,    4,  732,    2, 0x08,   55 /* Private */,
      26,    4,  741,    2, 0x08,   60 /* Private */,
      27,    4,  750,    2, 0x08,   65 /* Private */,
      28,    4,  759,    2, 0x08,   70 /* Private */,
      29,    4,  768,    2, 0x08,   75 /* Private */,
      30,    4,  777,    2, 0x08,   80 /* Private */,
      31,    4,  786,    2, 0x08,   85 /* Private */,
      32,    4,  795,    2, 0x08,   90 /* Private */,
      33,    4,  804,    2, 0x08,   95 /* Private */,
      34,    4,  813,    2, 0x08,  100 /* Private */,
      35,    0,  822,    2, 0x08,  105 /* Private */,
      36,    0,  823,    2, 0x08,  106 /* Private */,
      37,    2,  824,    2, 0x08,  107 /* Private */,
      41,    2,  829,    2, 0x08,  110 /* Private */,
      42,    2,  834,    2, 0x08,  113 /* Private */,
      43,    2,  839,    2, 0x08,  116 /* Private */,
      44,    2,  844,    2, 0x08,  119 /* Private */,
      45,    2,  849,    2, 0x08,  122 /* Private */,
      46,    2,  854,    2, 0x08,  125 /* Private */,
      47,    2,  859,    2, 0x08,  128 /* Private */,
      48,    1,  864,    2, 0x08,  131 /* Private */,
      50,    1,  867,    2, 0x08,  133 /* Private */,
      52,    1,  870,    2, 0x08,  135 /* Private */,
      53,    1,  873,    2, 0x08,  137 /* Private */,
      54,    1,  876,    2, 0x08,  139 /* Private */,
      55,    1,  879,    2, 0x08,  141 /* Private */,
      56,    1,  882,    2, 0x08,  143 /* Private */,
      57,    1,  885,    2, 0x08,  145 /* Private */,
      58,    1,  888,    2, 0x08,  147 /* Private */,
      59,    1,  891,    2, 0x08,  149 /* Private */,
      60,    1,  894,    2, 0x08,  151 /* Private */,
      61,    1,  897,    2, 0x08,  153 /* Private */,
      62,    1,  900,    2, 0x08,  155 /* Private */,
      63,    1,  903,    2, 0x08,  157 /* Private */,
      64,    1,  906,    2, 0x08,  159 /* Private */,
      65,    1,  909,    2, 0x08,  161 /* Private */,
      66,    1,  912,    2, 0x08,  163 /* Private */,
      67,    1,  915,    2, 0x08,  165 /* Private */,
      68,    1,  918,    2, 0x08,  167 /* Private */,
      69,    1,  921,    2, 0x08,  169 /* Private */,
      70,    1,  924,    2, 0x08,  171 /* Private */,
      71,    1,  927,    2, 0x08,  173 /* Private */,
      72,    1,  930,    2, 0x08,  175 /* Private */,
      73,    1,  933,    2, 0x08,  177 /* Private */,
      74,    1,  936,    2, 0x08,  179 /* Private */,
      75,    1,  939,    2, 0x08,  181 /* Private */,
      76,    1,  942,    2, 0x08,  183 /* Private */,
      77,    1,  945,    2, 0x08,  185 /* Private */,
      78,    1,  948,    2, 0x08,  187 /* Private */,
      79,    1,  951,    2, 0x08,  189 /* Private */,
      80,    1,  954,    2, 0x08,  191 /* Private */,
      81,    1,  957,    2, 0x08,  193 /* Private */,
      82,    1,  960,    2, 0x08,  195 /* Private */,
      83,    1,  963,    2, 0x08,  197 /* Private */,
      84,    2,  966,    2, 0x08,  199 /* Private */,
      85,    2,  971,    2, 0x08,  202 /* Private */,
      86,    2,  976,    2, 0x08,  205 /* Private */,
      87,    2,  981,    2, 0x08,  208 /* Private */,
      88,    2,  986,    2, 0x08,  211 /* Private */,
      89,    0,  991,    2, 0x08,  214 /* Private */,
      90,    0,  992,    2, 0x08,  215 /* Private */,
      91,    0,  993,    2, 0x08,  216 /* Private */,
      92,    0,  994,    2, 0x08,  217 /* Private */,
      93,    0,  995,    2, 0x08,  218 /* Private */,
      94,    0,  996,    2, 0x08,  219 /* Private */,
      95,    0,  997,    2, 0x08,  220 /* Private */,
      96,    0,  998,    2, 0x08,  221 /* Private */,
      97,    0,  999,    2, 0x08,  222 /* Private */,
      98,    0, 1000,    2, 0x08,  223 /* Private */,
      99,    0, 1001,    2, 0x08,  224 /* Private */,
     100,    0, 1002,    2, 0x08,  225 /* Private */,
     101,    0, 1003,    2, 0x08,  226 /* Private */,
     102,    0, 1004,    2, 0x08,  227 /* Private */,
     103,    0, 1005,    2, 0x08,  228 /* Private */,
     104,    0, 1006,    2, 0x08,  229 /* Private */,
     105,    0, 1007,    2, 0x08,  230 /* Private */,
     106,    0, 1008,    2, 0x08,  231 /* Private */,
     107,    0, 1009,    2, 0x08,  232 /* Private */,
     108,    0, 1010,    2, 0x08,  233 /* Private */,
     109,    0, 1011,    2, 0x08,  234 /* Private */,
     110,    0, 1012,    2, 0x08,  235 /* Private */,
     111,    0, 1013,    2, 0x08,  236 /* Private */,
     112,    0, 1014,    2, 0x08,  237 /* Private */,
     113,    0, 1015,    2, 0x08,  238 /* Private */,
     114,    0, 1016,    2, 0x08,  239 /* Private */,
     115,    2, 1017,    2, 0x08,  240 /* Private */,
     119,    0, 1022,    2, 0x08,  243 /* Private */,
     120,    0, 1023,    2, 0x08,  244 /* Private */,
     121,    0, 1024,    2, 0x08,  245 /* Private */,
     122,    0, 1025,    2, 0x08,  246 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 38,   39,   40,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 38,   39,   40,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 38,   39,   40,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 38,   39,   40,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 38,   39,   40,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 38,   39,   40,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 38,   39,   40,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 38,   39,   40,
    QMetaType::Void, 0x80000000 | 38,   49,
    QMetaType::Void, QMetaType::QPoint,   51,
    QMetaType::Void, 0x80000000 | 38,   49,
    QMetaType::Void, QMetaType::QPoint,   51,
    QMetaType::Void, 0x80000000 | 38,   49,
    QMetaType::Void, QMetaType::QPoint,   51,
    QMetaType::Void, 0x80000000 | 38,   49,
    QMetaType::Void, QMetaType::QPoint,   51,
    QMetaType::Void, 0x80000000 | 38,   49,
    QMetaType::Void, QMetaType::QPoint,   51,
    QMetaType::Void, 0x80000000 | 38,   49,
    QMetaType::Void, QMetaType::QPoint,   51,
    QMetaType::Void, 0x80000000 | 38,   49,
    QMetaType::Void, QMetaType::QPoint,   51,
    QMetaType::Void, 0x80000000 | 38,   49,
    QMetaType::Void, QMetaType::QPoint,   51,
    QMetaType::Void, 0x80000000 | 38,   49,
    QMetaType::Void, QMetaType::QPoint,   51,
    QMetaType::Void, 0x80000000 | 38,   49,
    QMetaType::Void, QMetaType::QPoint,   51,
    QMetaType::Void, 0x80000000 | 38,   49,
    QMetaType::Void, QMetaType::QPoint,   51,
    QMetaType::Void, 0x80000000 | 38,   49,
    QMetaType::Void, QMetaType::QPoint,   51,
    QMetaType::Void, 0x80000000 | 38,   49,
    QMetaType::Void, QMetaType::QPoint,   51,
    QMetaType::Void, 0x80000000 | 38,   49,
    QMetaType::Void, QMetaType::QPoint,   51,
    QMetaType::Void, 0x80000000 | 38,   49,
    QMetaType::Void, QMetaType::QPoint,   51,
    QMetaType::Void, 0x80000000 | 38,   49,
    QMetaType::Void, QMetaType::QPoint,   51,
    QMetaType::Void, 0x80000000 | 38,   49,
    QMetaType::Void, QMetaType::QPoint,   51,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 38,   39,   40,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 38,   39,   40,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 38,   39,   40,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 38,   39,   40,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 38,   39,   40,
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
    QMetaType::Void, QMetaType::Int, 0x80000000 | 117,  116,  118,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MACHWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<FormatWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSMACHWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMACHWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMACHWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MACHWidget, std::true_type>,
        // method 'reloadData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
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
        // method 'on_tableWidget_mach_header_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_dyld_info_only_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_symtab_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_dysymtab_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_version_min_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_build_version_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_source_version_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_encryption_info_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_function_starts_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_data_in_code_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_code_signature_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_SuperBlob_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_main_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_unix_thread_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_unix_thread_x86_32_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_unix_thread_x86_64_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_unix_thread_arm_32_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_unix_thread_arm_64_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_unix_thread_ppc_32_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_toolButtonPrev_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonNext_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTableView_commands_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTableView_segments_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTableView_sections_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTableView_libraries_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTableView_weak_libraries_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTableView_id_library_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTableView_LOADFVMLIB_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTableView_IDFVMLIB_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_commands_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_commands_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_segments_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_segments_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_sections_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_sections_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_libraries_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_libraries_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_weak_libraries_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_weak_libraries_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_id_library_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_id_library_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_LOADFVMLIB_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_LOADFVMLIB_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_IDFVMLIB_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_IDFVMLIB_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_SymbolTable_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_SymbolTable_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_Functions_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_Functions_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_data_in_code_entry_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_data_in_code_entry_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_DYSYMTAB_modtab_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_DYSYMTAB_modtab_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_DYSYMTAB_toc_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_DYSYMTAB_toc_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_DYSYMTAB_extrel_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_DYSYMTAB_extrel_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_DYSYMTAB_locrel_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_DYSYMTAB_locrel_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_DYSYMTAB_indirectsyms_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_DYSYMTAB_indirectsyms_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_DYSYMTAB_extrefsyms_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_DYSYMTAB_extrefsyms_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onTableView_DYLD_INFO_rebase_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTableView_DYLD_INFO_bind_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTableView_DYLD_INFO_weak_bind_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTableView_DYLD_INFO_lazy_bind_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTableView_DYLD_INFO_export_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'editCommandHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editSegmentHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'segmentHex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'segmentDisasm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'segmentEntropy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editSectionHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sectionHex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sectionDisasm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sectionEntropy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editLibraryHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editWeakLibraryHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editIdLibraryHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editIDFVMLIBHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editLOADFVMLIBHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editSymbolHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'functionHex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'functionDisasm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'functionDemangle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editDiceHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editModTabHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editTocHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editExtrelHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editLocrelHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editIndirectSymbolHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editExtRefSymbolHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'diceHex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showSectionHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableView *, std::false_type>,
        // method 'symbolDemangle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'indirectsymsDemangle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tocDemangle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'extrefsymsDemangle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MACHWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MACHWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->reloadData((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->on_treeWidgetNavi_currentItemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 2: _t->on_checkBoxReadonly_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_toolButtonReload_clicked(); break;
        case 4: _t->enableButton(); break;
        case 5: _t->on_tableWidget_mach_header_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 6: _t->on_tableWidget_dyld_info_only_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 7: _t->on_tableWidget_symtab_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 8: _t->on_tableWidget_dysymtab_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 9: _t->on_tableWidget_version_min_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 10: _t->on_tableWidget_build_version_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 11: _t->on_tableWidget_source_version_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 12: _t->on_tableWidget_encryption_info_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 13: _t->on_tableWidget_function_starts_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 14: _t->on_tableWidget_data_in_code_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 15: _t->on_tableWidget_code_signature_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 16: _t->on_tableWidget_SuperBlob_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 17: _t->on_tableWidget_main_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 18: _t->on_tableWidget_unix_thread_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 19: _t->on_tableWidget_unix_thread_x86_32_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 20: _t->on_tableWidget_unix_thread_x86_64_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 21: _t->on_tableWidget_unix_thread_arm_32_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 22: _t->on_tableWidget_unix_thread_arm_64_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 23: _t->on_tableWidget_unix_thread_ppc_32_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 24: _t->on_toolButtonPrev_clicked(); break;
        case 25: _t->on_toolButtonNext_clicked(); break;
        case 26: _t->onTableView_commands_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 27: _t->onTableView_segments_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 28: _t->onTableView_sections_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 29: _t->onTableView_libraries_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 30: _t->onTableView_weak_libraries_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 31: _t->onTableView_id_library_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 32: _t->onTableView_LOADFVMLIB_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 33: _t->onTableView_IDFVMLIB_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 34: _t->on_tableView_commands_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 35: _t->on_tableView_commands_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 36: _t->on_tableView_segments_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 37: _t->on_tableView_segments_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 38: _t->on_tableView_sections_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 39: _t->on_tableView_sections_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 40: _t->on_tableView_libraries_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 41: _t->on_tableView_libraries_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 42: _t->on_tableView_weak_libraries_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 43: _t->on_tableView_weak_libraries_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 44: _t->on_tableView_id_library_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 45: _t->on_tableView_id_library_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 46: _t->on_tableView_LOADFVMLIB_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 47: _t->on_tableView_LOADFVMLIB_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 48: _t->on_tableView_IDFVMLIB_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 49: _t->on_tableView_IDFVMLIB_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 50: _t->on_tableView_SymbolTable_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 51: _t->on_tableView_SymbolTable_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 52: _t->on_tableView_Functions_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 53: _t->on_tableView_Functions_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 54: _t->on_tableView_data_in_code_entry_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 55: _t->on_tableView_data_in_code_entry_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 56: _t->on_tableView_DYSYMTAB_modtab_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 57: _t->on_tableView_DYSYMTAB_modtab_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 58: _t->on_tableView_DYSYMTAB_toc_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 59: _t->on_tableView_DYSYMTAB_toc_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 60: _t->on_tableView_DYSYMTAB_extrel_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 61: _t->on_tableView_DYSYMTAB_extrel_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 62: _t->on_tableView_DYSYMTAB_locrel_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 63: _t->on_tableView_DYSYMTAB_locrel_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 64: _t->on_tableView_DYSYMTAB_indirectsyms_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 65: _t->on_tableView_DYSYMTAB_indirectsyms_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 66: _t->on_tableView_DYSYMTAB_extrefsyms_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 67: _t->on_tableView_DYSYMTAB_extrefsyms_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 68: _t->onTableView_DYLD_INFO_rebase_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 69: _t->onTableView_DYLD_INFO_bind_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 70: _t->onTableView_DYLD_INFO_weak_bind_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 71: _t->onTableView_DYLD_INFO_lazy_bind_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 72: _t->onTableView_DYLD_INFO_export_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 73: _t->editCommandHeader(); break;
        case 74: _t->editSegmentHeader(); break;
        case 75: _t->segmentHex(); break;
        case 76: _t->segmentDisasm(); break;
        case 77: _t->segmentEntropy(); break;
        case 78: _t->editSectionHeader(); break;
        case 79: _t->sectionHex(); break;
        case 80: _t->sectionDisasm(); break;
        case 81: _t->sectionEntropy(); break;
        case 82: _t->editLibraryHeader(); break;
        case 83: _t->editWeakLibraryHeader(); break;
        case 84: _t->editIdLibraryHeader(); break;
        case 85: _t->editIDFVMLIBHeader(); break;
        case 86: _t->editLOADFVMLIBHeader(); break;
        case 87: _t->editSymbolHeader(); break;
        case 88: _t->functionHex(); break;
        case 89: _t->functionDisasm(); break;
        case 90: _t->functionDemangle(); break;
        case 91: _t->editDiceHeader(); break;
        case 92: _t->editModTabHeader(); break;
        case 93: _t->editTocHeader(); break;
        case 94: _t->editExtrelHeader(); break;
        case 95: _t->editLocrelHeader(); break;
        case 96: _t->editIndirectSymbolHeader(); break;
        case 97: _t->editExtRefSymbolHeader(); break;
        case 98: _t->diceHex(); break;
        case 99: _t->showSectionHeader((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTableView*>>(_a[2]))); break;
        case 100: _t->symbolDemangle(); break;
        case 101: _t->indirectsymsDemangle(); break;
        case 102: _t->tocDemangle(); break;
        case 103: _t->extrefsymsDemangle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 99:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTableView* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MACHWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MACHWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMACHWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FormatWidget::qt_metacast(_clname);
}

int MACHWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FormatWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 104)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 104;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 104)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 104;
    }
    return _id;
}
QT_WARNING_POP
