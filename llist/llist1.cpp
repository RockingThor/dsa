#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void insertData(int data, Node *head)
{
    Node *newNode = new Node();
    newNode->data = data;
    if (head == NULL)
    {
        head = newNode;
        return;
    };
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    };
    temp->next = newNode;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    };
}
int main()
{
    Node *head;
    insertData(10, head);
    insertData(20, head);
    insertData(30, head);
    display(head);
    return 0;
}