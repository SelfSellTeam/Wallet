/****************************************************************************
** Meta object code from reading C++ file 'firstlogin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../firstlogin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'firstlogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FirstLogin_t {
    QByteArrayData data[19];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FirstLogin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FirstLogin_t qt_meta_stringdata_FirstLogin = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FirstLogin"
QT_MOC_LITERAL(1, 11, 5), // "login"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 7), // "minimum"
QT_MOC_LITERAL(4, 26, 8), // "closeGOP"
QT_MOC_LITERAL(5, 35, 4), // "tray"
QT_MOC_LITERAL(6, 40, 16), // "showShadowWidget"
QT_MOC_LITERAL(7, 57, 16), // "hideShadowWidget"
QT_MOC_LITERAL(8, 74, 20), // "on_createBtn_clicked"
QT_MOC_LITERAL(9, 95, 29), // "on_pwdLineEdit2_returnPressed"
QT_MOC_LITERAL(10, 125, 17), // "on_minBtn_clicked"
QT_MOC_LITERAL(11, 143, 19), // "on_closeBtn_clicked"
QT_MOC_LITERAL(12, 163, 26), // "on_pwdLineEdit_textChanged"
QT_MOC_LITERAL(13, 190, 4), // "arg1"
QT_MOC_LITERAL(14, 195, 27), // "on_pwdLineEdit2_textChanged"
QT_MOC_LITERAL(15, 223, 15), // "jsonDataUpdated"
QT_MOC_LITERAL(16, 239, 2), // "id"
QT_MOC_LITERAL(17, 242, 12), // "walletCreate"
QT_MOC_LITERAL(18, 255, 22) // "walletUnlockFirstLogin"

    },
    "FirstLogin\0login\0\0minimum\0closeGOP\0"
    "tray\0showShadowWidget\0hideShadowWidget\0"
    "on_createBtn_clicked\0on_pwdLineEdit2_returnPressed\0"
    "on_minBtn_clicked\0on_closeBtn_clicked\0"
    "on_pwdLineEdit_textChanged\0arg1\0"
    "on_pwdLineEdit2_textChanged\0jsonDataUpdated\0"
    "id\0walletCreate\0walletUnlockFirstLogin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FirstLogin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,
       5,    0,   92,    2, 0x06 /* Public */,
       6,    0,   93,    2, 0x06 /* Public */,
       7,    0,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    1,   99,    2, 0x08 /* Private */,
      14,    1,  102,    2, 0x08 /* Private */,
      15,    1,  105,    2, 0x08 /* Private */,
      17,    1,  108,    2, 0x08 /* Private */,
      18,    1,  111,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,

       0        // eod
};

void FirstLogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FirstLogin *_t = static_cast<FirstLogin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->login(); break;
        case 1: _t->minimum(); break;
        case 2: _t->closeGOP(); break;
        case 3: _t->tray(); break;
        case 4: _t->showShadowWidget(); break;
        case 5: _t->hideShadowWidget(); break;
        case 6: _t->on_createBtn_clicked(); break;
        case 7: _t->on_pwdLineEdit2_returnPressed(); break;
        case 8: _t->on_minBtn_clicked(); break;
        case 9: _t->on_closeBtn_clicked(); break;
        case 10: _t->on_pwdLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_pwdLineEdit2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->jsonDataUpdated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->walletCreate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->walletUnlockFirstLogin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FirstLogin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FirstLogin::login)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FirstLogin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FirstLogin::minimum)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FirstLogin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FirstLogin::closeGOP)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (FirstLogin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FirstLogin::tray)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (FirstLogin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FirstLogin::showShadowWidget)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (FirstLogin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FirstLogin::hideShadowWidget)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject FirstLogin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FirstLogin.data,
      qt_meta_data_FirstLogin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FirstLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FirstLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FirstLogin.stringdata0))
        return static_cast<void*>(const_cast< FirstLogin*>(this));
    return QWidget::qt_metacast(_clname);
}

int FirstLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void FirstLogin::login()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void FirstLogin::minimum()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void FirstLogin::closeGOP()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void FirstLogin::tray()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void FirstLogin::showShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void FirstLogin::hideShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
