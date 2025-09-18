#include<iostream>
using namespace std;
class BankAccount{
private:
    int accountNo;
    int balance;
public:
    BankAccount(){
        accountNo=0;
        balance=0;
    }
    BankAccount(int a){
        accountNo=a;
        balance=0;
    }
    BankAccount(int x,int y){
        accountNo=x;
        balance=y;
    }
    void get_details(){
        cout<<"acc no:"<<accountNo<<endl;
        cout<<"balance:"<<balance<<endl;
    }
};

int main(){
    BankAccount c1;
    cout<<"c1"<<endl;
    c1.get_details();

    BankAccount c2(3221);
    cout<<"c2"<<endl;
    c2.get_details();


    BankAccount c3(5213,612311213);
    cout<<"c3"<<endl;
    c3.get_details();
    return 0;
}
