/****************************************************************************
** Meta object code from reading C++ file 'WriteURI.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/WriteURI.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WriteURI.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WriteURI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      17,    9,    9,    9, 0x05,
      43,    9,    9,    9, 0x05,
      62,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      77,    9,    9,    9, 0x0a,
      84,    9,    9,    9, 0x0a,
     108,  104,    9,    9, 0x0a,
     130,    9,    9,    9, 0x0a,

 // properties: name, type, flags
     157,  149, 0x0a495103,
     168,  149, 0x0a495003,

 // properties: notify_signal_id
       1,
       2,

       0        // eod
};

static const char qt_meta_stringdata_WriteURI[] = {
    "WriteURI\0\0back()\0detectAppVersionChanged()\0"
    "detectUriChanged()\0showEventLog()\0"
    "show()\0startWriteProcess()\0uri\0"
    "onUriChanged(QString)\0backFromEventLog()\0"
    "QString\0appVersion\0_uri\0"
};

void WriteURI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WriteURI *_t = static_cast<WriteURI *>(_o);
        switch (_id) {
        case 0: _t->back(); break;
        case 1: _t->detectAppVersionChanged(); break;
        case 2: _t->detectUriChanged(); break;
        case 3: _t->showEventLog(); break;
        case 4: _t->show(); break;
        case 5: _t->startWriteProcess(); break;
        case 6: _t->onUriChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->backFromEventLog(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WriteURI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WriteURI::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WriteURI,
      qt_meta_data_WriteURI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WriteURI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WriteURI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WriteURI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WriteURI))
        return static_cast<void*>(const_cast< WriteURI*>(this));
    return QObject::qt_metacast(_clname);
}

int WriteURI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = appVersion(); break;
        case 1: *reinterpret_cast< QString*>(_v) = getUri(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAppVersion(*reinterpret_cast< QString*>(_v)); break;
        case 1: setUri(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void WriteURI::back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void WriteURI::detectAppVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void WriteURI::detectUriChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void WriteURI::showEventLog()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
