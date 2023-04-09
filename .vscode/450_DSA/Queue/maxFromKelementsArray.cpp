#include<bits/stdc++.h>
#include<deque>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array :"<<endl;3
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    deque<int> dq;
    cout<<"enter the window value :"<<endl;
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        while(!dq.empty() && arr[i] >= arr[dq.back()])
        {
            dq.pop_back();
            dq.push_back(i);
        }

    }
    for(int i=k;i<n; i++)
    {
        cout<<dq.front()<<" ";
        while(!dq.empty() && dq.front() <= i-k)
        {
            dq.pop_front();
        }
        while(!dq.empty() && arr[i] >= arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);

    
    }
    cout<<arr[dq.front()]<<endl;
}