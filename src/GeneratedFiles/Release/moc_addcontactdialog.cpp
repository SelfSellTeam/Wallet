/****************************************************************************
** Meta object code from reading C++ file 'addcontactdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../addcontactdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addcontactdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddContactDialog_t {
    QByteArrayData data[9];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddContactDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddContactDialog_t qt_meta_stringdata_AddContactDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AddContactDialog"
QT_MOC_LITERAL(1, 17, 20), // "on_cancelBtn_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 30), // "on_addressLineEdit_textChanged"
QT_MOC_LITERAL(4, 70, 4), // "arg1"
QT_MOC_LITERAL(5, 75, 15), // "jsonDataUpdated"
QT_MOC_LITERAL(6, 91, 2), // "id"
QT_MOC_LITERAL(7, 94, 16), // "on_okBtn_clicked"
QT_MOC_LITERAL(8, 111, 29) // "on_remarkLineEdit_textChanged"

    },
    "AddContactDialog\0on_cancelBtn_clicked\0"
    "\0on_addressLineEdit_textChanged\0arg1\0"
    "jsonDataUpdated\0id\0on_okBtn_clicked\0"
    "on_remarkLineEdit_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddContactDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void AddContactDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddContactDialog *_t = static_cast<AddContactDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_cancelBtn_clicked(); break;
        case 1: _t->on_addressLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->jsonDataUpdated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_okBtn_clicked(); break;
        case 4: _t->on_remarkLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AddContactDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddContactDialog.data,
      qt_meta_data_AddContactDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddContactDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddContactDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddContactDialog.stringdata0))
        return static_cast<void*>(const_cast< AddContactDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddContactDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
