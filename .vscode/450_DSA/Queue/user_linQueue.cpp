#include <bits/stdc++.h>
using namespace std;
class linkedQueue
{
    struct node
    {
        int data;
        node *next;
        node(int d)
        {
            data = d;
            next = NULL;
        }
    };

public:
    node *front, *rear;
    linkedQueue()
    {
        front = rear = NULL;
    }
    void enQueue()
    {
        int x;
        cout << "enter the value you want to enter : " << " ";
        cin >> x;
        cout << endl;

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
        {
            cout << "Queue Underflow" << endl;
        }

        node *newNode = front;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        delete (newNode);
    }
    void print()
    {
      node* curr = front;
        if ((front == NULL) && (rear == NULL))
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements are: ";
        while (curr != NULL)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};
int main()
{
    linkedQueue q = linkedQueue();
    int option;
    cout << "1) Insert into queue" << " ";
    cout << endl;
    cout << "2) Delete from queue" << " ";
    cout << endl;
    cout << "3) print all the elements of queue" << endl;
   
    do
    {
        cout << "Enter your choice : " << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            q.enQueue();
            break;
        case 2:
            q.deQueue();
            break;
        case 3:
            q.print();
            break;

        default:
            cout << "Invalid choice" << endl;
        }
    } while (option != 3);
    return 0;
}
