#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int friends,slices;
        cin>>friends>>slices;
        int t = friends * slices;
        if(t%4==0){
            t=t/4;
        }else{
            t=t/4+1;
            
        }cout<<t<<endl;
    }
    return 0;
    
}