// in lomuto partition  the last element of the array should be taken as pivot and then partiotioning is don acc...
#include<bits/stdc++.h>
using namespace std;
void lomuto(int a[],int low,int high)
{
    int pivot=a[high]; // means that that the pivot element should be last in this case
    int i=low-1; // i = -1
    for(int j=low;j<=high-1;j++)// high -1 bcz last element is pivot
    {
        if(a[j]<pivot)
        {
            i++; // we only increment i  when we found an element  smaller than the pivot
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1], a[high]);// this is to place the pivot at its specific position
    
}
int main()
{
    int a[] = {3, 8, 6, 12, 10, 7};
    int n = sizeof(a)/sizeof(a[0]);
    //(a, 0, n - 1, n - 1);
    lomuto(a,0,n-1);
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<< " ";
    }

}