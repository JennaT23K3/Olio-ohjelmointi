#ifndef CHEF_H
#define CHEF_H

#include <iostream>
#include <string>

class Chef {
public:
    Chef(std::string name);
    ~Chef();

    void makeSalad();
    void makeSoup();

protected: std::string name;
};

#endif // CHEF_H
