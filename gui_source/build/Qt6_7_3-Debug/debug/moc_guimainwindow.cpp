/****************************************************************************
** Meta object code from reading C++ file 'guimainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/gui_source/guimainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guimainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGuiMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGuiMainWindowENDCLASS = QtMocHelpers::stringData(
    "GuiMainWindow",
    "on_toolButtonExit_clicked",
    "",
    "on_toolButtonAbout_clicked",
    "on_toolButtonShortcuts_clicked",
    "on_toolButtonOptions_clicked",
    "on_toolButtonOpenFile_clicked",
    "on_toolButtonDemangle_clicked",
    "on_toolButtonRecentFiles_clicked",
    "on_checkBoxAdvanced_toggled",
    "bChecked",
    "on_lineEditFileName_returnPressed",
    "onScanStarted",
    "onScanFinished",
    "updateTaskbarProgress",
    "value",
    "exitSlot",
    "openFileSlot",
    "fullScreenSlot",
    "getCurrentFileName",
    "adjustView",
    "updateShortcuts",
    "adjustFile",
    "setAdvanced",
    "bState",
    "errorMessageSlot",
    "sText",
    "_process",
    "sName"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  146,    2, 0x08,    1 /* Private */,
       3,    0,  147,    2, 0x08,    2 /* Private */,
       4,    0,  148,    2, 0x08,    3 /* Private */,
       5,    0,  149,    2, 0x08,    4 /* Private */,
       6,    0,  150,    2, 0x08,    5 /* Private */,
       7,    0,  151,    2, 0x08,    6 /* Private */,
       8,    0,  152,    2, 0x08,    7 /* Private */,
       9,    1,  153,    2, 0x08,    8 /* Private */,
      11,    0,  156,    2, 0x08,   10 /* Private */,
      12,    0,  157,    2, 0x08,   11 /* Private */,
      13,    0,  158,    2, 0x08,   12 /* Private */,
      14,    1,  159,    2, 0x08,   13 /* Private */,
      16,    0,  162,    2, 0x08,   15 /* Private */,
      17,    0,  163,    2, 0x08,   16 /* Private */,
      18,    0,  164,    2, 0x08,   17 /* Private */,
      19,    0,  165,    2, 0x08,   18 /* Private */,
      20,    0,  166,    2, 0x08,   19 /* Private */,
      21,    0,  167,    2, 0x08,   20 /* Private */,
      22,    0,  168,    2, 0x08,   21 /* Private */,
      23,    1,  169,    2, 0x08,   22 /* Private */,
      25,    1,  172,    2, 0x08,   24 /* Private */,
      27,    1,  175,    2, 0x0a,   26 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QString,   28,

       0        // eod
};

Q_CONSTINIT const QMetaObject GuiMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GuiMainWindow, std::true_type>,
        // method 'on_toolButtonExit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonAbout_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonShortcuts_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonOptions_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonOpenFile_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonDemangle_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonRecentFiles_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBoxAdvanced_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_lineEditFileName_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onScanStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onScanFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateTaskbarProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'exitSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openFileSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fullScreenSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getCurrentFileName'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'adjustView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateShortcuts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'adjustFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setAdvanced'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'errorMessageSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method '_process'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void GuiMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiMainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_toolButtonExit_clicked(); break;
        case 1: _t->on_toolButtonAbout_clicked(); break;
        case 2: _t->on_toolButtonShortcuts_clicked(); break;
        case 3: _t->on_toolButtonOptions_clicked(); break;
        case 4: _t->on_toolButtonOpenFile_clicked(); break;
        case 5: _t->on_toolButtonDemangle_clicked(); break;
        case 6: _t->on_toolButtonRecentFiles_clicked(); break;
        case 7: _t->on_checkBoxAdvanced_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->on_lineEditFileName_returnPressed(); break;
        case 9: _t->onScanStarted(); break;
        case 10: _t->onScanFinished(); break;
        case 11: _t->updateTaskbarProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->exitSlot(); break;
        case 13: _t->openFileSlot(); break;
        case 14: _t->fullScreenSlot(); break;
        case 15: { QString _r = _t->getCurrentFileName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->adjustView(); break;
        case 17: _t->updateShortcuts(); break;
        case 18: _t->adjustFile(); break;
        case 19: _t->setAdvanced((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->errorMessageSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->_process((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *GuiMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int GuiMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
    }
    return _id;
}
QT_WARNING_POP
