#include<iostream>
using namespace std;

class Vehicle{

public:
string brand; 
    Vehicle(string b)
{
    brand=b;
}};
class Car:public Vehicle{
public:
    string model;
    Car(string b) : Vehicle(b) {}
    void get_info(){
        cout<<"brand:"<<brand<<endl;
        cout<<"model:"<<model<<endl;
    }
};

int main(){
    Car c1("BMW");
    c1.model = "X5";
    c1.get_info();
}