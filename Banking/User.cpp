#include "User.h"

User::User(long userid, string username){
    cout << "Creating user " << username << endl;
    id = userid;
    name = username;
}

void User::createAccount(long id, string name, double openingbalance){
    cout << "Creating account " << name << endl;
    account = make_unique<Account>(id, name, openingbalance);
}
