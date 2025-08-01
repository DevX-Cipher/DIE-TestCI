/****************************************************************************
** Meta object code from reading C++ file 'xsymbolswidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../New folder (3)/DIE-engine/XSymbolsWidget/xsymbolswidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xsymbolswidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSXSymbolsWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSXSymbolsWidgetENDCLASS = QtMocHelpers::stringData(
    "XSymbolsWidget",
    "currentSymbolChanged",
    "",
    "XADDR",
    "nAddress",
    "nSize",
    "_hex",
    "_disasm",
    "on_toolButtonSaveSymbols_clicked",
    "on_tableViewSelection",
    "QItemSelection",
    "itemSelected",
    "itemDeselected",
    "on_tableViewSymbols_clicked",
    "QModelIndex",
    "index",
    "viewSelection",
    "on_toolButtonReload_clicked",
    "analyze",
    "on_tableViewSymbols_customContextMenuRequested",
    "pos"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSXSymbolsWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   74,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   79,    2, 0x08,    4 /* Private */,
       7,    0,   80,    2, 0x08,    5 /* Private */,
       8,    0,   81,    2, 0x08,    6 /* Private */,
       9,    2,   82,    2, 0x08,    7 /* Private */,
      13,    1,   87,    2, 0x08,   10 /* Private */,
      16,    0,   90,    2, 0x08,   12 /* Private */,
      17,    0,   91,    2, 0x08,   13 /* Private */,
      18,    0,   92,    2, 0x08,   14 /* Private */,
      19,    1,   93,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::LongLong,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   20,

       0        // eod
};

Q_CONSTINIT const QMetaObject XSymbolsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<XShortcutsWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSXSymbolsWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSXSymbolsWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSXSymbolsWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<XSymbolsWidget, std::true_type>,
        // method 'currentSymbolChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<XADDR, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method '_hex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_disasm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonSaveSymbols_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableViewSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        // method 'on_tableViewSymbols_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'viewSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolButtonReload_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'analyze'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableViewSymbols_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>
    >,
    nullptr
} };

void XSymbolsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XSymbolsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentSymbolChanged((*reinterpret_cast< std::add_pointer_t<XADDR>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 1: _t->_hex(); break;
        case 2: _t->_disasm(); break;
        case 3: _t->on_toolButtonSaveSymbols_clicked(); break;
        case 4: _t->on_tableViewSelection((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 5: _t->on_tableViewSymbols_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 6: _t->viewSelection(); break;
        case 7: _t->on_toolButtonReload_clicked(); break;
        case 8: _t->analyze(); break;
        case 9: _t->on_tableViewSymbols_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
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
            using _t = void (XSymbolsWidget::*)(XADDR , qint64 );
            if (_t _q_method = &XSymbolsWidget::currentSymbolChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *XSymbolsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSymbolsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSXSymbolsWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return XShortcutsWidget::qt_metacast(_clname);
}

int XSymbolsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XShortcutsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void XSymbolsWidget::currentSymbolChanged(XADDR _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
