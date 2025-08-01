/****************************************************************************
** Meta object code from reading C++ file 'archive_widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/archive_widget/archive_widget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'archive_widget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSArchive_widgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSArchive_widgetENDCLASS = QtMocHelpers::stringData(
    "Archive_widget",
    "openAvailable",
    "",
    "bState",
    "openRecord",
    "on_treeViewArchive_customContextMenuRequested",
    "pos",
    "on_tableViewArchive_customContextMenuRequested",
    "showContext",
    "sRecordFileName",
    "bIsRoot",
    "point",
    "isOpenAvailable",
    "scanRecord",
    "hexRecord",
    "stringsRecord",
    "entropyRecord",
    "hashRecord",
    "copyFileName",
    "dumpRecord",
    "handleAction",
    "ACTION",
    "action",
    "_handleActionDevice",
    "QIODevice*",
    "pDevice",
    "_handleActionOpenFile",
    "sFileName",
    "sTitle",
    "bReadWrite",
    "on_comboBoxType_currentIndexChanged",
    "nIndex",
    "on_lineEditFilter_textChanged",
    "sString",
    "on_treeViewArchive_doubleClicked",
    "QModelIndex",
    "index",
    "on_tableViewArchive_doubleClicked",
    "onTreeElement_selected",
    "QItemSelection",
    "itemSelected",
    "itemDeselected",
    "onTableElement_selected"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSArchive_widgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  146,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  149,    2, 0x0a,    3 /* Public */,
       5,    1,  150,    2, 0x08,    4 /* Private */,
       7,    1,  153,    2, 0x08,    6 /* Private */,
       8,    3,  156,    2, 0x08,    8 /* Private */,
      12,    2,  163,    2, 0x08,   12 /* Private */,
      13,    0,  168,    2, 0x08,   15 /* Private */,
      14,    0,  169,    2, 0x08,   16 /* Private */,
      15,    0,  170,    2, 0x08,   17 /* Private */,
      16,    0,  171,    2, 0x08,   18 /* Private */,
      17,    0,  172,    2, 0x08,   19 /* Private */,
      18,    0,  173,    2, 0x08,   20 /* Private */,
      19,    0,  174,    2, 0x08,   21 /* Private */,
      20,    1,  175,    2, 0x08,   22 /* Private */,
      23,    2,  178,    2, 0x08,   24 /* Private */,
      26,    3,  183,    2, 0x08,   27 /* Private */,
      30,    1,  190,    2, 0x08,   31 /* Private */,
      32,    1,  193,    2, 0x08,   33 /* Private */,
      34,    1,  196,    2, 0x08,   35 /* Private */,
      37,    1,  199,    2, 0x08,   37 /* Private */,
      38,    2,  202,    2, 0x08,   39 /* Private */,
      42,    2,  207,    2, 0x08,   42 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QPoint,    9,   10,   11,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 24,   22,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   27,   28,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 39, 0x80000000 | 39,   40,   41,
    QMetaType::Void, 0x80000000 | 39, 0x80000000 | 39,   40,   41,

       0        // eod
};

Q_CONSTINIT const QMetaObject Archive_widget::staticMetaObject = { {
    QMetaObject::SuperData::link<XShortcutsWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSArchive_widgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSArchive_widgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSArchive_widgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Archive_widget, std::true_type>,
        // method 'openAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'openRecord'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_treeViewArchive_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_tableViewArchive_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'showContext'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        // method 'isOpenAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'scanRecord'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hexRecord'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stringsRecord'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'entropyRecord'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hashRecord'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copyFileName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dumpRecord'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ACTION, std::false_type>,
        // method '_handleActionDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ACTION, std::false_type>,
        QtPrivate::TypeAndForceComplete<QIODevice *, std::false_type>,
        // method '_handleActionOpenFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_comboBoxType_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_lineEditFilter_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_treeViewArchive_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_tableViewArchive_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onTreeElement_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        // method 'onTableElement_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>
    >,
    nullptr
} };

void Archive_widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Archive_widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->openRecord(); break;
        case 2: _t->on_treeViewArchive_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 3: _t->on_tableViewArchive_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 4: _t->showContext((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[3]))); break;
        case 5: { bool _r = _t->isOpenAvailable((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->scanRecord(); break;
        case 7: _t->hexRecord(); break;
        case 8: _t->stringsRecord(); break;
        case 9: _t->entropyRecord(); break;
        case 10: _t->hashRecord(); break;
        case 11: _t->copyFileName(); break;
        case 12: _t->dumpRecord(); break;
        case 13: _t->handleAction((*reinterpret_cast< std::add_pointer_t<ACTION>>(_a[1]))); break;
        case 14: _t->_handleActionDevice((*reinterpret_cast< std::add_pointer_t<ACTION>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QIODevice*>>(_a[2]))); break;
        case 15: _t->_handleActionOpenFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 16: _t->on_comboBoxType_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_lineEditFilter_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->on_treeViewArchive_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 19: _t->on_tableViewArchive_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 20: _t->onTreeElement_selected((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 21: _t->onTableElement_selected((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QIODevice* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        case 21:
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
            using _t = void (Archive_widget::*)(bool );
            if (_t _q_method = &Archive_widget::openAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Archive_widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Archive_widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSArchive_widgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return XShortcutsWidget::qt_metacast(_clname);
}

int Archive_widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XShortcutsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void Archive_widget::openAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
