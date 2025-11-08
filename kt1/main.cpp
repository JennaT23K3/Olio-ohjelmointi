#include <iostream>

using namespace std;

void calcSum(int a,int b)
{
    cout<<"Luvun 2 ja 3 summa on "<<a+b<<endl;
}

void calcDiv(int a, int b)
{
    if(b == 0){
        cout << "Virhe: Nollalla ei voi jakaa!" <<endl;
    } else {
        cout<<"Luvun 2 ja 3 osamaara on "<< static_cast<float>(a)/b<<endl;
    }
}

int retSum(int a, int b) {
    return a +b;
}

float retDiv(int a, int b) {
    if(b == 0) {
        throw std::runtime_error("Jakaja ei saa olla nolla!");
    }
    return static_cast<float>(a) / b;
}

int main()
{
    int a,b;
    float result;

    cout<<"Anna eka luku: ";
    cin>>a;
    cout<<"Anna toka luku: ";
    cin>>b;

    calcSum(a,b);
    calcDiv(a,b);

    int summa = retSum(a,b);
    cout<<a<< "+" <<b<< "=" <<summa<<endl;

    try{
        result = retDiv(a,b);
        cout<<a<< "/" <<b<< "=" <<result<<endl;

    } catch (runtime_error &e) {
        cout << "Error: " <<e.what() <<endl;
    }

    return 0;
}
