/****************************************************************************
** Meta object code from reading C++ file 'elf_script.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/XScanEngine/modules/elf_script.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elf_script.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSELF_ScriptENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSELF_ScriptENDCLASS = QtMocHelpers::stringData(
    "ELF_Script",
    "isSectionNamePresent",
    "",
    "sSectionName",
    "getNumberOfSections",
    "getNumberOfPrograms",
    "getGeneralOptions",
    "getSectionNumber",
    "getElfHeader_type",
    "getElfHeader_machine",
    "getElfHeader_version",
    "getElfHeader_entry",
    "getElfHeader_phoff",
    "getElfHeader_shoff",
    "getElfHeader_flags",
    "getElfHeader_ehsize",
    "getElfHeader_phentsize",
    "getElfHeader_phnum",
    "getElfHeader_shentsize",
    "getElfHeader_shnum",
    "getElfHeader_shstrndx",
    "getProgramFileSize",
    "nNumber",
    "getProgramFileOffset",
    "getSectionFileOffset",
    "getSectionFileSize",
    "isStringInTablePresent",
    "sString",
    "isNotePresent",
    "sNote",
    "isLibraryPresent",
    "sLibraryName",
    "getRunPath"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSELF_ScriptENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  170,    2, 0x0a,    1 /* Public */,
       4,    0,  173,    2, 0x0a,    3 /* Public */,
       5,    0,  174,    2, 0x0a,    4 /* Public */,
       6,    0,  175,    2, 0x0a,    5 /* Public */,
       7,    1,  176,    2, 0x0a,    6 /* Public */,
       8,    0,  179,    2, 0x0a,    8 /* Public */,
       9,    0,  180,    2, 0x0a,    9 /* Public */,
      10,    0,  181,    2, 0x0a,   10 /* Public */,
      11,    0,  182,    2, 0x0a,   11 /* Public */,
      12,    0,  183,    2, 0x0a,   12 /* Public */,
      13,    0,  184,    2, 0x0a,   13 /* Public */,
      14,    0,  185,    2, 0x0a,   14 /* Public */,
      15,    0,  186,    2, 0x0a,   15 /* Public */,
      16,    0,  187,    2, 0x0a,   16 /* Public */,
      17,    0,  188,    2, 0x0a,   17 /* Public */,
      18,    0,  189,    2, 0x0a,   18 /* Public */,
      19,    0,  190,    2, 0x0a,   19 /* Public */,
      20,    0,  191,    2, 0x0a,   20 /* Public */,
      21,    1,  192,    2, 0x0a,   21 /* Public */,
      23,    1,  195,    2, 0x0a,   23 /* Public */,
      24,    1,  198,    2, 0x0a,   25 /* Public */,
      25,    1,  201,    2, 0x0a,   27 /* Public */,
      26,    2,  204,    2, 0x0a,   29 /* Public */,
      28,    1,  209,    2, 0x0a,   32 /* Public */,
      30,    1,  212,    2, 0x0a,   34 /* Public */,
      32,    0,  215,    2, 0x0a,   36 /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::QString,
    QMetaType::Int, QMetaType::QString,    3,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UInt,
    QMetaType::ULongLong,
    QMetaType::ULongLong,
    QMetaType::ULongLong,
    QMetaType::UInt,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::UShort,
    QMetaType::ULongLong, QMetaType::UInt,   22,
    QMetaType::ULongLong, QMetaType::UInt,   22,
    QMetaType::ULongLong, QMetaType::UInt,   22,
    QMetaType::ULongLong, QMetaType::UInt,   22,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    3,   27,
    QMetaType::Bool, QMetaType::QString,   29,
    QMetaType::Bool, QMetaType::QString,   31,
    QMetaType::QString,

       0        // eod
};

Q_CONSTINIT const QMetaObject ELF_Script::staticMetaObject = { {
    QMetaObject::SuperData::link<Binary_Script::staticMetaObject>(),
    qt_meta_stringdata_CLASSELF_ScriptENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSELF_ScriptENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSELF_ScriptENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ELF_Script, std::true_type>,
        // method 'isSectionNamePresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getNumberOfSections'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getNumberOfPrograms'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getGeneralOptions'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getSectionNumber'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getElfHeader_type'
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'getElfHeader_machine'
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'getElfHeader_version'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getElfHeader_entry'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'getElfHeader_phoff'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'getElfHeader_shoff'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'getElfHeader_flags'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getElfHeader_ehsize'
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'getElfHeader_phentsize'
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'getElfHeader_phnum'
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'getElfHeader_shentsize'
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'getElfHeader_shnum'
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'getElfHeader_shstrndx'
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'getProgramFileSize'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getProgramFileOffset'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getSectionFileOffset'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getSectionFileSize'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'isStringInTablePresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isNotePresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isLibraryPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getRunPath'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void ELF_Script::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ELF_Script *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->isSectionNamePresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { quint32 _r = _t->getNumberOfSections();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 2: { quint32 _r = _t->getNumberOfPrograms();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->getGeneralOptions();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { qint32 _r = _t->getSectionNumber((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 5: { quint16 _r = _t->getElfHeader_type();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 6: { quint16 _r = _t->getElfHeader_machine();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 7: { quint32 _r = _t->getElfHeader_version();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 8: { quint64 _r = _t->getElfHeader_entry();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 9: { quint64 _r = _t->getElfHeader_phoff();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 10: { quint64 _r = _t->getElfHeader_shoff();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 11: { quint32 _r = _t->getElfHeader_flags();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 12: { quint16 _r = _t->getElfHeader_ehsize();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 13: { quint16 _r = _t->getElfHeader_phentsize();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 14: { quint16 _r = _t->getElfHeader_phnum();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 15: { quint16 _r = _t->getElfHeader_shentsize();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 16: { quint16 _r = _t->getElfHeader_shnum();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 17: { quint16 _r = _t->getElfHeader_shstrndx();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 18: { quint64 _r = _t->getProgramFileSize((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 19: { quint64 _r = _t->getProgramFileOffset((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 20: { quint64 _r = _t->getSectionFileOffset((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 21: { quint64 _r = _t->getSectionFileSize((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 22: { bool _r = _t->isStringInTablePresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: { bool _r = _t->isNotePresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: { bool _r = _t->isLibraryPresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 25: { QString _r = _t->getRunPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *ELF_Script::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ELF_Script::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSELF_ScriptENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Binary_Script::qt_metacast(_clname);
}

int ELF_Script::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Binary_Script::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
