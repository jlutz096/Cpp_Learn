#include <iostream>

// overloading functions
int operate(int a, int b)
{
    return (a * b);
}

double operate(double a, double b)
{
    return (a / b);
}


// function template
template <class T>
T sum (T a, T b)
{
    T result;
    result = a + b;
    return result;
}

int main()
{
    int x = 5, y = 2;
    double n = 5.0, m = 2.0;
    std::cout << operate(x, y) << std::endl;
    std::cout << operate(n, m) << std::endl;

    int i = 5, j = 6, k;
    double f = 2.0, g = 0.5, h;
    k = sum<int>(i,j);                   // can also be written as k = sum(i, j)
    h = sum<double>(f,g);               // can also be written as h = sum(f, g)
    std::cout << k << '\n';
    std::cout << h << '\n';

    return 0;
}