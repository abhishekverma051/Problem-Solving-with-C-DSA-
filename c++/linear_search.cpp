#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
   
   
}

int main()
{
    int arr[45];
    int n=5; // size of array
  
    cout<<"enter the elements of array :" <<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<linearSearch(arr,n,key);
    return 0;
}
