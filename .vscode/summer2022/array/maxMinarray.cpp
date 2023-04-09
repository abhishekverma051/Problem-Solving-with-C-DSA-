#include<bits/stdc++.h>
using namespace std;
class MyClass{
    public:
    int findSum(int arr[],int n){
        sort(arr,arr+n);
        int min = arr[0];
        int max = arr[n-1];
        int sum = min + max;
        return sum;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        MyClass obj;
      
        int s = obj.findSum(arr,n);
         cout<<s;
    }
    return 0;

}