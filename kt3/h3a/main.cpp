#include <iostream>
#include "italianchef.h"

using namespace std;

int main(){
    {
    Chef kokki("Gordon Ramsay");
    kokki.makeSalad();
    kokki.makeSoup();
    } //Eka konstruktori loppuu

    std::cout << std::endl; //Rivivali

    ItalianChef ikokki("Anthony Bourdain");
    ikokki.makeSalad();
    ikokki.makeSoup();
    ikokki.makePasta();
    std::cout <<"name of the Italian chef is " <<ikokki.getName()<< std::endl;

    return 0;
}
