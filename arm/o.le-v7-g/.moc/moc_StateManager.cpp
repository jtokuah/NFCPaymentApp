/****************************************************************************
** Meta object code from reading C++ file 'StateManager.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/StateManager.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StateManager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StateManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      35,   13,   13,   13, 0x05,
      66,   13,   13,   13, 0x05,
      91,   13,   13,   13, 0x05,
     120,   13,   13,   13, 0x05,
     157,   13,   13,   13, 0x05,

 // properties: name, type, flags
     194,  189, 0x01495003,
     206,  189, 0x01495003,
     228,  189, 0x01495003,
     244,  189, 0x01495003,
     267,  189, 0x01495003,
     287,  189, 0x01495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       5,
       3,
       4,

       0        // eod
};

static const char qt_meta_stringdata_StateManager[] = {
    "StateManager\0\0inReadStateChanged()\0"
    "inDetectAndWriteStateChanged()\0"
    "inNdefPushStateChanged()\0"
    "inTagEmulationStateChanged()\0"
    "inIso14443_4_EmulationStateChanged()\0"
    "inEventLogShowingStateChanged()\0bool\0"
    "inReadState\0inDetectAndWriteState\0"
    "inNdefPushState\0inEventLogShowingState\0"
    "inTagEmulationState\0inIso14443_4_EmulationState\0"
};

void StateManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StateManager *_t = static_cast<StateManager *>(_o);
        switch (_id) {
        case 0: _t->inReadStateChanged(); break;
        case 1: _t->inDetectAndWriteStateChanged(); break;
        case 2: _t->inNdefPushStateChanged(); break;
        case 3: _t->inTagEmulationStateChanged(); break;
        case 4: _t->inIso14443_4_EmulationStateChanged(); break;
        case 5: _t->inEventLogShowingStateChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData StateManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StateManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StateManager,
      qt_meta_data_StateManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StateManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StateManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StateManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StateManager))
        return static_cast<void*>(const_cast< StateManager*>(this));
    return QObject::qt_metacast(_clname);
}

int StateManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = inReadState(); break;
        case 1: *reinterpret_cast< bool*>(_v) = inDetectAndWriteState(); break;
        case 2: *reinterpret_cast< bool*>(_v) = inNdefPushState(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isEventLogShowing(); break;
        case 4: *reinterpret_cast< bool*>(_v) = inTagEmulationState(); break;
        case 5: *reinterpret_cast< bool*>(_v) = inIso14443_4_EmulationState(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setReadState(*reinterpret_cast< bool*>(_v)); break;
        case 1: setDetectAndWriteState(*reinterpret_cast< bool*>(_v)); break;
        case 2: setNdefPushState(*reinterpret_cast< bool*>(_v)); break;
        case 3: setEventLogShowing(*reinterpret_cast< bool*>(_v)); break;
        case 4: setTagEmulationState(*reinterpret_cast< bool*>(_v)); break;
        case 5: setIso14443_4_EmulationState(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StateManager::inReadStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void StateManager::inDetectAndWriteStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void StateManager::inNdefPushStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void StateManager::inTagEmulationStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void StateManager::inIso14443_4_EmulationStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void StateManager::inEventLogShowingStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
