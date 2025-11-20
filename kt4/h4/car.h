#ifndef CAR_H
#define CAR_H

#include <string>
#include "Engine.h"
#include "Wheel.h"

class car {
private:
    engine engine;
    wheel wheels[4];
    string brand;
    string model;

public:
    car(string b, string m);

    void setEngine();
    void setWheels();

    string getBrand() const;
    string getModel() const;

    void setBrand(const string& b);
    void setModel(const string& m);

    void printDetails() const;

};

#endif // CAR_H
