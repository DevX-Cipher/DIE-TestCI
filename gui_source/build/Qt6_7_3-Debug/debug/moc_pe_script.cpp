/****************************************************************************
** Meta object code from reading C++ file 'pe_script.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/XScanEngine/modules/pe_script.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pe_script.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPE_ScriptENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPE_ScriptENDCLASS = QtMocHelpers::stringData(
    "PE_Script",
    "getNumberOfSections",
    "",
    "getSectionName",
    "nNumber",
    "getSectionVirtualSize",
    "getSectionVirtualAddress",
    "getSectionFileSize",
    "getSectionFileOffset",
    "getSectionCharacteristics",
    "getNumberOfResources",
    "isSectionNamePresent",
    "sSectionName",
    "isSectionNamePresentExp",
    "isNET",
    "isNet",
    "isPEPlus",
    "getGeneralOptions",
    "getResourceIdByNumber",
    "getResourceNameByNumber",
    "getResourceOffsetByNumber",
    "getResourceSizeByNumber",
    "getResourceTypeByNumber",
    "isNETStringPresent",
    "sString",
    "isNetObjectPresent",
    "isNETUnicodeStringPresent",
    "isNetUStringPresent",
    "findSignatureInBlob_NET",
    "sSignature",
    "isSignatureInBlobPresent_NET",
    "isNetGlobalCctorPresent",
    "isNetTypePresent",
    "sTypeNamespace",
    "sTypeName",
    "isNetMethodPresent",
    "sMethodName",
    "isNetFieldPresent",
    "sFieldName",
    "getNetModuleName",
    "getNetAssemblyName",
    "getNumberOfImports",
    "getImportLibraryName",
    "isLibraryPresent",
    "sLibraryName",
    "bCheckCase",
    "isLibraryFunctionPresent",
    "sFunctionName",
    "isFunctionPresent",
    "getImportFunctionName",
    "nImport",
    "nFunctionNumber",
    "getImportSection",
    "getExportSection",
    "getResourceSection",
    "getEntryPointSection",
    "getRelocsSection",
    "getTLSSection",
    "getMajorLinkerVersion",
    "getMinorLinkerVersion",
    "getManifest",
    "getVersionStringInfo",
    "sKey",
    "getNumberOfImportThunks",
    "getResourceNameOffset",
    "sName",
    "isResourceNamePresent",
    "isResourceGroupNamePresent",
    "isResourceGroupIdPresent",
    "nID",
    "getCompilerVersion",
    "isConsole",
    "isSignedFile",
    "getSectionNameCollision",
    "sString1",
    "sString2",
    "getSectionNumber",
    "getSectionNumberExp",
    "isDll",
    "isDriver",
    "getNETVersion",
    "compareEP_NET",
    "nOffset",
    "getSizeOfCode",
    "getSizeOfUninitializedData",
    "getPEFileVersion",
    "sFileName",
    "getFileVersion",
    "getFileVersionMS",
    "calculateSizeOfHeaders",
    "isExportFunctionPresent",
    "getNumberOfExportFunctions",
    "getNumberOfExports",
    "getExportFunctionName",
    "getExportNameByNumber",
    "isExportPresent",
    "isTLSPresent",
    "isImportPresent",
    "isResourcesPresent",
    "getImportHash32",
    "getImportHash64",
    "isImportPositionHashPresent",
    "nIndex",
    "nHash",
    "getImageFileHeader",
    "getImageOptionalHeader"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPE_ScriptENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      84,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  518,    2, 0x0a,    1 /* Public */,
       3,    1,  519,    2, 0x0a,    2 /* Public */,
       5,    1,  522,    2, 0x0a,    4 /* Public */,
       6,    1,  525,    2, 0x0a,    6 /* Public */,
       7,    1,  528,    2, 0x0a,    8 /* Public */,
       8,    1,  531,    2, 0x0a,   10 /* Public */,
       9,    1,  534,    2, 0x0a,   12 /* Public */,
      10,    0,  537,    2, 0x0a,   14 /* Public */,
      11,    1,  538,    2, 0x0a,   15 /* Public */,
      13,    1,  541,    2, 0x0a,   17 /* Public */,
      14,    0,  544,    2, 0x0a,   19 /* Public */,
      15,    0,  545,    2, 0x0a,   20 /* Public */,
      16,    0,  546,    2, 0x0a,   21 /* Public */,
      17,    0,  547,    2, 0x0a,   22 /* Public */,
      18,    1,  548,    2, 0x0a,   23 /* Public */,
      19,    1,  551,    2, 0x0a,   25 /* Public */,
      20,    1,  554,    2, 0x0a,   27 /* Public */,
      21,    1,  557,    2, 0x0a,   29 /* Public */,
      22,    1,  560,    2, 0x0a,   31 /* Public */,
      23,    1,  563,    2, 0x0a,   33 /* Public */,
      25,    1,  566,    2, 0x0a,   35 /* Public */,
      26,    1,  569,    2, 0x0a,   37 /* Public */,
      27,    1,  572,    2, 0x0a,   39 /* Public */,
      28,    1,  575,    2, 0x0a,   41 /* Public */,
      30,    1,  578,    2, 0x0a,   43 /* Public */,
      31,    0,  581,    2, 0x0a,   45 /* Public */,
      32,    2,  582,    2, 0x0a,   46 /* Public */,
      35,    3,  587,    2, 0x0a,   49 /* Public */,
      37,    3,  594,    2, 0x0a,   53 /* Public */,
      39,    0,  601,    2, 0x0a,   57 /* Public */,
      40,    0,  602,    2, 0x0a,   58 /* Public */,
      41,    0,  603,    2, 0x0a,   59 /* Public */,
      42,    1,  604,    2, 0x0a,   60 /* Public */,
      43,    2,  607,    2, 0x0a,   62 /* Public */,
      43,    1,  612,    2, 0x2a,   65 /* Public | MethodCloned */,
      46,    2,  615,    2, 0x0a,   67 /* Public */,
      48,    1,  620,    2, 0x0a,   70 /* Public */,
      49,    2,  623,    2, 0x0a,   72 /* Public */,
      52,    0,  628,    2, 0x0a,   75 /* Public */,
      53,    0,  629,    2, 0x0a,   76 /* Public */,
      54,    0,  630,    2, 0x0a,   77 /* Public */,
      55,    0,  631,    2, 0x0a,   78 /* Public */,
      56,    0,  632,    2, 0x0a,   79 /* Public */,
      57,    0,  633,    2, 0x0a,   80 /* Public */,
      58,    0,  634,    2, 0x0a,   81 /* Public */,
      59,    0,  635,    2, 0x0a,   82 /* Public */,
      60,    0,  636,    2, 0x0a,   83 /* Public */,
      61,    1,  637,    2, 0x0a,   84 /* Public */,
      63,    1,  640,    2, 0x0a,   86 /* Public */,
      64,    1,  643,    2, 0x0a,   88 /* Public */,
      66,    1,  646,    2, 0x0a,   90 /* Public */,
      67,    1,  649,    2, 0x0a,   92 /* Public */,
      68,    1,  652,    2, 0x0a,   94 /* Public */,
      70,    0,  655,    2, 0x0a,   96 /* Public */,
      71,    0,  656,    2, 0x0a,   97 /* Public */,
      72,    0,  657,    2, 0x0a,   98 /* Public */,
      73,    2,  658,    2, 0x0a,   99 /* Public */,
      76,    1,  663,    2, 0x0a,  102 /* Public */,
      77,    1,  666,    2, 0x0a,  104 /* Public */,
      78,    0,  669,    2, 0x0a,  106 /* Public */,
      79,    0,  670,    2, 0x0a,  107 /* Public */,
      80,    0,  671,    2, 0x0a,  108 /* Public */,
      81,    2,  672,    2, 0x0a,  109 /* Public */,
      81,    1,  677,    2, 0x2a,  112 /* Public | MethodCloned */,
      83,    0,  680,    2, 0x0a,  114 /* Public */,
      84,    0,  681,    2, 0x0a,  115 /* Public */,
      85,    1,  682,    2, 0x0a,  116 /* Public */,
      87,    0,  685,    2, 0x0a,  118 /* Public */,
      88,    0,  686,    2, 0x0a,  119 /* Public */,
      89,    0,  687,    2, 0x0a,  120 /* Public */,
      90,    1,  688,    2, 0x0a,  121 /* Public */,
      91,    0,  691,    2, 0x0a,  123 /* Public */,
      92,    0,  692,    2, 0x0a,  124 /* Public */,
      93,    1,  693,    2, 0x0a,  125 /* Public */,
      94,    1,  696,    2, 0x0a,  127 /* Public */,
      95,    0,  699,    2, 0x0a,  129 /* Public */,
      96,    0,  700,    2, 0x0a,  130 /* Public */,
      97,    0,  701,    2, 0x0a,  131 /* Public */,
      98,    0,  702,    2, 0x0a,  132 /* Public */,
      99,    0,  703,    2, 0x0a,  133 /* Public */,
     100,    0,  704,    2, 0x0a,  134 /* Public */,
     101,    2,  705,    2, 0x0a,  135 /* Public */,
     104,    1,  710,    2, 0x0a,  138 /* Public */,
     105,    1,  713,    2, 0x0a,  140 /* Public */,

 // slots: parameters
    QMetaType::UShort,
    QMetaType::QString, QMetaType::UInt,    4,
    QMetaType::UInt, QMetaType::UInt,    4,
    QMetaType::UInt, QMetaType::UInt,    4,
    QMetaType::UInt, QMetaType::UInt,    4,
    QMetaType::UInt, QMetaType::UInt,    4,
    QMetaType::UInt, QMetaType::UInt,    4,
    QMetaType::UInt,
    QMetaType::Bool, QMetaType::QString,   12,
    QMetaType::Bool, QMetaType::QString,   12,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::UInt, QMetaType::UInt,    4,
    QMetaType::QString, QMetaType::UInt,    4,
    QMetaType::LongLong, QMetaType::UInt,    4,
    QMetaType::LongLong, QMetaType::UInt,    4,
    QMetaType::UInt, QMetaType::UInt,    4,
    QMetaType::Bool, QMetaType::QString,   24,
    QMetaType::Bool, QMetaType::QString,   24,
    QMetaType::Bool, QMetaType::QString,   24,
    QMetaType::Bool, QMetaType::QString,   24,
    QMetaType::LongLong, QMetaType::QString,   29,
    QMetaType::Bool, QMetaType::QString,   29,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   33,   34,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString,   33,   34,   36,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString,   33,   34,   38,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Int,
    QMetaType::QString, QMetaType::UInt,    4,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   44,   45,
    QMetaType::Bool, QMetaType::QString,   44,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   44,   47,
    QMetaType::Bool, QMetaType::QString,   47,
    QMetaType::QString, QMetaType::UInt, QMetaType::UInt,   50,   51,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::UChar,
    QMetaType::UChar,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString,   62,
    QMetaType::Int, QMetaType::UInt,    4,
    QMetaType::LongLong, QMetaType::QString,   65,
    QMetaType::Bool, QMetaType::QString,   65,
    QMetaType::Bool, QMetaType::QString,   65,
    QMetaType::Bool, QMetaType::UInt,   69,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   74,   75,
    QMetaType::Int, QMetaType::QString,   12,
    QMetaType::Int, QMetaType::QString,   12,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString, QMetaType::LongLong,   29,   82,
    QMetaType::Bool, QMetaType::QString,   29,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::QString, QMetaType::QString,   86,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::LongLong,
    QMetaType::Bool, QMetaType::QString,   47,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::QString, QMetaType::UInt,    4,
    QMetaType::QString, QMetaType::UInt,    4,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::UInt,
    QMetaType::ULongLong,
    QMetaType::Bool, QMetaType::Int, QMetaType::UInt,  102,  103,
    QMetaType::ULongLong, QMetaType::QString,   24,
    QMetaType::ULongLong, QMetaType::QString,   24,

       0        // eod
};

