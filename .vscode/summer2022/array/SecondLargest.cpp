#include<bits/stdc++.h>
using namespace std;
int secondLargest(int arr[],int n){
    int res = -1;
    int largest = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest])
        {
            if(res == -1 || arr[i] > arr[largest])
            {
                res = i;
            }
        }
    }
    cout << res ;
}
int main(){
    int arr[]={12,4,23,55,62468,89};
    int n = sizeof(arr)/sizeof(arr[0]);
    secondLargest(arr,n);
    return 0;
    
}
