#include <iostream>
#include "bank.h"
#include "customer.h"
#include "account.h"
//first program

int main() {
    Bank bank;

    // Create customers
    Customer c1(1, "Avishkar");
    Customer c2(2, "Gauri");

    // Bank creates accounts
    int acc1 = bank.createAccount(1001, 5000);
    int acc2 = bank.createAccount(1002, 10000);

    // Customers link accounts (by account number)
    c1.addAccount(acc1);
    c2.addAccount(acc2);

    // Deposit money into Avishkar's account
    auto it = bank.findAccount(acc1);
    if (it != bank.getAccounts().end()) {
        it->credit(2000);
        std::cout << "Money credited successfully\n";
    }

    // Withdraw money
    if (it->debit(1000)) {
        std::cout << "Withdrawal successful\n";
    } else {
        std::cout << "Insufficient balance\n";
    }

    // Show balance
    it->getBalance();

    // Close account
    bank.closeAccount(acc1);
    std::cout << "Account closed\n";

    return 0;
}
