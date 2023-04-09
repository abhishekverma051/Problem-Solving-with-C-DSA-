#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            cout<<arr[i];
            i++;
            break;
        }
    }
    return 0;
}

void knku()
{
    ll anu, bhanu, nanu;
    cin >> anu >> bhanu >> nanu;
    int ab = anu % bhanu;
    if (ab == 0)
    {
        cout << (-1) << endl;
        return;
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
}