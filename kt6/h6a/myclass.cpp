#include "myclass.h"

myclass::myclass(QObject *parent) : QObject(parent) {
    connect(this, &myclass::mySignal, this, &myclass::mySlot);
}

void myclass::raiseMySignal() {
    emit mySignal();
}

void myclass::mySlot() {
    qDebug() << "mySlot:ia kutsutiin";
}
