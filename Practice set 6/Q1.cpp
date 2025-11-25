#include <iostream>
using namespace std;
class BankAccount{
    int accountNumber;
    float balance;
    static constexpr float interestRate = 0.05;
    public:

    BankAccount(int acc, float bal){
        accountNumber = acc;
        balance = bal;
    }
    void deposit(double amt){
        if(amt > 0){
            balance += amt;
        }
        else{
            cout << "Enter a valid amount\n";
        }
    }

    void withdraw(double amt){
        if(amt > balance){
            cout << "This amount cannot be withdrawn, insuffecient balance\n";
        }
        else{
            balance -= amt;
            cout << "The amount is withdrawn \n";
        }
    }

    friend void applyInterest(BankAccount& bk);

};


void applyInterest(BankAccount& bk){
    cout << bk.balance << endl;
    bk.balance = bk.balance + (bk.balance * bk.interestRate);
    cout << bk.balance << endl;
}

int main(){
    BankAccount bk1(1000, 2500.5);
    bk1.deposit(23000.55);
    bk1.withdraw(35000);
    bk1.withdraw(12300);
    applyInterest(bk1);
    return 0;
}

