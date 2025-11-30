#include "transactions.h"
#include <iostream>
using namespace std;

namespace transact {

    void transfer(banking::Account& from, banking::Account& to, double amount) {
        cout << "\n--- Initiating Transfer of $" << amount << " ---" << endl;

        // 1. Try to withdraw from sender
        if (from.withdraw(amount)) {
            // 2. If successful, deposit to receiver
            to.deposit(amount);
            cout << "Transfer Successful!" << endl;
        } else {
            cout << "Transfer Failed due to lack of funds." << endl;
        }
        cout << "------------------------------------\n";
    }

}