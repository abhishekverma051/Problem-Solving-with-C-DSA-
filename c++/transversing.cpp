#include<iostream>
using namespace std;
int main()
{
    int arr[50]; // once size is allocated then it cannot be changed through out he program
    int size;
    cout<<"enter the size of array : " <<endl;
    cin>>size;
    cout<<"enter the number of elements : "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"elements in the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}