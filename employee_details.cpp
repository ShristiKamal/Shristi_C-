#include <iostream>
#include <iomanip>
using namespace std;

class Employee
{
private:
    int employeeid;
    string name;
    float salary[6];
    float total;
    float average;

public:
    void input()
    {
        cout << "Enter employee id: ";
        cin >> employeeid;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter salary in 6 months:\n";
        total = 0;

        for (int i = 0; i < 6; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> salary[i];
            total += salary[i];
        }

        average = total / 6;
    }

    void display()
    {
        cout << "\nemployeeid: " << employeeid;
        cout << "\nName: " << name;
        cout << "\nsalary: ";

        for (int i = 0; i < 6; i++)
            cout << salary[i] << " ";

        cout << "\nTotal: " << total;
        cout << "\nAverage: " << fixed << setprecision(2) << average;
        cout << "\n-------------------------";
    }

    float getTotal()
    {
        return total;
    }
};

int main()
{
    Employee s[6];
    int highest = 0;

    cout << "Enter details of 6 employees:\n";

    
    for (int i = 0; i < 6; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        s[i].input();
    }

    
    for (int i = 1; i < 6; i++)
    {
        if (s[i].getTotal() > s[highest].getTotal())
            highest = i;
    }

    
    cout << "\n\n===== EMPLOYEE DETAILS =====\n";

    for (int i = 0; i < 56; i++)
    {
        s[i].display();
    }

    
    cout << "\n\n===== EMPLOYEE WITH HIGHEST SALARY =====\n";
    s[highest].display();

    return 0;
}