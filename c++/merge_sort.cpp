#include<bits/stdc++.h>
#define MAX 100
using namespace std;
void mergeSort(int arr1[],int arr2[],int arr3[],int n1,int n2)
{
    int i,j,k;
    i=0;
    j=0;
    k=0;
    while((i<=n1-1 && j<n2-1))
    {
        
        if(arr1[i]<arr2[j])
        {
            arr3[k++]=arr1[i++];

        }
        else
        arr3[k++]=arr2[j++];
    }
    while(i<= n1-1)
    {
        arr3[k++] = arr1[i++];
    }
    while(j<=n2-1)
    {
        arr3[k++] = arr2[j++];  
    }

}

int main()
{
    int n1;
    int i;
    cout<<"enter the size of ist array: "<<endl;
    cin>>n1;
    int arr1[MAX];
    cout<<"enter the elements of arr1: "<<endl;
    for(i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    int n2;
    cout<<"enter the size of arr2 : "<<endl;
    cin>>n2;
    int arr2[MAX];
    cout<<"enter the elemnts here : "<<endl;
    
    for(i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    int arr3[MAX];
    mergeSort(arr1,arr2,arr3,n1,n2);
    //display(arr1,arr2,arr3,n1,n2);
    for ( i = 0; i = n1+n2; i++)
    {
        cout << arr3[i];
    }

    return 0;
}