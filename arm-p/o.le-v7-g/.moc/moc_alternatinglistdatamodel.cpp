/****************************************************************************
** Meta object code from reading C++ file 'alternatinglistdatamodel.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/alternatinglistdatamodel.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alternatinglistdatamodel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AlternatingListDataModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: signature, parameters, type, tag, flags
      45,   35,   26,   25, 0x02,
      85,   64,   25,   25, 0x02,
     117,   25,   25,   25, 0x02,
     125,   25,   25,   25, 0x02,
     147,  137,   25,   25, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_AlternatingListDataModel[] = {
    "AlternatingListDataModel\0\0QVariant\0"
    "indexPath\0data(QVariantList)\0"
    "title,itemLabel,desc\0"
    "append(QString,QString,QString)\0reset()\0"
    "dumpModel()\0ascending\0ascendingSortOrder(bool)\0"
};

void AlternatingListDataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AlternatingListDataModel *_t = static_cast<AlternatingListDataModel *>(_o);
        switch (_id) {
        case 0: { QVariant _r = _t->data((*reinterpret_cast< const QVariantList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 1: _t->append((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->reset(); break;
        case 3: _t->dumpModel(); break;
        case 4: _t->ascendingSortOrder((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AlternatingListDataModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AlternatingListDataModel::staticMetaObject = {
    { &bb::cascades::GroupDataModel::staticMetaObject, qt_meta_stringdata_AlternatingListDataModel,
      qt_meta_data_AlternatingListDataModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AlternatingListDataModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AlternatingListDataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AlternatingListDataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AlternatingListDataModel))
        return static_cast<void*>(const_cast< AlternatingListDataModel*>(this));
    typedef bb::cascades::GroupDataModel QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int AlternatingListDataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef bb::cascades::GroupDataModel QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
