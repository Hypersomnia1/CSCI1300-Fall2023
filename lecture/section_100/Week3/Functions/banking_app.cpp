#include <iostream>

using namespace std;

void showBalance(int balance) {
    cout << "Your balance = " << balance << endl;
}

int withdraw(int balance) {
    int withdraw_amt;
    cout << "How much do you like to withdraw: ";
    withdraw_amt = 600;
    // Check if you have sufficient balance
    if (balance < withdraw_amt) {
        cout << "You dont have enough!" << endl;
        return balance;
    }
    

    balance = balance - withdraw_amt;
    cout << "You withdrew " << withdraw_amt << " dollars" << endl;
    return balance;
}

int deposit(int balance) {
    int deposit_amt;
    cout << "How much do you like to deposit: ";
    cin >> deposit_amt;
    balance = balance + deposit_amt;
    cout << "You deposited " << deposit_amt << " dollars" << endl;
    return balance;
}

int main() {

    int balance = 500;

    cout << "-----------------------------" << endl;
    cout << "My banking application!!!" << endl;
    cout << "-----------------------------" << endl;

    cout << "1. Check your balance"<< endl;
    cout << "2. Withdraw"<< endl;
    cout << "3. Deposit"<< endl;
    cout << "4. Exit" << endl;

    int choice;
    cout << "Enter your choice : ";
    cin >> choice;

    switch (choice) {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance = withdraw(balance);
            break;
        case 3:
            balance = deposit(balance);
            break;
        case 4:
            break;
    }

    return 0;
}