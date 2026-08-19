#include<iostream>
#include<string>
using namespace std;
class employee {
	protected:
		string name;
		int employeeid;
			public:
				void getemployeedetails() {
					cout<<"enter name:";
					cin>>name;
				}
				void displayemployeedetails() {
					cout<<"name:"<<name<<endl;
					cout<<"employeeid:"<<employeeid<<endl;
				}
};
class manager: public employee {
	private:
		string department;
			float salary;
				public:
					void getmanagerdetails() {
						cout<<"enter department:";
						cin>> department;
						cout<<"enter salary:";
						cin>>salary;
					}
					void displaymanagerdetails() {
				    displayemployeedetails();
				    cout<<"department:"<<department<<endl;
				    cout<<"salary:"<<salary<<endl;
					}
				
};
int main(){
	manager m;
	m.getemployeedetails();
	m.getmanagerdetails();
	cout<<"\n---manager details---"<<endl;
	m.displaymanagerdetails();
	return 0;
}
