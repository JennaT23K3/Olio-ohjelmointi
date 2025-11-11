#include "rectangle.h"

//Set
void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setHeight(double h) {
    height = h;
}

//Metodit
double Rectangle::getArea() const {
    return width * height;
}

double Rectangle::getCircum() const {
    return 2*(width + height);
}
