#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main(){
    int tanu;
    cin>>tanu;
    while(tanu--){
        int nanu,mamu;
        cin>>nanu>>mamu;
        int abhi,kanu;
        if(mamu<2*nanu){
            cout<<mamu<<" "<<mamu<<endl;
        }else if(mamu>=2*nanu && mamu%nanu == 0){
            cout<<mamu<<" "<<nanu<<endl;
        }else{
           
            int cv = mamu/2;
            if(mamu>=2*nanu){
                cv = 2*nanu;
            }
            int a,b;
             int sum = a+b;
            int ondu = INT_MIN;
            for(int i=nanu;i<=cv;i++){
                int kan = mamu/i; // d
                int c = (i*kan)-i;
                if(c > ondu){
                    abhi= i;
                    kanu=(i*kan);
                    ondu=c;
                }
            }
            
            cout<<abhi<<" "<<kanu<<endl;
        }
    }
    return 0;
}