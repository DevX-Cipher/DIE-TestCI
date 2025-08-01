/****************************************************************************
** Meta object code from reading C++ file 'xlineedithex.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/Controls/xlineedithex.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xlineedithex.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSXLineEditHEXENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSXLineEditHEXENDCLASS = QtMocHelpers::stringData(
    "XLineEditHEX",
    "valueChanged",
    "",
    "varValue",
    "focused",
    "bState",
    "_setText",
    "sText",
    "_returnPressed",
    "customContextMenu",
    "nPos",
    "updateFont",
    "_copy",
    "_copyValue",
    "_copySignValue",
    "_clearValue",
    "_bits"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSXLineEditHEXENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    1 /* Public */,
       4,    1,   83,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   86,    2, 0x08,    5 /* Private */,
       8,    0,   89,    2, 0x08,    7 /* Private */,
       9,    1,   90,    2, 0x08,    8 /* Private */,
      11,    0,   93,    2, 0x08,   10 /* Private */,
      12,    0,   94,    2, 0x0a,   11 /* Public */,
      13,    0,   95,    2, 0x0a,   12 /* Public */,
      14,    0,   96,    2, 0x0a,   13 /* Public */,
      15,    0,   97,    2, 0x0a,   14 /* Public */,
      16,    0,   98,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject XLineEditHEX::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_CLASSXLineEditHEXENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSXLineEditHEXENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSXLineEditHEXENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<XLineEditHEX, std::true_type>,
        // method 'valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'focused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_setText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method '_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'customContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'updateFont'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_copy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_copyValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_copySignValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_clearValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_bits'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void XLineEditHEX::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XLineEditHEX *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 1: _t->focused((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->_setText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->_returnPressed(); break;
        case 4: _t->customContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 5: _t->updateFont(); break;
        case 6: _t->_copy(); break;
        case 7: _t->_copyValue(); break;
        case 8: _t->_copySignValue(); break;
        case 9: _t->_clearValue(); break;
        case 10: _t->_bits(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (XLineEditHEX::*)(QVariant );
            if (_t _q_method = &XLineEditHEX::valueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (XLineEditHEX::*)(bool );
            if (_t _q_method = &XLineEditHEX::focused; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *XLineEditHEX::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XLineEditHEX::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSXLineEditHEXENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int XLineEditHEX::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void XLineEditHEX::valueChanged(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XLineEditHEX::focused(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
