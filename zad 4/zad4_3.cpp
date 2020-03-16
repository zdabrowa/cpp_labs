#include <iostream>
using namespace std;

class Student
{
public:
    string imie_nazwisko_ ;
    string Opis_;
	unsigned int nr_indeksu_;

    Student(string imie_nazwisko, unsigned int nr_indeksu);    

    void printOpis();	
    void printDane();
    
};

class Starosta : public Student 
{
public:
    string mEmail ;
    string Opis_;

    Starosta(string imie_nazwisko, unsigned int nr_indeksu, string email_);

    void printDane();

};

Starosta::Starosta(string imie_nazwisko, unsigned int nr_indeksu, string email_) : 
  Student(imie_nazwisko,  nr_indeksu) 
{
    mEmail = email_;
    Opis_ = "starosta grupy";
    cout << "Tworzenie obiektu klasy Starosta o nazwie: " << Opis_ << endl;
}

Student::Student(string imie_nazwisko, unsigned int nr_indeksu) :
  imie_nazwisko_(imie_nazwisko) 
{
    Opis_ = "student grupy";
    nr_indeksu_ = nr_indeksu;
    cout << "Tworzenie obiektu klasy Student o nazwie: " << Opis_ << endl;
}

void Student::printOpis()
{
    cout << "Opis: " << Opis_ << endl;
}

void Student::printDane(){
    cout << " Metoda printDane klasy bazowej" << endl;
	cout << " imie nazwisko:\t" << imie_nazwisko_ << endl;
	cout << " nr indeksu:\t" << nr_indeksu_  << endl;
}

void Starosta::printDane(){
    cout << " Metoda printDane klasy pochodnej" << endl;
	cout << " imie nazwisko:\t" << imie_nazwisko_ << endl;
	cout << " nr indeksu:\t" << nr_indeksu_  << endl;
    cout << " email:\t" << mEmail << endl;

}

int main()
{
    Student stud("Jan Kowalski",7);
    stud.printOpis();
    stud.printDane();

    Starosta star("Aleksandra Nowak",999,"mail@nomail.dot");
    star.printOpis();	
    star.printDane();	
}

//DODATKOWE KOMENTARZE
//Ogólnie to jeśli w klasie bazowej (Student), ustawimy zmienne imie_nazwisko itd. na prywatne, wtedy
//nie bedziemy mieli dostępu do nich, nawet z klasy, która po nich dziedziczy -  zamiast
//private powinniśmy użyć protected, żeby to miało jakiś sens.