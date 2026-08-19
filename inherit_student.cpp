#include<iostream>
#include<string>
using namespace std;
class person {
	protected:
		string name;
		int age;
			public:
				void getpersondetails() {
				 cout<<"Enter Name:";
					cin>>name;
				}
				void displaypersondetails() {
					cout<<"name:"<<name<<endl;
					cout<<"age:"<<age<<endl;
				}
};
class student: public person {
	private:
		int rollno;
			float marks;
				public:
					void getstudentdetails() {
						cout<<"enter roll no:";
						cin>> rollno;
						cout<<"enter marks:";
						cin>>marks;
					}
					void displaystudentdetails() {
				    displaypersondetails();
				    cout<<"roll no:"<<rollno<<endl;
				    cout<<"marks:"<<marks<<endl;
					}
				
};
int main(){
	student s;
	s.getpersondetails();
	s.getstudentdetails();
	cout<<"\n---student details---"<<endl;
	s.displaystudentdetails();
	return 0;
}
