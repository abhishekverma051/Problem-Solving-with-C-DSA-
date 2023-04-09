#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        int a[num];
        int c=0;int s=0;
        for(int i=0;i<num;i++){
            cin>>a[i];
            s+=a[i];
        }
        sort(a,a+num);
        if(a[0]==1){
            cout<<"CHEF"<<endl;
            continue;
        }
        if(s%2==0){
            cout<<"CHEFINA"<<endl;
        }else{
            cout<<"CHEF"<<endl;
        }
    }
    return 0;
}