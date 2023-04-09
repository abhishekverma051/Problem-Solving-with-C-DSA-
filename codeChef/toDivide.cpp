#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int tanu;
    cin>>tanu;
    while(tanu--){
        ll anu, bhanu, nanu;
        cin >> anu >> bhanu >> nanu;
        int ab = anu % bhanu;
        if (ab == 0)
        {
            cout << (-1) << endl;
            //return;
        }
        ll hope = nanu;
        if (hope % anu != 0)
        {
            hope = nanu + anu - (hope % anu);
        }
        while (!(hope % anu == 0 && hope % bhanu != 0))
        {
            hope = hope + anu;
        }
        cout << hope << endl;
    }
    return 0;
}