Q_CONSTINIT const QMetaObject PE_Script::staticMetaObject = { {
    QMetaObject::SuperData::link<MSDOS_Script::staticMetaObject>(),
    qt_meta_stringdata_CLASSPE_ScriptENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPE_ScriptENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPE_ScriptENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PE_Script, std::true_type>,
        // method 'getNumberOfSections'
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'getSectionName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getSectionVirtualSize'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getSectionVirtualAddress'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getSectionFileSize'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getSectionFileOffset'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getSectionCharacteristics'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getNumberOfResources'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'isSectionNamePresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isSectionNamePresentExp'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isNET'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isNet'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isPEPlus'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getGeneralOptions'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getResourceIdByNumber'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getResourceNameByNumber'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getResourceOffsetByNumber'
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getResourceSizeByNumber'
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getResourceTypeByNumber'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'isNETStringPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isNetObjectPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isNETUnicodeStringPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isNetUStringPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'findSignatureInBlob_NET'
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isSignatureInBlobPresent_NET'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isNetGlobalCctorPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isNetTypePresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isNetMethodPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isNetFieldPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getNetModuleName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getNetAssemblyName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getNumberOfImports'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'getImportLibraryName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'isLibraryPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isLibraryPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isLibraryFunctionPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isFunctionPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getImportFunctionName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getImportSection'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'getExportSection'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'getResourceSection'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'getEntryPointSection'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'getRelocsSection'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'getTLSSection'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'getMajorLinkerVersion'
        QtPrivate::TypeAndForceComplete<quint8, std::false_type>,
        // method 'getMinorLinkerVersion'
        QtPrivate::TypeAndForceComplete<quint8, std::false_type>,
        // method 'getManifest'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getVersionStringInfo'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getNumberOfImportThunks'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getResourceNameOffset'
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isResourceNamePresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isResourceGroupNamePresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isResourceGroupIdPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getCompilerVersion'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'isConsole'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isSignedFile'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getSectionNameCollision'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getSectionNumber'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getSectionNumberExp'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isDll'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isDriver'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getNETVersion'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'compareEP_NET'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'compareEP_NET'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getSizeOfCode'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getSizeOfUninitializedData'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getPEFileVersion'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getFileVersion'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getFileVersionMS'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'calculateSizeOfHeaders'
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'isExportFunctionPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getNumberOfExportFunctions'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'getNumberOfExports'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'getExportFunctionName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getExportNameByNumber'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'isExportPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isTLSPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isImportPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isResourcesPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getImportHash32'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getImportHash64'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'isImportPositionHashPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getImageFileHeader'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getImageOptionalHeader'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void PE_Script::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PE_Script *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { quint16 _r = _t->getNumberOfSections();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->getSectionName((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { quint32 _r = _t->getSectionVirtualSize((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 3: { quint32 _r = _t->getSectionVirtualAddress((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 4: { quint32 _r = _t->getSectionFileSize((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 5: { quint32 _r = _t->getSectionFileOffset((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 6: { quint32 _r = _t->getSectionCharacteristics((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 7: { quint32 _r = _t->getNumberOfResources();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->isSectionNamePresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->isSectionNamePresentExp((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->isNET();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->isNet();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->isPEPlus();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->getGeneralOptions();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: { quint32 _r = _t->getResourceIdByNumber((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->getResourceNameByNumber((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { qint64 _r = _t->getResourceOffsetByNumber((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 17: { qint64 _r = _t->getResourceSizeByNumber((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 18: { quint32 _r = _t->getResourceTypeByNumber((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->isNETStringPresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->isNetObjectPresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: { bool _r = _t->isNETUnicodeStringPresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: { bool _r = _t->isNetUStringPresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: { qint64 _r = _t->findSignatureInBlob_NET((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 24: { bool _r = _t->isSignatureInBlobPresent_NET((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->isNetGlobalCctorPresent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->isNetTypePresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->isNetMethodPresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->isNetFieldPresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { QString _r = _t->getNetModuleName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 30: { QString _r = _t->getNetAssemblyName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 31: { qint32 _r = _t->getNumberOfImports();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 32: { QString _r = _t->getImportLibraryName((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->isLibraryPresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 34: { bool _r = _t->isLibraryPresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: { bool _r = _t->isLibraryFunctionPresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 36: { bool _r = _t->isFunctionPresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { QString _r = _t->getImportFunctionName((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint32>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 38: { qint32 _r = _t->getImportSection();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 39: { qint32 _r = _t->getExportSection();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 40: { qint32 _r = _t->getResourceSection();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 41: { qint32 _r = _t->getEntryPointSection();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 42: { qint32 _r = _t->getRelocsSection();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 43: { qint32 _r = _t->getTLSSection();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 44: { quint8 _r = _t->getMajorLinkerVersion();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 45: { quint8 _r = _t->getMinorLinkerVersion();
            if (_a[0]) *reinterpret_cast< quint8*>(_a[0]) = std::move(_r); }  break;
        case 46: { QString _r = _t->getManifest();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 47: { QString _r = _t->getVersionStringInfo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 48: { qint32 _r = _t->getNumberOfImportThunks((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 49: { qint64 _r = _t->getResourceNameOffset((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 50: { bool _r = _t->isResourceNamePresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 51: { bool _r = _t->isResourceGroupNamePresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 52: { bool _r = _t->isResourceGroupIdPresent((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 53: { QString _r = _t->getCompilerVersion();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 54: { bool _r = _t->isConsole();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 55: { bool _r = _t->isSignedFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 56: { QString _r = _t->getSectionNameCollision((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 57: { qint32 _r = _t->getSectionNumber((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 58: { qint32 _r = _t->getSectionNumberExp((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 59: { bool _r = _t->isDll();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 60: { bool _r = _t->isDriver();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 61: { QString _r = _t->getNETVersion();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 62: { bool _r = _t->compareEP_NET((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 63: { bool _r = _t->compareEP_NET((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 64: { quint32 _r = _t->getSizeOfCode();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 65: { quint32 _r = _t->getSizeOfUninitializedData();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 66: { QString _r = _t->getPEFileVersion((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 67: { QString _r = _t->getFileVersion();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 68: { QString _r = _t->getFileVersionMS();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 69: { qint64 _r = _t->calculateSizeOfHeaders();
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 70: { bool _r = _t->isExportFunctionPresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 71: { qint32 _r = _t->getNumberOfExportFunctions();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 72: { qint32 _r = _t->getNumberOfExports();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 73: { QString _r = _t->getExportFunctionName((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 74: { QString _r = _t->getExportNameByNumber((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 75: { bool _r = _t->isExportPresent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 76: { bool _r = _t->isTLSPresent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 77: { bool _r = _t->isImportPresent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 78: { bool _r = _t->isResourcesPresent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 79: { quint32 _r = _t->getImportHash32();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 80: { quint64 _r = _t->getImportHash64();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 81: { bool _r = _t->isImportPositionHashPresent((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint32>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 82: { quint64 _r = _t->getImageFileHeader((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 83: { quint64 _r = _t->getImageOptionalHeader((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *PE_Script::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PE_Script::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPE_ScriptENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return MSDOS_Script::qt_metacast(_clname);
}

int PE_Script::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MSDOS_Script::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 84)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 84;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 84)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 84;
    }
    return _id;
}
QT_WARNING_POP
