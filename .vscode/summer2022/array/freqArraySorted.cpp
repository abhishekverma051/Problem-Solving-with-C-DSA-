// in this question we are finding fequiences of array
// frequency means that how many times a interge is repeating in the whole array
// we have to simply find out the fre wrt thr number and print it
#include<bits/stdc++.h>
using namespace std;
void feqSorted(int arr[],int n)
{
    int ferq=1;
    int i=1;
    while(i<n)
    {
        while(i<n && arr[i]==arr[i-1])
        {
            ferq++;
            i++;
        }
        cout << arr[i-1] << " " << ferq << " " << endl;
        i++;
        ferq=1;

    }
    if(n==1 || arr[n-1]!=arr[n-2])
    {
        cout<< arr[n-1] << " " <<  ferq;
    }
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
    int arr[]={10,10,10,30,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    cout << endl;
    feqSorted(arr,n);
    return 0;
}