#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ppp;
        cin>>ppp;
        if(ppp%100==0){
            cout<<(ppp/100)<<endl;
        }
        else if(ppp%100 <= 10 && ((ppp%100)+(ppp/100)<=10)){
            cout<<((ppp/100)+ppp%100)<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}

gcloud compute firewall-rules create permit-tcp-rule-700 \
       --allow tcp:80 \
       --network nucleus-vpc