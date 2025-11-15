#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Luokka
class Car {
public:
    string brand;
    string model;
    int yearModel;

    Car(string b, string m, int y) : brand(b), model(m), yearModel(y){}

    void printCarData() const{
        cout << "Merkki: " <<brand<< ", Malli: "<<model<< ", Vuosimalli: " <<yearModel <<endl;
    }
};

//Ohjelma
int main()
{
    vector<Car> listing;

    listing.push_back(Car("Audi", "TT RS Coupe Quattro", 2023));
    listing.push_back(Car("Ford", "Focus", 2020));
    listing.push_back(Car("Seat", "Leon", 2008));

    cout<< "Toisen auton tiedot: " <<endl;
    listing[1].printCarData();

    cout<< "\nKaikkien autojen tiedot:" <<endl;
    for (const auto& car : listing) {
        car.printCarData();
    }

    return 0;
}
