#include <iostream>

auto main (int argc, char* argv[]) -> int
{
    if(argc <= 1)
    {
        std::cout<<"brak argumentu \n";
        return 1;
    }
    else if(argc > 2)
    {
        std::cout<<"za duzo argumentow \n";
        return 0;
    }

    int liczba;
    liczba = std::stoi(argv[1]);

    if (liczba > 0)
    {
        for(int i = liczba; i >=0;i--)
        {
            std::cout<< i<< "\n";
        }
    }
    else
    {
        for(int i = liczba;i<=0;i++)
        {
            std::cout<<i<<"\n";
        }
    }

    return 0;
}
