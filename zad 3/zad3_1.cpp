#include <iostream>
#include <stdio.h>
using namespace std;

class Vector {
public:
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);
    int dimension_;
private:
    double data_[3]; 
};

Vector::Vector(double x)
{
    cout << "\n Tworzenie obiektu klasy Vector w przestrzeni R1 :" << endl;
    dimension_ = 1;
    data_[0] = x;
}

Vector::Vector(double x, double y)
{
    cout << "\n Tworzenie obiektu klasy Vector w przestrzeni R2 :" << endl;
    dimension_ = 2;
    data_[0] = x;
    data_[1] = y;
}

Vector::Vector(double x, double y, double z)
{
    cout << "\n Tworzenie obiektu klasy Vector w przestrzeni R3:" << endl;
    dimension_ = 3;
    data_[0] = x;
    data_[1] = y;
    data_[2] = z;
}


int main()
{
    Vector r1(1.0); // R1
    Vector r2(1.0, 2.5);
    Vector r3(1.0, 3.4, 7.8);

    cout << "Obiekt klasy Vector o wymiarze:" << r1.dimension_ << endl;
    cout << "Obiekt klasy Vector o wymiarze:" << r2.dimension_ << endl;
    cout << "Obiekt klasy Vector o wymiarze:" << r3.dimension_ << endl;


}