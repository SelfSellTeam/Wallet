/****************************************************************************
** Meta object code from reading C++ file 'bottombar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bottombar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bottombar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BottomBar_t {
    QByteArrayData data[15];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BottomBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BottomBar_t qt_meta_stringdata_BottomBar = {
    {
QT_MOC_LITERAL(0, 0, 9), // "BottomBar"
QT_MOC_LITERAL(1, 10, 16), // "showShadowWidget"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "hideShadowWidget"
QT_MOC_LITERAL(4, 45, 4), // "lock"
QT_MOC_LITERAL(5, 50, 11), // "dynamicShow"
QT_MOC_LITERAL(6, 62, 11), // "dynamicHide"
QT_MOC_LITERAL(7, 74, 20), // "on_signalBtn_clicked"
QT_MOC_LITERAL(8, 95, 17), // "ontimerForHideOut"
QT_MOC_LITERAL(9, 113, 25), // "onProgressBarValueChanged"
QT_MOC_LITERAL(10, 139, 5), // "value"
QT_MOC_LITERAL(11, 145, 18), // "on_lockBtn_clicked"
QT_MOC_LITERAL(12, 164, 7), // "moveEnd"
QT_MOC_LITERAL(13, 172, 7), // "getInfo"
QT_MOC_LITERAL(14, 180, 6) // "string"

    },
    "BottomBar\0showShadowWidget\0\0"
    "hideShadowWidget\0lock\0dynamicShow\0"
    "dynamicHide\0on_signalBtn_clicked\0"
    "ontimerForHideOut\0onProgressBarValueChanged\0"
    "value\0on_lockBtn_clicked\0moveEnd\0"
    "getInfo\0string"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BottomBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    1,   76,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    1,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void BottomBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BottomBar *_t = static_cast<BottomBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showShadowWidget(); break;
        case 1: _t->hideShadowWidget(); break;
        case 2: _t->lock(); break;
        case 3: _t->dynamicShow(); break;
        case 4: _t->dynamicHide(); break;
        case 5: _t->on_signalBtn_clicked(); break;
        case 6: _t->ontimerForHideOut(); break;
        case 7: _t->onProgressBarValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_lockBtn_clicked(); break;
        case 9: _t->moveEnd(); break;
        case 10: _t->getInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BottomBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BottomBar::showShadowWidget)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BottomBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BottomBar::hideShadowWidget)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BottomBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BottomBar::lock)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject BottomBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BottomBar.data,
      qt_meta_data_BottomBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BottomBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BottomBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BottomBar.stringdata0))
        return static_cast<void*>(const_cast< BottomBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int BottomBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void BottomBar::showShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void BottomBar::hideShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void BottomBar::lock()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
