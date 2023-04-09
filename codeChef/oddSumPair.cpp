#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int kanu,manu,tanu;
        cin>>kanu>>manu>>tanu;
        if((kanu+manu)&1 || (manu+tanu)&1 || (tanu+kanu)&1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}