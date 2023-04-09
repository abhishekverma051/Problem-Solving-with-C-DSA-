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

    Node *head, *tail;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void setHead(Node *newHead)
    {
        head = newHead;
        tail = head;
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
    }

    Node *getHead()
    {
        return head;
    }

    void insertAtBeginning(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void insertAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
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



Node *mergeTwoSortedLists(Node *ll1, Node *ll2)
{
    if (ll1 == NULL)
        return ll2;
    else if (ll2 == NULL)
        return ll1;
    else
    {
        Node *newHead;
        if (ll1->data < ll2->data)
        {
            newHead = ll1;
            newHead->next = mergeTwoSortedLists(ll1->next, ll2);
        }
        else
        {
            newHead = ll2;
            newHead->next = mergeTwoSortedLists(ll1, ll2->next);
        }
        return newHead;
    }
}

int main()
{
    LinkedList ll1 = LinkedList();
    ll1.insertAtEnd(10);
    ll1.insertAtEnd(21);
    ll1.insertAtEnd(32);
    ll1.insertAtEnd(37);
    ll1.insertAtEnd(44);

    LinkedList ll2 = LinkedList();
    ll2.insertAtEnd(5);
    ll2.insertAtEnd(14);
    ll2.insertAtEnd(19);

    Node *newHead = mergeTwoSortedLists(ll1.getHead(), ll2.getHead());
    LinkedList ll3 = LinkedList();
    ll3.setHead(newHead);
    ll3.print();
}
