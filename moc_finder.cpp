/****************************************************************************
** Meta object code from reading C++ file 'finder.h'
**
** Created: Wed Nov 27 23:09:54 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "finder.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'finder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Finder[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      20,   16,    7,    7, 0x0a,
      42,    7,    7,    7, 0x08,
      67,    7,   52,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Finder[] = {
    "Finder\0\0start()\0msg\0printMsg(const char*)\0"
    "connect()\0QList<QString>\0getTable()\0"
};

void Finder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Finder *_t = static_cast<Finder *>(_o);
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->printMsg((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 2: _t->connect(); break;
        case 3: { QList<QString> _r = _t->getTable();
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Finder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Finder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Finder,
      qt_meta_data_Finder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Finder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Finder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Finder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Finder))
        return static_cast<void*>(const_cast< Finder*>(this));
    return QObject::qt_metacast(_clname);
}

int Finder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
