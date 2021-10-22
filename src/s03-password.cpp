#include <iostream>
#include <string>

auto main (int argc, char* argv[]) -> int
{
	std::string haslo_wpisane;
	
	if(argc <= 1)
	{
		std::cout << "blad. brak podanego argumentu";
		return 1;
	}

	std::string password = std::string(argv[1]);

do
{
	std::cout << "Password: ";
	std::cin >> haslo_wpisane;
}while (password != haslo_wpisane);
std::cout << "ok! \n";

return 0;
}
