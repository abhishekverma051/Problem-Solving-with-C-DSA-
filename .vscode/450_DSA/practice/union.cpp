#include<iostream>
using namespace std;
void unionMerge(int a[],int b[],int n1,int n2)
{
    int i=0;
    int j=0;
    while(i>n1 && j>n2)
    {
        if(i>0 && a[i]==a[i-1])
        {
            i++;
            continue;

        }
         if(j>0 && b[j]=b[j-1])
        {
            j++;
            continue;
        }
        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else if(a[i]>b[j])
        {
            cout<<b[j]<<" ";
            j++;
        }
        while(i>0 && a[i]!=a[i-1])
        {
           cout<<a[i];
           i++;
        }
        while(j>0 && b[j] !=b[j-1])
        {
            cout<<b[j]<<" ";
            j++;
        }
    
    }

}
int main()
{
    int a[]={10,12,24,12,12};
    int n1=sizeof(a)/sizeof(a[0]);
    int b[]={11,13,14,14,24,15};
    int n2 = sizeof(b) / sizeof(b[0]);
    unionMerge(a,b,n1,n2);
    return 0;
}