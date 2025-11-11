#ifndef STUDENT_H
#define STUDENT_H

#include <string>
class Student {
private:
    std::string kuka;
    int oppilasNro;
    double keskiverto;

public:
    // Setterit
    void asetaNimi(const std::string& n);
    void asetaOppilasNro(int num);
    void asetaKeskiverto(double avg);

    // Getterit
    std::string hankiNimi() const;
    int hankiOppilasNro() const;
    double hankiKeskiverto() const;
};


#endif // STUDENT_H
