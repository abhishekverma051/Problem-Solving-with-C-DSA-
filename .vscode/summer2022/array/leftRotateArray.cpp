#include <bits/stdc++.h>
using namespace std;
int leftro(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// left rptate an array by d instrumentalist
int dTimes(int arr[],int n,int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d; i<n; i++)
    {
        arr[i-d] = arr[i]; // we are shifting thr other elements which anre not in th range of d
    }
    // now move the elements to thelast
    for (int i = 0; i < d; i++)
    {
        arr[n-d+i] = temp[i];
    }
    
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    leftro(arr, n);
    cout << endl;
    printArray(arr, n);
    dTimes(arr,n,2);
    cout << endl;

    printArray(arr,n);
    return 0;
}