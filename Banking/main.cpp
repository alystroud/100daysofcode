#include "User.h"
#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <stdio.h>

int getch() {
    int ch;
    struct termios t_old, t_new;

    tcgetattr(STDIN_FILENO, &t_old);
    t_new = t_old;
    t_new.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &t_new);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &t_old);
    return ch;
}

void start(){
    const char BACKSPACE=127;
    const char RETURN=10;
    User* loggedinUser;
    int option = 0;
    User userone(0, "John Doe", "jdoe1", "password1");
    userone.createAccount(0, "Current Account", 10.00);

    cout << endl <<  "Welcome to X Bank" << endl;
    cout << "----------------------" << endl;
    cout << "Enter your username to log in." << endl;
    string inputUsername;
    cin >> inputUsername; 
    cout << "Password: ";
    int ch = getch();
    string inputPassword = "";
    while((ch = getch()) != RETURN) {
        cout << "*";
        inputPassword += ch;
    }
    cout << endl;
    //cin >> inputPassword;
    if(userone.getUsername() == (inputUsername) && 
        userone.getPassword() == (inputPassword)){
            loggedinUser = &userone;
            cout << "Welcome " << userone.getName() << endl << endl;
            while(option != 4){
            cout << "Choose an option: " << endl;
            cout << "1. View account balance" << endl;
            cout << "2. Deposit funds" << endl;
            cout << "3. Withdraw funds" << endl;
            cout << "4. Exit" << endl;
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
                loggedinUser->withdraw(amount);
            }
            else {
                cout << "Error. Please choose one of the options" << endl;
            }
        }    
    }
}


int main(int argc, char** argv){
    start();
    return 0;
}


