/****************************************************************************
** Meta object code from reading C++ file 'applydelegatepage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../applydelegatepage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'applydelegatepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ApplyDelegatePage_t {
    QByteArrayData data[12];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApplyDelegatePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApplyDelegatePage_t qt_meta_stringdata_ApplyDelegatePage = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ApplyDelegatePage"
QT_MOC_LITERAL(1, 18, 4), // "back"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "showShadowWidget"
QT_MOC_LITERAL(4, 41, 16), // "hideShadowWidget"
QT_MOC_LITERAL(5, 58, 14), // "accountRenamed"
QT_MOC_LITERAL(6, 73, 38), // "on_accountComboBox_currentInd..."
QT_MOC_LITERAL(7, 112, 4), // "arg1"
QT_MOC_LITERAL(8, 117, 15), // "jsonDataUpdated"
QT_MOC_LITERAL(9, 133, 2), // "id"
QT_MOC_LITERAL(10, 136, 21), // "on_upgradeBtn_clicked"
QT_MOC_LITERAL(11, 158, 34) // "on_addressNameLineEdit_textCh..."

    },
    "ApplyDelegatePage\0back\0\0showShadowWidget\0"
    "hideShadowWidget\0accountRenamed\0"
    "on_accountComboBox_currentIndexChanged\0"
    "arg1\0jsonDataUpdated\0id\0on_upgradeBtn_clicked\0"
    "on_addressNameLineEdit_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApplyDelegatePage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    0,   57,    2, 0x06 /* Public */,
       4,    0,   58,    2, 0x06 /* Public */,
       5,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   60,    2, 0x08 /* Private */,
       8,    1,   63,    2, 0x08 /* Private */,
      10,    0,   66,    2, 0x08 /* Private */,
      11,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void ApplyDelegatePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ApplyDelegatePage *_t = static_cast<ApplyDelegatePage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->back((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->showShadowWidget(); break;
        case 2: _t->hideShadowWidget(); break;
        case 3: _t->accountRenamed(); break;
        case 4: _t->on_accountComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->jsonDataUpdated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_upgradeBtn_clicked(); break;
        case 7: _t->on_addressNameLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ApplyDelegatePage::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ApplyDelegatePage::back)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ApplyDelegatePage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ApplyDelegatePage::showShadowWidget)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ApplyDelegatePage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ApplyDelegatePage::hideShadowWidget)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ApplyDelegatePage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ApplyDelegatePage::accountRenamed)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject ApplyDelegatePage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ApplyDelegatePage.data,
      qt_meta_data_ApplyDelegatePage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ApplyDelegatePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApplyDelegatePage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ApplyDelegatePage.stringdata0))
        return static_cast<void*>(const_cast< ApplyDelegatePage*>(this));
    return QWidget::qt_metacast(_clname);
}

int ApplyDelegatePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ApplyDelegatePage::back(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ApplyDelegatePage::showShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void ApplyDelegatePage::hideShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void ApplyDelegatePage::accountRenamed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
