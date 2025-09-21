#include<iostream>
using namespace std;

class Employee {
private:
    int id;
    float salary;
public:
    static int totalcount;
    Employee(int i,float s){
        id=i;
        salary=s;
        totalcount=totalcount+1;
    }
    void get_details(){
        cout<<"id:"<<id<<endl;
        cout<<"salary:"<<salary<<endl;
        cout<<"total count:"<<totalcount<<endl;
    }
};
int Employee::totalcount=0;
int main(){
    Employee e1(1,1000);
    e1.get_details();
    Employee e2(2,2000);
    e2.get_details();
    return 0;
}