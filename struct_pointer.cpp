#include<iostream>
using namespace std;
struct student
{
	int roll;
	int *marks;
};
int main()
{
	int m=90;
	student s1;
	s1.roll=101;
	s1.marks=&m;
	student *ptr =&s1;
	cout<<ptr->roll<<endl;
	cout<<*ptr->marks<<endl;
}