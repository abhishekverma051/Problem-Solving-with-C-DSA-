#include<bits/stdc++.h>
using namespace std;
// naive approach
// int longestEvenOdd(int arr[],int n)
// {
//     int res = 1;
//     for(int i=0;i<n;i++)
//     {
//         int curr =1;
//         for(int j=i+1;j<n;j++)
//         {
//             if((arr[j]%2==0 && arr[j-1]%2 !=0)||(arr[j]%2!=0 && arr[j-1]%2 == 2)) // even odd condition4
//                 curr++;
//             else
//                 break;
//         }
//         res = max(res,curr);
//     }
//     return res;
// }
// efficient approach
int ret(int arr[],int n)
{
    int res =0;
    int curr =1;
    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2 != 0)||(arr[i-1]%2==0 && arr[i]%2 != 0))
        {
            curr++;
            res = max(res,curr);
        }
        else
        {
            curr == 1;
        }
    }
    return res;
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << ret(arr,n);
    return 0;
}