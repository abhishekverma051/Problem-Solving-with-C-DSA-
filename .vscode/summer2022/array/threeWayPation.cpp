#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size: "<<" ";
    cin>>n;
    int arr[n];
    cout<<"ENter array values";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a,b;
    int mid,low=0;
    int hight = n-1;
    while(mid>hight){
        if(mid<a){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }else if(arr[mid]>b){
            swap(arr[mid],arr[hight]);
            hight--;
        }else{
            mid++;
        }
    }
    return 0;
}