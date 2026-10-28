#include<iostream>
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
    Student s1(101, "Rahul", 20);

    cout << "Before Increment:" << endl;
    s1.display();

    ++s1;

    cout << "\nAfter Increment:" << endl;
    s1.display();

    return 0;
}