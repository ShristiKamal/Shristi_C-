#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
int main()
{
	node n1;
	n1.data=10;
	n1.next=nullptr;
	cout<<"data:"<<n1.data<<endl;
	return 0;
}