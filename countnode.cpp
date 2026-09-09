#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int countNodes(Node* head)
{
    int count = 0;

    while (head != nullptr)
    {
        count++;
        head = head->next;
    }

    return count;
}

int main()
{
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    cout << "Number of nodes = " << countNodes(head);

    return 0;
}
