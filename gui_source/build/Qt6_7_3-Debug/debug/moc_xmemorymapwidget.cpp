/****************************************************************************
** Meta object code from reading C++ file 'xmemorymapwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/XMemoryMapWidget/xmemorymapwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmemorymapwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSXMemoryMapWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSXMemoryMapWidgetENDCLASS = QtMocHelpers::stringData(
    "XMemoryMapWidget",
    "findValue",
    "",
    "nValue",
    "XBinary::ENDIAN",
    "endian",
    "on_comboBoxType_currentIndexChanged",
    "nIndex",
    "on_radioButtonFileOffset_toggled",
    "bChecked",
    "on_radioButtonVirtualAddress_toggled",
    "on_radioButtonRelativeVirtualAddress_toggled",
    "updateMemoryMap",
    "_adjust",
    "bInit",
    "on_lineEditFileOffset_textChanged",
    "sText",
    "on_lineEditVirtualAddress_textChanged",
    "on_lineEditRelativeVirtualAddress_textChanged",
    "on_tableViewSelection",
    "QItemSelection",
    "itemSelected",
    "itemDeselected",
    "_goToOffset",
    "nOffset",
    "nSize",
    "onHexCursorChanged",
    "on_toolButtonSave_clicked",
    "on_checkBoxShowAll_stateChanged",
    "on_toolButtonDumpAll_clicked",
    "on_tableViewMemoryMap_customContextMenuRequested",
    "pos",
    "dumpSection",
    "on_tableViewMemoryMap_clicked",
    "QModelIndex",
    "index",
    "viewSelection",
    "on_toolButtonFileOffsetFind_clicked",
    "on_toolButtonVirtualAddressFind_clicked",
    "on_toolButtonRelativeVirtualAddressFind_clicked",
    "on_comboBoxMapMode_currentIndexChanged",
    "on_toolButtonReload_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSXMemoryMapWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  170,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,  175,    2, 0x08,    4 /* Private */,
       8,    1,  178,    2, 0x08,    6 /* Private */,
      10,    1,  181,    2, 0x08,    8 /* Private */,
      11,    1,  184,    2, 0x08,   10 /* Private */,
      12,    0,  187,    2, 0x08,   12 /* Private */,
      13,    1,  188,    2, 0x08,   13 /* Private */,
      15,    1,  191,    2, 0x08,   15 /* Private */,
      17,    1,  194,    2, 0x08,   17 /* Private */,
      18,    1,  197,    2, 0x08,   19 /* Private */,
      19,    2,  200,    2, 0x08,   21 /* Private */,
      23,    2,  205,    2, 0x08,   24 /* Private */,
      23,    1,  210,    2, 0x28,   27 /* Private | MethodCloned */,
      26,    1,  213,    2, 0x08,   29 /* Private */,
      27,    0,  216,    2, 0x08,   31 /* Private */,
      28,    1,  217,    2, 0x08,   32 /* Private */,
      29,    0,  220,    2, 0x08,   34 /* Private */,
      30,    1,  221,    2, 0x08,   35 /* Private */,
      32,    0,  224,    2, 0x08,   37 /* Private */,
      33,    1,  225,    2, 0x08,   38 /* Private */,
      36,    0,  228,    2, 0x08,   40 /* Private */,
      37,    0,  229,    2, 0x08,   41 /* Private */,
      38,    0,  230,    2, 0x08,   42 /* Private */,
      39,    0,  231,    2, 0x08,   43 /* Private */,
      40,    1,  232,    2, 0x08,   44 /* Private */,
      41,    0,  235,    2, 0x08,   46 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 20,   21,   22,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   24,   25,
    QMetaType::Void, QMetaType::LongLong,   24,
    QMetaType::Void, QMetaType::LongLong,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   31,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject XMemoryMapWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<XShortcutsWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSXMemoryMapWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSXMemoryMapWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSXMemoryMapWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<XMemoryMapWidget, std::true_type>,
        // method 'findValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<XBinary::ENDIAN, std::false_type>,
        // method 'on_comboBoxType_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_radioButtonFileOffset_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButtonVirtualAddress_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_radioButtonRelativeVirtualAddress_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'updateMemoryMap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_adjust'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_lineEditFileOffset_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_lineEditVirtualAddress_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_lineEditRelativeVirtualAddress_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_tableViewSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        // method '_goToOffset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method '_goToOffset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'onHexCursorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'on_toolButtonSave_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBoxShowAll_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_toolButtonDumpAll_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableViewMemoryMap_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'dumpSection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableViewMemoryMap_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'viewSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonFileOffsetFind_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonVirtualAddressFind_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonRelativeVirtualAddressFind_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBoxMapMode_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_toolButtonReload_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void XMemoryMapWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XMemoryMapWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->findValue((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<XBinary::ENDIAN>>(_a[2]))); break;
        case 1: _t->on_comboBoxType_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_radioButtonFileOffset_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_radioButtonVirtualAddress_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->on_radioButtonRelativeVirtualAddress_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->updateMemoryMap(); break;
        case 6: _t->_adjust((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->on_lineEditFileOffset_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->on_lineEditVirtualAddress_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->on_lineEditRelativeVirtualAddress_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->on_tableViewSelection((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 11: _t->_goToOffset((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 12: _t->_goToOffset((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 13: _t->onHexCursorChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 14: _t->on_toolButtonSave_clicked(); break;
        case 15: _t->on_checkBoxShowAll_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->on_toolButtonDumpAll_clicked(); break;
        case 17: _t->on_tableViewMemoryMap_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 18: _t->dumpSection(); break;
        case 19: _t->on_tableViewMemoryMap_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 20: _t->viewSelection(); break;
        case 21: _t->on_toolButtonFileOffsetFind_clicked(); break;
        case 22: _t->on_toolButtonVirtualAddressFind_clicked(); break;
        case 23: _t->on_toolButtonRelativeVirtualAddressFind_clicked(); break;
        case 24: _t->on_comboBoxMapMode_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->on_toolButtonReload_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (XMemoryMapWidget::*)(quint64 , XBinary::ENDIAN );
            if (_t _q_method = &XMemoryMapWidget::findValue; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *XMemoryMapWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XMemoryMapWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSXMemoryMapWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return XShortcutsWidget::qt_metacast(_clname);
}

int XMemoryMapWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void XMemoryMapWidget::findValue(quint64 _t1, XBinary::ENDIAN _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
