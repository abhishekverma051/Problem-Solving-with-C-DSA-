#include<bits/stdc++.h>
using namespace std;
// naive approach
int waterStored(int arr[],int n)
{
    int res = 0;
    for(int i=1;i<n;i++)
    {
        int leftHeight = arr[i];
        for(int j=0;j<i;j++)
        {
            leftHeight = max(leftHeight,arr[j]);
        }
        int rightHeight = arr[i];
        for(int j=i+1;j<n;j++)
        { 
            rightHeight = max(rightHeight,arr[j]);
        }
        res = res + (min(leftHeight,rightHeight)-arr[i]);
    }
    return res;
}
// efficient soltution
int H20(int arr[],int n)
{
    int res = 0;
    int left[n],right[n];
    left[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        left[i]=max(arr[i],left[i-1]);
    }
    right[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i]=max(arr[i],right[i+1]);
    }
    for(int i=0;i<n;i++)
    {
        res = res + (min(left[i],right[i])-arr[i]);
    }
    return res;
}
int main()
{
    int arr[]={3,0,1,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << waterStored(arr,n);
    cout << endl << H20(arr,n);
    return 0;
}