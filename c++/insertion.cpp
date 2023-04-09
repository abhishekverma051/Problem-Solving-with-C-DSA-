#include<iostream>
using namespace std;
#define MAX 5
int main()
{
 int arr[50];
 int i;
 int num; // number you want to enter
 int pos; // at which position you want to enter
 int size; // for taking size of array
cout<<"enter the size of array : "<<endl;
cin>>size;
cout<<"enter the number of elements: "<<endl;
for(i=0;i<size;i++)
{
    cin>>arr[i];
}
cout<<"enter the number you want to enter : "<<endl;
cin>>num;
cout<<"enter the position at which you want to enter the element : "<<endl;
cin>>pos;
for(i=size-1;i>=pos-1;i--)
{
    arr[i+1]=arr[i];
}
arr[pos-1]=num;
size++;
  cout<<"after insertion : "<<endl;
  for(int i=0l;i<size;i++)
  {
      cout<<"after insertion " << arr[i]<<endl;
  }
  cout<<arr[5];
 return 0;
}