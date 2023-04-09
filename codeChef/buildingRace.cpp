#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int chefFloor,chefinaFloor,chefSpeed,chefinaSpeed;
        cin>>chefFloor>>chefinaFloor>>chefSpeed>>chefinaSpeed;
        if(chefSpeed>chefinaSpeed){
            cout<<"Chef"<<endl;
        }else if(chefSpeed<chefinaSpeed){
           
            cout<<"Chefina"<<endl;
        }
        else{
            cout << "Both" << endl;
        }
    }
    return 0;
}