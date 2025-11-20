#include "wheel.h"

wheel::wheel(int s, string t) : size(s), type(t) {}

int wheel::getSize() const {
    return size;
}

string wheel::getType() const {
    return type;
}

void wheel::setSize(int s) {
    size = s;
}

void wheel::setType(const string& t) {
    type = t;
}
