#include<iostream>
using namespace std;

class Fraction{
private:
    int numerator;
    int denominator;
    int gcd;
public:
    Fraction(){
        numerator=0;
        denominator=1;
        
    }
    Fraction(int n){
        numerator=n;
        denominator=1;

    }
    Fraction(int n,int d){
        numerator=n;
        denominator=d;
    }
    void reduce(){
        int gcd=1;
        int min=(numerator<denominator)? numerator:denominator;
        for(int i=1;i<min;i++){
            if(numerator%i==0 and denominator%i==0){
                gcd=i;
            }
        }
        numerator=numerator/gcd;
        denominator=denominator/gcd;
    }
    void get_details(){
        reduce();
        cout<<"numerator:"<<numerator<<endl;
        cout<<"denominator:"<<denominator<<endl;
    }
    

    

};

int main(){
    Fraction f1;
    cout<<"f1 is:"<<endl;
    f1.get_details();
    Fraction f2(24);
    cout<<"f2 is:"<<endl;
    f2.get_details();
    Fraction f3(24,28);
    cout<<"f3 is:"<<endl;
    f3.get_details();

}



