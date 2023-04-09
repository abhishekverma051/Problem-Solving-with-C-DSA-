#include<iostream>
using namespace std;
void interSection(int a[],int b[],int n1,int n2)
{
    // naive solution
    // in this code we wre judt taking common vlues 
    for(int i=0; i<n1; i++)
    {
        if(i>0 && a[i]==a[i+1])
        {
            continue;
        }
        for(int j=0; j<n2; j++)
        {
            if(a[i] == b[i])
            {
                cout<<a[i];
                break;
            }
        }
    
    
    }

}
int main()
{
    int a[]={1,20,20,40,60};
    int n1 = sizeof(a)/sizeof(a[0]);
    int b[]={2,20,20,20};
    
    int n2 = sizeof(b)/sizeof(b[0]);
    interSection(a,b,n1,n2);
    return 0;

}