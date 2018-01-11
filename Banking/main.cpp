#include "User.h"

void start(){
    User* loggedinUser;
    int option = 0;
    User userone(0, "John Doe", "jdoe1", "password1");
    userone.createAccount(0, "Current Account", 10.00);

    cout << endl <<  "Welcome to X Bank" << endl;
    cout << "----------------------" << endl;
    cout << "Enter your username to log in." << endl;
    string inputUsername, inputPassword;
    cin >> inputUsername; 
    cout << "Password: ";
    cin >> inputPassword;
    if(userone.getUsername() == (inputUsername) && 
        userone.getPassword() == (inputPassword)){
            loggedinUser = &userone;
            cout << "Welcome " << userone.getName() << endl << endl;
            cout << "Choose an option: " << endl;
            cout << "1. View account balance" << endl;
            cout << "2. Deposit funds" << endl;
            cout << "3. Withdraw funds" << endl;
            cin >> option;
            if(option == 1){
                cout << "Account balance: £" << loggedinUser->getBalance() << endl;
            }
            else if(option == 2){
                cout << "How much would you like to deposit?" << endl;
                float amount;
                cin >> amount;
                loggedinUser->deposit(amount);
            }
            else if(option == 3){
                cout << "How much would you like to withdraw?" << endl;
                float amount;
                cin >> amount;
                loggedinUser->deposit(amount);
            }
            else {
                cout << "Error. Please choose one of the options" << endl;
            }
    }
}


int main(int argc, char** argv){
    start();
    return 0;
}