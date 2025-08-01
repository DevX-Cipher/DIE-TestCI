/****************************************************************************
** Meta object code from reading C++ file 'dialogmultidisasmsignature.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/XDisasmView/Widgets/dialogmultidisasmsignature.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogmultidisasmsignature.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDialogMultiDisasmSignatureENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDialogMultiDisasmSignatureENDCLASS = QtMocHelpers::stringData(
    "DialogMultiDisasmSignature",
    "on_pushButtonOK_clicked",
    "",
    "reloadSignature",
    "on_checkBoxSpaces_toggled",
    "bChecked",
    "on_checkBoxUpper_toggled",
    "on_lineEditWildcard_textChanged",
    "sText",
    "on_pushButtonCopy_clicked",
    "on_spinBoxCount_valueChanged",
    "nValue",
    "on_comboBoxMethod_currentIndexChanged",
    "nIndex",
    "on_pushButtonScan_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDialogMultiDisasmSignatureENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    1,   70,    2, 0x08,    3 /* Private */,
       6,    1,   73,    2, 0x08,    5 /* Private */,
       7,    1,   76,    2, 0x08,    7 /* Private */,
       9,    0,   79,    2, 0x08,    9 /* Private */,
      10,    1,   80,    2, 0x08,   10 /* Private */,
      12,    1,   83,    2, 0x08,   12 /* Private */,
      14,    0,   86,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DialogMultiDisasmSignature::staticMetaObject = { {
    QMetaObject::SuperData::link<XShortcutsDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSDialogMultiDisasmSignatureENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDialogMultiDisasmSignatureENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDialogMultiDisasmSignatureENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DialogMultiDisasmSignature, std::true_type>,
        // method 'on_pushButtonOK_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reloadSignature'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBoxSpaces_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_checkBoxUpper_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_lineEditWildcard_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_pushButtonCopy_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_spinBoxCount_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_comboBoxMethod_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButtonScan_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DialogMultiDisasmSignature::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogMultiDisasmSignature *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButtonOK_clicked(); break;
        case 1: _t->reloadSignature(); break;
        case 2: _t->on_checkBoxSpaces_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_checkBoxUpper_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->on_lineEditWildcard_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_pushButtonCopy_clicked(); break;
        case 6: _t->on_spinBoxCount_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_comboBoxMethod_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_pushButtonScan_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *DialogMultiDisasmSignature::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogMultiDisasmSignature::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDialogMultiDisasmSignatureENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return XShortcutsDialog::qt_metacast(_clname);
}

int DialogMultiDisasmSignature::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XShortcutsDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
