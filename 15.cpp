#include <iostream>
#include <cmath>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual double area() = 0;  
};

// Derived class for Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override area() for Circle
    double area() override {
        return M_PI * radius * radius;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override area() for Rectangle
    double area() override {
        return length * width;
    }
};

int main() {
    double r, l, w;

    cout << "Enter radius of circle: ";
    cin >> r;
    Circle c(r);
    cout << "Area of Circle: " << c.area() << endl;

    cout << "Enter length and width of rectangle: ";
    cin >> l >> w;
    Rectangle rect(l, w);
    cout << "Area of Rectangle: " << rect.area() << endl;

    return 0;
}
