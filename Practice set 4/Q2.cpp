#include<iostream>
using namespace std;

class Student{
private:
    string name;
    int age;
    int marks;
public:
    Student(){ //default constructor
        name="";
        age=0;
        marks=0;
    }
    Student(string n,int a,int m){ //parameritised constructor
        name=n;
        age=a;
        marks=m;
    }
    void get_details(string n,int a,int m){
        name=n;
        age=a;
        marks=m;
        cout<<"name of student is:"<<name<<" age is :"<<age<<" marks :"<<marks<<endl;
    }
    
    void display(){
        cout<<"name:"<<name<<" age:"<<age<<" marks: "<<marks<<endl;
    }
};

int main(){
    Student s1;   //default constructor
    s1.get_details("karthik",17,100);
    Student s2("Ka",12,213); //parameritised constructor
    s2.display();
    return 0;
}
