#ifndef ACCOUNT_H  
#define ACCOUNT_H  

namespace banking {
    class Account {
    private:
        int accountNumber;
        double balance;

    public:

        Account(int accNum, double bal);


        void deposit(double amount);
        bool withdraw(double amount); 
        double getBalance() const;  
    };
}

#endif 