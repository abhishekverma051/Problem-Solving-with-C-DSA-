#include <iostream>
using namespace std;
#define MAX 5
int main()
{
    int arr[50];
    int i;
    int num;  // number you want to enter
    int pos;  // at which position you want to delt
    int size; // for taking size of array
    cout << "enter the size of array : " << endl;
    cin >> size;
    cout << "enter the number of elements: " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    cout << "enter the position at which you want to delete the element : " << endl;
    cin >> pos;
    for (i = pos - 1; i >= size - 1; i++)
    {
        arr[i] = arr[i+1];
    }
    
    size--;
    cout << "after insertion : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "after deletion " << arr[i] << endl;
    }
    return 0;
}