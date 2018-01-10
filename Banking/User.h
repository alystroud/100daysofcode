#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

class User {
    long id;
    string name;
    unique_ptr<Account> account;
    string username;
    string password;

public:
    User(long id, string name, string username, string password);
    void createAccount(long id, string name, double openingbalance);
    void deposit(double depositAmount);
    void withdraw(double withdraw);
    bool login(string user, string password);

    ~User(){
        cout << "Deleting " << name << " account." << endl;
    }
};