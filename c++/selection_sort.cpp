#include<iostream>
using namespace std;
int main()
{
    int a;
    int n;
    int temp;
    int min;
    cout<<"enter the number of elements :"<<endl;
    cin>>a;
    int arr[a];
    cout<<"enter the elements of array :"<<endl;
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];

    }
    cout<<endl;
    // selection sorting
    for(int i=0; i<a-1;i++)
    {
      min=i;// min = minimun value
      for(int j=i+1;j<a;j++)
      {
          if(arr[min]>arr[j])
          {
              min=j; // 13
          }
          
      }
      if(i!=min)
      {
           temp = arr[i];
          arr[i] = arr[min];
          arr[min] = temp;
      }
    }
    cout<<"sorted list is: "<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<endl;
    }
}