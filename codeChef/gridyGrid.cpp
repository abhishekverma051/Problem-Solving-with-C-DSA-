#include<bits/stdc++.h>
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
    int nanu,manu,abhu,bhau;
    cin>>nanu>>manu>>abhu>>bhau;
    nanu += manu-2+abhu;
    int ab=7;
    abhu += bhau;
    int ax = nanu%2;
    int bx = abhu%2;
    if(ax==1 && bx ==0){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
    }
    return 0;
}