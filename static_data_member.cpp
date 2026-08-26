#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    static int count;

    void input()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        count++;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    static void getStudentCount()
    {
        cout << "Total Registered Students: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1, s2, s3;

    s1.input();
    s2.input();
    s3.input();

    cout << "\nStudent Details:\n";

    s1.display();
    s2.display();
    s3.display();

    Student::getStudentCount();

    return 0;
}
