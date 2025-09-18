#include<iostream>
using namespace std;
class Complex{
private:
    int real;
    int imaginary;
public:
    Complex(){
        real=0;
        imaginary=0;
    }
    Complex(int a){
        real=a;
        imaginary=0;
    }
    Complex(int x,int y){
        real=x;
        imaginary=y;
    }
    void get_details(){
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
};

int main(){
    Complex c1;
    cout<<"c1"<<endl;
    c1.get_details();

    Complex c2(2);
    cout<<"c2"<<endl;
    c2.get_details();


    Complex c3(5,6);
    cout<<"c3"<<endl;
    c3.get_details();
    return 0;
}
