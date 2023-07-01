#include <iostream>

// namespaces

namespace foo
{
    int value () {return 5;}
}

namespace bar 
{
    const double pi = 3.1416;
    double value() {return 2*pi;}
}

namespace first
{
    int x = 5;
}

namespace second
{
    double x = 3.1416;
}


int main()
{
    std::cout << foo::value() << std::endl;
    std::cout << bar::value() << std::endl;
    std::cout << bar::pi << std::endl;

    // using using
    using namespace first;
    std:: cout << x << std::endl;

    using namespace second;
    std::cout << x << std::endl;
    return 0;
}