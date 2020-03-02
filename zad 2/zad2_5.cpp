/*
    zad2_5 + zad2_6

    zad2_5

        1. Dodaj definicję konstruktora inicjalizującego składowe radius_ i area_.
        2. W funkcji main() utwórz nowy obiekt za pomocą konstruktora.
        3. Zastąp definicję konstruktora nową definicją z listą inicjalizującą.
        4. W funkcji main() utwórz nowy obiekt za pomocą konstruktora z listą inicjalizującą.

    zad2_6 setter i getter

        1. W oparciu o program utworzony w punkcie zad2_5 rozszerz klasę Circle o:
        - setter modyfikujący element radius_
        - getter zwracający wartość elementu radius_
        2. Zademonstruj działanie setter-a i getter-a w funkcji main().

*/

#include <iostream>

using namespace std;

class Circle{
    private:
        float radius_;
        float area_;
        float circumference_;
    
    public:

    Circle(float);
    float setRadius(float r);
    float getRadius();
    float getArea();


};



Circle::Circle(float radius_):radius_(radius_){
    area_ = radius_ * radius_ * 3.14;
    circumference_ = radius_ * 2 * 3.14;
}

float Circle::setRadius(float r){
    radius_ = r;
    return radius_;
}


float Circle::getRadius(){
    return radius_;
}

float Circle::getArea(){
    return area_;
}

int main(){
    Circle C1(20);
    cout << C1.getArea() << endl;
    return 0;
}