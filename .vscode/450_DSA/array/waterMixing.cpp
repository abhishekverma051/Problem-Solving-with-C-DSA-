#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,X,Y;
        cin>>A>>B>>X>>Y;
        if(A<B){
            int hotT = A-B;
            if(hotT<=X){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else if(A>B){
            int coldT = A-B;
            if(coldT<=Y){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}