#include<iostream>
using namespace std;

class BankAccount{
    string Name;
    string Bank_id;
    string Card_Number;
    float Min_Balance = 1000.0;
    float Balance;

    public:
        BankAccount(string name, string id, string card_no, float balance = 1000){
            Name = name;
            Bank_id = id;
            Card_Number = card_no;
            Balance = balance;
            cout << "Bank Constructor" << endl;
        }
        void display(){
            int x;
            cout << "Your name is " << Name << endl;
            cout << "Press 1 if you wish to see your bank details \n";
            cin >> x;
            if(x == 1){
                cout << "Here are your Bank details: \n";
                cout << "Card number: " << Card_Number << endl;
                cout << "Bank ID: " << Bank_id << endl;
                cout << "Bank Balance: " << Balance << endl;
            }

        }

        void deposit(float amt){
            if (amt <= 0.0){
                cout << "Enter a valid amount\n";
            }
            else{
                Balance += amt;
                cout << "Money deposited!\n";
            }
        }

        void withdraw(float amt){
            if((amt > 0.0) && ((Balance - amt) <= Min_Balance)){
                cout << "Amount cannot be withdrawn, goes below min balance! \n";
            }
            else if (amt > 0.0){
                Balance -= amt;
                cout << amt << " withdrawn from account \n";
            }
            else{
                cout << "Enter valid amount \n";
            }
        }
};

int main(){

    BankAccount Account1("Aayush", "AXIS101", "9943 4431 1102 3324", 12300.3);
    cout << endl;
    Account1.display();
    cout << endl;
    Account1.withdraw(11500);
    cout << endl;
    Account1.deposit(5000);
    cout << endl;
    Account1.withdraw(11500);
    cout << endl;
    /*Account1.Name --> reuslts in error as those are proivate attributes of the class and
    cannot be accessed by the object.*/
    Account1.display();
    /*These three functions are the only available way to modify or change
    the private attributes*/

    return 0;
}