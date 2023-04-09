#include<iostream>
using namespace std;
// 2 4 1 3 5 
int inVersion(int a[],int n)
{
    int res =0;
    for(int i=0;i<(n-1);i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                res++;
            }
             
        }
    }
    return res;

}
int main()
{
    int a[]={2,4,1,3,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout << " Number of inversions are "
         << inVersion(a, n);;
    return 0;
    
   
}