#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>

/*auto main () -> int
{

int a, n;
std::cin >> a;


for (auto i = a; i >= 0; i--)
{
   std::cout << a-- << std::endl;

}

return 0;
}
*/

auto main(int argc, char* argv[]) ->int
{
    int a,n ;
    std::cin >> a;
    for (auto i = a; i >= 0; i--)
    {
        std::cout << a-- << "\n";
    }
}

