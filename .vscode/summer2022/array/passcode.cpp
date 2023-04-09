#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int ask = 10;
        if(a>=ask && b>=ask && c>=ask)
        {
            int sum = a+b+c;
            if(sum>=100){
                cout<<"PASS"<<endl;
            }else{
                cout<<"FAIL"<<endl;
            }
        }
        else{
            cout<<"FAIL"<<endl;
        }
    }
    return 0;
}
