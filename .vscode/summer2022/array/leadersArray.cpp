#include<bits/stdc++.h>
using namespace std;
// naive solution
void leaders(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag = false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<= arr[j])
            {
                flag = true;
                break;
            }
        }
        if(flag == false)
        {
            cout << arr[i] << " ";
        }
    }
}
// efficent solution
void led1(int arr[],int n) 
{
    int curr_leaders = arr[n-1];
    cout << curr_leaders;
    for(int i=n-2; i<0; i++)
    {
        if(curr_leaders < arr[i])
        {
            curr_leaders = arr[i];
            cout <<  curr_leaders << " ";
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
    int arr[] = {7,10,4,10,6,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    cout << endl;
    leaders(arr,n);
   // printArray(arr,n);
    led1(arr,n);
    return 0;


}