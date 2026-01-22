#include "customer.h"
#include <algorithm>

Customer::Customer(int id, const std::string& name)
    : customerId(id), name(name) {}

int Customer::getCustomerId() const {
    return customerId;
}

std::string Customer::getName() const {
    return name;
}

void Customer::addAccount(int accNo) {
    accountNumbers.push_back(accNo);
}

void Customer::removeAccount(int accNo) {
    accountNumbers.erase(
        std::remove(accountNumbers.begin(), accountNumbers.end(), accNo),
        accountNumbers.end()
    );
}

const std::vector<int>& Customer::getAccounts() const {
    return accountNumbers;
}
