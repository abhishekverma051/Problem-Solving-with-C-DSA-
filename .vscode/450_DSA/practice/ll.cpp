#include<iostream>
using namespace std;
class linked
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
    node* head , *tail;
    public:
    linked()
    {
        head = NULL;
    }
    void insertAtEnd(int data)
    {
        node* newNode = new node(data);
        if(head == NULL)
        {
            head = newNode;
            
            return;
        }
        else
        {
            node* curr = head;
            while(curr->next != NULL)
            {
                curr = curr->next;
            }
            curr->next = newNode;

        }

    }
    void insertATbeg(int data)
    {
        node* newNode = new node(data);
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
    int searchl(int x)
    {
        int pos = 1;
        node* curr = head;
        while(curr != NULL)
        {
            if(curr->data == x)
            {
               cout << pos;
               break;
            }
            else 
            {
                pos++;
                curr = curr->next;
            }
        }
        return -1;
    }
    // void deltion(int dataTodel)
    // {
    //   node* curr = head;
    //   // if element does not present inside the list
    //     if(head == NULL)
    //     {
    //         cout<<"list is empty"<<endl;
    //         return;
    //     }
    //     // if the req number present at beg
    //     else if(head->data == dataTodel)
    //     {
    //         head = head->next;
    //         free(curr);
    //         return;

    //     }
    //     else
    //     {
    //         node* curr = head;
    //         while(curr->next != NULL && curr->next->data != dataTodel)
    //         {
    //             curr = curr->next;
    //         }
    //         if(curr->next == NULL)
    //         {
    //             cout<<"data doesn't exist"<<endl;
    //             return;
    //         }
    //         else
    //         {
    //             node* nodeDel = curr->next;
    //             curr->next = curr->next->next;
    //             free(nodeDel);
    //         }
    //     }
    // }
    void print()
    {
        node *temp = head;
        if(head == NULL)
        {
            cout<<"list is empty"<<endl;
            return;
        }
        else
        {
            while(temp != NULL)
            {
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<"NULL";
        }
    }

};
int main()
{
    linked ll = linked();
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
   
    ll.print();
    cout<<endl;
    ll.searchl(30);
   
    // ll.insertATbeg(10);
    // ll.insertATbeg(20);
    // ll.insertATbeg(30);

    // ll.deltion(10);
    // ll.print();
    // return 0;

}