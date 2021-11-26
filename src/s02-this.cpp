#include <iostream>

struct obiekt
{
    std::string rp1;
    std::string rp2;

    void rfunkcja(){
        std::cout << this << "\n";
    }

};

auto main()-> int{

    auto cobiekt = obiekt();
    cobiekt.rfunkcja();
    std::cout << &cobiekt << "\n";

    std::cout << "\"this\" i \"&nazwaObiektu\" to to samo?S \n";
    return 0;

}
