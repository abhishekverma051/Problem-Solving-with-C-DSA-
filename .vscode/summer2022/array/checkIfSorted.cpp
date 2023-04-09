#include<bits/stdc++.h>
using namespace std;
// naive solution to check whteret the givrn array is forward sorted or nat
bool sorted_arr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
                return false;
        }
        return true;
    }
}
int main()
{
    int arr[] = {8,10,12,14};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout <<  sorted_arr(arr,n);
    return 0;
}