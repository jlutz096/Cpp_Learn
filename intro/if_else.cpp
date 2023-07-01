#include <iostream>

int main()
{
    int x;

    // single block
    if (x == 100)
        std::cout << "x is 100" << std::endl;

    // multiblock
    if(x == 100)
    {
        std::cout << "x is " << std::endl;
        std::cout << x;
    }

    // if-else
    if (x == 100)
        std::cout << "x is 100" << std::endl;
    else
        std::cout << "x is not 100" << std::endl;

    if ( x > 0)
        std::cout << "x is positive" << std::endl;
    else if (x < 0)
        std::cout << "x is negative" << std::endl;
    else 
        std::cout << "x is zero" << std::endl;
    


}