#include <iostream>
#include "animal.h"
#include "dog.h"

using namespace std;

int main() {
    std::cout <<"--- Luodaan elain ---" <<std::endl;
    {
        Animal a;
        a.callOut();
    } // Taputtele eläin

    std::cout <<"\n--- Haetaan koira elaimista ---"<< std::endl;
    {
        Dog d;
        d.callOut();
    } //Taputtele koira

    return 0;
}
