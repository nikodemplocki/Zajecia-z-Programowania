#include <iostream>
#include <string>
#include <cstdlib>


auto main(int argc, char* argv[]) -> int
{
 	std::string p_password;

	if(argc <= 1)
	{
		std::cout << "brak podanego argumentu";
	return 1;

	}
	std::string password = std::string(argv[1]);

	do
	{
		std::cout << "password: ";
		std::cin >> p_password;
	}while (password != p_password);
	std::cout << "ok! \n";

	return 0;
}
