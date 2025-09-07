#include <iostream>
using namespace std;

class Account{
    int AccountNumber;
    float Balance;

    public:
        void setAccountnumber(int acc_num){
            AccountNumber = acc_num;
        }
        void setBalance(float balance){
            Balance = balance;
        }

        int getAccountnumber(){
            return AccountNumber;
        }
        int getBalance(){
            return Balance;
        }
};

int main(){
    Account account1;
    account1.setAccountnumber(0001);
    account1.setBalance(45000);

}