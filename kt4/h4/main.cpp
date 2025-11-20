#include <iostream>
#include "car.h"
using namespace std;

int main(){
    car myCar("Toyota", "Corolla");

    myCar.setEngine();
    myCar.setWheels();

    myCar.printDetails();

    return 0;
}
