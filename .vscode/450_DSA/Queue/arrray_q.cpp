#include <bits/stdc++.h>
using namespace std;
class Queue
{
    int front;
    int rear;
    int max_size;
    int *arr;

public:
    Queue(int default_size = 10)
    {
        arr = new int[default_size];
        front = -1;
        rear = -1;
        max_size = default_size;
    }
    bool empty()
    {
        return front == rear;
    }
    bool full()
    {
        return front == max_size;
    }
    void enqueue(int data)
    {
        if (full())
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        else
        {
            if (front == -1)
            {
                front = 0;
                rear = 0;
                arr[rear] = data;
            }
            else
            {
                arr[rear] = data;
                rear++;
            }
        }
    }
    void dequeue()
    {
        if (empty())
        {
            cout << "Queue Underflow" << endl;
           
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
        }
    }
    int getFront()
    {
        if (empty())
        {
            cout << "Queue Underflow" << endl;
         
        }
        else
        {
            return arr[front];
        }
    }
    int getrear()
    {
        if (empty())
        {
            cout << "Queue Underflow" << endl;
          
        }
        else
        {
            return arr[rear];
        }
    }
    void print()
    {
        if (empty())
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        else
        {
            for (int i = front; i < rear; i++)
            {
                printf(" %d  ", arr[i]);
               
            } cout<<endl;
            return;
        }
        
    }
};
int main()
{
    Queue q1(5);
    q1.print();
    q1.enqueue(0);
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.enqueue(6);
    q1.print();
    q1.dequeue();
    q1.print();
    
   
}