/****************************************************************************
** Meta object code from reading C++ file 'xvirustotalwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/XOnlineTools/xvirustotalwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xvirustotalwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSXVirusTotalWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSXVirusTotalWidgetENDCLASS = QtMocHelpers::stringData(
    "XVirusTotalWidget",
    "on_toolButtonReload_clicked",
    "",
    "on_toolButtonSave_clicked",
    "on_toolButtonRescan_clicked",
    "on_checkBoxShowDetects_stateChanged",
    "nValue",
    "on_toolButtonWebsite_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSXVirusTotalWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    1,   47,    2, 0x08,    4 /* Private */,
       7,    0,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject XVirusTotalWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<XShortcutsWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSXVirusTotalWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSXVirusTotalWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSXVirusTotalWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<XVirusTotalWidget, std::true_type>,
        // method 'on_toolButtonReload_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonSave_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonRescan_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBoxShowDetects_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_toolButtonWebsite_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void XVirusTotalWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XVirusTotalWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_toolButtonReload_clicked(); break;
        case 1: _t->on_toolButtonSave_clicked(); break;
        case 2: _t->on_toolButtonRescan_clicked(); break;
        case 3: _t->on_checkBoxShowDetects_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_toolButtonWebsite_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *XVirusTotalWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XVirusTotalWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSXVirusTotalWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return XShortcutsWidget::qt_metacast(_clname);
}

int XVirusTotalWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XShortcutsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
