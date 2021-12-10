#include <iostream>
#include <string>
#include <sstream>

struct student //struktura "student"
{
    std::string imie;
    std::string nazwisko;
    std::string nrI;
    int semestr;
    float ocena;
    student(std::string i, std::string n, std::string I, int s, float o) //konstruktor o tej samej nazwie co struct, przekazujemy zmienne
    {
        imie = i; //przypisuje do pola imie w strukcie zmienna i...
        nazwisko = n;
        nrI = I;
        semestr = s;
        ocena = o;
    };
    auto tstring()-> void{ //wyswietla zawartosc wszystkich pol w strukcie
        std::cout << " Imie: " << imie << "\n Nazwisko: " << nazwisko << "\n Nr indeksu: " << nrI << "\n Aktualny semestr: " << semestr << "\n Srednia ocen: " << ocena << "\n";
    }
};
auto main()-> int{
     auto ja = student{"Nikodem", "Plocki", "s24258", 1, 5.0}; //linia: 12: miejsce 1,2,3,4,5
    ja.tstring(); //wyswietla couta (linia 21)

    return 0;
}
