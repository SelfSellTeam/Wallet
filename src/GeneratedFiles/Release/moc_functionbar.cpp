/****************************************************************************
** Meta object code from reading C++ file 'functionbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../functionbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'functionbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FunctionBar_t {
    QByteArrayData data[20];
    char stringdata0[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FunctionBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FunctionBar_t qt_meta_stringdata_FunctionBar = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FunctionBar"
QT_MOC_LITERAL(1, 12, 12), // "showMainPage"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "showAccountPage"
QT_MOC_LITERAL(4, 42, 16), // "showDelegatePage"
QT_MOC_LITERAL(5, 59, 16), // "showTransferPage"
QT_MOC_LITERAL(6, 76, 15), // "showContactPage"
QT_MOC_LITERAL(7, 92, 16), // "showShadowWidget"
QT_MOC_LITERAL(8, 109, 16), // "hideShadowWidget"
QT_MOC_LITERAL(9, 126, 15), // "assetTypeChange"
QT_MOC_LITERAL(10, 142, 7), // "getInfo"
QT_MOC_LITERAL(11, 150, 6), // "result"
QT_MOC_LITERAL(12, 157, 12), // "setAssetInfo"
QT_MOC_LITERAL(13, 170, 20), // "on_surveyBtn_clicked"
QT_MOC_LITERAL(14, 191, 21), // "on_accountBtn_clicked"
QT_MOC_LITERAL(15, 213, 22), // "on_delegateBtn_clicked"
QT_MOC_LITERAL(16, 236, 22), // "on_transferBtn_clicked"
QT_MOC_LITERAL(17, 259, 37), // "on_assertComboBox_currentInde..."
QT_MOC_LITERAL(18, 297, 4), // "arg1"
QT_MOC_LITERAL(19, 302, 21) // "on_contactBtn_clicked"

    },
    "FunctionBar\0showMainPage\0\0showAccountPage\0"
    "showDelegatePage\0showTransferPage\0"
    "showContactPage\0showShadowWidget\0"
    "hideShadowWidget\0assetTypeChange\0"
    "getInfo\0result\0setAssetInfo\0"
    "on_surveyBtn_clicked\0on_accountBtn_clicked\0"
    "on_delegateBtn_clicked\0on_transferBtn_clicked\0"
    "on_assertComboBox_currentIndexChanged\0"
    "arg1\0on_contactBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FunctionBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    1,   95,    2, 0x06 /* Public */,
       4,    0,   98,    2, 0x06 /* Public */,
       5,    0,   99,    2, 0x06 /* Public */,
       6,    0,  100,    2, 0x06 /* Public */,
       7,    0,  101,    2, 0x06 /* Public */,
       8,    0,  102,    2, 0x06 /* Public */,
       9,    0,  103,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  104,    2, 0x0a /* Public */,
      12,    1,  107,    2, 0x0a /* Public */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    1,  114,    2, 0x08 /* Private */,
      19,    0,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,

       0        // eod
};

void FunctionBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FunctionBar *_t = static_cast<FunctionBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showMainPage(); break;
        case 1: _t->showAccountPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->showDelegatePage(); break;
        case 3: _t->showTransferPage(); break;
        case 4: _t->showContactPage(); break;
        case 5: _t->showShadowWidget(); break;
        case 6: _t->hideShadowWidget(); break;
        case 7: _t->assetTypeChange(); break;
        case 8: _t->getInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setAssetInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->on_surveyBtn_clicked(); break;
        case 11: _t->on_accountBtn_clicked(); break;
        case 12: _t->on_delegateBtn_clicked(); break;
        case 13: _t->on_transferBtn_clicked(); break;
        case 14: _t->on_assertComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->on_contactBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FunctionBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FunctionBar::showMainPage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FunctionBar::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FunctionBar::showAccountPage)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FunctionBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FunctionBar::showDelegatePage)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (FunctionBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FunctionBar::showTransferPage)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (FunctionBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FunctionBar::showContactPage)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (FunctionBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FunctionBar::showShadowWidget)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (FunctionBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FunctionBar::hideShadowWidget)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (FunctionBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FunctionBar::assetTypeChange)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject FunctionBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FunctionBar.data,
      qt_meta_data_FunctionBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FunctionBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FunctionBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FunctionBar.stringdata0))
        return static_cast<void*>(const_cast< FunctionBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int FunctionBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void FunctionBar::showMainPage()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void FunctionBar::showAccountPage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FunctionBar::showDelegatePage()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void FunctionBar::showTransferPage()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void FunctionBar::showContactPage()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void FunctionBar::showShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void FunctionBar::hideShadowWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void FunctionBar::assetTypeChange()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
