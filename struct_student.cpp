#include<iostream>
using namespace std;
struct student
{
	int roll;
	string name;
	float marks;
};
int main()
{
	student s1;
	student *ptr = &s1;
	ptr->roll=101;
	ptr->name="rahul";
	ptr->marks=85.5;
	cout<<"roll:"<<ptr->roll<<endl;
	cout<<"name:"<<ptr->name<<endl;
	cout<<"marks:"<<ptr->marks<<endl;
	return 0;
}