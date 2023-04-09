#include<bits/stdc++.h>
using namespace std;
class linkedlist
{
    struct node
    {
        int data;
        node* next;
        node(int d)
        {
            data = d;
            next = NULL;
        }
    };
    node *head,*tail;
    public:
    linkedlist()
    {
        head = NULL;

    }
    void insertAtBeg(int data)
    {
        node *newNode = new node(data);
       if(head == NULL) // this case is for head when there is no value and the list is empty
       {
           head = newNode;
           tail = newNode;
           
       }
       else{
           newNode->next = head; // new node mein head ka address
           head = newNode; // head mein new numbe ki value
       }
    }
  
    // casase 1 : 
    void print()
    {
        node *curr = head;
        while (curr != NULL)
        {
            cout << curr->data << "->";
            curr = curr->next;
        }
        cout << "NULL";
    }
};
int main()
{
    linkedlist l1 = linkedlist();
    l1.insertAtBeg(10);
    l1.insertAtBeg(20);
    l1.insertAtBeg(30);
    l1.insertAtBeg(40);
    l1.print();
}