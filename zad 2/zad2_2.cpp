/*
 zad2_2

    Rozszerz klasę z Zad2.1 dodając konstruktor:
  1. Zadeklaruj i zdefiniuj konstruktor z jednym parametrem reprezentującym promień
    okręgu, który powinien być przypisywany do składowej radius_.
  2. W funkcji main() utwórz nowy obiekt używając zdefiniowanego konstruktora i
    wybranej liczby (przekazywanej jako parametr).
    Dlaczego wystąpił błąd?
  3. Rozwiąż problem dodając konstruktor bezparametryczny.
*/

#include <iostream>

class Circle {
    private:
       // float radius_;

    public: 
        float radius_; 
        
        Circle(){};

        Circle(float radius){
          radius_ = radius;  
        }
};

int main(){

    Circle C1, C2;
    Circle C3(10);
    Circle C4(10.5);
    
    C1.radius_ = 5;
    C2.radius_ = 10;

     return 0;
}