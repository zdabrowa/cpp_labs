#include <iostream>
#include <stdio.h>
#include <math.h>
#define SIZE 3
using namespace std;

class Vector {
public:
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);

    friend double vec_len(Vector &);

    int dimension_;
    private: 
        double data_[SIZE]; 
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


double vec_len(Vector &  vec){
    double temp = 0;

    for(int i = 0; i < SIZE; i++){
        temp += vec.data_[i] * vec.data_[i];
    }

    return sqrt(temp);
}


int main()
{
    Vector r1(1.0); // R1
    Vector r2(1.0, 2.5);
    Vector r3(1.0, 1.0, 1.0);

    double test1 = vec_len(r3);

    cout << test1 << endl;



}