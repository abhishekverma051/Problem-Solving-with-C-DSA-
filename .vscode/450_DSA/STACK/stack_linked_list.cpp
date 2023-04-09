#include<bits/stdc++.h>
using namespace std;
class Stack
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
    node* head;
    int size;
    public:
    Stack()
    {
        head = NULL;
        size = 0;
    }
    bool empty()
    {
        return head == NULL;
    }
    void push(int data)
    {
        node* newHead = new node(data);
        if(empty())
        {
            head = newHead;
        }
        else{
            newHead->next = head;
            head = newHead;
            size++;
        }
    }
    void pop()
    {
        if(empty())
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        else
        {
            node* todelete = head;
            head = head->next;
            free(todelete);
        }
        
    }
    int top()
        {
            if(empty())
            {
                cout<<"Stack Underflow"<<endl;
                return -1;
            }
            else
            {
                return head->data;
            }
        }
        int getSize()
        {
            return size;
        }
        void print()
        {
            if(empty())
            {
                cout<<"Stack is empty"<<endl;
                return;
            }
            else
            {
                cout<<"Top to bottom"<<endl;
                node* curr = head;
                while(curr != NULL)
                {
                    cout<<curr->data<<"->";
                    curr = curr->next;
                }
                cout<<endl;
            }
        }


};
int main()
{
    Stack s1 = Stack();
    s1.push(100);
    s1.push(200);
    s1.push(300);
    s1.push(400);
    s1.push(500);
    s1.push(600);

    s1.print();
    cout<<s1.top()<<endl;
    s1.push(700);
    cout << s1.top() << endl;

    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.print();
    return 0;
}