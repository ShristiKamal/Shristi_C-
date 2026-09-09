#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* createnode(int value)
{
    node* newnode = new node;
    newnode->data = value;
    newnode->next = nullptr;
    return newnode;
}

void add(node*& first, int value)
{
    node* newnode = createnode(value);

    if (first == nullptr)
    {
        first = newnode;
        return;
    }

    node* temp = first;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newnode;
}

int main()
{
    node* first = nullptr;

    add(first, 10);
    add(first, 20);
    add(first, 30);
    add(first, 40);

    node* temp = first;

    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "nullptr";

    return 0;
}
