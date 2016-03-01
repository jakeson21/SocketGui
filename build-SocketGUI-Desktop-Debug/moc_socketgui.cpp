/****************************************************************************
** Meta object code from reading C++ file 'socketgui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SocketGUI/socketgui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socketgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SocketGUI_t {
    QByteArrayData data[9];
    char stringdata[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SocketGUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SocketGUI_t qt_meta_stringdata_SocketGUI = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SocketGUI"
QT_MOC_LITERAL(1, 10, 18), // "updateReceivedText"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "inText"
QT_MOC_LITERAL(4, 37, 20), // "onUpdateReceivedText"
QT_MOC_LITERAL(5, 58, 29), // "on_buttonServerListen_clicked"
QT_MOC_LITERAL(6, 88, 9), // "inChecked"
QT_MOC_LITERAL(7, 98, 21), // "on_buttonSend_clicked"
QT_MOC_LITERAL(8, 120, 22) // "on_buttonClear_clicked"

    },
    "SocketGUI\0updateReceivedText\0\0inText\0"
    "onUpdateReceivedText\0on_buttonServerListen_clicked\0"
    "inChecked\0on_buttonSend_clicked\0"
    "on_buttonClear_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SocketGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x0a /* Public */,
       5,    1,   45,    2, 0x0a /* Public */,
       7,    1,   48,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void SocketGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SocketGUI *_t = static_cast<SocketGUI *>(_o);
        switch (_id) {
        case 0: _t->updateReceivedText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onUpdateReceivedText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_buttonServerListen_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_buttonSend_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_buttonClear_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SocketGUI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SocketGUI::updateReceivedText)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SocketGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SocketGUI.data,
      qt_meta_data_SocketGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SocketGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SocketGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SocketGUI.stringdata))
        return static_cast<void*>(const_cast< SocketGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SocketGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SocketGUI::updateReceivedText(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
