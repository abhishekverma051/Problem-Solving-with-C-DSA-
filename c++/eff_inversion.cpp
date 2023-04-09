#include<bits/stdc++.h>
using namespace std;
void countAndMerge(int a[],int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int left[n1];
    int high[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=a[low+i];
    }
    for(int i=0;i<n2;i++)
    {
        right[i]=a[mid+1+i];
    }
    int res=0;// result means number of inversions
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            a[k]=left[i];
            i++;
        }
        else 
        {
            a[k]=right[j];
            j++;
            res=res+(n1-i);
        }
        k++;
     }   
    while(i<n1)
        {
            a[k]=left[i];
            i++;
            k++;
        }
        while (j < n2)
        {
            a[k] = right[j];
            j++;
            k++;
        }
        return res;
    

}
int main()
{
    int a[]={2,5,8,11,3,4,6,12};
    cout << " Number of inversions are "
         << countAndMerge(a,low,mid,high);
    ;
    return 0;
}