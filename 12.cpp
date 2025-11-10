#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private data member

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance = 0) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    // Public function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Public function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Public function to display balance
    void displayBalance() {
        cout << "Current balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account(1000); // Create account with initial balance $1000

    account.displayBalance();

    account.deposit(500);   // Deposit $500
    account.displayBalance();

    account.withdraw(300);  // Withdraw $300
    account.displayBalance();

    account.withdraw(1500); // Attempt to withdraw more than balance

    return 0;
}
