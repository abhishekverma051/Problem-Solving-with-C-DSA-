#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char str[100];
        cin >> str;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='A'){
                cout<<"T";
            }else if(str[i]=='T'){
                cout<<"A";
            }else if(str[i]=='C'){
                cout<<"G";
            }
            else if(str[i]=='G'){
                cout<<"C";
            }

        }
        cout << endl;
    }
    return 0;
}