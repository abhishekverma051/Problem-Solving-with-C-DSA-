#include <bits/stdc++.h>
using namespace std;

class Node
{
    int data;
    Node *next;
    Node *random;

public:
    Node(int d)
    {
        data = d;
        next = NULL;
        random = NULL;
    }
    void setData(int d)
    {
        data = d;
    }
    int getData()
    {
        return data;
    }
    void setNext(Node *n)
    {
        next = n;
    }
    Node *getNext()
    {
        return next;
    }
    void setRandom(Node *r)
    {
        random = r;
    }
    Node *getRandom()
    {
        return random;
    }
};

class LinkedList
{
    Node *head;
    Node *tail;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    Node *getHead()
    {
        return head;
    }
    Node *getTail()
    {
        return tail;
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
            Node *curr = head;
            while (curr->getNext() != NULL)
            {
                curr = curr->getNext();
            }
            curr->setNext(newNode);
            tail = newNode;
        }
    }
    void print()
    {
        Node *curr = head;
        while (curr != NULL)
        {
            cout << "(" << curr << "," << curr->getData() << ") (" << curr->getRandom() << ",";
            if (curr->getRandom() != NULL)
                cout << curr->getRandom()->getData() << ")" << endl;
            else
                cout << "NULL)" << endl;
            curr = curr->getNext();
        }
    }
};

void createClone(Node *head1)
{
    Node *curr, *next, *head2;
    curr = head1;
    unordered_map<Node *, Node *> um;

    LinkedList ll2 = LinkedList();

    while (curr != NULL)
    {
        ll2.insertAtEnd(curr->getData());
        um[curr] = ll2.getTail();

        // um[curr] = new Node(curr->getData());
        curr = curr->getNext();
    }

    head2 = ll2.getHead();

    while (head1 != NULL)
    {
        head2->setRandom(um[head1->getRandom()]);
        head1 = head1->getNext();
        head2 = head2->getNext();
    }
    ll2.print();
}

int main()
{
    LinkedList ll1 = LinkedList();
    ll1.insertAtEnd(10);
    ll1.insertAtEnd(11);
    ll1.insertAtEnd(12);
    ll1.insertAtEnd(13);

    Node *head1 = ll1.getHead();
    head1->setRandom(head1->getNext()->getNext());
    head1->getNext()->setRandom(NULL);
    head1->getNext()->getNext()->setRandom(head1);
    head1->getNext()->getNext()->getNext()->setRandom(head1->getNext());

    ll1.print();
    cout << endl;
    createClone(head1);
}