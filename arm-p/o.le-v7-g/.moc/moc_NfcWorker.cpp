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
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      35,   27,   10,   10, 0x05,
      53,   27,   10,   10, 0x05,
      71,   10,   10,   10, 0x05,
      90,   27,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     108,   10,   10,   10, 0x0a,
     125,   10,   10,   10, 0x0a,
     138,   10,   10,   10, 0x0a,
     146,   10,   10,   10, 0x0a,
     160,  155,   10,   10, 0x0a,
     187,   10,   10,   10, 0x0a,
     223,  219,   10,   10, 0x0a,
     263,  258,   10,   10, 0x0a,
     314,  299,   10,   10, 0x0a,
     377,  357,   10,   10, 0x0a,
     475,  433,   10,   10, 0x0a,
     557,  540,   10,   10, 0x0a,
     596,   10,   10,   10, 0x0a,
     619,   10,   10,   10, 0x0a,
     644,  219,   10,   10, 0x0a,
     666,  299,   10,   10, 0x0a,
     696,  258,   10,   10, 0x0a,
     719,  357,   10,   10, 0x0a,
     762,  433,   10,   10, 0x0a,
     827,  818,   10,   10, 0x0a,
     857,   10,   10,   10, 0x0a,
     937,  871,   10,   10, 0x0a,
    1026, 1020,   10,   10, 0x0a,
    1061,  871,   10,   10, 0x0a,
    1150,   10,   10,   10, 0x0a,
    1181, 1176,   10,   10, 0x0a,
    1216,   10,   10,   10, 0x0a,
    1231, 1176,   10,   10, 0x0a,
    1255,   10,   10,   10, 0x0a,
    1274,   10,   10,   10, 0x0a,
    1284,   10,   10,   10, 0x0a,
    1305,   10,   10,   10, 0x0a,
    1322,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NfcWorker[] = {
    "NfcWorker\0\0clearMessages()\0message\0"
    "stopped(QVariant)\0started(QVariant)\0"
    "event_log_needed()\0message(QVariant)\0"
    "startEventLoop()\0initialize()\0reset()\0"
    "listen()\0code\0interruptBpsWaitLoop(uint)\0"
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
        case 5: _t->startEventLoop(); break;
        case 6: _t->initialize(); break;
        case 7: _t->reset(); break;
        case 8: _t->listen(); break;
        case 9: _t->interruptBpsWaitLoop((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 10: _t->prepareToReadNdefTagViaInvoke(); break;
        case 11: _t->prepareToWriteNdefUriTag((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 12: _t->prepareToWriteNdefTextTag((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 13: _t->prepareToWriteNdefSpTag((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 14: _t->prepareToWriteNdefCustomTag((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 15: _t->prepareToSendVcard((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5]))); break;
        case 16: _t->prepareToEmulateTag((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 17: _t->prepareToEmulateEcho(); break;
        case 18: _t->prepareToStopEmulation(); break;
        case 19: _t->writeUriTag((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 20: _t->writeSpTag((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 21: _t->writeTextTag((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 22: _t->writeCustomTag((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 23: _t->sendVcard((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5]))); break;
        case 24: _t->emulateTag((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 25: _t->emulateEcho(); break;
        case 26: _t->doIso7816Test((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8]))); break;
        case 27: _t->exchangeApduWithCard((*reinterpret_cast< bps_event_t*(*)>(_a[1]))); break;
        case 28: _t->prepIso7816CardTest((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8]))); break;
        case 29: _t->prepareToDoIso15693Read(); break;
        case 30: _t->prepareToDoIso15693Write((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 31: _t->readIso15693(); break;
        case 32: _t->writeIso15693((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 33: _t->stopEmulatingTag(); break;
        case 34: _t->readGvb(); break;
        case 35: _t->prepareToDoGvbRead(); break;
        case 36: _t->readTagDetails(); break;
        case 37: _t->prepareToReadTagDetails(); break;
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
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
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
QT_END_MOC_NAMESPACE
