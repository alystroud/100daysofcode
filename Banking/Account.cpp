#include "Account.h"

Account::Account(){}

Account::Account(long idNumber, string name, double openingbalance){
    id = idNumber;
    accountName = name;
    balance = openingbalance; 
}

void Account::deposit(double depositAmount) {
    balance += depositAmount;
}

bool Account::withdrawal(double withdrawalAmount) {
    if(balance - withdrawalAmount > 0.00) {
        balance -= withdrawalAmount;
        return true;
    }
    return false;
}