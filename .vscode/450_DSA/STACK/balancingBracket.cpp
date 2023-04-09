#include<bits/stdc++.h>
using namespace std;
class Stack
{
    struct Node
    {
        int data;
        Node *next;
        Node(int d)
        {
            data = d;
            next = NULL;
        }
    };
    Node *head;
    int size;

public:
    Stack()
    {
        head = NULL;
        size = 0;
    }

    bool empty()
    {
        return head == NULL;
    }

    void push(int data)
    {
        Node *newHead = new Node(data);
        if (empty())
        {
            head = newHead;
        }
        else
        {
            newHead->next = head;
            head = newHead;
        }
        size += 1;
    }

    void pop()
    {
        if (empty())
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        else
        {
            Node *toDelete = head;
            head = head->next;
            free(toDelete);
            size -= 1;
        }
    }

    int top()
    {
        if (empty())
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        else
        {
            return head->data;
        }
    }

    int getSize()
    {
        return size;
    }

    void print()
    {
        if (empty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        else
        {
            Node *current = head;
            cout << "Top to bottom: ";
            while (current != NULL)
            {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
    }
};

// for this () type
void balancingBracket()
{
    cout<<"enter string value : ";
    string s;
    cin >> s;
    int i = 0;
    int count = 0;
    while(i<s.length())
    {
        if(s[i] == '(')
        
            count++;
        
        else if(s[i] == ')')
        
            count--;
        
          if(count<0)
          {
              cout<<"invalid sequence"<<endl;
              return;
          }
          i++;


    }
          if(count == 0)
          {
              cout<<"valid seq"<<endl;
              
          }
        else
        {
            cout<< "invalid seq"<<endl;
        }
            return ;
}
// for all brackets types
void balancingB2()
{
     stack<char> st;
     string s;
     cin>>s;
     int i = 0;
     while(i<s.length())
     {
         if (s[i] == '(' || s[i] == '[' || s[i] == '{' || s[i] == '<')
         {
             st.push(s[i]);
         }
         else
         {
             if(st.empty())
             {
                 cout<<"Invalid Sequence "<<endl;
                 return;
             }
             else if((st.top() == '(' && s[i] == ')') ||
                    (st.top() == '[' && s[i] == ']') ||
                    (st.top() == '{' && s[i] == '}') ||
                    (st.top() == '<' && s[i] == '>'))
                    {
                        st.pop();
                    }
         
         else{
             cout<< "Invalid Sequence " << endl;
             return;
         }
     }
     i++;
    }
    if(st.empty())
    {
        cout<<"valid sequence"<<endl;
    }
    else{
        cout<<"invalid sequence"<<endl;
    }

}
// removing adjacent duplicate values from the string
void removeDuplicate()
{
    string s;
    cin>>s;
    stack<char> st;
    int i = 0;
    while(i < s.length())
    {
        if(st.empty())
        {
            st.push(s[i]);
        }
        else{
            if(st.top() == s[i])
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        i++;

    }
    s="";
    while(!st.empty())
    {
        s = st.top() +  s;
        st.pop();
    }
    cout<< s<< endl;
}
// // removing  k adjacent duplicate values from the string
// if k=3 means we have to remove three same duplicate values
void removeDuplicate2()
{
    string s;
    cin >> s;
    int k;
    cin >> k;

    stack<pair<char, int>> st;
    pair<char, int> t;

    int i = 0;
    while (i < s.length())
    {
        if (st.empty())
        {
            st.push({s[i], 1});
        }
        else
        {
            if (st.top().first == s[i])
            {
                if (st.top().second == (k - 1))
                {
                    for (int j = 0; j < k - 1; j++)
                        st.pop();
                }
                else
                {
                    st.push({s[i], st.top().second + 1});
                }
            }
            else
            {
                st.push({s[i], 1});
            }
        }
        i++;
    }

    s = "";
    while (!st.empty())
    {
        s = st.top().first + s;
        st.pop();
    }
    cout << s;
}

// 3 previous smaller elements
void previouSmaller(int* prev,int* nums,int n)
{
    stack<int> st;
    for(int i=0; i<n; i++)
    {
        while (!st.empty() && nums[st.top()] >= nums[i])
        {
            st.pop();
            /* code */
        }
        prev[i] = (st.empty() ? -1 : st.top());
        st.push(i);
        
    }
}
// previous greater
void previousGreater(int* prev,int* nums,int n)
{
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && nums[st.top()] <= nums[i])
        {
            st.pop();
        }

    prev[i] = (st.empty() ? -1 : st.top());
    st.push(i);
    }
}
// next smaller
void nextSmaller(int* next,int* nums,int n)
{
    stack<int> st;
    for(int i=n-1; i>=0; i--)
    {
        while(!st.empty() && nums[st.top()] <= nums[i])
        {
            st.pop();
        }
        next[i] = (st.empty() ? -1 : st.top());
        st.push(i);
    }
}
int main()
{
   // balancingB2();
  // removeDuplicate2();
  int n;
  cout<<"enter the size of array"<<endl;
  cin >> n;
  int nums[n]; // array to be inserted:
  for(int i=0; i<n; i++)
  {
      cin >> nums[i];
  }
 // int prev[n]; // array to store the indexex of given problem
 // previousGreater(prev,nums,n);

  int next[n];
  nextSmaller(next,nums,n);
  for(int i =0; i<n; i++)
  {
      if(next[i] == -1)
      {
          cout << "-1";
      }
      else{
          cout<< nums[next[i]] <<" ";
      }
     // cout << prev[i] << " ";
  } 
  cout<< endl;
    return 0;
}