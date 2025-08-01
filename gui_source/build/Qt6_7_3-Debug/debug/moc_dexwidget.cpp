/****************************************************************************
** Meta object code from reading C++ file 'dexwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/FormatWidgets/DEX/dexwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dexwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDEXWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDEXWidgetENDCLASS = QtMocHelpers::stringData(
    "DEXWidget",
    "reloadData",
    "",
    "bSaveSelection",
    "on_treeWidgetNavi_currentItemChanged",
    "QTreeWidgetItem*",
    "pItemCurrent",
    "pItemPrevious",
    "on_checkBoxReadonly_toggled",
    "bChecked",
    "createSectionTable",
    "nType",
    "QTableWidget*",
    "pTableWidget",
    "const FW_DEF::HEADER_RECORD*",
    "pHeaderRecord",
    "nNumberOfRecords",
    "on_toolButtonReload_clicked",
    "enableButton",
    "on_tableWidget_Header_currentCellChanged",
    "nCurrentRow",
    "nCurrentColumn",
    "nPreviousRow",
    "nPreviousColumn",
    "on_toolButtonPrev_clicked",
    "on_toolButtonNext_clicked",
    "on_pushButtonSave_STRING_ID_ITEM_clicked",
    "on_pushButtonSave_TYPE_ID_ITEM_clicked",
    "on_pushButtonSave_PROTO_ID_ITEM_clicked",
    "on_pushButtonSave_FIELD_ID_ITEM_clicked",
    "on_pushButtonSave_CLASS_DEF_ITEM_clicked",
    "on_pushButtonSave_METHOD_ID_ITEM_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDEXWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x08,    1 /* Private */,
       4,    2,  107,    2, 0x08,    3 /* Private */,
       8,    1,  112,    2, 0x08,    6 /* Private */,
      10,    4,  115,    2, 0x08,    8 /* Private */,
      17,    0,  124,    2, 0x08,   13 /* Private */,
      18,    0,  125,    2, 0x08,   14 /* Private */,
      19,    4,  126,    2, 0x08,   15 /* Private */,
      24,    0,  135,    2, 0x08,   20 /* Private */,
      25,    0,  136,    2, 0x08,   21 /* Private */,
      26,    0,  137,    2, 0x08,   22 /* Private */,
      27,    0,  138,    2, 0x08,   23 /* Private */,
      28,    0,  139,    2, 0x08,   24 /* Private */,
      29,    0,  140,    2, 0x08,   25 /* Private */,
      30,    0,  141,    2, 0x08,   26 /* Private */,
      31,    0,  142,    2, 0x08,   27 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 12, 0x80000000 | 14, QMetaType::Int,   11,   13,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   20,   21,   22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DEXWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<FormatWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSDEXWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDEXWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDEXWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DEXWidget, std::true_type>,
        // method 'reloadData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_treeWidgetNavi_currentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'on_checkBoxReadonly_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'createSectionTable'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTableWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const FW_DEF::HEADER_RECORD *, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint32, std::false_type>,
        // method 'on_toolButtonReload_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableWidget_Header_currentCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_toolButtonPrev_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonNext_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_STRING_ID_ITEM_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_TYPE_ID_ITEM_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_PROTO_ID_ITEM_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_FIELD_ID_ITEM_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_CLASS_DEF_ITEM_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSave_METHOD_ID_ITEM_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DEXWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DEXWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->reloadData((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->on_treeWidgetNavi_currentItemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 2: _t->on_checkBoxReadonly_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: { bool _r = _t->createSectionTable((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTableWidget*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<const FW_DEF::HEADER_RECORD*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<qint32>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->on_toolButtonReload_clicked(); break;
        case 5: _t->enableButton(); break;
        case 6: _t->on_tableWidget_Header_currentCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 7: _t->on_toolButtonPrev_clicked(); break;
        case 8: _t->on_toolButtonNext_clicked(); break;
        case 9: _t->on_pushButtonSave_STRING_ID_ITEM_clicked(); break;
        case 10: _t->on_pushButtonSave_TYPE_ID_ITEM_clicked(); break;
        case 11: _t->on_pushButtonSave_PROTO_ID_ITEM_clicked(); break;
        case 12: _t->on_pushButtonSave_FIELD_ID_ITEM_clicked(); break;
        case 13: _t->on_pushButtonSave_CLASS_DEF_ITEM_clicked(); break;
        case 14: _t->on_pushButtonSave_METHOD_ID_ITEM_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTableWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *DEXWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DEXWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDEXWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FormatWidget::qt_metacast(_clname);
}

int DEXWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FormatWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
