#include<bits/stdc++.h>
using namespace std;
// naive approsch
int maxDiff(int arr[],int n)
{
    int res = arr[1]-arr[0];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            res = max(res,arr[j]-arr[i]);
        }
        return res;
    }
}
// efficenit approach
int retmax(int arr[],int n)
{
    int res = arr[1] - arr[0];
    int minVal = arr[0];
    for(int j=1; j<n;j++)
    {
        res = max(res,arr[j]-minVal);
        minVal = min(minVal,arr[j]);
    }
    return res;
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {2,3,10,6,4,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    cout << endl;
    cout << maxDiff(arr,n);
    //printArray(arr,n);
    cout << endl;
    cout << retmax(arr,n);
    return 0;
}