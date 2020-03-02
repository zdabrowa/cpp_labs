/*
    zad2_4
        Rozszerz klasę zdefiniowaną w Zad2.1
        w poprzednich punktach) metodami:   (nie bazuj  na programie utworzonym
            1. Zadeklaruj i zdefiniuj dwie metody bezparametrowe:
            circumference() i area() obliczające odpowiednio: obwód i powierzchnię koła.
            2. Obie metody powinny wykorzystywać do obliczeń element radius_.
            3. Metody powinny obliczać i zwracać wynik i niczego nie wyświetlać.
            4. Zdefiniuj obie metody poza deklaracją klasy.
            5. W funkcji main() zademonstruj poprawność działania obu metod.
        
 */

#include <iostream>

using namespace std;

class Circle {
    public: 
        float radius_; 
        float circumference();
        float area();

};

float Circle::circumference(){
    return 2 * 3.14 * radius_;

}

float Circle::area(){
    return 3.14 * radius_ * radius_;
}


int main(){

    Circle C1, C2;

    C1.radius_ = 5;
    C2.radius_ = 10;

    cout << C1.area() << endl;
    cout << C2.circumference() << endl;

     return 0;
}