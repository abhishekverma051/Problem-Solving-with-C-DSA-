#include<iostream>
// in insertion we compare two values and insert the lowest valuw at its place like in ist pass we compare two eleemnts then three and ... n-1 
using namespace std;
void insertionSort(int arr[],int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        int key;
        key = i; // here key stores the value of i let it be 44 
        int j= i-1; // here j is for the very ist elemnt which is to be compaired with the other element we take it as i-1 bcz we have i=1 so i-1  means i=0 so we comapre j=0 and j=i
        while(j>=0 && arr[j]>key)
        // arr[j]   >  key
        // 55 > 44
        // then swap
        // 44 55
        {
            arr[j+1]=arr[j];
            // arr[1] = 55

            j--;
            // 
        }
        arr[j+1]=key;
    }

}
void display(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

}

int main()
{
    int arr[]={55,44,11,10,9,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr,n);
    display(arr,n);

}