#include "student.h"
#include <string>

void Student::asetaNimi(const std::string& n) {
    kuka = n;
}

void Student::asetaOppilasNro(int num) {
    oppilasNro = num;
}

void Student::asetaKeskiverto(double avg) {
    keskiverto = avg;
}

std::string Student::hankiNimi() const {
    return kuka;
}

int Student::hankiOppilasNro() const {
    return oppilasNro;
}

double Student::hankiKeskiverto() const {
    return keskiverto;
}
