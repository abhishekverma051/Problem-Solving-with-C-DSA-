#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
class node{
    public:
    int data;
    int priority;
    node* next;
    node(int d,int p)
    {
        data = d;
        priority = p;
        next = NULL;
    }
};
// fnc to create a new node
node* newNode(int x,int p)
{
    node* Nowe = new node(x,p);
    return Nowe;
}
//var representing the head of ll
node* head = NULL;
void push(int x,int p)
{
    node* newNode1 = newNode(x,p);
    if(head == NULL)
    {
        head = newNode1;
        return;
    }
    node* curr = head;
    node* prev = NULL;
    while(curr != NULL && curr->priority > p)
    {
        prev = curr;
        curr = curr->next;
    }
    if(curr == NULL)
    {
        prev->next = newNode1;
    }
    else{
        if(prev == NULL)
        {
            // sbhi eleemnts ki priority jo h vo baki eleemnts se kam h so hum ise list ki starting me add kr denge
            newNode1->next = head;
            head = newNode1;
        }
        else
        {
            // add this node before the node priority less than p
           newNode1->next = curr;
           prev->next = newNode1;
        }
    }

}
int pop()
{
    // jb head li priority sbse jyda ho
    if(head != NULL)
    {
        int data = head->data;
        // rempving
        head = head->next;
        return data;
    }
    return -1;
}
int peek()
{
     // head of the linked list contains the maximum priority element
    if(head != NULL)
    {
        return head->data;
    }
    return -1;

}
int main() {
    // Example
    // (k,p)
    push(5, 2);
    push(1, 3);
    cout<<peek()<<endl;
    push(7, 5);
    push(9, 1);
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    cout<<peek()<<endl;
    
    return 0;
}
