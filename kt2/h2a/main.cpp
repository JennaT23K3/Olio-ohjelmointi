#include "Car.h"
#include "Rectangle.h"
#include "student.h"
#include <iostream>
#include <memory> //smart pointers

using namespace std;

int main()
{
    //Autot pinomuistissa
    Car myCar;
    myCar.setBrand("Pontiac");
    myCar.setModel("Firebird Trans Am");
    myCar.setYearModel(1982);

    std::cout<< "Auton tiedot" <<std::endl;
    myCar.printData();

    std::cout<<std::endl;

    //Rectangle kekomuistissa
    Rectangle* recta = new Rectangle();
    recta->setWidth(5.0);
    recta->setHeight(3.0);

    std::cout <<"Rektaakkelin tiedot " <<std::endl;
    std::cout <<"Alue: " << recta->getArea() <<std::endl;
    std::cout <<"Ymmärrysmitta " <<recta->getCircum() <<std::endl;

    delete recta; //muisti vapautuupi
    std::cout<<std::endl;

    //Student
    std::unique_ptr<Student> opiskelija = std::make_unique<Student>();

    opiskelija->asetaNimi("Kullervo Kekkonen");
    opiskelija->asetaOppilasNro(123);
    opiskelija->asetaKeskiverto(4.2);

    std::cout<< "Opiskelijan tiedot: " <<std::endl;
    std::cout<< "Nimi: " << opiskelija->hankiNimi() <<std::endl;
    std::cout<< "Opiskelijan numero: " <<opiskelija->hankiOppilasNro() <<std::endl;
    std::cout<< "Keskiverto: " <<opiskelija->hankiKeskiverto() <<std::endl;

    return 0;
}
