#include "account.h" 
#include <iostream>
using namespace std;

namespace banking {

    Account::Account(int accNum, double bal) : accountNumber(accNum), balance(bal) {}

    void Account::deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
    }

    bool Account::withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return true; 
        } else {
            cout << "Insufficient Funds!" << endl;
            return false; 
        }
    }

    double Account::getBalance() const {
        return balance;
    }
}