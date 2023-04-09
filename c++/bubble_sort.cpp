//Write a program to implement bubble sort.Given the numbers 7, 1, 4, 12, 67, 33, and45. How many swaps will be performed to sort these numbers using the bubble sort ?
#include<iostream>
using namespace std;

                                                                                                                                                                    using namespace std;
int main()
{
    int n = 6; //
    
    int arr[n];
    cout<<"enter the number of elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int iteration=1;
    while(iteration<n-1)
    {
    for(int i=0; i<iteration-1; i++) // 1 2 3
    {
        if(arr[i]>arr[i+1]) // 11 2   11 3
        {
           int temp = arr[i];// 11 11
           arr[i]=arr[i+1];//2 at pos 1  3 at pos 2

           arr[i+1]= temp;  // 11 at pos 2 11
        }
    } // 2 11 3 55 6
    // 2 3 11 55 6
    // 2 3 11 55 6
    // 2 3 11 6 55
   iteration++; //2
      //3
    }
 cout<<"after bubble sort"<<endl;
 for(int i=0;i<n;i++) 
 {
     cout<<arr[i]<<endl;
 }
}