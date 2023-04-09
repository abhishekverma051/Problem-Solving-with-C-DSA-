#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int *ptr;
    ptr = &a;
    cout<<&a<<endl; // adress
    cout<<*ptr<<endl; 
    // to acess any pointer value that we have assigned then we ahave to just use the *ptr anf thenthe value is dassigned 
    cout<<a<<endl;
    cout<<ptr; // adress

 int arr[]={111,12,13};
 int *apr;
 apr=arr<<endl;
 cout<<arr<<endl;
 cout<<apr<<endl;
 cout<<*apr;
}