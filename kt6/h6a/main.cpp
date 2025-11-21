#include <QCoreApplication>
#include "myclass.h"
using namespace std;

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    myclass obj;
    obj.raiseMySignal();


    return a.exec();
}
