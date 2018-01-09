#include "User.h"


int main(int argc, char** argv){
    User userone(0, "John Doe");
    userone.createAccount(0, "Current Account", 10.00);
    userone.deposit(100.00);
    userone.withdraw(50);
}