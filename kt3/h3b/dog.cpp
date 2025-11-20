#include "dog.h"

Dog::Dog() {
    std::cout <<"Dog konstruktori"<< std::endl;
}

Dog::~Dog() {
    std::cout <<"Dog dekonstruktori"<< std::endl;
}

void Dog::callOut() {
    std::cout <<"Koira haukkuu!"<< std::endl;
}
