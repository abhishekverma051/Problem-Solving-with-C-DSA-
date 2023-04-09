#include<iostream>
using namespace std;
int main()
{
    int n,r;
    cout<<"Enter value: "<<endl;
    cin>>n; //123
    r=0;
    while(n>0)
    {
      //  r=n%10;
        n=n/10;
        ++r;
       
        
    } 
    cout<<"number of elements are: "r;
    return 0;
}