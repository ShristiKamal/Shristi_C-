#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks[5];
    float total;
    float average;

public:
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter marks in 5 subjects:\n";
        total = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }

        average = total / 5;
    }

    void display()
    {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: ";

        for (int i = 0; i < 5; i++)
            cout << marks[i] << " ";

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
    Student s[5];
    int highest = 0;

    cout << "Enter details of 5 students:\n";

    
    for (int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].input();
    }

    
    for (int i = 1; i < 5; i++)
    {
        if (s[i].getTotal() > s[highest].getTotal())
            highest = i;
    }

    
    cout << "\n\n===== STUDENT DETAILS =====\n";

    for (int i = 0; i < 5; i++)
    {
        s[i].display();
    }

    
    cout << "\n\n===== STUDENT WITH HIGHEST MARKS =====\n";
    s[highest].display();

    return 0;
}