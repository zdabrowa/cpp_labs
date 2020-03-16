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
    int dimension_;


    Vector operator +(const Vector & vec){
        return Vector(this -> data_[0] + vec.data_[0], this->data_[1] + vec.data_[1], this->data_[2] + vec.data_[2]); 
    }

    private:
    double data_[3]; 
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


int main()
{
    Vector A(1.0, 1.0, 1.0);
    Vector B(1.0, 1.0, 1.0);

    Vector C = A + B;

    C.printData_(); 

}