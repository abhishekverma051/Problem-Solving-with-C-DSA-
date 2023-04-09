#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n,arr=0,brr=0;
       cin>>n;
       int ar[n];
       for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]==1){
            arr=i;
        }
        if(ar[i]==n){
            brr=i;
        }
       }
       if(arr<brr){
        cout<<n-1+arr-brr<<endl;
       }else{
        cout<<arr-brr+n-1<<endl;
       }
    }
    return 0;
    
}