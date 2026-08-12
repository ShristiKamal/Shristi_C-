#include<iostream>
using namespace std;
class student{
	public:
	char name[20];
	int roll;
	void input(){
		cout << "enter student name:";
		cin>>name;
		cout<<"enter student roll:";
		cin>>roll;
	}
	void display(){
		cout<<"student name"<<name<<endl;
		cout<<"student roll no"<<roll<<endl;
	}
};
int main(){
	student s1;
	s1.display();
	s1.display();
	return 0;
}