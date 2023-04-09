#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    int arr[n]={0,3,1,2};
    sort(arr,arr+n);
    for(int i : arr){
        cout<<arr[i]<<" ";
    }
    for(int i = 0;i<n;i++){
        for(int j=1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i];
            }else{
                conti
            }
        }
    }
    return 0;
}