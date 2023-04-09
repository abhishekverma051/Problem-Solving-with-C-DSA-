#include<iostream>
using namespace std;
class reverse
{
    struct node
    {
        int data;
        node* next;
        node(int data)
        {
            this->data = data;
            next = NULL;
        }
    };
    node* head;
    public:
    reverse()
    {
        head = NULL;
    }
    void reverseArr()
    {
        node* prev = NULL;
        node* curr = head;
        node* next = NULL;
        while(curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
    void print()
    {
        node* curr = head;
        while(curr != NULL)
        {
            cout<<curr->data<<"->";
            curr = curr->next;
        }
        cout<<"NULL";
    }
    void push(int data)
    {
        node* temp = new node(data);
        temp->next = head;
        head = temp;
    }
};
int main()
{
  reverse ll;
  ll.push(30);
  ll.push(20);
  ll.push(10);
  cout<<"list: "<<endl;
  ll.print();
  ll.reverseArr();
  cout<<endl;
  cout<<"reversed list"<<endl;
  ll.print();
}