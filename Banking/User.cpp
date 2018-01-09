#include "User.h"

User::User(long userid, string username) {
    cout << "Creating user " << username << endl;
    id = userid;
    name = username;
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