#include<iostream>
using namespace std;
struct student{
	int roll;
	char name[7];
	int age;
	float fees;
};
int main(){
	student s1,s2,s3;
	s1=student{7,"rahul",21,70000};
	s2=student{8,"adam",23,80000};
	s3=student{10,"uni",24,50000};
	cout<<"roll no:"<<s1.roll
	<<"name:"<<s1.name
	<<"age:"<<s1.age
	<<"fees:"<<s1.fees<<endl;
	cout<<"roll no:"<<s2.roll
	<<"name:"<<s2.name
	<<"age:"<<s2.age
	<<"fees:"<<s2.fees<<endl;
	cout<<"roll no:"<<s3.roll
	<<"name:"<<s3.name
	<<"age:"<<s3.age
	<<"fees:"<<s3.fees<<endl;
	return 0;
	
}