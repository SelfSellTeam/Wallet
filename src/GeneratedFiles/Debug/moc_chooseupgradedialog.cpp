/****************************************************************************
** Meta object code from reading C++ file 'chooseupgradedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../chooseupgradedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chooseupgradedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ChooseUpgradeDialog_t {
    QByteArrayData data[6];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChooseUpgradeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChooseUpgradeDialog_t qt_meta_stringdata_ChooseUpgradeDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ChooseUpgradeDialog"
QT_MOC_LITERAL(1, 20, 7), // "upgrade"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "applyDelegate"
QT_MOC_LITERAL(4, 43, 27), // "on_applyDelegateBtn_clicked"
QT_MOC_LITERAL(5, 71, 21) // "on_upgradeBtn_clicked"

    },
    "ChooseUpgradeDialog\0upgrade\0\0applyDelegate\0"
    "on_applyDelegateBtn_clicked\0"
    "on_upgradeBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChooseUpgradeDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   40,    2, 0x08 /* Private */,
       5,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChooseUpgradeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChooseUpgradeDialog *_t = static_cast<ChooseUpgradeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->upgrade((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->applyDelegate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_applyDelegateBtn_clicked(); break;
        case 3: _t->on_upgradeBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ChooseUpgradeDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChooseUpgradeDialog::upgrade)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ChooseUpgradeDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChooseUpgradeDialog::applyDelegate)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ChooseUpgradeDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChooseUpgradeDialog.data,
      qt_meta_data_ChooseUpgradeDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ChooseUpgradeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChooseUpgradeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ChooseUpgradeDialog.stringdata0))
        return static_cast<void*>(const_cast< ChooseUpgradeDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ChooseUpgradeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ChooseUpgradeDialog::upgrade(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChooseUpgradeDialog::applyDelegate(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
