/****************************************************************************
** Meta object code from reading C++ file 'formatswidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/FormatWidgets/formatswidget.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formatswidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFormatsWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFormatsWidgetENDCLASS = QtMocHelpers::stringData(
    "FormatsWidget",
    "scanProgress",
    "",
    "value",
    "scanStarted",
    "scanFinished",
    "on_comboBoxFileType_currentIndexChanged",
    "nIndex",
    "on_comboBoxScanEngine_currentIndexChanged",
    "reload",
    "scan",
    "enableControls",
    "bState",
    "on_toolButtonEntryPoint_clicked",
    "on_toolButtonMemoryMap_clicked",
    "on_toolButtonPE_clicked",
    "on_toolButtonPEExport_clicked",
    "on_toolButtonPEImport_clicked",
    "on_toolButtonPEResources_clicked",
    "on_toolButtonPEOverlay_clicked",
    "on_toolButtonPENET_clicked",
    "on_toolButtonPESections_clicked",
    "on_toolButtonPEManifest_clicked",
    "on_toolButtonPEVersion_clicked",
    "on_toolButtonMSDOSOverlay_clicked",
    "on_toolButtonMSDOS_clicked",
    "on_toolButtonPETLS_clicked",
    "on_toolButtonELF_clicked",
    "on_toolButtonELFSections_clicked",
    "on_toolButtonELFPrograms_clicked",
    "on_toolButtonLE_clicked",
    "on_toolButtonNE_clicked",
    "on_toolButtonMACH_clicked",
    "on_toolButtonMACHSegments_clicked",
    "on_toolButtonMACHSections_clicked",
    "on_toolButtonMACHCommands_clicked",
    "on_toolButtonMACHLibraries_clicked",
    "on_toolButtonDEX_clicked",
    "on_toolButtonArchive_clicked",
    "on_toolButtonBinary_clicked",
    "showType",
    "SBINARY::TYPE",
    "type",
    "convertType",
    "XBinary::FT",
    "fileType",
    "showMSDOS",
    "SMSDOS::TYPE",
    "showLE",
    "SLE::TYPE",
    "showNE",
    "SNE::TYPE",
    "showPE",
    "SPE::TYPE",
    "showELF",
    "SELF::TYPE",
    "showMACH",
    "SMACH::TYPE",
    "showDEX",
    "SDEX::TYPE",
    "showBinary",
    "getCurrentFileType",
    "getScanEngine",
    "sDefault",
    "adjustScanTab",
    "sIndex",
    "onScanStarted",
    "onScanFinished",
    "on_toolButtonFileInfo_clicked",
    "on_toolButtonMIME_clicked",
    "on_toolButtonStrings_clicked",
    "on_toolButtonSignatures_clicked",
    "on_toolButtonHex_clicked",
    "on_toolButtonEntropy_clicked",
    "on_toolButtonVirusTotal_clicked",
    "on_toolButtonHash_clicked",
    "on_toolButtonExtractor_clicked",
    "on_toolButtonSearch_clicked",
    "on_toolButtonUnpack_clicked",
    "on_toolButtonFiles_clicked",
    "on_toolButtonYARA_clicked",
    "on_toolButtonDisasm_clicked",
    "on_toolButtonVisualization_clicked",
    "_showNfdInfo",
    "_showYaraInfo",
    "_currentFileType",
    "nFT",
    "on_toolButtonMANIFESTMF_clicked",
    "on_toolButtonAndroidManifest_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFormatsWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      70,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  434,    2, 0x06,    1 /* Public */,
       4,    0,  437,    2, 0x06,    3 /* Public */,
       5,    0,  438,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,  439,    2, 0x08,    5 /* Private */,
       8,    1,  442,    2, 0x08,    7 /* Private */,
       9,    0,  445,    2, 0x08,    9 /* Private */,
      10,    0,  446,    2, 0x08,   10 /* Private */,
      11,    1,  447,    2, 0x08,   11 /* Private */,
      13,    0,  450,    2, 0x08,   13 /* Private */,
      14,    0,  451,    2, 0x08,   14 /* Private */,
      15,    0,  452,    2, 0x08,   15 /* Private */,
      16,    0,  453,    2, 0x08,   16 /* Private */,
      17,    0,  454,    2, 0x08,   17 /* Private */,
      18,    0,  455,    2, 0x08,   18 /* Private */,
      19,    0,  456,    2, 0x08,   19 /* Private */,
      20,    0,  457,    2, 0x08,   20 /* Private */,
      21,    0,  458,    2, 0x08,   21 /* Private */,
      22,    0,  459,    2, 0x08,   22 /* Private */,
      23,    0,  460,    2, 0x08,   23 /* Private */,
      24,    0,  461,    2, 0x08,   24 /* Private */,
      25,    0,  462,    2, 0x08,   25 /* Private */,
      26,    0,  463,    2, 0x08,   26 /* Private */,
      27,    0,  464,    2, 0x08,   27 /* Private */,
      28,    0,  465,    2, 0x08,   28 /* Private */,
      29,    0,  466,    2, 0x08,   29 /* Private */,
      30,    0,  467,    2, 0x08,   30 /* Private */,
      31,    0,  468,    2, 0x08,   31 /* Private */,
      32,    0,  469,    2, 0x08,   32 /* Private */,
      33,    0,  470,    2, 0x08,   33 /* Private */,
      34,    0,  471,    2, 0x08,   34 /* Private */,
      35,    0,  472,    2, 0x08,   35 /* Private */,
      36,    0,  473,    2, 0x08,   36 /* Private */,
      37,    0,  474,    2, 0x08,   37 /* Private */,
      38,    0,  475,    2, 0x08,   38 /* Private */,
      39,    0,  476,    2, 0x08,   39 /* Private */,
      40,    1,  477,    2, 0x08,   40 /* Private */,
      43,    2,  480,    2, 0x08,   42 /* Private */,
      46,    1,  485,    2, 0x08,   45 /* Private */,
      48,    1,  488,    2, 0x08,   47 /* Private */,
      50,    1,  491,    2, 0x08,   49 /* Private */,
      52,    1,  494,    2, 0x08,   51 /* Private */,
      54,    1,  497,    2, 0x08,   53 /* Private */,
      56,    1,  500,    2, 0x08,   55 /* Private */,
      58,    1,  503,    2, 0x08,   57 /* Private */,
      60,    1,  506,    2, 0x08,   59 /* Private */,
      61,    0,  509,    2, 0x08,   61 /* Private */,
      62,    1,  510,    2, 0x08,   62 /* Private */,
      64,    1,  513,    2, 0x08,   64 /* Private */,
      66,    0,  516,    2, 0x08,   66 /* Private */,
      67,    0,  517,    2, 0x08,   67 /* Private */,
      68,    0,  518,    2, 0x08,   68 /* Private */,
      69,    0,  519,    2, 0x08,   69 /* Private */,
      70,    0,  520,    2, 0x08,   70 /* Private */,
      71,    0,  521,    2, 0x08,   71 /* Private */,
      72,    0,  522,    2, 0x08,   72 /* Private */,
      73,    0,  523,    2, 0x08,   73 /* Private */,
      74,    0,  524,    2, 0x08,   74 /* Private */,
      75,    0,  525,    2, 0x08,   75 /* Private */,
      76,    0,  526,    2, 0x08,   76 /* Private */,
      77,    0,  527,    2, 0x08,   77 /* Private */,
      78,    0,  528,    2, 0x08,   78 /* Private */,
      79,    0,  529,    2, 0x08,   79 /* Private */,
      80,    0,  530,    2, 0x08,   80 /* Private */,
      81,    0,  531,    2, 0x08,   81 /* Private */,
      82,    0,  532,    2, 0x08,   82 /* Private */,
      83,    0,  533,    2, 0x08,   83 /* Private */,
      84,    0,  534,    2, 0x08,   84 /* Private */,
      85,    1,  535,    2, 0x08,   85 /* Private */,
      87,    0,  538,    2, 0x08,   87 /* Private */,
      88,    0,  539,    2, 0x08,   88 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
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
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Int, 0x80000000 | 44, 0x80000000 | 41,   45,   42,
    QMetaType::Void, 0x80000000 | 47,   42,
    QMetaType::Void, 0x80000000 | 49,   42,
    QMetaType::Void, 0x80000000 | 51,   42,
    QMetaType::Void, 0x80000000 | 53,   42,
    QMetaType::Void, 0x80000000 | 55,   42,
    QMetaType::Void, 0x80000000 | 57,   42,
    QMetaType::Void, 0x80000000 | 59,   42,
    QMetaType::Void, 0x80000000 | 41,   42,
    0x80000000 | 44,
    QMetaType::QString, QMetaType::QString,   63,
    QMetaType::Void, QMetaType::QString,   65,
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
    QMetaType::Void, QMetaType::Int,   86,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FormatsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<XShortcutsWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSFormatsWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFormatsWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFormatsWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FormatsWidget, std::true_type>,
        // method 'scanProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'scanStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scanFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBoxFileType_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_comboBoxScanEngine_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'reload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scan'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableControls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_toolButtonEntryPoint_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonMemoryMap_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonPE_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonPEExport_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonPEImport_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonPEResources_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonPEOverlay_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonPENET_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonPESections_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonPEManifest_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonPEVersion_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonMSDOSOverlay_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonMSDOS_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonPETLS_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonELF_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonELFSections_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonELFPrograms_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonLE_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonNE_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonMACH_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonMACHSegments_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonMACHSections_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonMACHCommands_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonMACHLibraries_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonDEX_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonArchive_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonBinary_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SBINARY::TYPE, std::false_type>,
        // method 'convertType'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<XBinary::FT, std::false_type>,
        QtPrivate::TypeAndForceComplete<SBINARY::TYPE, std::false_type>,
        // method 'showMSDOS'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SMSDOS::TYPE, std::false_type>,
        // method 'showLE'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SLE::TYPE, std::false_type>,
        // method 'showNE'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SNE::TYPE, std::false_type>,
        // method 'showPE'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SPE::TYPE, std::false_type>,
        // method 'showELF'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SELF::TYPE, std::false_type>,
        // method 'showMACH'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SMACH::TYPE, std::false_type>,
        // method 'showDEX'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SDEX::TYPE, std::false_type>,
        // method 'showBinary'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SBINARY::TYPE, std::false_type>,
        // method 'getCurrentFileType'
        QtPrivate::TypeAndForceComplete<XBinary::FT, std::false_type>,
        // method 'getScanEngine'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'adjustScanTab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onScanStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onScanFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonFileInfo_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonMIME_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonStrings_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonSignatures_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonHex_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonEntropy_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonVirusTotal_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonHash_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonExtractor_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonSearch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonUnpack_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonFiles_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonYARA_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonDisasm_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonVisualization_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_showNfdInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_showYaraInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_currentFileType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'on_toolButtonMANIFESTMF_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonAndroidManifest_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FormatsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FormatsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scanProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->scanStarted(); break;
        case 2: _t->scanFinished(); break;
        case 3: _t->on_comboBoxFileType_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_comboBoxScanEngine_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->reload(); break;
        case 6: _t->scan(); break;
        case 7: _t->enableControls((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->on_toolButtonEntryPoint_clicked(); break;
        case 9: _t->on_toolButtonMemoryMap_clicked(); break;
        case 10: _t->on_toolButtonPE_clicked(); break;
        case 11: _t->on_toolButtonPEExport_clicked(); break;
        case 12: _t->on_toolButtonPEImport_clicked(); break;
        case 13: _t->on_toolButtonPEResources_clicked(); break;
        case 14: _t->on_toolButtonPEOverlay_clicked(); break;
        case 15: _t->on_toolButtonPENET_clicked(); break;
        case 16: _t->on_toolButtonPESections_clicked(); break;
        case 17: _t->on_toolButtonPEManifest_clicked(); break;
        case 18: _t->on_toolButtonPEVersion_clicked(); break;
        case 19: _t->on_toolButtonMSDOSOverlay_clicked(); break;
        case 20: _t->on_toolButtonMSDOS_clicked(); break;
        case 21: _t->on_toolButtonPETLS_clicked(); break;
        case 22: _t->on_toolButtonELF_clicked(); break;
        case 23: _t->on_toolButtonELFSections_clicked(); break;
        case 24: _t->on_toolButtonELFPrograms_clicked(); break;
        case 25: _t->on_toolButtonLE_clicked(); break;
        case 26: _t->on_toolButtonNE_clicked(); break;
        case 27: _t->on_toolButtonMACH_clicked(); break;
        case 28: _t->on_toolButtonMACHSegments_clicked(); break;
        case 29: _t->on_toolButtonMACHSections_clicked(); break;
        case 30: _t->on_toolButtonMACHCommands_clicked(); break;
        case 31: _t->on_toolButtonMACHLibraries_clicked(); break;
        case 32: _t->on_toolButtonDEX_clicked(); break;
        case 33: _t->on_toolButtonArchive_clicked(); break;
        case 34: _t->on_toolButtonBinary_clicked(); break;
        case 35: _t->showType((*reinterpret_cast< std::add_pointer_t<SBINARY::TYPE>>(_a[1]))); break;
        case 36: { qint32 _r = _t->convertType((*reinterpret_cast< std::add_pointer_t<XBinary::FT>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SBINARY::TYPE>>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->showMSDOS((*reinterpret_cast< std::add_pointer_t<SMSDOS::TYPE>>(_a[1]))); break;
        case 38: _t->showLE((*reinterpret_cast< std::add_pointer_t<SLE::TYPE>>(_a[1]))); break;
        case 39: _t->showNE((*reinterpret_cast< std::add_pointer_t<SNE::TYPE>>(_a[1]))); break;
        case 40: _t->showPE((*reinterpret_cast< std::add_pointer_t<SPE::TYPE>>(_a[1]))); break;
        case 41: _t->showELF((*reinterpret_cast< std::add_pointer_t<SELF::TYPE>>(_a[1]))); break;
        case 42: _t->showMACH((*reinterpret_cast< std::add_pointer_t<SMACH::TYPE>>(_a[1]))); break;
        case 43: _t->showDEX((*reinterpret_cast< std::add_pointer_t<SDEX::TYPE>>(_a[1]))); break;
        case 44: _t->showBinary((*reinterpret_cast< std::add_pointer_t<SBINARY::TYPE>>(_a[1]))); break;
        case 45: { XBinary::FT _r = _t->getCurrentFileType();
            if (_a[0]) *reinterpret_cast< XBinary::FT*>(_a[0]) = std::move(_r); }  break;
        case 46: { QString _r = _t->getScanEngine((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 47: _t->adjustScanTab((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 48: _t->onScanStarted(); break;
        case 49: _t->onScanFinished(); break;
        case 50: _t->on_toolButtonFileInfo_clicked(); break;
        case 51: _t->on_toolButtonMIME_clicked(); break;
        case 52: _t->on_toolButtonStrings_clicked(); break;
        case 53: _t->on_toolButtonSignatures_clicked(); break;
        case 54: _t->on_toolButtonHex_clicked(); break;
        case 55: _t->on_toolButtonEntropy_clicked(); break;
        case 56: _t->on_toolButtonVirusTotal_clicked(); break;
        case 57: _t->on_toolButtonHash_clicked(); break;
        case 58: _t->on_toolButtonExtractor_clicked(); break;
        case 59: _t->on_toolButtonSearch_clicked(); break;
        case 60: _t->on_toolButtonUnpack_clicked(); break;
        case 61: _t->on_toolButtonFiles_clicked(); break;
        case 62: _t->on_toolButtonYARA_clicked(); break;
        case 63: _t->on_toolButtonDisasm_clicked(); break;
        case 64: _t->on_toolButtonVisualization_clicked(); break;
        case 65: _t->_showNfdInfo(); break;
        case 66: _t->_showYaraInfo(); break;
        case 67: _t->_currentFileType((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        case 68: _t->on_toolButtonMANIFESTMF_clicked(); break;
        case 69: _t->on_toolButtonAndroidManifest_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FormatsWidget::*)(int );
            if (_t _q_method = &FormatsWidget::scanProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FormatsWidget::*)();
            if (_t _q_method = &FormatsWidget::scanStarted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FormatsWidget::*)();
            if (_t _q_method = &FormatsWidget::scanFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *FormatsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormatsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFormatsWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return XShortcutsWidget::qt_metacast(_clname);
}

int FormatsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XShortcutsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 70)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 70;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 70)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 70;
    }
    return _id;
}

// SIGNAL 0
void FormatsWidget::scanProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FormatsWidget::scanStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FormatsWidget::scanFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
