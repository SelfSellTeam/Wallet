/****************************************************************************
** Meta object code from reading C++ file 'waitingforsync.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../waitingforsync.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waitingforsync.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WaitingForSync_t {
    QByteArrayData data[14];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WaitingForSync_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WaitingForSync_t qt_meta_stringdata_WaitingForSync = {
    {
QT_MOC_LITERAL(0, 0, 14), // "WaitingForSync"
QT_MOC_LITERAL(1, 15, 4), // "sync"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "minimum"
QT_MOC_LITERAL(4, 29, 4), // "tray"
QT_MOC_LITERAL(5, 34, 8), // "closeGOP"
QT_MOC_LITERAL(6, 43, 16), // "showShadowWidget"
QT_MOC_LITERAL(7, 60, 16), // "hideShadowWidget"
QT_MOC_LITERAL(8, 77, 17), // "blockchainStarted"
QT_MOC_LITERAL(9, 95, 10), // "updateInfo"
QT_MOC_LITERAL(10, 106, 17), // "on_minBtn_clicked"
QT_MOC_LITERAL(11, 124, 19), // "on_closeBtn_clicked"
QT_MOC_LITERAL(12, 144, 11), // "infoUpdated"
QT_MOC_LITERAL(13, 156, 2) // "id"

    },
    "WaitingForSync\0sync\0\0minimum\0tray\0"
    "closeGOP\0showShadowWidget\0hideShadowWidget\0"
    "blockchainStarted\0updateInfo\0"
    "on_minBtn_clicked\0on_closeBtn_clicked\0"
    "infoUpdated\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WaitingForSync[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void WaitingForSync::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WaitingForSync *_t = static_cast<WaitingForSync *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sync(); break;
        case 1: _t->minimum(); break;
        case 2: _t->tray(); break;
        case 3: _t->closeGOP(); break;
        case 4: _t->showShadowWidget(); break;
        case 5: _t->hideShadowWidget(); break;
        case 6: _t->blockchainStarted(); break;
        case 7: _t->updateInfo(); break;
        case 8: _t->on_minBtn_clicked(); break;
        case 9: _t->on_closeBtn_clicked(); break;
        case 10: _t->infoUpdated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WaitingForSync::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WaitingForSync::sync)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WaitingForSync::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WaitingForSync::minimum)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WaitingForSync::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WaitingForSync::tray)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WaitingForSync::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WaitingForSync::closeGOP)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WaitingForSync::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WaitingForSync::showShadowWidget)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (WaitingForSync::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WaitingForSync::hideShadowWidget)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject WaitingForSync::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WaitingForSync.data,
      qt_meta_data_WaitingForSync,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WaitingForSync::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WaitingForSync::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WaitingForSync.stringdata0))
        return static_cast<void*>(const_cast< WaitingForSync*>(this));
    return QWidget::qt_metacast(_clname);
}

int WaitingForSync::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WaitingForSync::sync()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void WaitingForSync::minimum()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void WaitingForSync::tray()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void WaitingForSync::closeGOP()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void WaitingForSync::showShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void WaitingForSync::hideShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
