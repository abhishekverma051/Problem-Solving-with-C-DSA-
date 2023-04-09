// C++ program to merge two sorted arrays/
#include<iostream>
using namespace std;
 
void mergeArrays(int arr1[],int arr2[],int n1,int n2)
{
    int i=0;
    int j=0;
    while(i<n1 && j<n2)
    {if(arr1[i]<=arr2[j])
     {
         cout<<arr1[i];
         i++;
     }
     else
     {
         cout<<arr2[j];
         j++;
     }

    }
    while(i<n1)
    {
        cout<<arr1[i];
        i++;
    }
     while(j<n2)
     {
         cout<<arr2[j];
         j++;
     }
}
// Driver code
int main()
{
    int arr1[] = {1, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
 
    int arr2[] = {2, 4, 6, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
   cout << "Array after merging" <<endl;
  //  int arr3[n1+n2];
    mergeArrays(arr1, arr2, n1, n2 );
 
  
  //  for (int i=0; i < n1+n2; i++)
   //     cout << arr3[i] << " ";
 
    return 0;
}