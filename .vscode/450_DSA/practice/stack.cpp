// #include<iostream>
// using namespace std;
// class Stack
// {
//     int* arr;
//     int top;
   
//     int max_size;
//     public:
//     Stack(int size=10)
//     {
//         arr = new int(size);
//         top = -1;
//         max_size = size;
//     }
//     bool full()
//     {
//         return (top + 1) == max_size;

//     }
//     bool empty()
//     {
//         return top == -1;

//     }
//     void  push(int data)
//     {
//         if(full())
//         {
//             cout<<"Stack Overflow"<<endl;
//         }
//         else
//         {
//             top++;
//             arr[top] = data;
//         }

//     }
//     void pop()
//     {
//         if(empty())
//         {
//             cout<<"Stack Underflow"<<endl;
//         }
//         else{
//             top--;
//         }

//     }
//     int getTop()
//     {
//        if(empty())
//        {
//            cout<<"Stack Underflow"<<endl;
//        }
//        else{
//            return arr[top];
//        }
//     }
//     int getSize()
//     {
//         return top+1;

//     }
//     void print()
//     {
//         for(int i=0; i<max_size;i++)
//         {
//             cout<<arr[i]<<" ";
//             cout<<endl;
//         }
//     }


    

// };
// int main()
// {
//     Stack s = Stack(8);
//     s.push(5);
//     s.push(15);
//     s.push(25);
//     s.push(35);
//     s.push(45);
//     s.push(55);
//     s.push(65);
//     s.push(57);
//     s.print();

// }
#include<iostream>
#include<bits/stdc++.h>

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
    ll()
    {
        head =NULL;
    }
    void insertAtend(int data)
    {
        node* newNode = new node(data);
        if(head == NULL)
        {
            head = newNode;
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
    void insertAtbg(int data)
    {
        node* newNode = new node(data);
        if(head == NULL)
        {
            head = newNode;
            tail= newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    int search(int x)
    {
        int pos = 1;
        node* curr = head;
        while(curr != NULL)
        {
            if(curr->data == x)
            {
                cout<<pos;
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
    void deletion(int dataTodel)
    {
        node* curr = head;
        if(head == NULL)
        {
            cout<<"list is empty"<<endl;
        }
        else if(head->data == dataTodel)
        {
            head = head->next;
            delete(curr);
            return;
        }
        else
        {
            while(curr->next != NULL && curr->next->data != dataTodel)
            {
                curr = curr->next;
            }
            if(curr->next == NULL)
            {
                cout<<"data does not exist"<<endl;
                return;
            }
            else
            {
                node* nodeDel= curr->next;
                curr->next = curr->next->next;
                delete(nodeDel);
            }
        }
    
    }
    node* reverse()
    {
        node* curr = head;
        node* prev = NULL;
      
        while(curr != NULL)
        {
            node* link = curr->next;
            curr->next = prev;
            prev = curr;
            curr = link;
        }
        return prev;

    }
    void print()
    {
        node* curr = head;
        if(head == NULL)
        {
            cout<<"list is empty"<<endl;
            return;
        }
        else
        {
            while(curr != NULL)
            {
                cout<<curr->data<<"->";
                curr = curr->next;
            }
            cout<<"NULL";
        }
    }


};
int main()
{
    ll q = ll();
    q.insertAtend(10);
    q.insertAtend(20);
    q.insertAtend(30);
    q.print();
    cout<<endl;
    // cout<<"begning"<<endl;
    // q.insertAtbg(50);
    // q.insertAtbg(60);
    //  q.insertAtbg(60);
    // q.print();
    cout<<endl;
    // cout<<" postiom :: ";
	// q.search(20);
	// cout<<endl;
    // cout<<"delete : ";
	// q.deletion(50);
	// q.print();
    cout<<endl;
    q.reverse();
    q.print();
}