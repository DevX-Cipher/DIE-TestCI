/****************************************************************************
** Meta object code from reading C++ file 'mach_script.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/XScanEngine/modules/mach_script.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mach_script.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMACH_ScriptENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMACH_ScriptENDCLASS = QtMocHelpers::stringData(
    "MACH_Script",
    "isLibraryPresent",
    "",
    "sLibraryName",
    "getNumberOfSections",
    "getNumberOfSegments",
    "getSectionNumber",
    "sSectionName",
    "getGeneralOptions",
    "getLibraryCurrentVersion",
    "getSectionFileOffset",
    "nNumber",
    "getSectionFileSize",
    "isSectionNamePresent",
    "getNumberOfCommands",
    "getCommandId",
    "isCommandPresent"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMACH_ScriptENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x0a,    1 /* Public */,
       4,    0,   89,    2, 0x0a,    3 /* Public */,
       5,    0,   90,    2, 0x0a,    4 /* Public */,
       6,    1,   91,    2, 0x0a,    5 /* Public */,
       8,    0,   94,    2, 0x0a,    7 /* Public */,
       9,    1,   95,    2, 0x0a,    8 /* Public */,
      10,    1,   98,    2, 0x0a,   10 /* Public */,
      12,    1,  101,    2, 0x0a,   12 /* Public */,
      13,    1,  104,    2, 0x0a,   14 /* Public */,
      14,    0,  107,    2, 0x0a,   16 /* Public */,
      15,    1,  108,    2, 0x0a,   17 /* Public */,
      16,    1,  111,    2, 0x0a,   19 /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::Int, QMetaType::QString,    7,
    QMetaType::QString,
    QMetaType::UInt, QMetaType::QString,    3,
    QMetaType::ULongLong, QMetaType::UInt,   11,
    QMetaType::ULongLong, QMetaType::UInt,   11,
    QMetaType::Bool, QMetaType::QString,    7,
    QMetaType::UInt,
    QMetaType::UInt, QMetaType::UInt,   11,
    QMetaType::Bool, QMetaType::UInt,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject MACH_Script::staticMetaObject = { {
    QMetaObject::SuperData::link<Binary_Script::staticMetaObject>(),
    qt_meta_stringdata_CLASSMACH_ScriptENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMACH_ScriptENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMACH_ScriptENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MACH_Script, std::true_type>,
        // method 'isLibraryPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getNumberOfSections'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getNumberOfSegments'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getSectionNumber'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getGeneralOptions'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getLibraryCurrentVersion'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getSectionFileOffset'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getSectionFileSize'
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'isSectionNamePresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getNumberOfCommands'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getCommandId'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'isCommandPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>
    >,
    nullptr
} };

void MACH_Script::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MACH_Script *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->isLibraryPresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { quint32 _r = _t->getNumberOfSections();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 2: { quint32 _r = _t->getNumberOfSegments();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 3: { qint32 _r = _t->getSectionNumber((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->getGeneralOptions();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { quint32 _r = _t->getLibraryCurrentVersion((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 6: { quint64 _r = _t->getSectionFileOffset((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 7: { quint64 _r = _t->getSectionFileSize((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->isSectionNamePresent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { quint32 _r = _t->getNumberOfCommands();
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 10: { quint32 _r = _t->getCommandId((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->isCommandPresent((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *MACH_Script::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MACH_Script::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMACH_ScriptENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Binary_Script::qt_metacast(_clname);
}

int MACH_Script::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Binary_Script::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
