#include<iostream>
using namespace std;

class BankAccount{
private:
    double balance;
public:
    BankAccount(){
        balance=0.0;
    }
    void setBalance(double amount){
        if(amount>=0){
            balance=amount;
        }
        else{
            cout<<"error! balance can't be negative"<<endl;

        }
    }
    double getBalance(){
        return balance;
    }

};

int main(){
    BankAccount account;
    account.setBalance(1000);
    cout<<"current balance:"<<account.getBalance()<<endl;
    account.setBalance(-70);
    cout<<"current balance:"<<account.getBalance()<<endl;
    return 0;
}