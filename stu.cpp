#include<iostream>
using namespace std;
class Student
{
	public:
		char name[20];
		int roll;
		float marks;
		void input()
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter roll:";
			cin>>roll;
			cout<<"Enter marks:";
			cin>>marks;
		}
		void disp()
		{
			cout<<"The student is:"<<name<<endl;
			cout<<"Student's roll is:"<<roll<<endl;
			cout<<"The student marks is:"<<marks<<endl;
		}
};
int main()
{
	Student s1;
	s1.input();
	s1.disp();
	return 0;
}