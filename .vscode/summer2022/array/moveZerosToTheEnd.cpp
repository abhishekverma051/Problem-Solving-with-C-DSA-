#include<bits/stdc++.h>
using namespace std;
// naive approacj
void moeZeros(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j] != 0)
                {
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
}
// linea solution
void zero(int arr[],int n)
{
    int count = 0; // count is used to track the non zero elemenys
    for(int i=0;i<n;i++)
    {
        if(arr[i]!= 0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
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
    int arr[]={10,5,0,0,8,0,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    moeZeros(arr,n);
    cout << endl;
    printArray(arr,n);
    cout << endl;
    printArray(arr,n);
    return 0;

}