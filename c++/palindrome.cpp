#include<iostream>
using namespace std;
int main()
{
    int n,temp,rev=0,r;
    cout<<"enter the number of elements : ";
    cin>>n;
    temp=n;
    while(n != 0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;


    }
    cout<<"the reverse of the  number is : "<<rev<<endl;
    if(n == rev)
    {
        cout<<"palindrome"<<endl;

    }
    else
    cout<<"fuckoff";
    return 0;
}