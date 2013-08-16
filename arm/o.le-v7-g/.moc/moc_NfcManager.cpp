/****************************************************************************
** Meta object code from reading C++ file 'NfcManager.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/NfcManager.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NfcManager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NfcManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   12,   11,   11, 0x05,
      57,   42,   11,   11, 0x05,
      96,   91,   11,   11, 0x05,
     143,  123,   11,   11, 0x05,
     232,  190,   11,   11, 0x05,
     304,  295,   11,   11, 0x05,
     343,   11,   11,   11, 0x05,
     364,   11,   11,   11, 0x05,
     387,   11,   11,   11, 0x05,
     476,  409,   11,   11, 0x05,
     568,  409,   11,   11, 0x05,
     661,   11,   11,   11, 0x05,
     688,  683,   11,   11, 0x05,
     719,   11,   11,   11, 0x05,
     739,   11,   11,   11, 0x05,
     758,   11,   11,   11, 0x05,
     775,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     794,   91,   11,   11, 0x0a,
     812,   11,   11,   11, 0x0a,
     828,   11,   11,   11, 0x0a,
     844,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NfcManager[] = {
    "NfcManager\0\0uri\0start_write_uri(QVariant)\0"
    "sp_uri,sp_text\0start_write_sp(QVariant,QVariant)\0"
    "text\0start_write_text(QVariant)\0"
    "domain,type,payload\0"
    "start_write_custom(QVariant,QVariant,QVariant)\0"
    "first_name,last_name,address,email,mobile\0"
    "start_send_vcard(QVariant,QVariant,QVariant,QVariant,QVariant)\0"
    "uri,text\0start_tag_emulation(QVariant,QVariant)\0"
    "stop_tag_emulation()\0start_echo_emulation()\0"
    "stop_echo_emulation()\0"
    "aid,select_only,hex_cla,hex_ins,hex_p1p2,hex_lc,hex_command,hex_le\0"
    "start_iso7816_SIM_test(QVariant,bool,QVariant,QVariant,QVariant,QVaria"
    "nt,QVariant,QVariant)\0"
    "start_iso7816_CARD_test(QVariant,bool,QVariant,QVariant,QVariant,QVari"
    "ant,QVariant,QVariant)\0"
    "start_iso15693_read()\0data\0"
    "start_iso15693_write(QVariant)\0"
    "nfcManagerStopped()\0resetWorkerState()\0"
    "start_gvb_read()\0read_tag_details()\0"
    "message(QVariant)\0clearMessages()\0"
    "workerStopped()\0resetWorker()\0"
};

void NfcManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NfcManager *_t = static_cast<NfcManager *>(_o);
        switch (_id) {
        case 0: _t->start_write_uri((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->start_write_sp((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 2: _t->start_write_text((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->start_write_custom((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 4: _t->start_send_vcard((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5]))); break;
        case 5: _t->start_tag_emulation((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 6: _t->stop_tag_emulation(); break;
        case 7: _t->start_echo_emulation(); break;
        case 8: _t->stop_echo_emulation(); break;
        case 9: _t->start_iso7816_SIM_test((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8]))); break;
        case 10: _t->start_iso7816_CARD_test((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8]))); break;
        case 11: _t->start_iso15693_read(); break;
        case 12: _t->start_iso15693_write((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 13: _t->nfcManagerStopped(); break;
        case 14: _t->resetWorkerState(); break;
        case 15: _t->start_gvb_read(); break;
        case 16: _t->read_tag_details(); break;
        case 17: _t->message((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 18: _t->clearMessages(); break;
        case 19: _t->workerStopped(); break;
        case 20: _t->resetWorker(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NfcManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NfcManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NfcManager,
      qt_meta_data_NfcManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NfcManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NfcManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NfcManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NfcManager))
        return static_cast<void*>(const_cast< NfcManager*>(this));
    return QObject::qt_metacast(_clname);
}

int NfcManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void NfcManager::start_write_uri(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NfcManager::start_write_sp(const QVariant & _t1, const QVariant & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NfcManager::start_write_text(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NfcManager::start_write_custom(const QVariant & _t1, const QVariant & _t2, const QVariant & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NfcManager::start_send_vcard(const QVariant & _t1, const QVariant & _t2, const QVariant & _t3, const QVariant & _t4, const QVariant & _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NfcManager::start_tag_emulation(const QVariant & _t1, const QVariant & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void NfcManager::stop_tag_emulation()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void NfcManager::start_echo_emulation()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void NfcManager::stop_echo_emulation()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void NfcManager::start_iso7816_SIM_test(const QVariant & _t1, bool _t2, const QVariant & _t3, const QVariant & _t4, const QVariant & _t5, const QVariant & _t6, const QVariant & _t7, const QVariant & _t8)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void NfcManager::start_iso7816_CARD_test(const QVariant & _t1, bool _t2, const QVariant & _t3, const QVariant & _t4, const QVariant & _t5, const QVariant & _t6, const QVariant & _t7, const QVariant & _t8)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void NfcManager::start_iso15693_read()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void NfcManager::start_iso15693_write(const QVariant & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void NfcManager::nfcManagerStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void NfcManager::resetWorkerState()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void NfcManager::start_gvb_read()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}

// SIGNAL 16
void NfcManager::read_tag_details()
{
    QMetaObject::activate(this, &staticMetaObject, 16, 0);
}
QT_END_MOC_NAMESPACE
