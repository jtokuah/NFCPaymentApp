/****************************************************************************
** Meta object code from reading C++ file 'mylistmodel.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/mylistmodel.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mylistmodel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyListModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: signature, parameters, type, tag, flags
      23,   13,   12,   12, 0x02,
      58,   46,   37,   12, 0x02,
      93,   77,   12,   12, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_MyListModel[] = {
    "MyListModel\0\0file_name\0load(QString)\0"
    "QVariant\0ix,fld_name\0value(int,QString)\0"
    "ix,fld_name,val\0setValue(int,QString,QVariant)\0"
};

void MyListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyListModel *_t = static_cast<MyListModel *>(_o);
        switch (_id) {
        case 0: _t->load((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { QVariant _r = _t->value((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 2: _t->setValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MyListModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyListModel::staticMetaObject = {
    { &bb::cascades::QVariantListDataModel::staticMetaObject, qt_meta_stringdata_MyListModel,
      qt_meta_data_MyListModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyListModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyListModel))
        return static_cast<void*>(const_cast< MyListModel*>(this));
    typedef bb::cascades::QVariantListDataModel QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int MyListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef bb::cascades::QVariantListDataModel QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
