#include <iostream>
#include <stdio.h>
#define SIZE 3
using namespace std;

class Vector {
public:
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);
    void printData_();

    double data_[3];
    int dimension_;     
};

Vector::Vector(double x)
{
    dimension_ = 1;
    data_[0] = x;
}

Vector::Vector(double x, double y)
{
    dimension_ = 2;
    data_[0] = x;
    data_[1] = y;
}

Vector::Vector(double x, double y, double z)
{
    dimension_ = 3;
    data_[0] = x;
    data_[1] = y;
    data_[2] = z;
}

void Vector::printData_()
{
    for(int i = 0; i < dimension_; i++)
    {
        cout << data_[i] << endl;
    }
}

Vector operator + (const Vector & v1, const Vector & v2){
    return Vector (v1.data_[0] + v2.data_[0], v1.data_[1]+v2.data_[1], v1.data_[2]+v2.data_[2]);
}


int main()
{
    Vector A(1.0, 1.0, 1.0);
    Vector B(1.0, 1.0, 1.0);

    Vector C = A + B;

    C.printData_(); 

}