#include<bits/stdc++.h>
using namespace std;
// efficient solution
int normalMaxFunction(int arr[],int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for(int i=1;i<n;i++)
    {
        maxEnding = max(arr[i],maxEnding+arr[i]);
        res = max(res,maxEnding);
    }
    return res;
}
int overAllMaxSum(int arr[],int n)
{
    int maxNormal = normalMaxFunction(arr,n);
    if(maxNormal < 0)
        return maxNormal;
    int arr_s = 0;
    for(int i=0;i<n;i++)
    {
        arr_s += arr[i];
        arr[i] = -arr[i];
    }
    int max_c = arr_s+ normalMaxFunction(arr,n);
    return max(maxNormal,max_c);
}
// naive solution
int retCircular(int arr[],int n)
{
    int res = arr[0];
    for(int i=0;i<n;i++)
    {
        int curr_max = arr[i];
        int curr_sum = arr[i];
        for(int j=1;j<n;j++)
        {
            int index = (i+j)%n;
            curr_sum += arr[index];
            curr_max = max(curr_sum,curr_max);
        }
        res = max(res,curr_max);
    }
    return res;
}
int main()
{
    int arr[]={5,-2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << retCircular(arr,n);
    cout << overAllMaxSum(arr,n);
    return 0;
}