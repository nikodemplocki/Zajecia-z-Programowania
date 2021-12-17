#include <iostream>
#include <string>
#include <sstream>

class Czas //klasa o nazwie time
{
private: //pola wewnetrzne klasy (taka jakby zmienna lokalna)
    int g;
    int m;
    int s;
    enum PoraDnia //typ wyliczeniowy- okresla w srodku pory dnia
    {
        poranek,
        popoludnie,
        wieczor,
        noc
    };

public: //pola dostepne z zewnatrz podprogramow (taka jakby zmienna globalna)
    Czas() = default; //domyslna deklaracja tworzy nam pusty obiekt
    Czas(int g, int m, int s) //konstruktor
    {
        if (g >= 24 || g < 0 || m >= 60 || m < 0 || s >= 60 || s < 0) //sprawdzenie czy podana godzina moze istniec
        {
            throw std::invalid_argument("Podano godzine spoza dopuszczalnego zakresu!"); //throw- wyrzuc blad, ktory zostanie zlapany w konstrukcji try, catch
        }
        else //w innym przypadku- jezeli godzina jest poprawna to wpisz godzine do obiektu
        {
            this->g = g; //przypisz do srodka obiektu: linia 8-10...
            this->m = m;
            this->s = s;
        }
    };
    ~Czas(){ //destruktor

    };
    auto tstring() //dopisuje "0" przed cyfra
    {
        if (g <= 9)
        {
            std::cout << "0" << g << ":"; //dla godziny
        }
        else
        {
            std::cout << g << ":"; //wyswietla cala godzine
        }
        if (m <= 9)
        {
            std::cout << "0" << m << ":"; //dla minut
        }
        else
        {
            std::cout << m << ":"; //wyswietla cala mitune
        }
        if (s <= 9)
        {
            std::cout << "0" << s << std::endl; //dla sekund
        }
        else
        {
            std::cout << s << std::endl; //wyswietla sekundy
        }
    }
    void nastepnaGodzina() //sprawdza czy nie trzeba zresetowac tej liczby (liczba 23+1 -> 00)
    {
        if (g == 23)
        {
            g = 0;
        }
        else
        {
            g++; //godzina++
        }
    }
    void nastepnaMinuta()
    {
        if (m == 59) //to samo co godziny (linia 63)
        {
            m = 0;
            nastepnaGodzina(); //uruchamia nastepna godzina i przy 59+1 dodaje godzine
        }
        else
        {
            m++; //minuta++
        }
    }
    void nastepnaSek()
    {
        if (s == 59) //dla sekund to samo co dla godzin i minut
        {
            s = 0;
            nastepnaMinuta(); //wraca do minut
        }
        else
        {
            s++;
        }
    }
    PoraDnia pora_dnia() //funkcja "pora_dnia" ktora zwraca typ wyliczeniowy (enum- PoraDnia)
    {
        if (g >= 6 && g <= 12) //dla poranku
        {
            return poranek;
        }
        else if (g >= 13 && g <= 18) //dla po poludnia
        {
            return popoludnie;
        }
        else if (g >= 19 && g <= 23) //dla wieczoru
        {
            return wieczor;
        }
        else
        {
            return noc; //dla nocy
        }
    };
        std::string tstring(PoraDnia wartosc){ //zeby wyswietlic enuma trzeba enuma wymienic na stringa
        if (wartosc == 0) //jezeli wartos enuma == ... to zwroc
        {
            return "poranek"; //poranek...
        }else if ( wartosc == 1 ){
            return "popoludnie";
        }else if ( wartosc == 2 ){
            return "wieczor";
        }
        else if ( wartosc == 3 ){
            return "noc";
        }

    }

    uint64_t odliczanieSek(){ //typ inta o wadze 64 bity - ?tak jak zadaniu powod nieznany?
        std::uint64_t sumaSek = 0; //sekundy zaczynaja sie od 0
        sumaSek += s; //do sumy sekund dodaje l¹cznej sumy sekund..
        sumaSek += m * 60; //to samo dla minut
        sumaSek += g * 60 * 60;
        return sumaSek; //zwraca sume sekund
    }

    uint64_t odliczanieMin(){ //to samo dla minut
        std::uint64_t sumaMin = 0;
        sumaMin += m;
        sumaMin += g * 60;
        return sumaMin;
    }

  Czas timeToMidnight()
    {
        Czas obliczonyCzas; //tworzymy rusztowanie na date, ktora bedziemy pokazywac
        obliczonyCzas.g = 23 - g;
        if (s == 0) //jesli jest 0 sekund, to nie robimy nic z sekundami, tylko przepisujemy
        {
            obliczonyCzas.s = s;
            obliczonyCzas.m = 60 - m;
        }
        else //ale jesli mamy chociaz jedna sekunde, to wtedy nie mozemy odjac minut od 60, bo wtedy sie patoli
        {
            obliczonyCzas.s = 60 - s;
            obliczonyCzas.m = 59 - m;
        }

        return obliczonyCzas;
    }
};




auto main() -> int
{

    try //probuje wykonac wszystkie podane funkcje
    {
        auto nowyCzas = Czas(9, 59, 59);
        nowyCzas.tstring();
        nowyCzas.nastepnaSek();
        nowyCzas.tstring();
        nowyCzas.nastepnaSek();
        nowyCzas.tstring();
        nowyCzas.nastepnaSek();
        nowyCzas.tstring();
        nowyCzas.nastepnaSek();
        nowyCzas.tstring();
        std::cout << nowyCzas.tstring(nowyCzas.pora_dnia()) << std::endl; //korzysta z funkcji (linia 118)
    }
    catch (const std::invalid_argument &e) //jezeli zostanie zlapany blad to zostanie zlapany do srodka (linia 22)
    {
        std::cout << e.what() << std::endl; //wyswietli blad, ktory przewidzelismy w linijce 24
        return 1;
    }

    return 0;
}
