#include <iostream>
#include <string>
#include <vector>
#include <cmath>
std::vector<std::string> stworzwek(int const argc, char* argv[])
{
    std::vector <std::string> wektor;

    for (int i = 0; i < argc; i++) {
        wektor.push_back(std::string(argv[i]));
    }
    return wektor;
}
int wybor, wyk, pds, pot=1;
float a, b, x, y;
int main(int argc, char*argv[])
{
	auto mainwek = stworzwek(argc, argv);
	int q1, q2;
	std::cout<<"Wybierz opcje\n";
	std::cout<<"-----------------------\n";
	std::cout<<"1. Odejmowanie\n";
	std::cout<<"2. Reszta z dzielenia\n";
	std::cout<<"3. Dzielenie l. ca³kowitych\n";
	std::cout<<"4. Mnozenie\n";
	std::cout<<"5. Dzielenie\n";
	std::cout<<"6. Potegowanie\n";
	std::cout<<"7. Pierwiastkowanie (2)\n";
	std::cout<<"Wybierasz opcje nr: ";
	std::cin>>wybor;

    q1 = std::stoi(argv[1]);
    q2 = std::stoi(argv[2]);

    for (int i = 1; i < argc-1; i = i + 1)
    {
        if(wybor==1)
        {
            std::cout<<(q1-q2)<<"\n";
        }
        else if(wybor==2)
        {
            std::cout<<(q1%q2)<<"\n";
        }
        else if(wybor==3)
        {
            std::cout<<(q1/q2)<<"\n";
        }
        else if(wybor==4)
        {
            std::cout<< (q1*q2)<<"\n";
        }
        else if(wybor==5)
        {
            a=q1;
            b=q2;
            std::cout<<(a/b)<<"\n";
        }
        else if(wybor==6)
        {
				wyk=q2;
				pds=q1;
				for(int i=0; i<wyk; i++)
				{
					pot*=pds;
				}
				std::cout<<pot<<"\n";
        }
        else if(wybor==7)
        {
				a=q1;
				b=q2;
				x=sqrt(a);
				y=sqrt(b);
				std::cout<<"Pierwiastek 1: "<<x<<"\n";
				std::cout<<"Pierwiastek 2: "<<y<<"\n";
        }
    }
    return (0);
}
