#include<bits/stdc++.h>
using namespace std;
class STACK
{
    int* arr;
    int max_size;
    int top;
    public:
    STACK(int size = 10)  
    {
        arr = new int(size);
        max_size = size;
        top  = -1;

    }
    bool full()
    {
        return (top + 1 ) == max_size;
    }
    bool empty()
    {
        return top == -1;
    }
    void push(int data)
    {
        if(full())
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }
    void pop()
    {
        if(empty())
        {
            cout<<"Stack Underflow";
            return;
        }
        else
        {
            top--;
        }
    }
    int getTop()
    {
        if(empty())
        {
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    // int getTop()
    // {
    //     return top;
    // }
    int getSize()
    {
        return top + 1;
    }
    int getMaxSize()
    {
        return max_size;
    }
    void print()
    {
        cout<<endl;
        for(int i=0;i<max_size;i++)
        {
            cout<<arr[i];
            cout<<endl;
        }
    }

};
int main()
{
    STACK st = STACK(5);

  cout<<"add A,B,C,D,E,F"<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
     st.push(50);
    st.push(60);
    st.print();


    cout<< st.getTop() << endl;
    cout<<"delete two elements "<<endl;
    st.pop();
    st.pop();
    st.print();
    st.push(60);
    st.push(70);
    st.print();
    cout<<"delete 4 elements "<<endl;
     st.pop();
    st.pop();
     st.pop();
    st.pop();
    st.print();
    cout << "AT TOP: " << st.getTop() << endl;
    cout <<"SIZE" << st.getSize() << endl;
    cout << "MAX SIZE : " << st.getMaxSize() << endl;
   st.print();
   return 0;
}