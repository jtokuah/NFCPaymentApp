/****************************************************************************
** Meta object code from reading C++ file 'SendVcard.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/SendVcard.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SendVcard.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SendVcard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       5,   89, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      18,   10,   10,   10, 0x05,
      43,   10,   10,   10, 0x05,
      67,   10,   10,   10, 0x05,
      90,   10,   10,   10, 0x05,
     111,   10,   10,   10, 0x05,
     133,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     148,   10,   10,   10, 0x0a,
     155,   10,   10,   10, 0x0a,
     190,  179,   10,   10, 0x0a,
     218,  179,   10,   10, 0x0a,
     253,  245,   10,   10, 0x0a,
     285,  279,   10,   10, 0x0a,
     316,  309,   10,   10, 0x0a,
     341,   10,   10,   10, 0x0a,

 // properties: name, type, flags
     368,  360, 0x0a495003,
     380,  360, 0x0a495003,
     391,  360, 0x0a495003,
     400,  360, 0x0a495003,
     407,  360, 0x0a495003,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

static const char qt_meta_stringdata_SendVcard[] = {
    "SendVcard\0\0back()\0detectFirstNameChanged()\0"
    "detectLastNameChanged()\0detectAddressChanged()\0"
    "detectEmailChanged()\0detectMobileChanged()\0"
    "showEventLog()\0show()\0startSendVcardProcess()\0"
    "first_name\0onFirstNameChanged(QString)\0"
    "onLastNameChanged(QString)\0address\0"
    "onAddressChanged(QString)\0email\0"
    "onEmailChanged(QString)\0mobile\0"
    "onMobileChanged(QString)\0backFromEventLog()\0"
    "QString\0_first_name\0_last_name\0_address\0"
    "_email\0_mobile\0"
};

void SendVcard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SendVcard *_t = static_cast<SendVcard *>(_o);
        switch (_id) {
        case 0: _t->back(); break;
        case 1: _t->detectFirstNameChanged(); break;
        case 2: _t->detectLastNameChanged(); break;
        case 3: _t->detectAddressChanged(); break;
        case 4: _t->detectEmailChanged(); break;
        case 5: _t->detectMobileChanged(); break;
        case 6: _t->showEventLog(); break;
        case 7: _t->show(); break;
        case 8: _t->startSendVcardProcess(); break;
        case 9: _t->onFirstNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->onLastNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->onAddressChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->onEmailChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->onMobileChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->backFromEventLog(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SendVcard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SendVcard::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SendVcard,
      qt_meta_data_SendVcard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SendVcard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SendVcard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SendVcard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SendVcard))
        return static_cast<void*>(const_cast< SendVcard*>(this));
    return QObject::qt_metacast(_clname);
}

int SendVcard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = getFirstName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = getLastName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = getAddress(); break;
        case 3: *reinterpret_cast< QString*>(_v) = getEmail(); break;
        case 4: *reinterpret_cast< QString*>(_v) = getMobile(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFirstName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setLastName(*reinterpret_cast< QString*>(_v)); break;
        case 2: setAddress(*reinterpret_cast< QString*>(_v)); break;
        case 3: setEmail(*reinterpret_cast< QString*>(_v)); break;
        case 4: setMobile(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SendVcard::back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SendVcard::detectFirstNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void SendVcard::detectLastNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void SendVcard::detectAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void SendVcard::detectEmailChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void SendVcard::detectMobileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void SendVcard::showEventLog()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
