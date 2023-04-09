#include<bits/stdc++.h>
using namespace std;
int remDups(int arr[],int n)
{
    int temp[n];
    temp[0]=arr[0];
    int res = 1;
    for(int i=1;i<n;i++)
    {
        if(temp[res-1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++)
    {
        arr[i] = temp[i];
    }
    return res;
}
int rem(int arr[],int n)
{
    int res1 = 1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[res1-1])
        {
            arr[res1] =arr[i];
            res1++;
        }
    }
    return res1;
    
}

int main()
{
    int arr[]={10,20,20,30,30,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << remDups(arr,n);
    cout << endl;
    cout << rem(arr,n);
    return 0;

}