#include<iostream>
using namespace std;

class complex{
private:
    int real;
    int imag;
public:
    complex(int r,int i){
        real=r;
        imag=i;
    }
    void display(){
        cout<<"complex no is:"<<real<<"+"<<imag<<endl;
    }
    friend void addcomplex(complex c1,complex c2);
};
void addcomplex(complex c1,complex c2){
    cout<<"sum is:"<<c1.real+c2.real<<"+"<<c1.imag+c2.imag<<"i"<<endl;

}
int main(){
    complex c1(2,1);
    complex c2(3,4);
    addcomplex(c1,c2);
    return 0;
}