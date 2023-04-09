#include <iostream>
using namespace std;
void merge(int a[], int lb, int mid, int ub)
{
    int b[ub];
    int i = lb, j = mid + 1, k = lb;
    while (i <= mid && j <= ub)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= ub)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }
    for (k = lb; k <= ub; k++)
        a[k] = b[k];
}

void mergeSort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (ub + lb) / 2;
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}
int main()
{
    cout << "Enter the number of elements in array: ";
    int n, a;
    cin >> n;
    int arr[n];
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);
    cout << "After Short:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}