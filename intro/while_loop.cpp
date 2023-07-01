#include <iostream>
#include <string>


int main()
{

    // while loop
    int n = 10;

    while(n > 0) {
        std::cout << n << ", " << std::endl;
        --n;
    }

    std::cout << "liftoff!\n";



    // do while loop
    std::string str;
    do {
        std::cout << "Enter text...";
        std::getline(std::cin, str);
        std::cout << "You entered: " << str << '\n';
    } while (str != "goodbye");

    return 0;
}

// output: 10, 9, 8, 7 ,6 ,5, 4, 3, 2, 1, liftoff!