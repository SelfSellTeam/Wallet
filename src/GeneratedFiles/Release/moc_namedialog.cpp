/****************************************************************************
** Meta object code from reading C++ file 'namedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../namedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'namedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NameDialog_t {
    QByteArrayData data[10];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NameDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NameDialog_t qt_meta_stringdata_NameDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "NameDialog"
QT_MOC_LITERAL(1, 11, 16), // "on_okBtn_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 20), // "on_cancelBtn_clicked"
QT_MOC_LITERAL(4, 50, 19), // "on_checkBtn_clicked"
QT_MOC_LITERAL(5, 70, 27), // "on_nameLineEdit_textChanged"
QT_MOC_LITERAL(6, 98, 4), // "arg1"
QT_MOC_LITERAL(7, 103, 29), // "on_nameLineEdit_returnPressed"
QT_MOC_LITERAL(8, 133, 20), // "getBlockchainAccount"
QT_MOC_LITERAL(9, 154, 6) // "result"

    },
    "NameDialog\0on_okBtn_clicked\0\0"
    "on_cancelBtn_clicked\0on_checkBtn_clicked\0"
    "on_nameLineEdit_textChanged\0arg1\0"
    "on_nameLineEdit_returnPressed\0"
    "getBlockchainAccount\0result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NameDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void NameDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NameDialog *_t = static_cast<NameDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_okBtn_clicked(); break;
        case 1: _t->on_cancelBtn_clicked(); break;
        case 2: _t->on_checkBtn_clicked(); break;
        case 3: _t->on_nameLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_nameLineEdit_returnPressed(); break;
        case 5: _t->getBlockchainAccount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject NameDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NameDialog.data,
      qt_meta_data_NameDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NameDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NameDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NameDialog.stringdata0))
        return static_cast<void*>(const_cast< NameDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int NameDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
