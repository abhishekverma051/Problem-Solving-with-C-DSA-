#include<bits/stdc++.h>
using namespace std;
int deleteAtPos(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    
        if(arr[i]== x)
        break;
        if(i==n)
        {
            return n;
        }
        if(i<n)
        {
            for(int j=i;j<n-1;j++)
            {
                arr[j]=arr[j+1];
            }
        }
        return n-1;
        

}
int main()
{
    int arr[]={3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cout <<  arr[i] << " ";
    }
    int x ;
    cout<<endl<<"enter the element you want to delete :"<<endl;
    cin >> x;
    n = deleteAtPos(arr,n,x);
    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<<" ";
    }
    return 0;
}