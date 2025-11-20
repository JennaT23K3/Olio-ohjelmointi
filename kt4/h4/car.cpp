#include <iostream>
#include "car.h"
using namespace std;

car::car(string b, string m) : brand(b), model(m) {}

void car::setEngine() {
    engine.setHorsepower(150);
    engine.setDisplacement(2.0);
}

void car::setWheels() {
    for (int i = 0; i < 4; i++) {
        wheels[i].setSize(17);
        wheels[i].setType("kesarengas");
    }
}

string car::getBrand() const {
    return brand;
}

string car::getModel() const {
    return model;
}

void car::setBrand(const string & b) {
    brand = b;
}

void car::setModel(const string & m) {
    model = m;
}

void car::printDetails() const {
    cout<< "Auto: " << brand << " " << model << endl;

    cout<< "Moottori: " << engine.getHorsepower() << " hp, " << engine.geDisplacement() << " L" << endl;

    for (int i = 0; i<4; i++) {
        cout<< " Rengas " <<(i+1)
            << ":" <<wheels[i].getSize()
             << ", " <<wheels[i].getType()<<endl;
    }
}
