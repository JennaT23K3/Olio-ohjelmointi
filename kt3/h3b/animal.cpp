#include "animal.h"

Animal::Animal() {
    std::cout <<"Animal konstruktori" <<std::endl;
}

Animal::~Animal() {
    std::cout <<"Animal destruktori"<< std::endl;
}

void Animal::callOut() {
    std::cout <<"Elain aantelee." <<std::endl;
}
