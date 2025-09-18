#include<iostream>
using namespace std;

class Employee{
private:
    string name;
    int id;
    int salary;
public:
    Employee(string n ,int i){
        name=n;
        id=i;
        salary=0;
    }
    Employee(string t ,int a,int p){
        name=t;
        id=a;
        salary=p;
    }
    void get_details(){
        cout<<"name: "<<name<<" id:"<<id<<" salary:"<<salary<<endl;
    }
};

int main(){
    Employee c2("karthik",1);
    c2.get_details();
    Employee c3("karthik",2,100000000);
    c3.get_details();
    return 0;

}