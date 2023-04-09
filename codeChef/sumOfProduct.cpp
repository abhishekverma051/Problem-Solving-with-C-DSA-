#include<bits/stdc++.h>
using namespace std;
#define nn long long
void kanu(){
    int nanu;
    cin>>nanu;
    nn aap=0,bjp=0;
    int arrey[nanu];
    for(int i=0;i<nanu;i++){
        cin>>arrey[i];
        if(arrey[i]==1) bjp++;
        else{
            aap+=(bjp*(bjp+1)/2);
            bjp=0;
        }
    }
    aap+=(bjp*(bjp+1)/2);
    cout<<aap<<endl;
}
int main()
{
    int tanu;
    cin>>tanu;
    while(tanu--){
        kanu();
    }
    return 0;
}