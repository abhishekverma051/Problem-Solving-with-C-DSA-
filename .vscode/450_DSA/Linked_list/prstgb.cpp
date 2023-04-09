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
    node* head,*tail;
    public:
    linkedList()
    {
        head = NULL;
    }
    void insertBeg(int data)
    {
        node* nayaNOde = new node(data);
        if(head == NULL)
        {
             head = nayaNOde;
             tail = nayaNOde;
        }
        else{
            nayaNOde->next = head;
            head = nayaNOde;
        }
    }
    // at end
    void insetEnd(int data)
    {
        node* nayaNo = new node(data);
        if(head == NULL)
        {
            head = NULL;
            tail = NULL;
        }
        node* curr = head;
        while(curr->next != NULL)
        {
            curr = curr->next;
        }
        curr = nayaNo;
    }
    void delt(int datadel)
    {
        node* curr = head;
        if(head == NULL)
        {
            cout<<"no data"<<endl;
            return;
        }
        else if(head->data == datadel)
        {
            head = head->next;
            free(curr);
            return;
        }
        else 
        {
           while(curr->next != NULL && curr->next->data != datadel)
           {
               curr = curr->next;
           }
           if(curr->next == NULL)
           {
               cout<<"data does not exist"<<endl;
               return;
           }
           else{
               node* newT = curr->next;
               curr->next = curr->next->next;
               free(newT);
           }
        }
    
    }
    void print()
    {
        node* curr = head;
        if( head == NULL)
        {
            cout<<"list is empty"<<endl;
            return;
        }
        else
        {
            while(curr != NULL)
            {
                cout<<curr->data<<"->";
                curr=curr->next;
            }
            cout<<"NULL"<<endl;
        }
    }

};
int main()
{
    linkedList ll = linkedList();
    cout<<"at beg"<<endl;
    ll.insertBeg(30);
    ll.insertBeg(20);
    ll.insertBeg(10);
    ll.print();
    cout<<"at last"<<endl;
    ll.insetEnd(0);
    ll.insetEnd(0);
    ll.insetEnd(0);
    ll.print();
    cout<<"delete"<<endl;
    ll.delt(20);
    ll.print();

    return 0;

}