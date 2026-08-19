#include<iostream>
using namespace std;
class student{
	protected:
		int rollno;
		string name;
		public:
			void getstudent(){
				cout<<"enter rollno:";
				cin>>rollno;
			}
};
class marks:public student{
	protected:
		float m1,m2,m3;
		public:
			void getmarks(){
				cout<<"enter marks in s1:";
				cin>>m1;
				cout<<"enter marks in s2:";
				cin>>m2;
				cout<<"enter marks in s3:";
				cin>>m3;
			}
};
class result:public marks{
	private:
		float total,percentage;
		public:
			void calculate(){
				total=m1+m2+m3;
				percentage=(total/300)*100;
			}
			
			void display(){
				cout<<"\n---complete result---"<<endl;
				cout<<"rollno:"<<rollno<<endl;
					cout<<"name:"<<name<<endl;
					cout<<"s1 marks:"<<m1<<endl;
						cout<<"s2 marks:"<<m2<<endl;
							cout<<"s3 marks:"<<m3<<endl;
							cout<<"total marks:"<<total<<endl;
							cout<<"percentage:"<<percentage<<"%"<<endl;
			}
};
int main(){
	result r;
	r.getstudent();
	r.getmarks();
	r.calculate();
    r.display();
	return 0;
}