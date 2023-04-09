#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class QueueUsingStack
{ 
    stack<int> *s1,*s2;
    public:
    QueueUsingStack()
    {
        s1 = new stack<int>;
        s2 = new stack<int>;
    }
    void push(int data)
    {
        s1->push(data);
        

    }
    void pop()
    {
        if(s2->empty())
        {
            if(s1->empty())
            {
                cout<<"Stack Underflow"<<endl;
              
            }
            else
            {
                while(!s1->empty())
                {
                    s2->push(s1->top());
                    s1->pop();

                }
                s2->pop();
            }
        }
        else
        {
            s2->pop();
        }

    }
    int front()
    {
        if(s2->empty())
        {
            if(s1->empty())
            {
                cout<<"queue Underflow"<<endl;
                return -1;
            }
            else
            {
                while(!s1->empty())
                {
                    s2->push(s1->top());
                    s1->pop();

                }
                return s2->top();
            }
        }
        else
        {
            return s2->top();
        }

    }
    int back()
    {
        if(s1->empty())
        {
            if(s2->empty())
            {
                cout<<"Stack Underflow"<<endl;
                return -1;
            }
            else
            {
                while(!s2->empty())
                {
                    s1->push(s2->top());
                    s2->pop();

                }
                return s1->top();
            }
        }
        else
        {
           return s1->top();
        }

    }
    bool empty()
    {
        return s1->empty() && s2->empty();

    }
    
    int size()
    {
        return s1->size() + s2->empty();
    }

};
int main()
{
    QueueUsingStack q1 = QueueUsingStack();
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);
    q1.push(60);
    cout<<"front: "<< q1.front()<<" "<<"back:" << q1.back()<<endl;
    q1.pop();
  //  q1.pop();
    cout<<"front: "<< q1.front()<<" "<<"back:" << q1.back()<<endl;
    cout<<q1.size();


    



}