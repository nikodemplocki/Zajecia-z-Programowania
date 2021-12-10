#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>


struct Student{ //sturktura o nazwie Student
	std::string imie;
	std::string nazwisko;
	std::string indeks;
	int semestr;

	Student(std::string a, std::string b, std::string c, int d) //konstruktor
	{
		imie = a; //przypisanie zmiennych
		nazwisko = b;
		indeks = c;
		semestr = d;
    }
	void view(){ //funkcja void wypisuje na konsoli
		std::cout<<"\n imie: " << imie <<" nazwisko: " << nazwisko << " indeks: " << indeks << " semestr: " << semestr << std::endl;
		}

};
 std::string imie(std::string a){ //osobna fukcja dla kazdej zmiennej...
		std::cout<<"podaj imie: \n";
		std::cin>>a;
		return a;
	}

    std::string nazwisko(std::string b){
		std::cout<<"podaj nazwisko: \n";
		std::cin>>b;
		return b;
	}

    std::string indeks(std::string c){
		std::cout<<"podaj indeks: \n";
		std::cin>>c;
		return c;
	}

	int semestr(int d){
	std::cout<<"Podaj semestr: \n";
	std::cin>>d;
	return d;
	}



	void listastudentow(std::vector<Student*> vectorStudent){ //void ktory tworzy liste studentow i przypisuje go do tablicy vector
	int k=0; //ilosc studentow
		for(Student* student : vectorStudent){ //petla dla wyswietlania zwiekszania/zmiejszania ilosci studentow
		std::cout << k << " ";
		student->view();
		k++;
		}
	}

auto main() -> int
{
	std::vector<Student*>vectorStudent; //
	std::string n, sn, i;
	int x, wybor, wielkoscwektora, del;


	do{

	std::cout<<"1. Dodaj studenta \n";
	std::cout<<"2. Zobacz cala liste studentow\n";
	std::cout<<"3. Usun studenta\n";
	std::cout<<"4. Zakoncz\n";
	std::cout<<"Twoj wybor: ";

		std::cin>>wybor;

		switch(wybor){
		case 1:
		vectorStudent.push_back(new Student {imie(n),nazwisko(sn), indeks(i), semestr(sm)}); //dodaje nowy element na koncu wektora - listy

		wielkoscwektora = vectorStudent.size();
		std::cout<<"Rozmiar listy studentow: "<<wielkoscwektora<<"\n";
		break;
		case 2:
			if(vectorStudent.empty())
			std::cout<<" Lista jest pusta\n";
		else
			listastudentow(vectorStudent);
		break;
		case 3:
		std::cout<<"Ktorego studenta usunac:  ";
		std::cin>>del;
		vectorStudent.erase(vectorStudent.begin() +(del -1)); //erase, begin - referencja
		std::cout<<"Student numer: "<<del<<"zostal usuniety n";
		break;
		}

	}while(wybor != 4);
		return 0;

}
