#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

class User {
    long id;
    string name;
    unique_ptr<Account> account;

public:
    User(long id, string name);
    void createAccount(long id, string name, double openingbalance);
    ~User(){
        cout << "Deleting " << name << " account." << endl;
    }
};