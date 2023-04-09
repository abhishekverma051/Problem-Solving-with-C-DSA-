#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int num)
{
    int start=0;
    int end=n;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid]==num)
        {
            return mid;
        }
        else if(arr[mid]>num)
        {
            end = mid-1;
        }
        else 
        {
            start=mid+1;
        }
        
    }
    return -1;
}
    int main()
    {
        int n;
        cout<<"enter the size of array "<<endl;
        cin>>n;
    
        int i;
      
        int arr[n];
        cout << "enter the number of elements: " << endl;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int num;
        cout<<"the number which we want to find is : "<<endl;
        cin>>num;
        cout<<binarySearch(arr,n,num)<<endl;
    }
