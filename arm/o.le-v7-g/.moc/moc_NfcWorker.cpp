/****************************************************************************
** Meta object code from reading C++ file 'NfcWorker.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/NfcWorker.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NfcWorker.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NfcWorker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      35,   27,   10,   10, 0x05,
      53,   27,   10,   10, 0x05,
      71,   10,   10,   10, 0x05,
      90,   27,   10,   10, 0x05,
     108,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     123,   10,   10,   10, 0x0a,
     140,   10,   10,   10, 0x0a,
     153,   10,   10,   10, 0x0a,
     161,   10,   10,   10, 0x0a,
     175,  170,   10,   10, 0x0a,
     202,   10,   10,   10, 0x0a,
     238,  234,   10,   10, 0x0a,
     278,  273,   10,   10, 0x0a,
     329,  314,   10,   10, 0x0a,
     392,  372,   10,   10, 0x0a,
     490,  448,   10,   10, 0x0a,
     572,  555,   10,   10, 0x0a,
     611,   10,   10,   10, 0x0a,
     634,   10,   10,   10, 0x0a,
     659,  234,   10,   10, 0x0a,
     681,  314,   10,   10, 0x0a,
     711,  273,   10,   10, 0x0a,
     734,  372,   10,   10, 0x0a,
     777,  448,   10,   10, 0x0a,
     842,  833,   10,   10, 0x0a,
     872,   10,   10,   10, 0x0a,
     952,  886,   10,   10, 0x0a,
    1041, 1035,   10,   10, 0x0a,
    1076,  886,   10,   10, 0x0a,
    1165,   10,   10,   10, 0x0a,
    1196, 1191,   10,   10, 0x0a,
    1231,   10,   10,   10, 0x0a,
    1246, 1191,   10,   10, 0x0a,
    1270,   10,   10,   10, 0x0a,
    1289,   10,   10,   10, 0x0a,
    1299,   10,   10,   10, 0x0a,
    1320,   10,   10,   10, 0x0a,
    1337,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NfcWorker[] = {
    "NfcWorker\0\0clearMessages()\0message\0"
    "stopped(QVariant)\0started(QVariant)\0"
    "event_log_needed()\0message(QVariant)\0"
    "pushToScreen()\0startEventLoop()\0"
    "initialize()\0reset()\0listen()\0code\0"
    "interruptBpsWaitLoop(uint)\0"
    "prepareToReadNdefTagViaInvoke()\0uri\0"
    "prepareToWriteNdefUriTag(QVariant)\0"
    "text\0prepareToWriteNdefTextTag(QVariant)\0"
    "sp_uri,sp_text\0"
    "prepareToWriteNdefSpTag(QVariant,QVariant)\0"
    "domain,type,payload\0"
    "prepareToWriteNdefCustomTag(QVariant,QVariant,QVariant)\0"
    "first_name,last_name,address,email,mobile\0"
    "prepareToSendVcard(QVariant,QVariant,QVariant,QVariant,QVariant)\0"
    "the_uri,the_text\0"
    "prepareToEmulateTag(QVariant,QVariant)\0"
    "prepareToEmulateEcho()\0prepareToStopEmulation()\0"
    "writeUriTag(QVariant)\0"
    "writeSpTag(QVariant,QVariant)\0"
    "writeTextTag(QVariant)\0"
    "writeCustomTag(QVariant,QVariant,QVariant)\0"
    "sendVcard(QVariant,QVariant,QVariant,QVariant,QVariant)\0"
    "uri,text\0emulateTag(QVariant,QVariant)\0"
    "emulateEcho()\0"
    "aid,select_only,hex_cla,hex_ins,hexp1p2,hex_lc,hex_command,hex_le\0"
    "doIso7816Test(QVariant,bool,QVariant,QVariant,QVariant,QVariant,QVaria"
    "nt,QVariant)\0"
    "event\0exchangeApduWithCard(bps_event_t*)\0"
    "prepIso7816CardTest(QVariant,bool,QVariant,QVariant,QVariant,QVariant,"
    "QVariant,QVariant)\0"
    "prepareToDoIso15693Read()\0data\0"
    "prepareToDoIso15693Write(QVariant)\0"
    "readIso15693()\0writeIso15693(QVariant)\0"
    "stopEmulatingTag()\0readGvb()\0"
    "prepareToDoGvbRead()\0readTagDetails()\0"
    "prepareToReadTagDetails()\0"
};

void NfcWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NfcWorker *_t = static_cast<NfcWorker *>(_o);
        switch (_id) {
        case 0: _t->clearMessages(); break;
        case 1: _t->stopped((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->started((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->event_log_needed(); break;
        case 4: _t->message((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 5: _t->pushToScreen(); break;
        case 6: _t->startEventLoop(); break;
        case 7: _t->initialize(); break;
        case 8: _t->reset(); break;
        case 9: _t->listen(); break;
        case 10: _t->interruptBpsWaitLoop((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 11: _t->prepareToReadNdefTagViaInvoke(); break;
        case 12: _t->prepareToWriteNdefUriTag((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 13: _t->prepareToWriteNdefTextTag((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 14: _t->prepareToWriteNdefSpTag((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 15: _t->prepareToWriteNdefCustomTag((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 16: _t->prepareToSendVcard((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5]))); break;
        case 17: _t->prepareToEmulateTag((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 18: _t->prepareToEmulateEcho(); break;
        case 19: _t->prepareToStopEmulation(); break;
        case 20: _t->writeUriTag((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 21: _t->writeSpTag((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 22: _t->writeTextTag((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 23: _t->writeCustomTag((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 24: _t->sendVcard((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5]))); break;
        case 25: _t->emulateTag((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 26: _t->emulateEcho(); break;
        case 27: _t->doIso7816Test((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8]))); break;
        case 28: _t->exchangeApduWithCard((*reinterpret_cast< bps_event_t*(*)>(_a[1]))); break;
        case 29: _t->prepIso7816CardTest((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8]))); break;
        case 30: _t->prepareToDoIso15693Read(); break;
        case 31: _t->prepareToDoIso15693Write((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 32: _t->readIso15693(); break;
        case 33: _t->writeIso15693((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 34: _t->stopEmulatingTag(); break;
        case 35: _t->readGvb(); break;
        case 36: _t->prepareToDoGvbRead(); break;
        case 37: _t->readTagDetails(); break;
        case 38: _t->prepareToReadTagDetails(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NfcWorker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NfcWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NfcWorker,
      qt_meta_data_NfcWorker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NfcWorker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NfcWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NfcWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NfcWorker))
        return static_cast<void*>(const_cast< NfcWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int NfcWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void NfcWorker::clearMessages()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void NfcWorker::stopped(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NfcWorker::started(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NfcWorker::event_log_needed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void NfcWorker::message(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NfcWorker::pushToScreen()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
