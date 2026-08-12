#include<iostream>
using namespace std;
class employee{
	public:
		char name[20];
		int employee_id;
		char department[20];
		int salery;
		void input(){
			cout<<"enter name of the employee:";
			cin>>name;
			cout<<"enter employee id:";
			cin>>employee_id;
			cout<<"department name:";
			cin>>department;
			cout<<"salery:";
			cin>>salery;
		}
		void display(){
			cout<<"name of employee:"<<name<<endl;
		    cout<<"employee id:"<<employee_id<<endl;
		    cout<<"department:"<<department<<endl;
		    cout<<"salery:"<<salery<<endl;
		}
};
int main(){
	employee e;
	e.input();
	e.display();
	return 0;
}