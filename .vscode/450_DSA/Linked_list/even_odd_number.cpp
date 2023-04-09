#include <bits\stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
class linkedlist
{
    node *head, *tail;

public:
    linkedlist()
    {
        head = NULL;
        tail = NULL;
    }
    void setHead(node *newHead)
    {
        head = newHead;
        tail = head;
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
    }
    node *getHead()
    {
        return head;
    }
    void insertAtEnd(int data)
    {
        node *newNode = new node(data);
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
            node *current = head;
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
void seperateEvenAndOddNodes(linkedlist *ll1)
{
    ll1->print();
    node *eh = NULL, *et = NULL, *oh = NULL, *ot = NULL;
    node *head = ll1->getHead();
    while (head != NULL)
    {
        if (head->data & 1)
        {
            if (oh == NULL)
            {
                oh = head;
                ot = head;
            }
            else
            {
                ot->next = head;
                ot = ot->next;
            }
        }
        else
        {
            // even
            if (eh == NULL)
            {
                eh = head;
                et = head;
            }
            else
            {
                et->next = head;
                et = et->next;
            }
        }
        head = head->next;
    }
    if (et)
        et->next = NULL;
    if (ot)
        ot->next = NULL;
    linkedlist ell = linkedlist();
    ell.setHead(eh);
    linkedlist oll = linkedlist();
    oll.setHead(oh);

    ell.print();
    oll.print();
};
int main()
{
    linkedlist ll1 = linkedlist();
    ll1.insertAtEnd(10);
    ll1.insertAtEnd(21);
    ll1.insertAtEnd(32);
    ll1.insertAtEnd(37);
    ll1.insertAtEnd(44);
    seperateEvenAndOddNodes(&ll1);
    
}