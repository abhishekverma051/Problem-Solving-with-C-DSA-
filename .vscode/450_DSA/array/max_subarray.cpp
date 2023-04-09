// C++ Program to find the maximum for
// each and every contiguous subarray of size k.
#include <bits/stdc++.h>
using namespace std;

// Method to find the maximum for each
// and every contiguous subarray of size k.
int printKMax(int arr[], int n, int k)
{
    int i,j=0;
   int sum = 0;
   int mx = INT_MIN;
   while(j<n){
    sum += arr[j];
    if(j-i+1<k){
        j++;
    }else if(j-i+1==k){
        mx = max(sum,mx);
        sum-=arr[j];
        j++;
        i++;
    }
   }
   return mx;
   
}

// Driver code
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << printKMax(arr, n, k);
    return 0;
}

// This code is contributed by rathbhupendra

