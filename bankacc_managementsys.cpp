//BANK ACCOUNT MANAGEMENT SYSTEM

#include <iostream>
using namespace std;

class BankAccount
{
    string accountHolder;
    int accountNumber;
    float balance;

public:

    // Constructor
    BankAccount(string name, int number, float amount)
    {
        accountHolder = name;
        accountNumber = number;
        balance = amount;
    }

    // Deposit function
    void deposit(float amount)
    {
        balance += amount;
        cout << "Amount deposited successfully.\n";
    }

    // Withdraw function
    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else
        {
            cout << "Insufficient balance.\n";
        }
    }

    // Display account details
    void display()
    {
        cout << "\n----- Account Details -----\n";
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    string name;
    int number;
    float balance;

    cout << "Enter account holder name: ";
    getline(cin, name);

    cout << "Enter account number: ";
    cin >> number;

    cout << "Enter initial balance: ";
    cin >> balance;

    BankAccount account(name, number, balance);

    int choice;
    float amount;

    do
    {
        cout << "\n===== Bank Account Management System =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Display Account Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;
                account.deposit(amount);
                break;

            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                account.display();
                break;

            case 4:
                cout << "Thank you for using the banking system.";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 4);

    return 0;
}
