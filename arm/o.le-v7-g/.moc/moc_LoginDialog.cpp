/****************************************************************************
** Meta object code from reading C++ file 'LoginDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/LoginDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoginDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LoginDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       9,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      20,   12, 0x0a095103,
      33,   12, 0x0a095103,
      42,   12, 0x0a095103,
      62,   12, 0x0a095103,
      76,   12, 0x0a095103,
      85,   12, 0x0a095103,
     105,   12, 0x0a095103,
     124,  119, 0x01095103,
     135,   12, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_LoginDialog[] = {
    "LoginDialog\0QString\0loginMessage\0"
    "username\0usernamePlaceholder\0usernameLabel\0"
    "password\0passwordPlaceholder\0passwordLabel\0"
    "bool\0rememberme\0remembermeLabel\0"
};

void LoginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData LoginDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LoginDialog::staticMetaObject = {
    { &Dialog::staticMetaObject, qt_meta_stringdata_LoginDialog,
      qt_meta_data_LoginDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LoginDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LoginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LoginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LoginDialog))
        return static_cast<void*>(const_cast< LoginDialog*>(this));
    return Dialog::qt_metacast(_clname);
}

int LoginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Dialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = getLoginMessage(); break;
        case 1: *reinterpret_cast< QString*>(_v) = getUsername(); break;
        case 2: *reinterpret_cast< QString*>(_v) = getUsernamePlaceholder(); break;
        case 3: *reinterpret_cast< QString*>(_v) = getUsernameLabel(); break;
        case 4: *reinterpret_cast< QString*>(_v) = getPassword(); break;
        case 5: *reinterpret_cast< QString*>(_v) = getPasswordPlaceholder(); break;
        case 6: *reinterpret_cast< QString*>(_v) = getPasswordLabel(); break;
        case 7: *reinterpret_cast< bool*>(_v) = getRememberme(); break;
        case 8: *reinterpret_cast< QString*>(_v) = getRemembermeLabel(); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLoginMessage(*reinterpret_cast< QString*>(_v)); break;
        case 1: setUsername(*reinterpret_cast< QString*>(_v)); break;
        case 2: setUsernamePlaceholder(*reinterpret_cast< QString*>(_v)); break;
        case 3: setUsernameLabel(*reinterpret_cast< QString*>(_v)); break;
        case 4: setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 5: setPasswordPlaceholder(*reinterpret_cast< QString*>(_v)); break;
        case 6: setPasswordLabel(*reinterpret_cast< QString*>(_v)); break;
        case 7: setRememberme(*reinterpret_cast< bool*>(_v)); break;
        case 8: setRemembermeLabel(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
