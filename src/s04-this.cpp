#include <iostream>

struct obiekt
{
    std::string rp1;
    std::string rp2;

    void rfunkcja(){
        std::cout << this << "\n"; //this wskazuje na ten obiekt w pamieci ram
    }

};

auto main()-> int{

    auto cobiekt = obiekt();
    cobiekt.rfunkcja(); //cobiekt odpala rfunkcja
    std::cout << &cobiekt << "\n"; //

    std::cout << "\"this\" i \"&nazwaObiektu\" to to samo? \n";
    return 0;
//this i wskaznik wskazuja na to samo miejsce w pamieci
}
