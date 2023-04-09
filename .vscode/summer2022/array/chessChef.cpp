#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int chefHours;
        cin >> chefHours;
        int game = chefHours * 60;
        int totalGames = game / 20;
        cout<<totalGames<<endl;
    }
    return 0;
}