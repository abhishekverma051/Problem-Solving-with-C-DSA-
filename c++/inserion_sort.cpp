#include<iostream>
using namespace std;
int main()
{
    int k;
    int n;
    int i,j;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements you want to sort : "<<endl;
    for( i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    // insertion sorting
    for( i=1; i<n; i++)
    {
        k=arr[i];
        int j = i-1;
        while( j<=0 &&  arr[j]>k; j--)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
         arr[j+1]=k; 
    }
 cout<<"sorted list is : "<<endl;
 for( i=0;i<n;i++)
 {
     cout<<arr[i]<<endl;
 }
}