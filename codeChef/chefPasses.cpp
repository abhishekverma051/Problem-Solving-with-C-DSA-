#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int nanu,kkanu;
        cin>>nanu>>kkanu;
        if(nanu<kkanu){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define int long long
using namespace std;

void kanu()
{
    int nanu;
    cin >> nanu;
    string shanu;
    cin >> shanu;
    int zanu = 0, oanu = 0;
    for (auto i : shanu)
    {
        if (i == '0')
            zanu++;
        else
            oanu++;
    }
    string ranu;
    if (oanu > zanu)
    {
        for (int i = 0; i < oanu; i++)
        {
            ranu += '1';
        }
    }
    else
    {
        for (int i = 0; i < zanu; i++)
        {
            ranu += '0';
        }
    }
    cout << ranu << endl;
}

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fastio int tanu;

    cin >> tanu;
    while (tanu--)
    {
        kanu();
    }
}

#include <bits/stdc++.h>
using namespace std;

void kanu()
{
    int aanu, banu, canu, danu;
    cin >> aanu >> banu;
    int  shanu[aanu];
    set<pair<int, int>, greater<pair<int, int>>> panu, qanu;
    vector<int> yanu(aanu + 1, aanu);
    for (int i = 0; i < banu; i++)
    {
        cin >> canu >> danu;
        if (yanu[canu] > danu)
        {
            yanu[canu] = danu;
        }
    }
    for (int i = 1; i <= aanu; i++)
    {
        panu.insert({yanu[i], i});
        int uanu = -1;
    }
    for (int i = aanu - 1; i >= 0; i--)
    {

        while (!panu.empty() && panu.begin()->first == i + 1)
        {
            int vanu = panu.begin()->second;
            panu.erase(panu.begin());
            qanu.insert({vanu, yanu[vanu]});
        }
        if (qanu.empty())
        {
            cout << -1 << endl;
            return;
        }
        int vanu = qanu.begin()->first;
        qanu.erase(qanu.begin());
        shanu[i] = vanu;
    }
    for (int i = 0; i < aanu; i++)
    {
        cout << shanu[i] << " ";
    }
    cout << endl;
}
int main()
{
    
    int tanu;
    cin >> tanu;
    while(t--){
        kanu();
    }
    return 0;
}