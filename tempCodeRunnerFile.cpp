#include <iostream>
#include <cmath>

using namespace std;

// Base class Shape
class Shape {
public:
    virtual double area() = 0; // Pure virtual function for area
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() { // Removed override
        return M_PI * radius * radius; // Area of circle = πr²
    }
};