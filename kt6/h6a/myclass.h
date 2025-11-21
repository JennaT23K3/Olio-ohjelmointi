#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <iostream>
#include <QDebug>
using namespace std;

class myclass : public QObject {
    Q_OBJECT

public:
    myclass(QObject*parent = nullptr);

    void raiseMySignal();

signals:
    void mySignal();

public slots:
    void mySlot();
};

#endif // MYCLASS_H
