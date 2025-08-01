/****************************************************************************
** Meta object code from reading C++ file 'pdf_script.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/XScanEngine/modules/pdf_script.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pdf_script.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPDF_ScriptENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPDF_ScriptENDCLASS = QtMocHelpers::stringData(
    "PDF_Script",
    "getValuesByKey",
    "",
    "sKey",
    "getStringValuesByKey",
    "isValuesHexByKey",
    "getHeaderCommentAsHex"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPDF_ScriptENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x0a,    1 /* Public */,
       4,    1,   41,    2, 0x0a,    3 /* Public */,
       5,    1,   44,    2, 0x0a,    5 /* Public */,
       6,    0,   47,    2, 0x0a,    7 /* Public */,

 // slots: parameters
    QMetaType::QVariantList, QMetaType::QString,    3,
    QMetaType::QVariantList, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::QString,

       0        // eod
};

Q_CONSTINIT const QMetaObject PDF_Script::staticMetaObject = { {
    QMetaObject::SuperData::link<Binary_Script::staticMetaObject>(),
    qt_meta_stringdata_CLASSPDF_ScriptENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPDF_ScriptENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPDF_ScriptENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PDF_Script, std::true_type>,
        // method 'getValuesByKey'
        QtPrivate::TypeAndForceComplete<QList<QVariant>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getStringValuesByKey'
        QtPrivate::TypeAndForceComplete<QList<QVariant>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isValuesHexByKey'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getHeaderCommentAsHex'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void PDF_Script::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PDF_Script *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QList<QVariant> _r = _t->getValuesByKey((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QVariant>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QList<QVariant> _r = _t->getStringValuesByKey((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QVariant>*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->isValuesHexByKey((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->getHeaderCommentAsHex();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *PDF_Script::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PDF_Script::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPDF_ScriptENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Binary_Script::qt_metacast(_clname);
}

int PDF_Script::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Binary_Script::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
