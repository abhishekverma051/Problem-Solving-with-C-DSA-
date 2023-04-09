#include<bits/stdc++.h>
using namespace std;
void mergeSort(int arr[],int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[low+i];
        i++;
    }
    for(int i=0;i<n2;i++)
    {
        right[i]=arr[n1+i];
        i++;
    }
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            cout<<arr[k];
            i++;
            k++;
        }
        else
        {
            arr[k]=right[j];
            cout<<arr[k];
            j++;
            k++;
        }
        while(i<n1)
        {
            arr[k]=left[i];
            i++;
            k++;
        }
        while(j<n2)
        {
           arr[k]=right[j];
            j++;
            k++;
        }
    }
    
    

}
int main()
{
    int arr[]={11,12,13,14,8,9,10};
  //  int n1 = sizeof(arr)/sizeof(arr[i]);
  mergeSort(arr,low,mid,high);

}