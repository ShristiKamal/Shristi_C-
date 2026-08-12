#include<iostream>
using namespace std;
class bank_account{
	public:
		int account_no;
		char name[20];
		int deposite;
		int withdraw;
		int balance;
		void input(){
			cout<<"enter account no:";
			cin>>account_no;
			cout<<"enter account holder name:";
			cin>>name;
			cout<<"current deposite:";
			cin>>deposite;
			cout<<"amount to withdraw:";
			cin>>withdraw;
		}
		void display(){
			balance=deposite-withdraw;
			cout<<"account no:"<<account_no<<endl;
		    cout<<"account holder name:"<<name<<endl;
		    cout<<"current balance:"<<deposite<<endl;
		    cout<<"ammount to withdraw:"<<withdraw<<endl;
		    cout<<"balance:"<<balance<<endl;
		}
};
int main(){
	bank_account b;
	b.input();
	b.display();
	return 0;
}