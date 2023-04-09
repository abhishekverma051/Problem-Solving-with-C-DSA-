#include<iostream>
using namespace std;
int largestEle(int arr[],int n)
{
    int res = 0;
    for(int i=1; i<n; i++)
    {
        if(arr[i] >  arr[res])
        {
            res = i;
        }
    }
            cout << res;
}
int main()
{
    int arr[] = {113,12,13,14,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    largestEle(arr,n);
    return 0;

}