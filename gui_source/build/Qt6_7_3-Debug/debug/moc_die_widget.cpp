/****************************************************************************
** Meta object code from reading C++ file 'die_widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/die_widget/die_widget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'die_widget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDIE_WidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDIE_WidgetENDCLASS = QtMocHelpers::stringData(
    "DIE_Widget",
    "scanStarted",
    "",
    "scanFinished",
    "currentFileType",
    "nFT",
    "scanProgress",
    "value",
    "clear",
    "process",
    "scan",
    "stop",
    "onScanFinished",
    "on_pushButtonDieSignatures_clicked",
    "on_pushButtonDieExtraInformation_clicked",
    "on_pushButtonDieLog_clicked",
    "showInfo",
    "sName",
    "showSignature",
    "XBinary::FT",
    "fileType",
    "enableControls",
    "bState",
    "getInfoFileName",
    "copyResult",
    "on_pushButtonDieScanDirectory_clicked",
    "on_toolButtonElapsedTime_clicked",
    "on_treeViewResult_clicked",
    "QModelIndex",
    "index",
    "on_treeViewResult_customContextMenuRequested",
    "pos",
    "timerSlot",
    "on_pushButtonDieScanStart_clicked",
    "on_pushButtonDieScanStop_clicked",
    "handleErrorString",
    "sErrorString",
    "handleWarningString",
    "sWarningString"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDIE_WidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  170,    2, 0x06,    1 /* Public */,
       3,    0,  171,    2, 0x06,    2 /* Public */,
       4,    1,  172,    2, 0x06,    3 /* Public */,
       6,    1,  175,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,  178,    2, 0x08,    7 /* Private */,
       9,    0,  179,    2, 0x08,    8 /* Private */,
      10,    0,  180,    2, 0x08,    9 /* Private */,
      11,    0,  181,    2, 0x08,   10 /* Private */,
      12,    0,  182,    2, 0x08,   11 /* Private */,
      13,    0,  183,    2, 0x08,   12 /* Private */,
      14,    0,  184,    2, 0x08,   13 /* Private */,
      15,    0,  185,    2, 0x08,   14 /* Private */,
      16,    1,  186,    2, 0x08,   15 /* Private */,
      18,    2,  189,    2, 0x08,   17 /* Private */,
      21,    1,  194,    2, 0x08,   20 /* Private */,
      23,    1,  197,    2, 0x08,   22 /* Private */,
      24,    0,  200,    2, 0x08,   24 /* Private */,
      25,    0,  201,    2, 0x08,   25 /* Private */,
      26,    0,  202,    2, 0x08,   26 /* Private */,
      27,    1,  203,    2, 0x08,   27 /* Private */,
      30,    1,  206,    2, 0x08,   29 /* Private */,
      32,    0,  209,    2, 0x08,   31 /* Private */,
      33,    0,  210,    2, 0x08,   32 /* Private */,
      34,    0,  211,    2, 0x08,   33 /* Private */,
      35,    1,  212,    2, 0x08,   34 /* Private */,
      37,    1,  215,    2, 0x08,   36 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QString,   20,   17,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::QString, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, QMetaType::QPoint,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   38,

       0        // eod
};

Q_CONSTINIT const QMetaObject DIE_Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<XShortcutsWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSDIE_WidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDIE_WidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDIE_WidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DIE_Widget, std::true_type>,
        // method 'scanStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scanFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentFileType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'scanProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'process'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scan'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onScanFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonDieSignatures_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonDieExtraInformation_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonDieLog_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'showSignature'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<XBinary::FT, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'enableControls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getInfoFileName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'copyResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonDieScanDirectory_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonElapsedTime_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_treeViewResult_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_treeViewResult_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'timerSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonDieScanStart_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonDieScanStop_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleErrorString'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'handleWarningString'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void DIE_Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DIE_Widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scanStarted(); break;
        case 1: _t->scanFinished(); break;
        case 2: _t->currentFileType((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        case 3: _t->scanProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->clear(); break;
        case 5: _t->process(); break;
        case 6: _t->scan(); break;
        case 7: _t->stop(); break;
        case 8: _t->onScanFinished(); break;
        case 9: _t->on_pushButtonDieSignatures_clicked(); break;
        case 10: _t->on_pushButtonDieExtraInformation_clicked(); break;
        case 11: _t->on_pushButtonDieLog_clicked(); break;
        case 12: _t->showInfo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->showSignature((*reinterpret_cast< std::add_pointer_t<XBinary::FT>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 14: _t->enableControls((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: { QString _r = _t->getInfoFileName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->copyResult(); break;
        case 17: _t->on_pushButtonDieScanDirectory_clicked(); break;
        case 18: _t->on_toolButtonElapsedTime_clicked(); break;
        case 19: _t->on_treeViewResult_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 20: _t->on_treeViewResult_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 21: _t->timerSlot(); break;
        case 22: _t->on_pushButtonDieScanStart_clicked(); break;
        case 23: _t->on_pushButtonDieScanStop_clicked(); break;
        case 24: _t->handleErrorString((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->handleWarningString((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DIE_Widget::*)();
            if (_t _q_method = &DIE_Widget::scanStarted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DIE_Widget::*)();
            if (_t _q_method = &DIE_Widget::scanFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DIE_Widget::*)(qint32 );
            if (_t _q_method = &DIE_Widget::currentFileType; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DIE_Widget::*)(int );
            if (_t _q_method = &DIE_Widget::scanProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *DIE_Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DIE_Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDIE_WidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return XShortcutsWidget::qt_metacast(_clname);
}

int DIE_Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XShortcutsWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void DIE_Widget::scanStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DIE_Widget::scanFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DIE_Widget::currentFileType(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DIE_Widget::scanProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
