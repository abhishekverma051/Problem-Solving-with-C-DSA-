#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int arr[n]={5,4,3,2,1};
    sort(arr,arr+n);
    long long  sum  = 0;
    for(int i=0;i<n;i++){
        sum = (sum + (arr[i] * i)) % 1000000007;
        cout <<  sum;
    }
    return 0;
}