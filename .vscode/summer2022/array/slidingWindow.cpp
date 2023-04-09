// max in consecutive subarray
#include<bits/stdc++.h>
using namespace std;
// naive
int maxS(int arr[],int n,int k)
{
    int maxsum = INT16_MIN;
    for (int i = 0; i + k - 1 < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < k; j++)
        {
            sum += arr[i + j];
            maxsum = max(sum, maxsum);
        }
    }
    return maxsum;
}
// by sliding window
int slid(int arr[],int n,int k)
{
    int curr_summ = 0;
    for(int i=0;i<k;i++)
    {
        curr_summ += arr[i];

    }
    int max_sum = curr_summ;
    for(int i=k;i<n;i++)
    {
        curr_summ = curr_summ + (arr[i]-arr[i-k]);
        max_sum = max(max_sum,curr_summ);
    }
    return max_sum;
}
int main()
{
    int arr[]={1,8,30,-5,20,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
   
    cout << maxS(arr,n,k);
    cout << endl << slid(arr,n,k);
    return 0;
    


}