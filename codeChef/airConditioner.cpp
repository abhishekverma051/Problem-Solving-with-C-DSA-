#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int alice, bob,charlie;
        cin>>alice>>bob>>charlie;
        int segs = max(alice,charlie);
        if(segs<=bob){
            cout<< "Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}