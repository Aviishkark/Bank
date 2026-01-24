#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>

class Customer {
private:
    int customerId;
    std::string name;
    std::vector<int> accountNumbers; // references to bank accounts

public:
    Customer(int id, const std::string& name);

    int getCustomerId() const;
    std::string getName() const;

    void addAccount(int accNo);
    void removeAccount(int accNo);

    const std::vector<int>& getAccounts() const;
};

#endif
