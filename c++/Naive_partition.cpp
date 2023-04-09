  // partition means to put all the values of the given inndex at left(smaller value) and right(larger value) values can be i any order
#include<bits/stdc++.h>
using namespace std;
void naivePart(int a[],int low,int high,int pivot)
{
    int temp[high-low+1];
    int index =0;
    for(int i=low;i<=high;i++)
    {
        if(a[i]<=a[pivot])
        {
            temp[index]=a[i];
            index++;
        }
    }
    for(int i=low;i<=high;i++)
    {
        if(a[i]>a[pivot])
        {
            temp[index]=a[i];
            index++;
        }
    
    }
      for(int i=low;i<=high;i++)
      {
          a[i]=temp[i-low];
      }

}
int main()
{
    int a[]={3, 8, 6, 12, 10, 7};
    int n=sizeof(a)/sizeof(a[0]);
    naivePart(a,0,n-1,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}