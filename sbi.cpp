#include<iostream>
using namespace std;
class state_bank{
    private:
        string name;
        int account_nu;
        float bal;
    public:
    static float total_balance; //declaration of station variable
        state_bank(string n,int a,float b){
            this->name = n;
            this->account_nu = a;
            this->bal = b;
            this->total_balance = total_balance + b;
        }
        void get_details(void){
            cout<<"name :"<<this->name<<"account number: "<<this->account_nu<<"balance : "<<this->bal<<endl;
            cout<<"total balance of bank: "<<total_balance<<endl;

        }
};
float state_bank :: total_balance = 0; //class variable

int main(){
    state_bank a1("Aashif",123456,3000.0);
    a1.get_details();
    state_bank a2("balaa",234567,45000.0);
    a2.get_details();

    return 0;
}