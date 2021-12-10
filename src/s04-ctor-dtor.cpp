#include <iostream>

struct strk //stuktura o nazwie strk
{
    std::string rp1; //random pole1
    std::string rp2; //random pole2

    strk(std::string p1, std::string p2){ //konstruktor i wkladamy do srodka zmienne (stwarza obiekt)
        rp1 = p1; //przypisanie zmiennych z konstruktora
        rp2 = p2;
    }
    ~strk(){ //destruktor- niszczy strukta
        std::cout << rp1 << "\n"; //przypisanie zmiennych z dekonstruktora
        std::cout << rp2 << "\n";
        std::cout << "DESTRUCTION!"; //wypisuje destruction
    }
};


auto main()-> int
{
    auto nstrk = strk("1", "2"); //nowa struktura przechodzi do strk i potem do ~strk
    return 0;
}
