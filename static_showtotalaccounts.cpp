#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNo;
    string name;
    float balance;

    static int totalAccounts;

public:

    
    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNo;

        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Initial Balance: ";
        cin >> balance;

        totalAccounts++;
        cout << "Account created successfully!\n\n";
    }

    
    void deposite()
    {
        float amount;

        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance = balance + amount;

        cout << "Amount deposited successfully.\n";
    }

    
    void withdraw()
    {
        float amount;

        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else
        {
            cout << "Insufficient balance.\n";
        }
    }

    
    void displayAccount()
    {
        cout << "\nAccount Number: " << accountNo;
        cout << "\nAccount Holder: " << name;
        cout << "\nBalance: " << balance << endl;
    }

    
    static void showtotalaccounts()
    {
        cout << "\nTotal Number of Accounts: "
             << totalAccounts << endl;
    }
};


int BankAccount::totalAccounts = 0;

int main()
{
    BankAccount a1, a2, a3;

    
    cout << "Enter details for Account 1\n";
    a1.createAccount();

    cout << "Enter details for Account 2\n";
    a2.createAccount();

    cout << "Enter details for Account 3\n";
    a3.createAccount();

    
    cout << "\n--- Deposit in Account 1 ---\n";
    a1.deposite();

    
    cout << "\n--- Withdrawal from Account 2 ---\n";
    a2.withdraw();

    
    cout << "\n===== ALL ACCOUNT DETAILS =====\n";

    a1.displayAccount();
    a2.displayAccount();
    a3.displayAccount();

    
    BankAccount::showtotalaccounts();

    return 0;
}
