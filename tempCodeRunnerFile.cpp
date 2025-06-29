#include <iostream>
using namespace std;

class BankAccount {
private:
    // Private member variable
    double balance;

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // Public member function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Public member function to check balance
    void checkBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    BankAccount myAccount(1000.0); // Create an object of BankAccount
    double amount;
    cout << "enter amount to deposit :";
    cin >> amount;
    myAccount.deposit(amount); // Deposit money
    myAccount.checkBalance(); // Check balance

    // The following line would cause a compilation error because balance is private
    // cout << "Balance: " << myAccount.balance << endl;

    return 0;
}
