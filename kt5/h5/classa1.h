#ifndef CLASSA1_H
#define CLASSA1_H
#include <string>
#include "ClassB.h"
using namespace std;

class ClassA1 {
private:
    ClassB objectB;

public:
    ClassA1(ClassB);
    string getBinfo();
    void setBinfo(string);
};

#endif // CLASSA1_H
