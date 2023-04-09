#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int interior1 = x1+y1;
        int interior2 = x2+y2;
        if(interior1<interior2)
        {
            cout<<interior1<<endl;
        }else{
            cout<<interior2<<endl;
        }
    }
    return 0;
}

