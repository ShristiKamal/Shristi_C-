
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    int accountno;
    string name;
    int withdrawalcount;

public:
    
    BankAccount(int acc, string n, int w)
    {
        accountno = acc;
        name = n;
        withdrawalcount = w;
    }

    
    BankAccount operator++(int)
    {
        BankAccount old = *this;
        withdrawalcount++;
        return old;
    }

    
    void display()
    {
        cout << "Account Number: " << accountno << endl;
        cout << "Name: " << name << endl;
        cout << "Withdrawal Count: " << withdrawalcount << endl;
    }
};

int main()
{
    int acc, w;
    string n;

    
    cout << "Enter Account Number: ";
    cin >> acc;

    cout << "Enter Name: ";
    cin >> ws;
    getline(cin, n);

    cout << "Enter Withdrawal Count: ";
    cin >> w;

    
    BankAccount b1(acc, n, w);

    
    BankAccount old = b1++;

    cout << "\nOld Account Details:" << endl;
    old.display();

    cout << "\nUpdated Account Details:" << endl;
    b1.display();

    return 0;
}
