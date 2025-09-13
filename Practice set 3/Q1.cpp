#include<iostream>
using namespace std;

class Student{
private:
    string name;
    int age;
public:
    void setter(){
        name="karthik";
        age=16;
    }
    void getter(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
    }
};

int main(){
    Student s1;
    s1.setter();
    s1.getter();
    return 0;
} 