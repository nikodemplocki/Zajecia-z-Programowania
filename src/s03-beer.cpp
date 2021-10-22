#include <iostream>
#include <cstdlib>
#include <unistd.h>

int main()
{
int bottles = 99;

	while (bottles > 0)
	{
	std::cout << bottles << " bottles of beer on the wall, \n";
	sleep(1);
	std::cout << bottles << " bottles of beer. \n";
	std::cout << "Take one down, pass it around, \n";
	std::cout << --bottles << " bottles of beer on the wall. \n";

	if (bottles <= 0)
		{
		std::cout << "No more bottles of beer on the wall, no more bottles of beer. Go to strore and buy some more, 99 bottles of beer on the wall..";
		}
	}
return 0;
}
