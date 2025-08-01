/****************************************************************************
** Meta object code from reading C++ file 'msdos_script.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/XScanEngine/modules/msdos_script.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'msdos_script.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMSDOS_ScriptENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMSDOS_ScriptENDCLASS = QtMocHelpers::stringData(
    "MSDOS_Script",
    "isLE",
    "",
    "isLX",
    "isNE",
    "isPE",
    "getDosStubOffset",
    "getDosStubSize",
    "isDosStubPresent",
    "isRichSignaturePresent",
    "getNumberOfRichIDs",
    "isRichVersionPresent",
    "nVersion",
    "getRichVersion",
    "nPosition",
    "getRichID",
    "getRichCount"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMSDOS_ScriptENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x0a,    1 /* Public */,
       3,    0,   93,    2, 0x0a,    2 /* Public */,
       4,    0,   94,    2, 0x0a,    3 /* Public */,
       5,    0,   95,    2, 0x0a,    4 /* Public */,
       6,    0,   96,    2, 0x0a,    5 /* Public */,
       7,    0,   97,    2, 0x0a,    6 /* Public */,
       8,    0,   98,    2, 0x0a,    7 /* Public */,
       9,    0,   99,    2, 0x0a,    8 /* Public */,
      10,    0,  100,    2, 0x0a,    9 /* Public */,
      11,    1,  101,    2, 0x0a,   10 /* Public */,
      13,    1,  104,    2, 0x0a,   12 /* Public */,
      15,    1,  107,    2, 0x0a,   14 /* Public */,
      16,    1,  110,    2, 0x0a,   16 /* Public */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::LongLong,
    QMetaType::LongLong,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Int,
    QMetaType::Bool, QMetaType::UInt,   12,
    QMetaType::UInt, QMetaType::Int,   14,
    QMetaType::UInt, QMetaType::Int,   14,
    QMetaType::UInt, QMetaType::Int,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject MSDOS_Script::staticMetaObject = { {
    QMetaObject::SuperData::link<Binary_Script::staticMetaObject>(),
    qt_meta_stringdata_CLASSMSDOS_ScriptENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMSDOS_ScriptENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMSDOS_ScriptENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MSDOS_Script, std::true_type>,
        // method 'isLE'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isLX'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isNE'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isPE'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getDosStubOffset'
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'getDosStubSize'
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'isDosStubPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'isRichSignaturePresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getNumberOfRichIDs'
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'isRichVersionPresent'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'getRichVersion'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'getRichID'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'getRichCount'
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>
    >,
    nullptr
} };

void MSDOS_Script::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MSDOS_Script *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->isLE();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->isLX();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->isNE();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->isPE();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { qint64 _r = _t->getDosStubOffset();
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 5: { qint64 _r = _t->getDosStubSize();
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->isDosStubPresent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->isRichSignaturePresent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { qint32 _r = _t->getNumberOfRichIDs();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->isRichVersionPresent((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { quint32 _r = _t->getRichVersion((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 11: { quint32 _r = _t->getRichID((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        case 12: { quint32 _r = _t->getRichCount((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint32*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *MSDOS_Script::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MSDOS_Script::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMSDOS_ScriptENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Binary_Script::qt_metacast(_clname);
}

int MSDOS_Script::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Binary_Script::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
