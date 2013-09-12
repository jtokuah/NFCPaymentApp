/****************************************************************************
** Meta object code from reading C++ file 'WriteCustom.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/WriteCustom.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WriteCustom.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WriteCustom[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       4,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      20,   12,   12,   12, 0x05,
      46,   12,   12,   12, 0x05,
      68,   12,   12,   12, 0x05,
      88,   12,   12,   12, 0x05,
     111,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     126,   12,   12,   12, 0x0a,
     133,   12,   12,   12, 0x0a,
     158,  153,   12,   12, 0x0a,
     183,  153,   12,   12, 0x0a,
     206,  153,   12,   12, 0x0a,
     232,   12,   12,   12, 0x0a,

 // properties: name, type, flags
     259,  251, 0x0a495103,
     270,  251, 0x0a495003,
     278,  251, 0x0a495003,
     284,  251, 0x0a495003,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,

       0        // eod
};

static const char qt_meta_stringdata_WriteCustom[] = {
    "WriteCustom\0\0back()\0detectAppVersionChanged()\0"
    "detectDomainChanged()\0detectTypeChanged()\0"
    "detectContentChanged()\0showEventLog()\0"
    "show()\0startWriteProcess()\0type\0"
    "onDomainChanged(QString)\0"
    "onTypeChanged(QString)\0onContentChanged(QString)\0"
    "backFromEventLog()\0QString\0appVersion\0"
    "_domain\0_type\0_content\0"
};

void WriteCustom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WriteCustom *_t = static_cast<WriteCustom *>(_o);
        switch (_id) {
        case 0: _t->back(); break;
        case 1: _t->detectAppVersionChanged(); break;
        case 2: _t->detectDomainChanged(); break;
        case 3: _t->detectTypeChanged(); break;
        case 4: _t->detectContentChanged(); break;
        case 5: _t->showEventLog(); break;
        case 6: _t->show(); break;
        case 7: _t->startWriteProcess(); break;
        case 8: _t->onDomainChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->onTypeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->onContentChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->backFromEventLog(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WriteCustom::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WriteCustom::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WriteCustom,
      qt_meta_data_WriteCustom, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WriteCustom::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WriteCustom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WriteCustom::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WriteCustom))
        return static_cast<void*>(const_cast< WriteCustom*>(this));
    return QObject::qt_metacast(_clname);
}

int WriteCustom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = getAppVersion(); break;
        case 1: *reinterpret_cast< QString*>(_v) = getDomain(); break;
        case 2: *reinterpret_cast< QString*>(_v) = getType(); break;
        case 3: *reinterpret_cast< QString*>(_v) = getContent(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAppVersion(*reinterpret_cast< QString*>(_v)); break;
        case 1: setDomain(*reinterpret_cast< QString*>(_v)); break;
        case 2: setType(*reinterpret_cast< QString*>(_v)); break;
        case 3: setContent(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void WriteCustom::back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void WriteCustom::detectAppVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void WriteCustom::detectDomainChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void WriteCustom::detectTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void WriteCustom::detectContentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void WriteCustom::showEventLog()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
