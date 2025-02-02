#include <iostream>
#include <vector>

using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNumber, double initialBalance) {
        accountHolder = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << " | New Balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: $" << amount << " | Remaining Balance: $" << balance << endl;
        }
    }

    void display() {
        cout << "Account Holder: " << accountHolder << " | Account Number: " << accountNumber << " | Balance: $" << balance << endl;
    }

    int getAccountNumber() {
        return accountNumber;
    }
};

int main() {
    vector<BankAccount> accounts;
    int choice;

    while (true) {
        cout << "\n=== Bank Management System ===\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. View Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            int accNumber;
            double initialBalance;
            cout << "Enter Account Holder Name: ";
            cin >> name;
            cout << "Enter Account Number: ";
            cin >> accNumber;
            cout << "Enter Initial Balance: ";
            cin >> initialBalance;
            accounts.push_back(BankAccount(name, accNumber, initialBalance));
            cout << "Account created successfully!\n";
        } 
        else if (choice == 2) {
            int accNumber;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accNumber;
            bool found = false;
            for (auto &acc : accounts) {
                if (acc.getAccountNumber() == accNumber) {
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    acc.deposit(amount);
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Account not found!\n";
        } 
        else if (choice == 3) {
            int accNumber;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accNumber;
            bool found = false;
            for (auto &acc : accounts) {
                if (acc.getAccountNumber() == accNumber) {
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    acc.withdraw(amount);
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Account not found!\n";
        } 
        else if (choice == 4) {
            int accNumber;
            cout << "Enter Account Number: ";
            cin >> accNumber;
            bool found = false;
            for (auto &acc : accounts) {
                if (acc.getAccountNumber() == accNumber) {
                    acc.display();
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Account not found!\n";
        } 
        else if (choice == 5) {
            cout << "Thank you for using the Bank Management System!\n";
            break;
        } 
        else {
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
