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

// Function to add a node at the end
void add(node*& first, int value)
{
    node* newnode = createnode(value);

    // If the list is empty
    if (first == nullptr)
    {
        first = newnode;
        return;
    }

    node* temp = first;

    // Move to the last node
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    // Connect the new node
    temp->next = newnode;
}

// Function to search for a value
bool search(node* first, int value)
{
    node* temp = first;

    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            return true;
        }

        temp = temp->next;
    }

    return false;
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

    // Adding nodes
    add(first, 10);
    add(first, 20);
    add(first, 30);
    add(first, 40);

    // Display the list
    cout << "Linked List: ";
    display(first);

    // Search for a value
    int value;
    cout << "Enter value to search: ";
    cin >> value;

    if (search(first, value))
    {
        cout << value << " exists in the linked list." << endl;
    }
    else
    {
        cout << value << " does not exist in the linked list." << endl;
    }

    return 0;
}