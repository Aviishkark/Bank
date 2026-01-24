#pragma once
#include<vector>
#include "account.h"
#include "customer.h"

// ├── bank.h / bank.cpp
// │   - createAccount()
// │   - closeAccount()
// │   - findAccount()


 class Bank{
  private: 
    std::vector<Customer> Customerlist;
    std::vector<Account> Accountlist;
    int nextAccountNo=100;
  public: 
    int createAccount(int nextAccountNo,double Bal);
    void closeAccount(int accNo);
    std::vector<Account>::iterator findAccount(int accNo);
    const std::vector<Account>& getAccounts() const;

 };
