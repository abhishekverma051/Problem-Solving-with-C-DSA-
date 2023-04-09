#include<bits/stdc++.h>
using namespace std;
// naive approach o^n2
int maxConsiOnes(int arr[],int n)
{
    int res = 0;
    for(int i=0; i<n; i++)
    {
        int curr = 0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==1)
                curr++;
            else
                break;
        }
        res = max(res,curr);
    }
    return res;
}
// efficient solution
int maxa(int arr[],int n)
{
    int res,curr = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            curr = 0;
        }
        else
        {
            curr++;
            res = max(res,curr);
        }
    }
    return res;
}
int main()
{
    int arr[] = {1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << maxConsiOnes(arr,n);
    cout << endl << maxa(arr,n);
    return 0;


}
