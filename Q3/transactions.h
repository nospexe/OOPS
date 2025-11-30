#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H

#include "account.h" // Needed to recognize 'Account' type

namespace transact {
    // IMPORTANT: specific logic note
    // We pass by REFERENCE (&). 
    // If we passed by value, we would only transfer money between COPIES,
    // and the original accounts in main() would stay unchanged.
    void transfer(banking::Account& from, banking::Account& to, double amount);
}

#endif