#include<bits/stdc++.h>
using namespace std;
class linkedQueue
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
    public:
    node* front ,*rear;
    linkedQueue()
    {
        front = rear = NULL;
    }
    void enQueue(int x)
    {
       
        node* newNode = new node(x);
        if(rear == NULL)
        {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }
    void deQueue()
    {
        if(front == NULL)
        {
            cout<<"Queue Underflow"<<endl;
        }

        node* newNode = front;
        front = front->next;
        if(front == NULL)
        {
            rear = NULL;
        }
        delete(newNode);
    }

};
int main()
{
 linkedQueue q = linkedQueue();
 q.enQueue(5);
 q.enQueue(15);
 q.enQueue(25);
 q.enQueue(35);
 q.enQueue(55);
 q.deQueue();
 q.deQueue();
 cout << "Queue Front : " << (q.front)->data << endl;
 cout << "Queue Rear : " << (q.rear)->data << endl;
}

