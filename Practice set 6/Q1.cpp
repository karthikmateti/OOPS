#include<iostream>
using namespace std;
class Bank{
private:
    int accno;
    float balance;
    static float interestrate;
public:
    Bank(int acc,int b){
        accno=acc;
        balance=b;

    }
    void deposit( float amt){
        balance=balance+amt;
    }
    void withdraw(float amt){
        balance=balance-amt;
    }
    void display(){
        cout<<"acc no:"<<accno<<"balance:"<<balance;
    }
    friend void applyinterest(Bank &t);
};
float Bank::interestrate=5.0;
void applyinterest(Bank &t){
    t.balance=t.balance+(t.balance*(Bank::interestrate/100));
}
int main(){
    Bank acc1(532113,100000);
    acc1.display();
    acc1.deposit(200);
    acc1.withdraw(5000);
    applyinterest(acc1);
    acc1.display();
}

