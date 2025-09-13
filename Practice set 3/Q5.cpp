#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    float salary;

public:
    void set(int empid, float empsalary)
    {
        id = empid;
        salary = empsalary;
    }
    void get(){
        cout<<"ID:"<<id<<endl;
        cout<<"salary:"<<salary<<endl;
    }
};

int main(){
    Employee e1,e2,e3;
    e1.set(101,50000);
    e2.set(102,60000);
    e3.set(103,70000);
    e1.get();
    e2.get();
    e3.get();
    return 0;
}