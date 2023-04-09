#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

struct QueueLL
{
    node *front, *rear;
    QueueLL()
    {
        front = rear = NULL;
    }

    void enQueue(int x)
    {

        node *newNode = new node(x);

        if (rear == NULL)
        {
            front = rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = newNode;
    }

    void deQueue()
    {

        if (front == NULL)
            return;

        node *newNode = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete (newNode);
    }
};

int main()
{

    QueueLL obj;
    obj.enQueue(5);
    obj.enQueue(15);
    obj.deQueue();
    obj.deQueue();
    obj.enQueue(20);
    obj.enQueue(25);
    obj.enQueue(30);
    obj.enQueue(50);
    obj.deQueue();
    cout << "Element in front of Queue: " << (obj.front)->data << endl;
    cout << "Element in rear of Queue : " << (obj.rear)->data;
}
