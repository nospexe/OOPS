#include <iostream>
using namespace std;
class BankAccount{
    private:
        float balance = 0.0;
    
    public:
        void SetBalance(float Balance){
            if(Balance >= 0){
                balance += Balance;
            }
            else{
                cout << "Invalid balance" << endl;
            }
        }

        float GetBalance(){
            return balance;
        }
};

int main(){
    BankAccount account1;
    account1.SetBalance(100.0);
    cout << "Initial account balance: " << account1.GetBalance() << endl;
    cout << "Second balance: \n";
    account1.SetBalance(-20.0);

    return 0;
}