#include "car.h"
#include <iostream>

//Setterit
void Car::setBrand(const std::string& b) {
    brand = b;
}

void Car::setModel(const std::string& m) {
    model = m;
}

void Car::setYearModel(int y) {
    yearModel = y;
}

//Printti
void Car::printData() const {
    std::cout<<"Merkki: "<<brand<< std::endl;
    std::cout<<"Malli: "<<model<< std::endl;
    std::cout<<"Vuosimalli: "<<yearModel<< std::endl;
}

