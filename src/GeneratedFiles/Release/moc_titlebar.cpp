/****************************************************************************
** Meta object code from reading C++ file 'titlebar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../titlebar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'titlebar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TitleBar_t {
    QByteArrayData data[21];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TitleBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TitleBar_t qt_meta_stringdata_TitleBar = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TitleBar"
QT_MOC_LITERAL(1, 9, 7), // "minimum"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 8), // "closeGOP"
QT_MOC_LITERAL(4, 27, 4), // "tray"
QT_MOC_LITERAL(5, 32, 12), // "settingSaved"
QT_MOC_LITERAL(6, 45, 16), // "showShadowWidget"
QT_MOC_LITERAL(7, 62, 16), // "hideShadowWidget"
QT_MOC_LITERAL(8, 79, 15), // "showAccountPage"
QT_MOC_LITERAL(9, 95, 6), // "resync"
QT_MOC_LITERAL(10, 102, 4), // "scan"
QT_MOC_LITERAL(11, 107, 17), // "on_minBtn_clicked"
QT_MOC_LITERAL(12, 125, 19), // "on_closeBtn_clicked"
QT_MOC_LITERAL(13, 145, 18), // "on_menuBtn_clicked"
QT_MOC_LITERAL(14, 164, 5), // "saved"
QT_MOC_LITERAL(15, 170, 15), // "jsonDataUpdated"
QT_MOC_LITERAL(16, 186, 2), // "id"
QT_MOC_LITERAL(17, 189, 9), // "onTimeOut"
QT_MOC_LITERAL(18, 199, 18), // "on_newsBtn_clicked"
QT_MOC_LITERAL(19, 218, 19), // "on_newsBtn2_clicked"
QT_MOC_LITERAL(20, 238, 21) // "on_consoleBtn_clicked"

    },
    "TitleBar\0minimum\0\0closeGOP\0tray\0"
    "settingSaved\0showShadowWidget\0"
    "hideShadowWidget\0showAccountPage\0"
    "resync\0scan\0on_minBtn_clicked\0"
    "on_closeBtn_clicked\0on_menuBtn_clicked\0"
    "saved\0jsonDataUpdated\0id\0onTimeOut\0"
    "on_newsBtn_clicked\0on_newsBtn2_clicked\0"
    "on_consoleBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TitleBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,
       4,    0,  106,    2, 0x06 /* Public */,
       5,    0,  107,    2, 0x06 /* Public */,
       6,    0,  108,    2, 0x06 /* Public */,
       7,    0,  109,    2, 0x06 /* Public */,
       8,    1,  110,    2, 0x06 /* Public */,
       9,    0,  113,    2, 0x06 /* Public */,
      10,    0,  114,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,  115,    2, 0x08 /* Private */,
      12,    0,  116,    2, 0x08 /* Private */,
      13,    0,  117,    2, 0x08 /* Private */,
      14,    0,  118,    2, 0x08 /* Private */,
      15,    1,  119,    2, 0x08 /* Private */,
      17,    0,  122,    2, 0x08 /* Private */,
      18,    0,  123,    2, 0x08 /* Private */,
      19,    0,  124,    2, 0x08 /* Private */,
      20,    0,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TitleBar *_t = static_cast<TitleBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->minimum(); break;
        case 1: _t->closeGOP(); break;
        case 2: _t->tray(); break;
        case 3: _t->settingSaved(); break;
        case 4: _t->showShadowWidget(); break;
        case 5: _t->hideShadowWidget(); break;
        case 6: _t->showAccountPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->resync(); break;
        case 8: _t->scan(); break;
        case 9: _t->on_minBtn_clicked(); break;
        case 10: _t->on_closeBtn_clicked(); break;
        case 11: _t->on_menuBtn_clicked(); break;
        case 12: _t->saved(); break;
        case 13: _t->jsonDataUpdated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->onTimeOut(); break;
        case 15: _t->on_newsBtn_clicked(); break;
        case 16: _t->on_newsBtn2_clicked(); break;
        case 17: _t->on_consoleBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TitleBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TitleBar::minimum)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TitleBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TitleBar::closeGOP)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TitleBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TitleBar::tray)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TitleBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TitleBar::settingSaved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TitleBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TitleBar::showShadowWidget)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (TitleBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TitleBar::hideShadowWidget)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (TitleBar::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TitleBar::showAccountPage)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (TitleBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TitleBar::resync)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (TitleBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TitleBar::scan)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject TitleBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TitleBar.data,
      qt_meta_data_TitleBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TitleBar.stringdata0))
        return static_cast<void*>(const_cast< TitleBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int TitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void TitleBar::minimum()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void TitleBar::closeGOP()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void TitleBar::tray()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void TitleBar::settingSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void TitleBar::showShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void TitleBar::hideShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void TitleBar::showAccountPage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TitleBar::resync()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void TitleBar::scan()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
