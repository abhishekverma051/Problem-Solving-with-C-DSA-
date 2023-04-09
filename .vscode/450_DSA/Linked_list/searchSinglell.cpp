#include<iostream>
using namespace std;
class ll
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
    linked()
    {
        head = NULL;
    }
    void insertAtEnd(int data)
    {
        node *newNode = new node(data);
        if (head == NULL)
        {
            head = newNode;

            return;
        }
        else
        {
            node *curr = head;
            while (curr->next != NULL)
            {
                curr = curr->next;
            }
            curr->next = newNode;
        }
    }
    
    int searchl(int x)
    {
        cout << "number is : "<<x<<endl;
        int pos = 1;
        node *curr = head;
        while (curr != NULL)
        {
            if (curr->data == x)
            {
                cout << "position of the number is: "<<pos;
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
    void print()
    {
        node *temp = head;
        if (head == NULL)
        {
            cout << "list is empty" << endl;
            return;
        }
        else
        {
            while (temp != NULL)
            {
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << "NULL";
        }
    }
};

int main()
{
    cout << "NAME : ABHISHEK VERMA // 20BCS5439 " << endl;
    ll l1 = ll();
    l1.insertAtEnd(10);
    l1.insertAtEnd(20);
    l1.insertAtEnd(30);
    cout<<"list is :";
    l1.print();
    cout << endl;
    l1.searchl(30);
} 
