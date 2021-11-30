#include <iostream>
#include <string>
#include <sstream>

struct student
{
    private:
    std::string imie;
    std::string nazwisko;
    std::string nrI;
    int semestr;
    float ocena;
    public:
    student(std::string imie, std::string nazwisko, std::string nrI, int semestr, float ocena)
    {
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->nrI = nrI;
        this->semestr = semestr;
        this->ocena = ocena;
    };
    auto tstring()-> std::string{
        std::ostringstream opis;
        opis << " Imie: "
                    << imie
                    << "\n Nazwisko: "
                    << nazwisko
                    << "\n Nr indeksu: "
                    << nrI
                    << "\n Aktualny semestr: "
                    << semestr
                    << "\n Srednia ocen: "
                    << ocena
                    << "\n";
        return opis.str();
    }
};
auto main()-> int{

    auto ja = student{"Nikodem", "Plocki", "s24258", 1, 2.0};
    std::cout << ja.tstring();

    return 0;
}
