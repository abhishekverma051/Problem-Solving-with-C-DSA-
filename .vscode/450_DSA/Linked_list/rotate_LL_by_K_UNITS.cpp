#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

class LinkedList
{

    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void setHead(Node *newHead)
    {
        head = newHead;
    }

    Node *getHead()
    {
        return head;
    }

    void insertAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *current = head;
            while (current->next != NULL)
                current = current->next;
            current->next = newNode;
        }
    }

    void print()
    {
        if (empty())
        {
            cout << "List is empty" << endl;
            return;
        }
        else
        {
            Node *current = head;
            while (current != NULL)
            {
                cout << current->data << "->";
                current = current->next;
            }
            cout << "NULL" << endl;
        }
    }

    bool empty()
    {
        return head == NULL;
    }
};
void rotateLLByKUnits(LinkedList *ll)
{
    if(ll->empty())
    {
        cout<<"list is empty";

    }
    int KUnits;
    cout<<"Enter number of rotations: ";
    cin>> KUnits;
    int length = 1;
    Node* head = ll->getHead();
    while(head->next != NULL)
    {
        head = head->next;
        length++;
    }
    head->next = ll->getHead();
    KUnits = KUnits % length;
    int rotations = length - KUnits;
    while(KUnits && rotations--)
    {
        head = head->next;
    }
    ll->setHead(head->next);
    head->next = NULL;
    ll->print();

}
int main()
{
    LinkedList ll = LinkedList();

    int size, value;
    cout << "Enter the number of Nodes:";
    cin >> size;

    while (size--)
    {
        cout << "Enter value: ";
        cin >> value;
        ll.insertAtEnd(value);
    }
    ll.print();
    rotateLLByKUnits(&ll);
}