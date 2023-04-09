#include<iostream>
using namespace std;
class recrusive
{
    struct node
    {
        int data;
        node* next;
        node(int data)
        {
            this->data = data;
            next = NULL;
        }
    };
    public:
    node* head;
    recrusive()
    {
        head = NULL;
    }
    node* reverse(node* head)
    {
        if(head == NULL || head->next == NULL)
        {
           return head;

        }
        node* rest_head = reverse(head->next);
        node* rest_tail = head->next;
        rest_tail->next = head;
        head->next = NULL;
        return rest_head;
    }

    void print()
    {
        node* curr = head;
        while(curr != NULL)
        {
            cout<<curr->data<<"->";
            curr = curr->next;
        }
        cout<<"NULL";
    }
    void push(int data)
    {
        node* curr = new node(data);
        curr->next = head;
        head = curr;
    }
};
int main()
{
    recrusive rr;
    rr.push(46);
    rr.push(45);
    rr.push(44);
    rr.print();
    rr.head = rr.reverse(rr.head);
    cout<<endl;

    rr.print();

}