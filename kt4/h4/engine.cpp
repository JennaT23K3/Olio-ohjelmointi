#include "engine.h"

engine::engine(int hp, double disp) : horsepower(hp), displacement(disp) {}

int engine::getHorsepower() const {
    return horsepower;
}

double engine::geDisplacement() const {
    return displacement;
}

void engine::setHorsepower(int hp) {
    horsepower = hp;
}

void engine::setDisplacement(double disp) {
    displacement = disp;
}
