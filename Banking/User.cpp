#include "User.h"

User::User(long userid, string fullname, string uname, string pword) {
    cout << "Creating user " << username << endl;
    id = userid;
    name = fullname;
    username = uname;
    password = pword;
    
}

void User::createAccount(long id, string name, double openingbalance) {
    cout << "Creating account " << name << endl;
    account = make_unique<Account>(id, name, openingbalance);
}

void User::deposit(double depositAmount) {
    if(depositAmount > 0) {
        account->deposit(depositAmount);
    }
    cout << "Deposited £" << depositAmount << " into " << account->getName() << endl;
    cout << "New balance: £" << account->getBalance() << endl;
}

void User::withdraw(double withdrawAmount) {
    if(withdrawAmount > 0) {
        if(account->withdrawal(withdrawAmount)){
            cout << "£" << withdrawAmount << " withdrawn from " << account->getName() << endl;
            cout << "New balance: £" << account->getBalance() << endl;
        }
    }
}

bool User::login(string uname, string pword) {
    return ( uname == username && pword == password);
}

double User::getBalance(){
    return account->getBalance();
}