#include <iostream>
#include <string>

using namespace std;

class Student
{
	public:
    Student();
    string Opis_;
    void printOpis();
};

class Starosta: public Student 
{
public:
    Starosta():Student(){
        Opis_ = "starosta grupy";
    }

    void printOpis();
};

Student::Student()
{
    Opis_ = "student grupy";
    cout << "Tworzenie obiektu klasy student o nazwie: " << Opis_ << endl;
}

void Student::printOpis()
{
    cout << "Opis: " << Opis_ << endl;
}

void Starosta::printOpis(){
    cout << "Starostowy opis: "<< Opis_ << endl;
}

int main()
{
    Student stud;
    Starosta stud2;
    stud.printOpis();
    stud2.printOpis();
}