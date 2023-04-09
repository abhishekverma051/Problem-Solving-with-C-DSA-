#include<bits/stdc++.h>
using namespace std;
int getLargestarray(int arr[],int n)
{
    int lar = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[lar])
        {
            lar = i;
        }
        return lar;
    }
}
int main()
{
    int arr[]={12,23,5,43,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout <<  getLargestarray(arr,n);
    return 0;
}