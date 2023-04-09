#include<bits/stdc++.h>
using namespace std;
int main(){
    int testa;
    cin>>testa;
    while(testa--){
       int num;
       cin>>num;
       int arr[num];
       int k=0;
       int maxInt = INT_MAX;
     
       for(int i=0;i<num;i++){
            cin>>arr[i];
            if(arr[i]&1){
                k++;
            }
            if(maxInt>=arr[i]){
                maxInt=arr[i];
            }
       }
       if(maxInt==1){
        cout<<"CHEF"<<endl;
       }
       else if(k%2==1){
        cout<<"CHEFINA"<<endl;
       }else{
        cout<<"CHEF"<<endl;
       }
    }
    return 0;
}