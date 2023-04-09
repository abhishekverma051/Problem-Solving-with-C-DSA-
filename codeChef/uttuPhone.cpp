#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int repair,change;
        cin>>repair>>change;
        if(repair<change){
            cout<<"REPAIR"<<endl;
        }else if(repair==change){
            cout<<"ANY"<<endl;
        }else if(repair>change){
            cout<<"NEW PHONE"<<endl;
        }
    }
    return 0;
}