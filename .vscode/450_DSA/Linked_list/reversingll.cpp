#include<iostream>
using namespace std;
class linkedList
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
  node* head ,*tail;
  public:
  linkedList()
  {
      head = NULL;
  }
  void insertAtBeg(int data)
  {
      node *newNode = new node(data);
      if(head == NULL)
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
  
  // reverse
   void reverseIterative()
   {
       node* prev = NULL;
       node* curr = head,*next = NULL;
       while(curr != NULL)
       {
           next = curr->next;
           curr->next=prev;
           prev = curr;
           curr = next;

       }
       head = prev;
   }
  
  
  void print()
  {
      node *curr = head;
    if(head == NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        while(curr != NULL)
        {
            cout<< curr->data <<" -> ";
            curr = curr->next;
        }
        cout<<"NULL"<<endl;
    }
  }
};
int main()
{
    linkedList l1 = linkedList();
    l1.insertAtBeg(50);
    l1.insertAtBeg(40);
    l1.insertAtBeg(30);
    l1.insertAtBeg(20);
    l1.insertAtBeg(10);
    l1.print();
    l1.reverseIterative();
    l1.print();
}