#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int arr[n]={100,2,3,422,4,2,0};
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout <<endl;
    sort(arr,arr+n);
    int min = arr[0];
    int max= arr[n-1];
    cout<<min << " " << max << endl;
    return 0;
}