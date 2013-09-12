/****************************************************************************
** Meta object code from reading C++ file 'WriteSp.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/WriteSp.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WriteSp.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WriteSp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       3,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      16,    8,    8,    8, 0x05,
      42,    8,    8,    8, 0x05,
      61,    8,    8,    8, 0x05,
      81,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      96,    8,    8,    8, 0x0a,
     103,    8,    8,    8, 0x0a,
     127,  123,    8,    8, 0x0a,
     154,  149,    8,    8, 0x0a,
     177,    8,    8,    8, 0x0a,

 // properties: name, type, flags
     204,  196, 0x0a495103,
     215,  196, 0x0a495003,
     220,  196, 0x0a495003,

 // properties: notify_signal_id
       1,
       2,
       3,

       0        // eod
};

static const char qt_meta_stringdata_WriteSp[] = {
    "WriteSp\0\0back()\0detectAppVersionChanged()\0"
    "detectUriChanged()\0detectTextChanged()\0"
    "showEventLog()\0show()\0startWriteProcess()\0"
    "uri\0onUriChanged(QString)\0text\0"
    "onTextChanged(QString)\0backFromEventLog()\0"
    "QString\0appVersion\0_uri\0_text\0"
};

void WriteSp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WriteSp *_t = static_cast<WriteSp *>(_o);
        switch (_id) {
        case 0: _t->back(); break;
        case 1: _t->detectAppVersionChanged(); break;
        case 2: _t->detectUriChanged(); break;
        case 3: _t->detectTextChanged(); break;
        case 4: _t->showEventLog(); break;
        case 5: _t->show(); break;
        case 6: _t->startWriteProcess(); break;
        case 7: _t->onUriChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->onTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->backFromEventLog(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WriteSp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WriteSp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WriteSp,
      qt_meta_data_WriteSp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WriteSp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WriteSp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WriteSp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WriteSp))
        return static_cast<void*>(const_cast< WriteSp*>(this));
    return QObject::qt_metacast(_clname);
}

int WriteSp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = appVersion(); break;
        case 1: *reinterpret_cast< QString*>(_v) = getUri(); break;
        case 2: *reinterpret_cast< QString*>(_v) = getText(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAppVersion(*reinterpret_cast< QString*>(_v)); break;
        case 1: setUri(*reinterpret_cast< QString*>(_v)); break;
        case 2: setText(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void WriteSp::back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void WriteSp::detectAppVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void WriteSp::detectUriChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void WriteSp::detectTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void WriteSp::showEventLog()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
