#include<iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;
public:
    void set(){
        length=15;
        width=30;
    }
    void get(){
        double area=length*width;
        cout<<"area:"<<area<<endl;
    }
};


int main(){
    Rectangle r1;
    r1.set();
    r1.get();
    return 0;
}