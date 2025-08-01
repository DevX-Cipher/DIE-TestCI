/****************************************************************************
** Meta object code from reading C++ file 'pewidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/FormatWidgets/PE/pewidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pewidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPEWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPEWidgetENDCLASS = QtMocHelpers::stringData(
    "PEWidget",
    "on_treeWidgetNavi_currentItemChanged",
    "",
    "QTreeWidgetItem*",
    "pItemCurrent",
    "pItemPrevious",
    "widgetAction",
    "on_checkBoxReadonly_toggled",
    "bChecked",
    "editSectionHeader",
    "sectionHex",
    "sectionDisasm",
    "sectionEntropy",
    "sectionDump",
    "resourceHex",
    "resourceDisasm",
    "resourceEntropy",
    "resourceDump",
    "reloadData",
    "bSaveSelection",
    "loadImportLibrary",
    "nRow",
    "loadRelocs",
    "loadSection",
    "loadException",
    "loadDirectory",
    "loadDebug",
    "loadDelayImport",
    "createSectionTable",
    "nType",
    "QTableWidget*",
    "pTableWidget",
    "const FW_DEF::HEADER_RECORD*",
    "pRecords",
    "nNumberOfRecords",
    "on_toolButtonReload_clicked",
    "enableButton",
    "on_tableWidget_IMAGE_DIRECTORY_ENTRIES_currentCellChanged",
    "nCurrentRow",
    "nCurrentColumn",
    "nPreviousRow",
    "nPreviousColumn",
    "on_tableWidget_IMAGE_DOS_HEADER_currentCellChanged",
    "on_tableWidget_IMAGE_NT_HEADERS_currentCellChanged",
    "on_tableWidget_IMAGE_FILE_HEADER_currentCellChanged",
    "on_tableWidget_IMAGE_OPTIONAL_HEADER_currentCellChanged",
    "on_tableWidget_LoadConfig_currentCellChanged",
    "on_tableWidget_NetHeader_currentCellChanged",
    "on_tableWidget_TLS_currentCellChanged",
    "editImportHeader",
    "editDebugHeader",
    "editRelocsHeader",
    "editExceptionHeader",
    "editDelayImportHeader",
    "editBoundImportHeader",
    "exportFunctionHex",
    "exportFunctionDisasm",
    "exportFunctionDemangle",
    "importFunctionDemangle",
    "showSectionHeader",
    "QTableView*",
    "pTableView",
    "on_tableView_Sections_customContextMenuRequested",
    "pos",
    "on_tableView_Sections_doubleClicked",
    "QModelIndex",
    "index",
    "onTableView_Sections_currentRowChanged",
    "current",
    "previous",
    "onTableView_Net_Metadata_Table_currentRowChanged",
    "on_tableView_ImportLibraries_customContextMenuRequested",
    "onTableView_ImportLibraries_currentRowChanged",
    "on_tableView_ImportLibraries_doubleClicked",
    "on_tableView_Relocs_customContextMenuRequested",
    "onTableView_Relocs_currentRowChanged",
    "on_tableView_Relocs_doubleClicked",
    "on_tableView_Debug_customContextMenuRequested",
    "onTableView_Debug_currentRowChanged",
    "on_tableView_Debug_doubleClicked",
    "on_tableView_Resources_customContextMenuRequested",
    "onTableView_Resources_currentRowChanged",
    "on_tableView_Exceptions_customContextMenuRequested",
    "onTableView_Exceptions_currentRowChanged",
    "on_tableView_Exceptions_doubleClicked",
    "on_tableView_DelayImportLibraries_customContextMenuRequested",
    "onTableView_DelayImportLibraries_currentRowChanged",
    "on_tableView_DelayImportLibraries_doubleClicked",
    "on_tableView_BoundImport_customContextMenuRequested",
    "on_tableView_BoundImport_doubleClicked",
    "onTreeView_Resources_currentRowChanged",
    "onTreeView_Certificate_currentRowChanged",
    "on_tableView_ExportFunctions_customContextMenuRequested",
    "on_tableWidget_Net_Metadata_currentCellChanged",
    "on_toolButtonPrev_clicked",
    "on_toolButtonNext_clicked",
    "on_checkBoxExportShowValid_stateChanged",
    "nState",
    "on_tableView_ImportFunctions_customContextMenuRequested",
    "on_pushButtonCertificateCheck_clicked",
    "on_checkBox_ManifestFormat_stateChanged",
    "formatXML",
    "on_tableWidget_IMAGE_DIRECTORY_ENTRIES_customContextMenuRequested",
    "editDirectoryHeader",
    "directoryHex",
    "directoryEntropy",
    "on_tableView_TLSCallbacks_customContextMenuRequested",
    "disasmTLSCallback",
    "on_pushButtonSave_Sections_clicked",
    "on_tableView_Resources_StringTable_customContextMenuRequested",
    "stringTableHex",
    "on_pushButtonSave_Debug_clicked",
    "on_pushButtonSave_Exception_clicked",
    "on_pushButtonSave_IMAGE_DIRECTORY_ENTRIES_clicked",
    "on_pushButtonExtractAllIcons_Resources_clicked",
    "on_pushButtonExtractAllCursors_Resources_clicked",
    "on_pushButtonDumpAll_Resources_clicked",
    "on_pushButtonSave_Resources_clicked",
    "on_pushButtonDump_Overlay_clicked",
    "on_pushButtonDump_DosStub_clicked",
    "on_pushButtonDumpAll_Sections_clicked",
    "on_pushButtonSave_IMAGE_DOS_HEADER_clicked",
    "on_pushButtonSave_IMAGE_OPTIONAL_HEADER_clicked",
    "on_pushButtonSave_IMAGE_NT_HEADERS_clicked",
    "on_pushButtonSave_IMAGE_FILE_HEADER_clicked",
    "on_pushButtonSave_BoundImport_clicked",
    "on_pushButtonSave_Certificate_clicked",
    "on_pushButtonSave_Sections_Info_clicked",
    "on_pushButtonSave_DelayImportLibraries_clicked",
    "on_pushButtonSave_DelayImportFunctions_clicked",
    "on_pushButtonSave_ImportLibraries_clicked",
    "on_pushButtonSave_ImportFunctions_clicked",
    "on_pushButtonSave_RICH_clicked",
    "on_pushButtonSave_Relocs_clicked",
    "on_pushButtonSave_RelocsPositions_clicked",
    "on_pushButtonSave_LoadConfig_clicked",
    "on_pushButtonExpand_Sections_Info_clicked",
    "on_pushButtonCollapse_Sections_Info_clicked",
    "on_treeView_Certificate_customContextMenuRequested",
    "on_tableView_DelayImportFunctions_customContextMenuRequested",
    "on_tableView_RICH_customContextMenuRequested",
    "on_tableView_RelocsPositions_customContextMenuRequested",
    "on_treeView_Resources_customContextMenuRequested",
    "on_treeView_Sections_Info_customContextMenuRequested",
    "on_pushButtonSave_TLSCallbacks_clicked",
    "on_pushButtonSave_TLS_clicked",
    "on_pushButtonSave_Resources_Version_Header_clicked",
    "on_pushButtonSave_Resources_Version_clicked",
    "on_pushButtonSave_Resources_StringTable_clicked",
    "on_pushButtonSave_Manifest_clicked",
    "on_pushButtonSave_ExportHeader_clicked",
    "on_pushButtonSave_ExportFunctions_clicked",
    "on_pushButtonSave_NetHeader_clicked",
    "on_pushButtonSave_Net_Metadata_clicked",
    "on_pushButtonSave_Import_Info_clicked",
    "on_pushButtonExpand_Import_Info_clicked",
    "on_pushButtonCollapse_Import_Info_clicked",
    "on_treeView_Import_Info_customContextMenuRequested",
    "on_checkBoxSectionsStringTable_stateChanged"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPEWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
     133,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  812,    2, 0x08,    1 /* Private */,
       6,    0,  817,    2, 0x08,    4 /* Private */,
       7,    1,  818,    2, 0x08,    5 /* Private */,
       9,    0,  821,    2, 0x08,    7 /* Private */,
      10,    0,  822,    2, 0x08,    8 /* Private */,
      11,    0,  823,    2, 0x08,    9 /* Private */,
      12,    0,  824,    2, 0x08,   10 /* Private */,
      13,    0,  825,    2, 0x08,   11 /* Private */,
      14,    0,  826,    2, 0x08,   12 /* Private */,
      15,    0,  827,    2, 0x08,   13 /* Private */,
      16,    0,  828,    2, 0x08,   14 /* Private */,
      17,    0,  829,    2, 0x08,   15 /* Private */,
      18,    1,  830,    2, 0x08,   16 /* Private */,
      20,    1,  833,    2, 0x08,   18 /* Private */,
      22,    1,  836,    2, 0x08,   20 /* Private */,
      23,    1,  839,    2, 0x08,   22 /* Private */,
      24,    1,  842,    2, 0x08,   24 /* Private */,
      25,    1,  845,    2, 0x08,   26 /* Private */,
      26,    1,  848,    2, 0x08,   28 /* Private */,
      27,    1,  851,    2, 0x08,   30 /* Private */,
      28,    4,  854,    2, 0x08,   32 /* Private */,
      35,    0,  863,    2, 0x08,   37 /* Private */,
      36,    0,  864,    2, 0x08,   38 /* Private */,
      37,    4,  865,    2, 0x08,   39 /* Private */,
      42,    4,  874,    2, 0x08,   44 /* Private */,
      43,    4,  883,    2, 0x08,   49 /* Private */,
      44,    4,  892,    2, 0x08,   54 /* Private */,
      45,    4,  901,    2, 0x08,   59 /* Private */,
      46,    4,  910,    2, 0x08,   64 /* Private */,
      47,    4,  919,    2, 0x08,   69 /* Private */,
      48,    4,  928,    2, 0x08,   74 /* Private */,
      49,    0,  937,    2, 0x08,   79 /* Private */,
      50,    0,  938,    2, 0x08,   80 /* Private */,
      51,    0,  939,    2, 0x08,   81 /* Private */,
      52,    0,  940,    2, 0x08,   82 /* Private */,
      53,    0,  941,    2, 0x08,   83 /* Private */,
      54,    0,  942,    2, 0x08,   84 /* Private */,
      55,    0,  943,    2, 0x08,   85 /* Private */,
      56,    0,  944,    2, 0x08,   86 /* Private */,
      57,    0,  945,    2, 0x08,   87 /* Private */,
      58,    0,  946,    2, 0x08,   88 /* Private */,
      59,    2,  947,    2, 0x08,   89 /* Private */,
      62,    1,  952,    2, 0x08,   92 /* Private */,
      64,    1,  955,    2, 0x08,   94 /* Private */,
      67,    2,  958,    2, 0x08,   96 /* Private */,
      70,    2,  963,    2, 0x08,   99 /* Private */,
      71,    1,  968,    2, 0x08,  102 /* Private */,
      72,    2,  971,    2, 0x08,  104 /* Private */,
      73,    1,  976,    2, 0x08,  107 /* Private */,
      74,    1,  979,    2, 0x08,  109 /* Private */,
      75,    2,  982,    2, 0x08,  111 /* Private */,
      76,    1,  987,    2, 0x08,  114 /* Private */,
      77,    1,  990,    2, 0x08,  116 /* Private */,
      78,    2,  993,    2, 0x08,  118 /* Private */,
      79,    1,  998,    2, 0x08,  121 /* Private */,
      80,    1, 1001,    2, 0x08,  123 /* Private */,
      81,    2, 1004,    2, 0x08,  125 /* Private */,
      82,    1, 1009,    2, 0x08,  128 /* Private */,
      83,    2, 1012,    2, 0x08,  130 /* Private */,
      84,    1, 1017,    2, 0x08,  133 /* Private */,
      85,    1, 1020,    2, 0x08,  135 /* Private */,
      86,    2, 1023,    2, 0x08,  137 /* Private */,
      87,    1, 1028,    2, 0x08,  140 /* Private */,
      88,    1, 1031,    2, 0x08,  142 /* Private */,
      89,    1, 1034,    2, 0x08,  144 /* Private */,
      90,    2, 1037,    2, 0x08,  146 /* Private */,
      91,    2, 1042,    2, 0x08,  149 /* Private */,
      92,    1, 1047,    2, 0x08,  152 /* Private */,
      93,    4, 1050,    2, 0x08,  154 /* Private */,
      94,    0, 1059,    2, 0x08,  159 /* Private */,
      95,    0, 1060,    2, 0x08,  160 /* Private */,
      96,    1, 1061,    2, 0x08,  161 /* Private */,
      98,    1, 1064,    2, 0x08,  163 /* Private */,
      99,    0, 1067,    2, 0x08,  165 /* Private */,
     100,    1, 1068,    2, 0x08,  166 /* Private */,
     101,    0, 1071,    2, 0x08,  168 /* Private */,
     102,    1, 1072,    2, 0x08,  169 /* Private */,
     103,    0, 1075,    2, 0x08,  171 /* Private */,
     104,    0, 1076,    2, 0x08,  172 /* Private */,
     105,    0, 1077,    2, 0x08,  173 /* Private */,
     106,    1, 1078,    2, 0x08,  174 /* Private */,
     107,    0, 1081,    2, 0x08,  176 /* Private */,
     108,    0, 1082,    2, 0x08,  177 /* Private */,
     109,    1, 1083,    2, 0x08,  178 /* Private */,
     110,    0, 1086,    2, 0x08,  180 /* Private */,
     111,    0, 1087,    2, 0x08,  181 /* Private */,
     112,    0, 1088,    2, 0x08,  182 /* Private */,
     113,    0, 1089,    2, 0x08,  183 /* Private */,
     114,    0, 1090,    2, 0x08,  184 /* Private */,
     115,    0, 1091,    2, 0x08,  185 /* Private */,
     116,    0, 1092,    2, 0x08,  186 /* Private */,
     117,    0, 1093,    2, 0x08,  187 /* Private */,
     118,    0, 1094,    2, 0x08,  188 /* Private */,
     119,    0, 1095,    2, 0x08,  189 /* Private */,
     120,    0, 1096,    2, 0x08,  190 /* Private */,
     121,    0, 1097,    2, 0x08,  191 /* Private */,
     122,    0, 1098,    2, 0x08,  192 /* Private */,
     123,    0, 1099,    2, 0x08,  193 /* Private */,
     124,    0, 1100,    2, 0x08,  194 /* Private */,
     125,    0, 1101,    2, 0x08,  195 /* Private */,
     126,    0, 1102,    2, 0x08,  196 /* Private */,
     127,    0, 1103,    2, 0x08,  197 /* Private */,
     128,    0, 1104,    2, 0x08,  198 /* Private */,
     129,    0, 1105,    2, 0x08,  199 /* Private */,
     130,    0, 1106,    2, 0x08,  200 /* Private */,
     131,    0, 1107,    2, 0x08,  201 /* Private */,
     132,    0, 1108,    2, 0x08,  202 /* Private */,
     133,    0, 1109,    2, 0x08,  203 /* Private */,
     134,    0, 1110,    2, 0x08,  204 /* Private */,
     135,    0, 1111,    2, 0x08,  205 /* Private */,
     136,    0, 1112,    2, 0x08,  206 /* Private */,
     137,    0, 1113,    2, 0x08,  207 /* Private */,
     138,    1, 1114,    2, 0x08,  208 /* Private */,
     139,    1, 1117,    2, 0x08,  210 /* Private */,
     140,    1, 1120,    2, 0x08,  212 /* Private */,
     141,    1, 1123,    2, 0x08,  214 /* Private */,
     142,    1, 1126,    2, 0x08,  216 /* Private */,
     143,    1, 1129,    2, 0x08,  218 /* Private */,
     144,    0, 1132,    2, 0x08,  220 /* Private */,
     145,    0, 1133,    2, 0x08,  221 /* Private */,
     146,    0, 1134,    2, 0x08,  222 /* Private */,
     147,    0, 1135,    2, 0x08,  223 /* Private */,
     148,    0, 1136,    2, 0x08,  224 /* Private */,
     149,    0, 1137,    2, 0x08,  225 /* Private */,
     150,    0, 1138,    2, 0x08,  226 /* Private */,
     151,    0, 1139,    2, 0x08,  227 /* Private */,
     152,    0, 1140,    2, 0x08,  228 /* Private */,
     153,    0, 1141,    2, 0x08,  229 /* Private */,
     154,    0, 1142,    2, 0x08,  230 /* Private */,
     155,    0, 1143,    2, 0x08,  231 /* Private */,
     156,    0, 1144,    2, 0x08,  232 /* Private */,
     157,    1, 1145,    2, 0x08,  233 /* Private */,
     158,    1, 1148,    2, 0x08,  235 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 30, 0x80000000 | 32, QMetaType::Int,   29,   31,   33,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   38,   39,   40,   41,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   38,   39,   40,   41,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   38,   39,   40,   41,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   38,   39,   40,   41,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   38,   39,   40,   41,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   38,   39,   40,   41,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   38,   39,   40,   41,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   38,   39,   40,   41,
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
    QMetaType::Void, QMetaType::Int, 0x80000000 | 60,   29,   61,
    QMetaType::Void, QMetaType::QPoint,   63,
    QMetaType::Void, 0x80000000 | 65,   66,
    QMetaType::Void, 0x80000000 | 65, 0x80000000 | 65,   68,   69,
    QMetaType::Void, 0x80000000 | 65, 0x80000000 | 65,   68,   69,
    QMetaType::Void, QMetaType::QPoint,   63,
    QMetaType::Void, 0x80000000 | 65, 0x80000000 | 65,   68,   69,
    QMetaType::Void, 0x80000000 | 65,   66,
    QMetaType::Void, QMetaType::QPoint,   63,
    QMetaType::Void, 0x80000000 | 65, 0x80000000 | 65,   68,   69,
    QMetaType::Void, 0x80000000 | 65,   66,
    QMetaType::Void, QMetaType::QPoint,   63,
    QMetaType::Void, 0x80000000 | 65, 0x80000000 | 65,   68,   69,
    QMetaType::Void, 0x80000000 | 65,   66,
    QMetaType::Void, QMetaType::QPoint,   63,
    QMetaType::Void, 0x80000000 | 65, 0x80000000 | 65,   68,   69,
    QMetaType::Void, QMetaType::QPoint,   63,
    QMetaType::Void, 0x80000000 | 65, 0x80000000 | 65,   68,   69,
    QMetaType::Void, 0x80000000 | 65,   66,
    QMetaType::Void, QMetaType::QPoint,   63,
    QMetaType::Void, 0x80000000 | 65, 0x80000000 | 65,   68,   69,
    QMetaType::Void, 0x80000000 | 65,   66,
    QMetaType::Void, QMetaType::QPoint,   63,
    QMetaType::Void, 0x80000000 | 65,   66,
    QMetaType::Void, 0x80000000 | 65, 0x80000000 | 65,   68,   69,
    QMetaType::Void, 0x80000000 | 65, 0x80000000 | 65,   68,   69,
    QMetaType::Void, QMetaType::QPoint,   63,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   38,   39,   40,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   97,
    QMetaType::Void, QMetaType::QPoint,   63,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   97,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   63,
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
    QMetaType::Void, QMetaType::QPoint,   63,
    QMetaType::Void, QMetaType::QPoint,   63,
    QMetaType::Void, QMetaType::QPoint,   63,
    QMetaType::Void, QMetaType::QPoint,   63,
    QMetaType::Void, QMetaType::QPoint,   63,
    QMetaType::Void, QMetaType::QPoint,   63,
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
    QMetaType::Void, QMetaType::QPoint,   63,
    QMetaType::Void, QMetaType::Int,   97,

       0        // eod
};

