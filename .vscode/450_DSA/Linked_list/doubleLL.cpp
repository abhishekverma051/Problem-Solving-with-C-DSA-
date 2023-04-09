#include<iostream>
using namespace std;
class doublell
{
    struct node
    {
        int data;
         node* prev;
         node* next;
         node(int d)
         {
          prev = NULL;
          data = d;
          next = NULL;
         }

    };
    public:
    void insertAtHead(node* &head,int data)
    {
        node* newNode = new node(data);
        newNode->next = head;
        if(head!=NULL)
        {
            head->prev = newNode;
        }
        head = newNode;
    }
    void insertAtTail(node* &head,int data)
    {
        node* newNode = new node(data);
        if(head == NULL)
        {
            return;
        }


        
        node* curr = head;
        while(curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = newNode;
        newNode->prev = curr;
    }
    void display(node* head)
    {
        node* curr = head;
        while(curr->next != NULL)
        {
            cout<<curr->next<<"->";
            curr = curr->next;
        }
        cout<<endl;
    }
  
};
    

int main()
{
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
}