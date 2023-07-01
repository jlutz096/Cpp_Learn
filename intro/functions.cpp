#include <iostream>


// function prototypes
void duplicate(int& a, int& b, int& c);
int addition(int a, int b);
void printmessage();
long factorial(long a);

// recursivity
long factorial (long a)
{
    if( a  > 1)
        return (a * factorial (a - 1));
    else 
        return 1;
}



// passing paramaters by reference
void duplicate(int& a, int& b, int& c)
{
    a*=2;
    b*=2;
    c*=2;

}

// value returning function
int addition(int a, int b){
    int r;
    r = a + b;
    return r;
}

// non-value returning function; void
void printmessage()
{
    std::cout << "Hello from VOID" << std::endl;
}


int main()
{   
    // call addition fn
    int z;
    z = addition(5,3);
    std::cout << "The result is: " << z;

    // call void function
    printmessage();

    // call pass-by-refernce fn.

    int x = 1, y = 3, z = 7;
    duplicate(x, y, z);
    std::cout << "x = " << x << ",y =" << y << ", z= " << z;


    // recursivity
    long  number = 9;
    std::cout << " != " << factorial(number);

    return 0;
}