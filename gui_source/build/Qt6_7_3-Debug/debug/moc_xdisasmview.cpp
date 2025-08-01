/****************************************************************************
** Meta object code from reading C++ file 'xdisasmview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/XDisasmView/xdisasmview.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xdisasmview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSXDisasmViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSXDisasmViewENDCLASS = QtMocHelpers::stringData(
    "XDisasmView",
    "_goToEntryPointSlot",
    "",
    "_goToXrefSlot",
    "_signatureSlot",
    "_hexSlot",
    "_referencesSlot",
    "_analyzeAll",
    "_analyzeAnalyze",
    "_analyzeSymbols",
    "_analyzeFunctions",
    "_transfer",
    "XInfoDBTransfer::COMMAND",
    "command"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSXDisasmViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x09,    1 /* Protected */,
       3,    0,   75,    2, 0x09,    2 /* Protected */,
       4,    0,   76,    2, 0x09,    3 /* Protected */,
       5,    0,   77,    2, 0x09,    4 /* Protected */,
       6,    0,   78,    2, 0x09,    5 /* Protected */,
       7,    0,   79,    2, 0x09,    6 /* Protected */,
       8,    0,   80,    2, 0x09,    7 /* Protected */,
       9,    0,   81,    2, 0x09,    8 /* Protected */,
      10,    0,   82,    2, 0x09,    9 /* Protected */,
      11,    1,   83,    2, 0x09,   10 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject XDisasmView::staticMetaObject = { {
    QMetaObject::SuperData::link<XDeviceTableEditView::staticMetaObject>(),
    qt_meta_stringdata_CLASSXDisasmViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSXDisasmViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSXDisasmViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<XDisasmView, std::true_type>,
        // method '_goToEntryPointSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_goToXrefSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_signatureSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_hexSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_referencesSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_analyzeAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_analyzeAnalyze'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_analyzeSymbols'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_analyzeFunctions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_transfer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<XInfoDBTransfer::COMMAND, std::false_type>
    >,
    nullptr
} };

void XDisasmView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XDisasmView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->_goToEntryPointSlot(); break;
        case 1: _t->_goToXrefSlot(); break;
        case 2: _t->_signatureSlot(); break;
        case 3: _t->_hexSlot(); break;
        case 4: _t->_referencesSlot(); break;
        case 5: _t->_analyzeAll(); break;
        case 6: _t->_analyzeAnalyze(); break;
        case 7: _t->_analyzeSymbols(); break;
        case 8: _t->_analyzeFunctions(); break;
        case 9: _t->_transfer((*reinterpret_cast< std::add_pointer_t<XInfoDBTransfer::COMMAND>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *XDisasmView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XDisasmView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSXDisasmViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return XDeviceTableEditView::qt_metacast(_clname);
}

int XDisasmView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XDeviceTableEditView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
