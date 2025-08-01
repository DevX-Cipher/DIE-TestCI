/****************************************************************************
** Meta object code from reading C++ file 'capstone_bridge.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/XDisasmCore/Modules/capstone_bridge.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'capstone_bridge.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSCapstone_BridgeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCapstone_BridgeENDCLASS = QtMocHelpers::stringData(
    "Capstone_Bridge"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCapstone_BridgeENDCLASS[] = {

 // content:
      12,       // revision
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

Q_CONSTINIT const QMetaObject Capstone_Bridge::staticMetaObject = { {
    QMetaObject::SuperData::link<XDisasmAbstract::staticMetaObject>(),
    qt_meta_stringdata_CLASSCapstone_BridgeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCapstone_BridgeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCapstone_BridgeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Capstone_Bridge, std::true_type>
    >,
    nullptr
} };

void Capstone_Bridge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *Capstone_Bridge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Capstone_Bridge::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCapstone_BridgeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return XDisasmAbstract::qt_metacast(_clname);
}

int Capstone_Bridge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XDisasmAbstract::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
