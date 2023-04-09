// C++ program for insertion sort
#include <bits/stdc++.h>
using namespace std;


void insertionSort(int arr[], int n)
{
	int i, c, j;
	for (i = 1; i < n; i++)
	{
		c = arr[i];
		j = i - 1;

		
		while (j >= 0 && arr[j] > c)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = c;
	}
}


void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main()
{
	int arr[] = {0,1,2,0,1,2};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"elements before insertion sort"<<endl;
	printArray(arr, n);
	insertionSort(arr, n);
	cout<<"elements after insertion sort "<<endl;
	printArray(arr, n);
	

	return 0;
}