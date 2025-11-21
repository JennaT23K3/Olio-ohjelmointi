#include <iostream>
#include "classb.h"
#include "classa1.h"
#include "classa2.h"
using namespace std;

int main() {

    cout << "-POINTTERI-" << endl;

    int a = 5;
    cout<< "a:n arvo on: " <<a<< " ja osoite on: " <<&a <<endl;

    int *pointerA = &a;
    cout<< "Pointterin osoittama osoite on: " <<&a <<endl;
    cout<< "Pointterin osoittaman musitipaikan arvo on: " << *pointerA <<endl;

    cout<< "\n-REFERENSSI-" <<endl;

    int&refA = a;
    cout<< "refA osoittaa osoitteeseen: " <<&refA <<endl;
    cout<< "refA:n osoittaman muistipaikan arvo on: " <<refA <<endl;

    int b = 6;

    //refA = b //Ei muuta referenssin kohdetta, vain arvon
    pointerA = &b;

    cout<< "\n-LUOKAT B, A1 ja A2-" <<endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout<< "objB: " << objB.getInfo() <<endl;
    cout<< "objA1: " << objA1.getBinfo() <<endl;

    cout<< "\n-REFERENSSI ARGUMENTTI-" << endl;

    ClassB &refB = objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Arg asettama info");

    cout<< "objB: " << objB.getInfo() <<endl;
    cout<< "objA2: " << objA2.getBinfo() << endl;

    return 0;
}
