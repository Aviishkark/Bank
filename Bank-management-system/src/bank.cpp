#include<iostream>
#include<vector>
#include "bank.h"



int Bank::createAccount(int nextAccountNo,double Bal){
  Account newAccount(nextAccountNo,Bal);
  Accountlist.push_back(newAccount);
  return nextAccountNo++;
}

void Bank::closeAccount(int accNo) {
    auto it = findAccount(accNo);
    if (it != Accountlist.end()) {
        Accountlist.erase(it);
    }
}

std::vector<Account>::iterator Bank::findAccount(int accNo) {
    for (auto it = Accountlist.begin(); it != Accountlist.end(); ++it) {
        if (it->getAccId() == accNo) {
            return it;
        }
    }
    return Accountlist.end();
}

const std::vector<Account>& Bank::getAccounts() const {
    return Accountlist;
}



