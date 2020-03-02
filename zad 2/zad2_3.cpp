/*
zad2_3
    Rozszerz klasę zdefiniowaną w Zad2.1 o destruktor (nie bazuj na programie utworzonym
    w punkcie Zad2.2):
    1. Zmień typ elementu radius_ z float na float *.
    2. Dodaj konstruktor, który powinien alokować pamięć i przypisywać ją do radius_;
    3. Dodaj destruktor.
    4. W funkcji main() zademonstruj poprawność działania konstruktora i destruktora.
*/
#include <iostream>

class Circle {
    public: 
        float * radius_;
        Circle(){
            radius_ = new float;
        }
        ~Circle(){
            delete radius_;
        }; 
};

int main(){

    Circle C1, C2;

     return 0;
}