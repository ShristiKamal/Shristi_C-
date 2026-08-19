#include<iostream>
using namespace std;
class A{
	public:
		int x;
		void display(){
			cout<<"x="<<x<<endl;
		}
};
class B:public A{
	
};
int main(){
	B  b1;
	b1.x=15;
	b1.display();
	return 0;
}