#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class linkedlist
{
    node *head;

public:
    linkedlist(int n) // passed the number of elements
    {
        node *t, *p;
        cout << "ENTER THE ELEMENT: ";
        int x;
        cin >> x;
        head = new node();
        head->data = x;
        head->next = nullptr;
        t = head; // new var to head
        n--; // 4
        while (n--)
        {
            cout << "ENTER THE ELEMENT: ";
            int x;
            cin >> x;
            p = new node();// new  node
            p->data = x;
            p->next = nullptr;
            t->next = p;
            t = t->next;
        }
    }
    void traverse()
    {
        node *t;
        t = head;
        while (t != NULL)
        {
            cout << t->data << " ,";
            t = t->next;
        }
        cout << endl;
    }
    void deleteLast()
    {
        node *t, *p;
        t = head;
        while (t->next->next != NULL)
        {
            t = t->next;
        }
        p = t->next;
        t->next = nullptr;
        delete p;
    }
};
int main()
{
    int n;
    cout << "ENTER THE NO OF ELEMENT: ";
    cin >> n;
    linkedlist l1(n);
    l1.traverse();
    l1.deleteLast();
    l1.traverse();
    return 0;
}