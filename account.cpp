#include "account.h"
#include<iostream>


bool Account::debit(double damt){
  if(damt>0 && damt<Balance){
    Balance-=damt;
    return true;
  }
    return false;
}

void Account::credit(double camt){
  if(camt>0){
    Balance+=camt;
  }
}

int Account::getAccId(){
  return AccNo;
}

void Account::getBalance(){
  std::cout<<Balance<<std::endl;
}

