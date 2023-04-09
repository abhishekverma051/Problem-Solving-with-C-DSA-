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
        node *head;
        public: 
        linkedlist()
        { 
            head = NULL;
        }

        void insertAtEnd(int data)
        {
            node *newNode = new node(data);
            if(head == NULL)
            {
                head = newNode;
                
            }
            else
            {
                node *current = head;
                while(current->next !=  NULL)
                {
                    current = current->next;
                   
                } current->next = newNode;
            }
        }
        void print()
        {
            if(head == NULL)
            {
                cout<<"head is null"<<endl;
                return;
            }
            else
            {
                node* curr=head;
                while(curr != NULL)
                {
                    cout<<curr->data<<"->";
                    curr=curr->next;
                }
                cout<<"NULL";
            }
            
        }

    
};


int main()
{
    linkedlist ll = linkedlist(); ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.insertAtEnd(10);
   
    ll.print();
   

}