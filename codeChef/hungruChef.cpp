#include<bits/stdc++.h>
using namespace std;
int main(){
    int tanu;
    cin>>tanu;
    while(tanu--){
        int abhu,bhanu,chanu,danu;
        cin>>abhu>>bhanu>>chanu>>danu;
        if(danu/bhanu>=chanu){
         cout<<"0 "<<chanu<<endl;
        }else if(danu/abhu<chanu){
         cout<<"-1"<<endl;
        }else{
         int knku = (danu-(bhanu*chanu))/(abhu-bhanu);
         int op = bhanu*chanu;
         int anu=abhu-bhanu;
         if(danu-op% anu != 0)
         knku = knku + 1;
         cout<<knku<<" "<<chanu-knku<<endl;
         
        }

    }
    return 0;
}