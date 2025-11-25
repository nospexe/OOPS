#include<iostream>
using namespace std;
class BankAccount{
    int accountNumber;
    float balance;
    public:
    BankAccount(){
        cout << "Default constructor";
    }
    BankAccount(int acc_num){
        accountNumber = acc_num;
        balance = 0.0;
    }
    BankAccount(int acc_num, float bal){
        accountNumber = acc_num;
        balance = bal;
    }
};

int main(){
    BankAccount acc1;
    BankAccount acc2(100);
    BankAccount acc3(101, 56.6);
    return 0;
}