Q_CONSTINIT const QMetaObject PEWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<FormatWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSPEWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPEWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPEWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PEWidget, std::true_type>,
        // method 'on_treeWidgetNavi_currentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'widgetAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBoxReadonly_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
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
        // method 'resourceHex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resourceDisasm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resourceEntropy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resourceDump'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reloadData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'loadImportLibrary'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'loadRelocs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'loadSection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'loadException'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'loadDirectory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'loadDebug'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'loadDelayImport'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'createSectionTable'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const FW_DEF::HEADER_RECORD *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_toolButtonReload_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableWidget_IMAGE_DIRECTORY_ENTRIES_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_IMAGE_DOS_HEADER_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_IMAGE_NT_HEADERS_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_IMAGE_FILE_HEADER_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_IMAGE_OPTIONAL_HEADER_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_LoadConfig_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_NetHeader_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableWidget_TLS_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'editImportHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editDebugHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editRelocsHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editExceptionHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editDelayImportHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editBoundImportHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exportFunctionHex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exportFunctionDisasm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exportFunctionDemangle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'importFunctionDemangle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showSectionHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableView *, std::false_type>,
        // method 'on_tableView_Sections_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_Sections_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTableView_Sections_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTableView_Net_Metadata_Table_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_ImportLibraries_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onTableView_ImportLibraries_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_ImportLibraries_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_Relocs_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onTableView_Relocs_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_Relocs_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_Debug_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onTableView_Debug_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_Debug_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_Resources_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onTableView_Resources_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_Exceptions_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onTableView_Exceptions_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_Exceptions_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_DelayImportLibraries_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onTableView_DelayImportLibraries_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_DelayImportLibraries_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_BoundImport_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_BoundImport_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTreeView_Resources_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTreeView_Certificate_currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableView_ExportFunctions_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableWidget_Net_Metadata_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_toolButtonPrev_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonNext_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBoxExportShowValid_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tableView_ImportFunctions_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_pushButtonCertificateCheck_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBox_ManifestFormat_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'formatXML'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableWidget_IMAGE_DIRECTORY_ENTRIES_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'editDirectoryHeader'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'directoryHex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'directoryEntropy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableView_TLSCallbacks_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'disasmTLSCallback'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_Sections_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableView_Resources_StringTable_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'stringTableHex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_Debug_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_Exception_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_IMAGE_DIRECTORY_ENTRIES_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonExtractAllIcons_Resources_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonExtractAllCursors_Resources_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonDumpAll_Resources_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_Resources_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonDump_Overlay_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonDump_DosStub_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonDumpAll_Sections_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_IMAGE_DOS_HEADER_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_IMAGE_OPTIONAL_HEADER_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_IMAGE_NT_HEADERS_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_IMAGE_FILE_HEADER_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_BoundImport_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_Certificate_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_Sections_Info_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_DelayImportLibraries_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_DelayImportFunctions_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_ImportLibraries_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_ImportFunctions_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_RICH_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_Relocs_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_RelocsPositions_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_LoadConfig_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonExpand_Sections_Info_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonCollapse_Sections_Info_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_treeView_Certificate_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_DelayImportFunctions_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_RICH_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableView_RelocsPositions_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_treeView_Resources_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_treeView_Sections_Info_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_pushButtonSave_TLSCallbacks_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_TLS_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_Resources_Version_Header_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_Resources_Version_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_Resources_StringTable_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_Manifest_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_ExportHeader_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_ExportFunctions_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_NetHeader_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_Net_Metadata_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_Import_Info_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonExpand_Import_Info_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonCollapse_Import_Info_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_treeView_Import_Info_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_checkBoxSectionsStringTable_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void PEWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PEWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_treeWidgetNavi_currentItemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 1: _t->widgetAction(); break;
        case 2: _t->on_checkBoxReadonly_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->editSectionHeader(); break;
        case 4: _t->sectionHex(); break;
        case 5: _t->sectionDisasm(); break;
        case 6: _t->sectionEntropy(); break;
        case 7: _t->sectionDump(); break;
        case 8: _t->resourceHex(); break;
        case 9: _t->resourceDisasm(); break;
        case 10: _t->resourceEntropy(); break;
        case 11: _t->resourceDump(); break;
        case 12: _t->reloadData((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->loadImportLibrary((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        case 14: _t->loadRelocs((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        case 15: _t->loadSection((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        case 16: _t->loadException((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        case 17: _t->loadDirectory((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        case 18: _t->loadDebug((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        case 19: _t->loadDelayImport((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        case 20: { bool _r = _t->createSectionTable((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTableWidget*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<const FW_DEF::HEADER_RECORD*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->on_toolButtonReload_clicked(); break;
        case 22: _t->enableButton(); break;
        case 23: _t->on_tableWidget_IMAGE_DIRECTORY_ENTRIES_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 24: _t->on_tableWidget_IMAGE_DOS_HEADER_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 25: _t->on_tableWidget_IMAGE_NT_HEADERS_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 26: _t->on_tableWidget_IMAGE_FILE_HEADER_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 27: _t->on_tableWidget_IMAGE_OPTIONAL_HEADER_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 28: _t->on_tableWidget_LoadConfig_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 29: _t->on_tableWidget_NetHeader_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 30: _t->on_tableWidget_TLS_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 31: _t->editImportHeader(); break;
        case 32: _t->editDebugHeader(); break;
        case 33: _t->editRelocsHeader(); break;
        case 34: _t->editExceptionHeader(); break;
        case 35: _t->editDelayImportHeader(); break;
        case 36: _t->editBoundImportHeader(); break;
        case 37: _t->exportFunctionHex(); break;
        case 38: _t->exportFunctionDisasm(); break;
        case 39: _t->exportFunctionDemangle(); break;
        case 40: _t->importFunctionDemangle(); break;
        case 41: _t->showSectionHeader((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTableView*>>(_a[2]))); break;
        case 42: _t->on_tableView_Sections_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 43: _t->on_tableView_Sections_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 44: _t->onTableView_Sections_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 45: _t->onTableView_Net_Metadata_Table_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 46: _t->on_tableView_ImportLibraries_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 47: _t->onTableView_ImportLibraries_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 48: _t->on_tableView_ImportLibraries_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 49: _t->on_tableView_Relocs_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 50: _t->onTableView_Relocs_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 51: _t->on_tableView_Relocs_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 52: _t->on_tableView_Debug_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 53: _t->onTableView_Debug_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 54: _t->on_tableView_Debug_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 55: _t->on_tableView_Resources_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 56: _t->onTableView_Resources_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 57: _t->on_tableView_Exceptions_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 58: _t->onTableView_Exceptions_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 59: _t->on_tableView_Exceptions_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 60: _t->on_tableView_DelayImportLibraries_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 61: _t->onTableView_DelayImportLibraries_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 62: _t->on_tableView_DelayImportLibraries_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 63: _t->on_tableView_BoundImport_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 64: _t->on_tableView_BoundImport_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 65: _t->onTreeView_Resources_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 66: _t->onTreeView_Certificate_currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 67: _t->on_tableView_ExportFunctions_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 68: _t->on_tableWidget_Net_Metadata_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 69: _t->on_toolButtonPrev_clicked(); break;
        case 70: _t->on_toolButtonNext_clicked(); break;
        case 71: _t->on_checkBoxExportShowValid_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 72: _t->on_tableView_ImportFunctions_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 73: _t->on_pushButtonCertificateCheck_clicked(); break;
        case 74: _t->on_checkBox_ManifestFormat_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 75: _t->formatXML(); break;
        case 76: _t->on_tableWidget_IMAGE_DIRECTORY_ENTRIES_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 77: _t->editDirectoryHeader(); break;
        case 78: _t->directoryHex(); break;
        case 79: _t->directoryEntropy(); break;
        case 80: _t->on_tableView_TLSCallbacks_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 81: _t->disasmTLSCallback(); break;
        case 82: _t->on_pushButtonSave_Sections_clicked(); break;
        case 83: _t->on_tableView_Resources_StringTable_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 84: _t->stringTableHex(); break;
        case 85: _t->on_pushButtonSave_Debug_clicked(); break;
        case 86: _t->on_pushButtonSave_Exception_clicked(); break;
        case 87: _t->on_pushButtonSave_IMAGE_DIRECTORY_ENTRIES_clicked(); break;
        case 88: _t->on_pushButtonExtractAllIcons_Resources_clicked(); break;
        case 89: _t->on_pushButtonExtractAllCursors_Resources_clicked(); break;
        case 90: _t->on_pushButtonDumpAll_Resources_clicked(); break;
        case 91: _t->on_pushButtonSave_Resources_clicked(); break;
        case 92: _t->on_pushButtonDump_Overlay_clicked(); break;
        case 93: _t->on_pushButtonDump_DosStub_clicked(); break;
        case 94: _t->on_pushButtonDumpAll_Sections_clicked(); break;
        case 95: _t->on_pushButtonSave_IMAGE_DOS_HEADER_clicked(); break;
        case 96: _t->on_pushButtonSave_IMAGE_OPTIONAL_HEADER_clicked(); break;
        case 97: _t->on_pushButtonSave_IMAGE_NT_HEADERS_clicked(); break;
        case 98: _t->on_pushButtonSave_IMAGE_FILE_HEADER_clicked(); break;
        case 99: _t->on_pushButtonSave_BoundImport_clicked(); break;
        case 100: _t->on_pushButtonSave_Certificate_clicked(); break;
        case 101: _t->on_pushButtonSave_Sections_Info_clicked(); break;
        case 102: _t->on_pushButtonSave_DelayImportLibraries_clicked(); break;
        case 103: _t->on_pushButtonSave_DelayImportFunctions_clicked(); break;
        case 104: _t->on_pushButtonSave_ImportLibraries_clicked(); break;
        case 105: _t->on_pushButtonSave_ImportFunctions_clicked(); break;
        case 106: _t->on_pushButtonSave_RICH_clicked(); break;
        case 107: _t->on_pushButtonSave_Relocs_clicked(); break;
        case 108: _t->on_pushButtonSave_RelocsPositions_clicked(); break;
        case 109: _t->on_pushButtonSave_LoadConfig_clicked(); break;
        case 110: _t->on_pushButtonExpand_Sections_Info_clicked(); break;
        case 111: _t->on_pushButtonCollapse_Sections_Info_clicked(); break;
        case 112: _t->on_treeView_Certificate_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 113: _t->on_tableView_DelayImportFunctions_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 114: _t->on_tableView_RICH_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 115: _t->on_tableView_RelocsPositions_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 116: _t->on_treeView_Resources_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 117: _t->on_treeView_Sections_Info_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 118: _t->on_pushButtonSave_TLSCallbacks_clicked(); break;
        case 119: _t->on_pushButtonSave_TLS_clicked(); break;
        case 120: _t->on_pushButtonSave_Resources_Version_Header_clicked(); break;
        case 121: _t->on_pushButtonSave_Resources_Version_clicked(); break;
        case 122: _t->on_pushButtonSave_Resources_StringTable_clicked(); break;
        case 123: _t->on_pushButtonSave_Manifest_clicked(); break;
        case 124: _t->on_pushButtonSave_ExportHeader_clicked(); break;
        case 125: _t->on_pushButtonSave_ExportFunctions_clicked(); break;
        case 126: _t->on_pushButtonSave_NetHeader_clicked(); break;
        case 127: _t->on_pushButtonSave_Net_Metadata_clicked(); break;
        case 128: _t->on_pushButtonSave_Import_Info_clicked(); break;
        case 129: _t->on_pushButtonExpand_Import_Info_clicked(); break;
        case 130: _t->on_pushButtonCollapse_Import_Info_clicked(); break;
        case 131: _t->on_treeView_Import_Info_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 132: _t->on_checkBoxSectionsStringTable_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTableWidget* >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTableView* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *PEWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PEWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPEWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FormatWidget::qt_metacast(_clname);
}

int PEWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FormatWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 133)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 133;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 133)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 133;
    }
    return _id;
}
QT_WARNING_POP
