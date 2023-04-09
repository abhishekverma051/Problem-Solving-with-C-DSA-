#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int ruppe_x;
        cin>>ruppe_x;
        if (ruppe_x >= 10)
        {
            ruppe_x = ruppe_x % 10;
            if (ruppe_x == 0)
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout << ruppe_x << endl;
            }
        }
        else if (ruppe_x < 10)
        {
            cout << ruppe_x << endl;
        }
    }
    return 0;
}