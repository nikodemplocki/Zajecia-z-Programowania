#include <iostream>
#include <string>

int opcje;
bool nie_drukowac, odwrotnie, po_jednym;

auto main(int argc, char *argv[]) -> int
{

    if (argc <= 1)
    {
        std::cout << "brak argumentu \n";
        return 1;
    }

     for (int i = 1; i < argc; i++)
    {
        if (std::string(argv[i]) == "-n")   //przyk³ad pierwszy -n
        {
            nie_drukowac=true;
            opcje++;
        }
        else if (std::string(argv[i]) == "-r")  //przyklad drugi -r
        {
            odwrotnie=true;
            opcje++;
        }
        else if (std::string(argv[i]) == "-l")  //przyklad trzeci -l
        {
            po_jednym = true;
            opcje++;
        }
    }

    if (po_jednym)
    {
        if (odwrotnie)
        {
            for (auto i = argc - 1; i >= 1 + opcje; i--)
            {
                std::cout << "\n" << argv[i];
            }
        }
        else
        {
            for (auto i = 1 +opcje; i <= argc; i++)
            {
                std::cout << "\n" << argv[i];
            }
        }
    }
    else
    {
        if (odwrotnie)
        {
            for (auto i = argc - 1; i >= 1 + opcje; i--)
            {
                std::cout << argv[i];
            }
        }
        else
        {
            for (auto i = 1 + opcje; i <= argc; i++)
            {
                std::cout << argv[i];
            }
        }
    }
    return 0;
}
