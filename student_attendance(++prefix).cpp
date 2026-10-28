
#include <iostream>
#include <string>
using namespace std;

class Student
{
    int roll;
    string name;
    int attendance;

public:
    
    Student(int r, string n, int a)
    {
        roll = r;
        name = n;
        attendance = a;
    }


    void operator++()
    {
        ++attendance;
    }

    
    void display()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Attendance: " << attendance << endl;
    }
};

int main()
{
    int r, a;
    string n;

    
    cout << "Enter Roll Number: ";
    cin >> r;

    cout << "Enter Name: ";
    cin >> ws;
    getline(cin, n);

    cout << "Enter Attendance: ";
    cin >> a;

    
    Student s1(r, n, a);

    cout << "\nBefore Increment:" << endl;
    s1.display();

    
    ++s1;

    cout << "\nAfter Increment:" << endl;
    s1.display();

    return 0;
}
