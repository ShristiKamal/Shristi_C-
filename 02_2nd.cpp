#include<iostream>
using namespace std;
class rectangle{
	public:
		int length;
		int breath;
		int area;
		void input(){
			cout<<"enter length of rectangle:";
			cin>>length;
			cout<<"enter breath of rectangle:";
			cin>>breath;
		}
		void display(){
			area=length*breath;
			cout<<"area of rectangle:"<<area<<endl;
		}
};
int main(){
	rectangle r;
	r.input();
	r.display();
	return 0;
}