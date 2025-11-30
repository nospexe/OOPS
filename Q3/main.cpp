#include <iostream>
#include "account.h"
#include "transactions.h"
using namespace std;

int main() {

    cout << "Creating Accounts..." << endl;
    banking::Account alice(101, 500.00); // Alice has $500
    banking::Account bob(102, 100.00);   // Bob has $100

    cout << "Alice Balance: $" << alice.getBalance() << endl;
    cout << "Bob Balance:   $" << bob.getBalance() << endl;

    // 2. Perform Transfer using 'transact' namespace
    // Moving $200 from Alice to Bob
    transact::transfer(alice, bob, 200.00);

    // 3. Verify Final State
    cout << "Final Balances:" << endl;
    cout << "Alice Balance: $" << alice.getBalance() << endl; // Should be 300
    cout << "Bob Balance:   $" << bob.getBalance() << endl;   // Should be 300

    return 0;
}