#include <bits/stdc++.h>
using namespace std;
struct Pair
{
    int min;
    ;
    int max;
};
Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;
    int i;
    /// when there is only one value in the array
    if (n == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }
    // when there are more than one values in the array
    //  then initialize according to their value
    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    //llop for valuex
    for (i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)
        {
            minmax.max = arr[i];
        }
        else if (arr[i] < minmax.min)
        {
            minmax.min = arr[i];
        }
    return minmax;
    }
}
int main()
{
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int n = sizeof(arr) / sizeof(arr[0]);
    struct Pair minmax = getMinMax(arr, n);
    cout << "Minimum element is: " << minmax.min << endl;
    cout << "max element is: " << minmax.max;
    return 0;
}