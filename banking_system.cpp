#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    string accountHolder;
    string accountNumber;  // Added account number
    double balance;

public:
    // Constructor with default values for account holder and account number
    Account(string holder = "Default Holder", string accNumber = "000000", double initialBalance = 0.0)
        : accountHolder(holder), accountNumber(accNumber), balance(initialBalance) {}

    void credit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Credited: " << amount << ". New Balance: " << balance << endl;
        } else {
            cout << "Invalid credit amount!" << endl;
        }
    }

    void debit(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Debited: " << amount << ". New Balance: " << balance << endl;
        } else {
            cout << "Invalid debit amount or insufficient funds!" << endl;
        }
    }

    double getBalance() const {
        return balance;
    }

    string getAccountHolder() const {
        return accountHolder;
    }

    string getAccountNumber() const {  // Getter for account number
        return accountNumber;
    }
};

class Transaction {
public:
    static void performCredit(Account& account, double amount) {
        account.credit(amount);
    }

    static void performDebit(Account& account, double amount) {
        account.debit(amount);
    }
};

class Bank {
private:
    Account account;

public:
    Bank(string holder = "Default Holder", string accNumber = "000000", double initialBalance = 0.0)
        : account(holder, accNumber, initialBalance) {}

    void executeTransactions() {
        int choice;
        double amount;

        while (true) {
            cout << "\nBanking System Menu:\n";
            cout << "1. Credit Amount\n";
            cout << "2. Debit Amount\n";
            cout << "3. Display Balance\n";
            cout << "4. Exit\n";
            cout << "Choose an option: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Enter amount to credit: ";
                    cin >> amount;
                    Transaction::performCredit(account, amount);
                    break;

                case 2:
                    cout << "Enter amount to debit: ";
                    cin >> amount;
                    Transaction::performDebit(account, amount);
                    break;

                case 3:
                    displayBalance();
                    break;

                case 4:
                    cout << "Exiting the banking system." << endl;
                    return;

                default:
                    cout << "Invalid option! Please try again." << endl;
            }
        }
    }

    void displayBalance() const {
        cout << "Account Holder: " << account.getAccountHolder()
             << ", Account Number: " << account.getAccountNumber()
             << ", Current Balance: " << account.getBalance() << endl;
    }
};

int main() {
    Bank bank("John Doe", "123456789", 1000.0); // Create a bank with an account holder and initial balance
    bank.executeTransactions();                  // Execute user-defined transactions

    return 0;
}