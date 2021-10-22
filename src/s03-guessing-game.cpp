#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

int number, guess;

int main()
{
        srand(time(NULL));
        number = rand()%100+1;

        while(guess!=number)
    {
         	      	 cout <<  "guess:";
			 cin >> guess;

        if(guess=number)
	{
          cout << "just right!" << endl;
	}
        else if(guess<number)
	{
          cout << "too small!"<< endl;
       	}
	 else if(guess>number)
	{
          cout << "too big!" << endl;
	}
   }


return 0;
}

