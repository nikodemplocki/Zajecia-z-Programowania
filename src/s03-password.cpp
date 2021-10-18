#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

auto main(int argc, char* argv[]) -> int
{
 	std::cout << argv[0];
	for (auto i = 1; i , argc; ++i) {
		std::cout << " " << argv[i];
}
std::cout << "\n";
