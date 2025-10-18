#include <iostream>
using namespace std;
// Base class
class Shape {
public:
    // Function to calculate area (overridable)
    virtual void area() {
        cout << "Area of generic shape not defined.\n";
    }
    // Function to display a message (overloaded)
    void display() {
        cout << "Displaying shape info.\n";
    }
    void display(int sides) {  // Function overloading
        cout << "This shape has " << sides << " sides.\n";
    }
};
// Derived class
class Rectangle : public Shape {
private:
    int length, breadth;
public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    // Function overriding - runtime polymorphism)
    void area() override {
        cout << "Area of rectangle: "<<length*breadth<<endl;
    }
};

int main() {
    // Compile-time Polymorphism
    Shape s;
    cout << "Compile-time Polymorphism (Function Overloading)\n";
    s.display();       // Calls display()
    s.display(4);      // Calls display- int
    // Run-time Polymorphism
    cout << "Run-time Polymorphism (Function Overriding)\n";
    Shape *ptr;
    Rectangle r(5, 3);
    ptr = &r;
    ptr->area();   // Calls Rectangle's area() due to virtual function
    return 0;
}
