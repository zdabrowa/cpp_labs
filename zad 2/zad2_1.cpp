/* zad 2_1
    1. W funkcji main() utwórz dwa obiekty tej klasy.
    2. Zainicjalizuj ich składową radius_ wybranymi liczbami.
 */


#include <iostream>

class Circle {
    public: 
        float radius_; 
};

int main(){

    Circle C1, C2;

    C1.radius_ = 5;
    C2.radius_ = 10;

     return 0;
}