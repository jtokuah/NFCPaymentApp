/****************************************************************************
** Meta object code from reading C++ file 'WriteText.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/WriteText.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WriteText.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WriteText[] = {

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
      11,   10,   10,   10, 0x05,
      18,   10,   10,   10, 0x05,
      44,   10,   10,   10, 0x05,
      64,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   10,   10,   10, 0x0a,
      86,   10,   10,   10, 0x0a,
     111,  106,   10,   10, 0x0a,
     134,   10,   10,   10, 0x0a,

 // properties: name, type, flags
     161,  153, 0x0a495103,
     172,  153, 0x0a495003,

 // properties: notify_signal_id
       1,
       2,

       0        // eod
};

static const char qt_meta_stringdata_WriteText[] = {
    "WriteText\0\0back()\0detectAppVersionChanged()\0"
    "detectTextChanged()\0showEventLog()\0"
    "show()\0startWriteProcess()\0text\0"
    "onTextChanged(QString)\0backFromEventLog()\0"
    "QString\0appVersion\0_text\0"
};

void WriteText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WriteText *_t = static_cast<WriteText *>(_o);
        switch (_id) {
        case 0: _t->back(); break;
        case 1: _t->detectAppVersionChanged(); break;
        case 2: _t->detectTextChanged(); break;
        case 3: _t->showEventLog(); break;
        case 4: _t->show(); break;
        case 5: _t->startWriteProcess(); break;
        case 6: _t->onTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->backFromEventLog(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WriteText::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WriteText::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WriteText,
      qt_meta_data_WriteText, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WriteText::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WriteText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WriteText::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WriteText))
        return static_cast<void*>(const_cast< WriteText*>(this));
    return QObject::qt_metacast(_clname);
}

int WriteText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 1: *reinterpret_cast< QString*>(_v) = getText(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAppVersion(*reinterpret_cast< QString*>(_v)); break;
        case 1: setText(*reinterpret_cast< QString*>(_v)); break;
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
void WriteText::back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void WriteText::detectAppVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void WriteText::detectTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void WriteText::showEventLog()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
