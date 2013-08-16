/****************************************************************************
** Meta object code from reading C++ file 'ApduDetails.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ApduDetails.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ApduDetails.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ApduDetails[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
      10,  139, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      20,   12,   12,   12, 0x05,
      39,   12,   12,   12, 0x05,
      65,   12,   12,   12, 0x05,
      85,   12,   12,   12, 0x05,
     110,   12,   12,   12, 0x05,
     129,   12,   12,   12, 0x05,
     148,   12,   12,   12, 0x05,
     168,   12,   12,   12, 0x05,
     186,   12,   12,   12, 0x05,
     209,   12,   12,   12, 0x05,
     227,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     242,   12,   12,   12, 0x0a,
     249,   12,   12,   12, 0x0a,
     279,  275,   12,   12, 0x0a,
     313,  301,   12,   12, 0x0a,
     344,  339,   12,   12, 0x0a,
     375,  364,   12,   12, 0x0a,
     403,  399,   12,   12, 0x0a,
     429,  425,   12,   12, 0x0a,
     456,  451,   12,   12, 0x0a,
     482,  479,   12,   12, 0x0a,
     511,  503,   12,   12, 0x0a,
     540,  537,   12,   12, 0x0a,
     561,   12,   12,   12, 0x0a,

 // properties: name, type, flags
     588,  580, 0x0a495003,
     598,  593, 0x01495003,
     611,  593, 0x01495003,
     621,  617, 0x02495003,
     633,  580, 0x0a495003,
     638,  580, 0x0a495003,
     643,  580, 0x0a495003,
     649,  580, 0x0a495003,
     653,  580, 0x0a495003,
     662,  580, 0x0a495003,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,

       0        // eod
};

static const char qt_meta_stringdata_ApduDetails[] = {
    "ApduDetails\0\0back()\0detectAidChanged()\0"
    "detectSelectOnlyChanged()\0detectPpseChanged()\0"
    "detectTargetInxChanged()\0detectClaChanged()\0"
    "detectInsChanged()\0detectP1p2Changed()\0"
    "detectLcChanged()\0detectCommandChanged()\0"
    "detectLeChanged()\0showEventLog()\0"
    "show()\0startApduDetailsProcess()\0aid\0"
    "onAidChanged(QString)\0select_only\0"
    "onSelectOnlyChanged(bool)\0ppse\0"
    "onPpseChanged(bool)\0target_inx\0"
    "onTargetInxChanged(int)\0cla\0"
    "onClaChanged(QString)\0ins\0"
    "onInsChanged(QString)\0p1p2\0"
    "onP1p2Changed(QString)\0lc\0"
    "onLcChanged(QString)\0command\0"
    "onCommandChanged(QString)\0le\0"
    "onLeChanged(QString)\0backFromEventLog()\0"
    "QString\0_aid\0bool\0_select_only\0_ppse\0"
    "int\0_target_inx\0_cla\0_ins\0_p1p2\0_lc\0"
    "_command\0_le\0"
};

void ApduDetails::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ApduDetails *_t = static_cast<ApduDetails *>(_o);
        switch (_id) {
        case 0: _t->back(); break;
        case 1: _t->detectAidChanged(); break;
        case 2: _t->detectSelectOnlyChanged(); break;
        case 3: _t->detectPpseChanged(); break;
        case 4: _t->detectTargetInxChanged(); break;
        case 5: _t->detectClaChanged(); break;
        case 6: _t->detectInsChanged(); break;
        case 7: _t->detectP1p2Changed(); break;
        case 8: _t->detectLcChanged(); break;
        case 9: _t->detectCommandChanged(); break;
        case 10: _t->detectLeChanged(); break;
        case 11: _t->showEventLog(); break;
        case 12: _t->show(); break;
        case 13: _t->startApduDetailsProcess(); break;
        case 14: _t->onAidChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->onSelectOnlyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->onPpseChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->onTargetInxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->onClaChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->onInsChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->onP1p2Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->onLcChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->onCommandChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->onLeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->backFromEventLog(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ApduDetails::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ApduDetails::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ApduDetails,
      qt_meta_data_ApduDetails, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ApduDetails::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ApduDetails::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ApduDetails::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ApduDetails))
        return static_cast<void*>(const_cast< ApduDetails*>(this));
    return QObject::qt_metacast(_clname);
}

int ApduDetails::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = getAid(); break;
        case 1: *reinterpret_cast< bool*>(_v) = getSelectOnly(); break;
        case 2: *reinterpret_cast< bool*>(_v) = getPpse(); break;
        case 3: *reinterpret_cast< int*>(_v) = getTargetInx(); break;
        case 4: *reinterpret_cast< QString*>(_v) = getCla(); break;
        case 5: *reinterpret_cast< QString*>(_v) = getIns(); break;
        case 6: *reinterpret_cast< QString*>(_v) = getP1p2(); break;
        case 7: *reinterpret_cast< QString*>(_v) = getLc(); break;
        case 8: *reinterpret_cast< QString*>(_v) = getCommand(); break;
        case 9: *reinterpret_cast< QString*>(_v) = getLe(); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAid(*reinterpret_cast< QString*>(_v)); break;
        case 1: setSelectOnly(*reinterpret_cast< bool*>(_v)); break;
        case 2: setPpse(*reinterpret_cast< bool*>(_v)); break;
        case 3: setTargetInx(*reinterpret_cast< int*>(_v)); break;
        case 4: setCla(*reinterpret_cast< QString*>(_v)); break;
        case 5: setIns(*reinterpret_cast< QString*>(_v)); break;
        case 6: setP1p2(*reinterpret_cast< QString*>(_v)); break;
        case 7: setLc(*reinterpret_cast< QString*>(_v)); break;
        case 8: setCommand(*reinterpret_cast< QString*>(_v)); break;
        case 9: setLe(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ApduDetails::back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ApduDetails::detectAidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ApduDetails::detectSelectOnlyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void ApduDetails::detectPpseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void ApduDetails::detectTargetInxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void ApduDetails::detectClaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void ApduDetails::detectInsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void ApduDetails::detectP1p2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void ApduDetails::detectLcChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void ApduDetails::detectCommandChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void ApduDetails::detectLeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void ApduDetails::showEventLog()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}
QT_END_MOC_NAMESPACE
