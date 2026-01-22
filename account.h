#pragma once

// ├── account.h / account.cpp
// │   - debit()
// │   - credit()
// │   - getBalance()

class Account{
  private:
    int AccNo;
    double Balance;

  public:
    Account(int id,double initBalance)
      :AccNo(id),Balance(initBalance){};
      
    bool debit(double damt);
    void credit(double camt);
    int getAccId();
    void getBalance();  
};