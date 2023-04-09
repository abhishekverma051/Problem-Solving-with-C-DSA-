#include <iostream>
using namespace std;
class ll
{
    struct node
    {
        int data;
        node *next;
        node *prev;
        node(int d)
        {
            data = d;
            next = NULL;
            prev = NULL;
        }
    };
    node *head, *tail, *last;

public:
    linked()
    {
        head = NULL;
    }
    void insertAthead(int data)
    {
        node *newNode = new node(data);
        if (head == NULL)
        {
            last = newNode;
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            if (head != NULL)
            {
                head->prev = newNode;
            }

            head = newNode;
        }
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
            newNode->prev = curr;
        }
    }

    // int searchl(int x)
    // {
    //     cout << "number is : " << x << endl;
    //     int pos = 1;
    //     node *curr = head;
    //     while (curr != NULL)
    //     {
    //         if (curr->data == x)
    //         {
    //             cout << "position of the number is: " << pos;
    //             break;
    //         }
    //         else
    //         {
    //             pos++;
    //             curr = curr->next;
    //         }
    //     }
    //     return -1;
    // }
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
    void deleteNode(int dataToDel)
    {

        Node *current = head;
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        else if (head->data == dataToDel)
        {
            head = head->next;
            free(current);
            return;
        }
        else
        {
            while (current->next != NULL && current->next->data != dataToDel)
            {
                current = current->next;
            }
            if (current->next == NULL)
            {
                cout << "Data does not exist" << endl;
                return;
            }
            else
            { // tail

                Node *nodeToDel = current->next;
                current->next = current->next->next;
                free(nodeToDel);
            }
        }
    }
};

int main()
{
    ll l1 = ll();
    // l1.insertAtEnd(10);
    // l1.insertAtEnd(20);
    // l1.insertAtEnd(30);

    // l1.print();
    cout << endl;
    l1.insertAthead(11);
    l1.insertAthead(20);
    l1.insertAthead(40);
    l1.print();
    // l1.searchl(30);
}
