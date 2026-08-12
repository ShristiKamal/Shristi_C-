#include<iostream>
using namespace std;
class book{
	public:
		int bookid;
		char title[20];
		char author[20];
		int price;
		void input(){
			cout<<"enter book id:";
			cin>>bookid;
			cout<<"enter book title:";
			cin>>title;
			cout<<"author name:";
			cin>>author;
			cout<<"price:";
			cin>>price;
		}
		void display(){
			cout<<"book id:"<<bookid<<endl;
			cout<<"book title:"<<title<<endl;
			cout<<"author name:"<<author<<endl;
			cout<<"price:"<<price<<endl;
		}
};
int main(){
	book b;
	b.input();
	b.display();
	return 0;
}