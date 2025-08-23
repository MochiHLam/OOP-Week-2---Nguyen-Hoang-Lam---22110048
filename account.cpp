// account.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string accountNumber;   //account number
    double balance;         //account balance
    string ownerName;       //account owner

    // const min balance value
    const double MIN_BALANCE = 100000;

public:
    // Constructor account information
    Account(string accNum, string accOwner, double accBalance) {
        accountNumber = accNum;
        ownerName = accOwner;
        balance = accBalance;
    }

    // deposit money from bank (add money)
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << " VND" << endl;
    }
    
    //withdraw money from bank (minus money if acc has more than 100000 after withdrew, else false)
    void withdraw(double amount) {
        if (balance - amount < MIN_BALANCE) {
            cout << "Insufficient funds! You must maintain at least " << MIN_BALANCE << " VND." << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrew: " << amount << " VND" << endl;
        }
    }

    // display account info
    void displayBalance() {
        cout << "-------------" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Owner: " << ownerName << endl;
        cout << "Current balance: " << balance << " VND" << endl;
        cout << "---------------------------------" << endl;
    }
};


int main()
{
    // Create object
    Account acc1("123456789", "Nguyen Van A", 200000);

    // display acc info
    acc1.displayBalance();

    // deposit
    acc1.deposit(50000);

    // display acc info after deposited
    acc1.displayBalance();

    // withdraw
    acc1.withdraw(120000);

    // display acc info after withdrew
    acc1.displayBalance();

    // deposit money left less than min value
    acc1.withdraw(150000);

    // display error
    acc1.displayBalance();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
