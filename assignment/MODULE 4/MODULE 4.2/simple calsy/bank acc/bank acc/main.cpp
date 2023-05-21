//
//  main.cpp
//  bank acc
//
//  Created by apple on 21/05/23.
//

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    BankAccount() {
        depositorName = "";
        accountNumber = 0;
        accountType = "";
        balance = 0.0;
    }

    void assignValues(string name, int number, string type, double initialBalance) {
        depositorName = name;
        accountNumber = number;
        accountType = type;
        balance = initialBalance;
    }

    void depositAmount(double amount) {
        balance += amount;
        cout << "Amount deposited successfully." << endl;
    }

    void withdrawAmount(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        } else {
            cout << "Insufficient balance. Withdrawal canceled." << endl;
        }
    }

    void displayDetails() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    string name, type;
    int number;
    double initialBalance, depositAmount, withdrawAmount;

    cout << "Enter depositor name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> number;
    cout << "Enter account type: ";
    cin.ignore();
    getline(cin, type);
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    account.assignValues(name, number, type, initialBalance);

    cout << "Enter amount to deposit: ";
    cin >> depositAmount;
    account.depositAmount(depositAmount);

    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;
    account.withdrawAmount(withdrawAmount);

    account.displayDetails();

    return 0;
}
