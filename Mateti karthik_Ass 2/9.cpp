#include <iostream>
using namespace std;
class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;
public:
    // Constructor to initialize account
    BankAccount(string name, int accNo, double initialBalance) {
        accountHolder = name;
        accountNumber = accNo;
        if (initialBalance >= 0)
            balance = initialBalance;
        else {
            balance = 0;
            cout << "balance cannot be negative.";
        }
    }
    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid";
        }
    }
    // Withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance\n";
        }
    }
    // Display account details
    void display() {
        cout << "\nAccount Details\n";
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount acc1("Karthik", 123456789, 5000);
    acc1.display();
    acc1.deposit(2000);
    acc1.withdraw(1000);
    acc1.withdraw(7000);  // Invalid withdrawal
    acc1.display();

    return 0;
}
