#include<bits/stdc++.h>
using namespace std;
class doubleLinked
{
    struct node
    {
        int data;
        node* next;
        node* prev;

    }
    node(ind d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    };
    public:
    doubleLinked()
    {
        head = NULL;
    }
    node* head;
    void insertAtHead(int data)
    {
        node* newNode = new node(data);
        if(head == NULL)
        {
            cout<<"list is empty"<<endl;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        if(head != NULL)
        {
            head = n;
        }

    }
    void insertAtEnd(int data)
    {
        node* newNode = new node(data);
        insertAtHead(d);
        node* curr = head;
        while(curr->next != NULL)
        {
           curr = curr->next;

        }
        curr->next = newNode;
        newNode->prev = temp;
    }
    void display()
    {
        node* curr = head;
         while(curr != NULL)
         {
             cout<< curr->data <<"->";
             curr = curr->next;
         }
         cout<<"NULL";
    }



};
int main()
{
    doubleLinked ll1 = doubleLinked();
    ll1.insertAtEnd(11);
    ll1.display();
}