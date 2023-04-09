#include<bits/stdc++.h>
using namespace std;
void mergeSort(int arr[],int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int left[n1];
    int right[n2];
    int i;
    int j;
    int k;

    for( i=0;i<n1;i++)
    {
        left[i]=arr[low+1];
        
    }
    for(j=0;j<n2;j++)
    {
        right[j]=arr[mid+1+j];
    }
    i=0;
    j=0;
    k=1;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=right[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}
void applyMergeSort(int arr[],int low,int high)
{
    if(high>low);
    {
        int mid =low+(high-low)/2;
        applyMergeSort(arr,low,high);
        applyMergeSort(arr,mid+1,high);
        mergeSort(arr,low,mid,high);
    }


}
int main()
{
    int arr[]={10,5,30,15,17};
    int n=sizeof(arr)/sizeof(arr[0]);
    applyMergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}