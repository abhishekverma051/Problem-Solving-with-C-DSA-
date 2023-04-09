#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
class CircularQueue
{
    int *arr;
    int size;
    int front;
    int rear;
    int max_size;

public:
    CircularQueue(int default_size = 10)
    {
        arr = new int[default_size];
        size = 0;
        front = -1;
        rear = -1;
        max_size = default_size;
        for (int i = 0; i < max_size; i++)
            arr[i] = -1;
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
            if (empty())
            {
                front = 0;
                rear = 0;
                arr[rear] = data;
            }
            else
            {
                arr[rear] = data;
            }
            rear = (rear + 1) % max_size;
            size++;
        }
    }

    void dequeue()
    {
        if (empty())
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        else
        {
            arr[front] = -1;
            front = (front + 1) % max_size;
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
            size--;
        }
    }

    bool empty()
    {
        return (front == -1 && rear == -1);
    }

    bool full()
    {
        return (rear != -1 && rear == front);
    }

    int getFront()
    {
        if (empty())
        {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int getRear()
    {
        if (empty())
        {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        else
        {
            return arr[((rear - 1 + max_size) % max_size)];
        }
    }

    int getSize()
    {
        return size;
    }

    int getMaxSize()
    {
        return max_size;
    }

    void print()
    {
        if (empty())
        {
            cout << "List is empty" << endl;
        }
        else
        {
            for (int i = 0; i < max_size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    CircularQueue q = CircularQueue(5);
    q.enqueue(4);
    q.enqueue(4);
    q.enqueue(4);
    q.enqueue(4);
    q.print();
  

}