#include<iostream>
#include<queue>

using namespace std;
class StackUsingQueues
{

public:
    queue<int> *q1, *q2, *qtemp;
    StackUsingQueues()
    {
        q1 = new queue<int>;
        q2 = new queue<int>;
        qtemp = NULL;
    }

    void push(int data)
    {
        q2->push(data);
        while (!q1->empty())
        {
            q2->push(q1->front());
            q1->pop();
        }
        qtemp = q1;
        q1 = q2;
        q2 = qtemp;
    }

    void pop()
    {
        if (empty())
            cout << "Stack Underflow" << endl;
        else
            q1->pop();
    }

    int top()
    {
        if (empty())
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        else
            return q1->front();
    }

    int size()
    {
        return q1->size() + q2->size();
    }

    bool empty()
    {
        return q1->empty() && q2->empty();
    }
};
int main()
{
   StackUsingQueues q1 = StackUsingQueues();
   q1.push(20);
   q1.push(30);
   q1.push(40);
   cout<<q1.top()<<" "<<endl;
   q1.pop();
   cout<<q1.top()<<""<<endl;
    q1.push(20);
   q1.push(30);
   q1.push(40);
      cout<<q1.top()<<""<<endl;



}