#include<bits/stdc++.h>
using namespace std;
void printMax(int arr[],int n,int k){
    int max;
    for(int i=0;i<=n-k;i++){
        max=arr[i];
        for(int j=1;j<k;j++){
            if(arr[i+j]>max){
                max = arr[i+j];
            }
        }
        cout<<max<<" ";
    }
}
int main(){
    int arr[]={1,2,3,1,4,5,2,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter the value of K"<<endl;
    cin>>k;
    printMax(arr,n,k);
    return 0;
}