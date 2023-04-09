#include<bits/stdc++.h>
using namespace std;
int smallestSum(int arr[],int n,int x){
    int minLength = n + 1;
    for(int i=0;i<n;i++){
        int curr = arr[i];
        if(curr>x){
            return 1;
        }
        for(int j=i+1;j<n;j++){
            curr += arr[j];
            if(curr > x && (j - i +1)<minLength){
                minLength = (j-i+1);
            }
        }
    }
    return minLength;
}
int main(){
    int arr[] = {1, 11, 100, 1, 0, 200, 3, 2, 1, 250};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
    int x;
    cin>>x;
    cout<< smallestSum(arr,n,x);
    return 0;
}