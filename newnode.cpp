#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

// Function to create a new node
node* createnode(int value)
{
    node* newnode = new node;

    newnode->data = value;
    newnode->next = nullptr;

    return newnode;
}

// Function to add node at the end
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

// Function to insert node at the beginning
void insertAtBeginning(node*& first, int value)
{
    node* newnode = createnode(value);

    newnode->next = first;
    first = newnode;
}

// Function to display the linked list
void display(node* first)
{
    node* temp = first;

    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "nullptr" << endl;
}

int main()
{
    node* first = nullptr;

    // Create the original linked list
    add(first, 10);
    add(first, 20);
    add(first, 30);
    add(first, 40);

    cout << "Original Linked List: ";
    display(first);

    // Ask the user for the value
    int value;

    cout << "Enter the value you want to insert at the beginning: ";
    cin >> value;

    // Insert the value
    insertAtBeginning(first, value);

    // Display the updated list
    cout << "Updated Linked List: ";
    display(first);

    return 0;
}