#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    char firstRep(string s){
        for(int i=0;i<s.length()-1;i++){
            char ch = s.at(i);
            for(int j=i+1;j<s.length()-1;j++){
                if(s.at(j)==ch){
                    return ch;
                }
            }
        }
        return'#';
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        Solution ob;
        char res = ob.firstRep(s);
        if(res=='#'){
            cout<<-1<<endl;
        }else{
            cout<<res<<endl;
        }
    
    }
}