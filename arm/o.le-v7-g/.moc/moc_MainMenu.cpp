/****************************************************************************
** Meta object code from reading C++ file 'MainMenu.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/MainMenu.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainMenu.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       1,  144, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      36,    9,    9,    9, 0x05,
      52,    9,    9,    9, 0x05,
      75,    9,    9,    9, 0x05,
      87,    9,    9,    9, 0x05,
      98,    9,    9,    9, 0x05,
     111,    9,    9,    9, 0x05,
     126,    9,    9,    9, 0x05,
     148,    9,    9,    9, 0x05,
     171,    9,    9,    9, 0x05,
     195,    9,    9,    9, 0x05,
     214,    9,    9,    9, 0x05,
     238,    9,    9,    9, 0x05,
     263,    9,    9,    9, 0x05,
     280,    9,    9,    9, 0x05,
     297,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     316,    9,    9,    9, 0x0a,
     348,  338,    9,    9, 0x0a,
     385,    9,    9,    9, 0x0a,
     399,    9,    9,    9, 0x0a,
     423,  415,    9,    9, 0x0a,
     472,    9,    9,    9, 0x08,
     487,    9,    9,    9, 0x08,
     503,    9,    9,    9, 0x08,
     517,    9,    9,    9, 0x08,
     527,    9,    9,    9, 0x08,

 // properties: name, type, flags
     548,  540, 0x0a495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

static const char qt_meta_stringdata_MainMenu[] = {
    "MainMenu\0\0detectAppVersionChanged()\0"
    "read_selected()\0tag_details_selected()\0"
    "write_uri()\0write_sp()\0write_text()\0"
    "write_custom()\0send_vcard_selected()\0"
    "emulate_tag_selected()\0emulate_echo_selected()\0"
    "iso7816_selected()\0readIso15693_selected()\0"
    "writeIso15693_selected()\0about_selected()\0"
    "launchEventLog()\0readGvb_selected()\0"
    "onMainMenuTriggered()\0indexPath\0"
    "onListSelectionChanged(QVariantList)\0"
    "menuShowing()\0cleanUpOnExit()\0request\0"
    "receivedInvokeRequest(bb::system::InvokeRequest)\0"
    "readIso15693()\0writeIso15693()\0"
    "emulateEcho()\0readGvb()\0tagDetails()\0"
    "QString\0appVersion\0"
};

void MainMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainMenu *_t = static_cast<MainMenu *>(_o);
        switch (_id) {
        case 0: _t->detectAppVersionChanged(); break;
        case 1: _t->read_selected(); break;
        case 2: _t->tag_details_selected(); break;
        case 3: _t->write_uri(); break;
        case 4: _t->write_sp(); break;
        case 5: _t->write_text(); break;
        case 6: _t->write_custom(); break;
        case 7: _t->send_vcard_selected(); break;
        case 8: _t->emulate_tag_selected(); break;
        case 9: _t->emulate_echo_selected(); break;
        case 10: _t->iso7816_selected(); break;
        case 11: _t->readIso15693_selected(); break;
        case 12: _t->writeIso15693_selected(); break;
        case 13: _t->about_selected(); break;
        case 14: _t->launchEventLog(); break;
        case 15: _t->readGvb_selected(); break;
        case 16: _t->onMainMenuTriggered(); break;
        case 17: _t->onListSelectionChanged((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 18: _t->menuShowing(); break;
        case 19: _t->cleanUpOnExit(); break;
        case 20: _t->receivedInvokeRequest((*reinterpret_cast< const bb::system::InvokeRequest(*)>(_a[1]))); break;
        case 21: _t->readIso15693(); break;
        case 22: _t->writeIso15693(); break;
        case 23: _t->emulateEcho(); break;
        case 24: _t->readGvb(); break;
        case 25: _t->tagDetails(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MainMenu,
      qt_meta_data_MainMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainMenu))
        return static_cast<void*>(const_cast< MainMenu*>(this));
    return QObject::qt_metacast(_clname);
}

int MainMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = appVersion(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAppVersion(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MainMenu::detectAppVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MainMenu::read_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void MainMenu::tag_details_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MainMenu::write_uri()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void MainMenu::write_sp()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void MainMenu::write_text()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void MainMenu::write_custom()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void MainMenu::send_vcard_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void MainMenu::emulate_tag_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void MainMenu::emulate_echo_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void MainMenu::iso7816_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void MainMenu::readIso15693_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void MainMenu::writeIso15693_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void MainMenu::about_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void MainMenu::launchEventLog()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void MainMenu::readGvb_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}
QT_END_MOC_NAMESPACE
