#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin >> N;
        int sum;
        cin >>sum;
        int arr[N];
        for(int i=0;i<N;i++){
            cin >> arr[i];
        }
        bool isSum = true;
        for(int i=0;i<N;i++){
            if(arr[i]>arr[i+1]){
                if(arr[i]+arr[i+1]<=sum){
                    swap(arr[i],arr[i+1]);
                }
                else{
                    isSum = false;
                    break;
                }
            }
        }
        if(isSum==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}