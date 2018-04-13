/****************************************************************************
** Meta object code from reading C++ file 'upgradepage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../upgradepage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'upgradepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UpgradePage_t {
    QByteArrayData data[13];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpgradePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpgradePage_t qt_meta_stringdata_UpgradePage = {
    {
QT_MOC_LITERAL(0, 0, 11), // "UpgradePage"
QT_MOC_LITERAL(1, 12, 4), // "back"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 16), // "showShadowWidget"
QT_MOC_LITERAL(4, 35, 16), // "hideShadowWidget"
QT_MOC_LITERAL(5, 52, 21), // "showApplyDelegatePage"
QT_MOC_LITERAL(6, 74, 14), // "accountRenamed"
QT_MOC_LITERAL(7, 89, 34), // "on_addressNameLineEdit_textCh..."
QT_MOC_LITERAL(8, 124, 4), // "arg1"
QT_MOC_LITERAL(9, 129, 21), // "on_upgradeBtn_clicked"
QT_MOC_LITERAL(10, 151, 37), // "on_accountComboBox_currentTex..."
QT_MOC_LITERAL(11, 189, 15), // "jsonDataUpdated"
QT_MOC_LITERAL(12, 205, 2) // "id"

    },
    "UpgradePage\0back\0\0showShadowWidget\0"
    "hideShadowWidget\0showApplyDelegatePage\0"
    "accountRenamed\0on_addressNameLineEdit_textChanged\0"
    "arg1\0on_upgradeBtn_clicked\0"
    "on_accountComboBox_currentTextChanged\0"
    "jsonDataUpdated\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpgradePage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    0,   62,    2, 0x06 /* Public */,
       4,    0,   63,    2, 0x06 /* Public */,
       5,    1,   64,    2, 0x06 /* Public */,
       6,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   68,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    1,   72,    2, 0x08 /* Private */,
      11,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void UpgradePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UpgradePage *_t = static_cast<UpgradePage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->back((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->showShadowWidget(); break;
        case 2: _t->hideShadowWidget(); break;
        case 3: _t->showApplyDelegatePage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->accountRenamed(); break;
        case 5: _t->on_addressNameLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_upgradeBtn_clicked(); break;
        case 7: _t->on_accountComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->jsonDataUpdated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UpgradePage::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UpgradePage::back)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UpgradePage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UpgradePage::showShadowWidget)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (UpgradePage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UpgradePage::hideShadowWidget)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (UpgradePage::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UpgradePage::showApplyDelegatePage)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (UpgradePage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UpgradePage::accountRenamed)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject UpgradePage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UpgradePage.data,
      qt_meta_data_UpgradePage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UpgradePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpgradePage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UpgradePage.stringdata0))
        return static_cast<void*>(const_cast< UpgradePage*>(this));
    return QWidget::qt_metacast(_clname);
}

int UpgradePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void UpgradePage::back(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UpgradePage::showShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void UpgradePage::hideShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void UpgradePage::showApplyDelegatePage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UpgradePage::accountRenamed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
