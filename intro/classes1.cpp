#include <iostream>

class Rectangle {
    int width, height;
    public:
    Rectangle();
    Rectangle(int, int);
    int area() {return width * height;}
};


// add constructor
Rectangle::Rectangle(int a, int b)
{
    width = a;
    height = b;
}

// overloading constructors
Rectangle::Rectangle()
{
    width = 5;
    height = 5;
}

// member initialization (new class example)
class Circle
{
    double radius;
    public:
    Circle(double r) : radius(r) { }
    double area() {return radius * radius * 3.14159265;}
};

class Cylinder
{
    Circle base;
    double height;

    public:
    Cylinder(double r, double h) : base (r), height (h) { }
    double volume() {return base.area() * height;}
};



int main()
{

    // Cylinder
    Cylinder foo (10, 20);

    std::cout << "Foo's volume: " << foo.volume() << '\n';



    Rectangle rect (3, 4);
    Rectangle rectb (5, 6);
    // createa a second object from one class

    std::cout << "area: " << rect.area();
    std::cout << "rectb area: " << rectb.area();
    return 0;
}