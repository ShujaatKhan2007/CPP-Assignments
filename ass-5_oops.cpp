
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    double balance;

    // Static data member shared by all objects
    static int accountCount;

public:
    // Constructor: initializes account details
    BankAccount(int number, string holder, double initialBalance)
    {
        this->accountNumber = number;
        this->accountHolder = holder;
        this->balance = initialBalance;

        accountCount++;
    }

    // Inline function to return the balance
    inline double getBalance()
    {
        return balance;
    }

    // Deposit money into the account
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit successful.\n";
        }
        else
        {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Withdraw money from the account
    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid withdrawal amount.\n";
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance.\n";
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
    }

    // Display account information
    void displayAccount()
    {
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nAccount Holder: " << accountHolder;
        cout << "\nCurrent Balance: Rs. " << getBalance() << "\n";
    }

    // Static member function
    static void displayAccountCount()
    {
        cout << "Total accounts created: " << accountCount << "\n";
    }

    // Auditor is allowed to access private members
    friend class Auditor;
};

// Definition of the static data member
int BankAccount::accountCount = 0;

class Auditor
{
public:
    // Access private members of BankAccount
    void audit(BankAccount &account)
    {
        cout << "\n--- Account Audit ---\n";
        cout << "Account Number: " << account.accountNumber << "\n";
        cout << "Account Holder: " << account.accountHolder << "\n";
        cout << "Verified Balance: Rs. " << account.balance << "\n";
    }
};

int main()
{
    int number;
    string holder;
    double initialBalance;

    cout << "Enter account number: ";
    cin >> number;

    cin.ignore();

    cout << "Enter account holder name: ";
    getline(cin, holder);

    cout << "Enter initial balance: Rs. ";
    cin >> initialBalance;

    if (initialBalance < 0)
    {
        cout << "Initial balance cannot be negative.\n";
        return 0;
    }

    // Create a BankAccount object
    BankAccount account(number, holder, initialBalance);

    int choice;
    double amount;

    do
    {
        cout << "\n--- Banking Menu ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Account\n";
        cout << "4. Audit Account\n";
        cout << "5. Display Account Count\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter deposit amount: Rs. ";
            cin >> amount;
            account.deposit(amount);
            break;

        case 2:
            cout << "Enter withdrawal amount: Rs. ";
            cin >> amount;
            account.withdraw(amount);
            break;

        case 3:
            account.displayAccount();
            break;

        case 4:
        {
            // Create an Auditor object
            Auditor auditor;
            auditor.audit(account);
            break;
        }

        case 5:
            BankAccount::displayAccountCount();
            break;

        case 0:
            cout << "Exiting banking system.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 0);

    return 0;
}

