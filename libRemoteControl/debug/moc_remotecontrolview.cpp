/****************************************************************************
** Meta object code from reading C++ file 'remotecontrolview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../remotecontrolview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remotecontrolview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RemoteControlView_t {
    QByteArrayData data[9];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemoteControlView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemoteControlView_t qt_meta_stringdata_RemoteControlView = {
    {
QT_MOC_LITERAL(0, 0, 17), // "RemoteControlView"
QT_MOC_LITERAL(1, 18, 17), // "serverRoleChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 8), // "isServer"
QT_MOC_LITERAL(4, 46, 18), // "hostAddressChanged"
QT_MOC_LITERAL(5, 65, 11), // "hostaddress"
QT_MOC_LITERAL(6, 77, 34), // "onPushbuttonListenOrConnectCl..."
QT_MOC_LITERAL(7, 112, 31), // "onRadiobuttonsServerRoleChanged"
QT_MOC_LITERAL(8, 144, 14) // "loadInterfaces"

    },
    "RemoteControlView\0serverRoleChanged\0"
    "\0isServer\0hostAddressChanged\0hostaddress\0"
    "onPushbuttonListenOrConnectClicked\0"
    "onRadiobuttonsServerRoleChanged\0"
    "loadInterfaces"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemoteControlView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   46,    2, 0x0a /* Public */,
       8,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::QStringList,

       0        // eod
};

void RemoteControlView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RemoteControlView *_t = static_cast<RemoteControlView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serverRoleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->hostAddressChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onPushbuttonListenOrConnectClicked(); break;
        case 3: _t->onRadiobuttonsServerRoleChanged(); break;
        case 4: { QStringList _r = _t->loadInterfaces();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RemoteControlView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteControlView::serverRoleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RemoteControlView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteControlView::hostAddressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (RemoteControlView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteControlView::onPushbuttonListenOrConnectClicked)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject RemoteControlView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RemoteControlView.data,
      qt_meta_data_RemoteControlView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RemoteControlView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoteControlView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteControlView.stringdata0))
        return static_cast<void*>(const_cast< RemoteControlView*>(this));
    return QWidget::qt_metacast(_clname);
}

int RemoteControlView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void RemoteControlView::serverRoleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RemoteControlView::hostAddressChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RemoteControlView::onPushbuttonListenOrConnectClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
