#include <iostream>
#include <cmath>
using namespace std;
// Abstract Base Class
class Shape {
public:
    // Pure virtual function
    virtual double area() = 0;
    // Optional virtual destructor
    virtual ~Shape() {}
};
// Derived class: Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    //pure virtual function
    double area() override {
        return M_PI * radius * radius;
    }
};

// Derived class: Square
class Square : public Shape {
private:
    double side;

public:
    Square(double s) {
        side = s;
    }
    double area() override {
        return side * side;
    }
};

int main() {
    // Create pointers to base class
    Shape* s1 = new Circle(5.0);
    Shape* s2 = new Square(4.0);
    cout << "Area of Circle: "<<s1->area()<< endl;
    cout << "Area of Square: "<<s2->area()<< endl;
    // Free memory
    delete s1;
    delete s2;
    return 0;
}
