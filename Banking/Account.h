#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>

using namespace std;

class Account{
    long id;
    string accountName;
    double balance;

public:
    Account(long id, string name, double openingbalance);
    double getBalance() { return balance; }
    void deposit(double depositAmount);
    bool withdrawal(double withdrawalAmount);
    ~Account(){
        cout << "Destroying " << accountName << " account." << endl;
    }
};

#endif