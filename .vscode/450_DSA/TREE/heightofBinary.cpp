// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int key;
//     node *left;
//     node *right;
//     node(int k)
//     {
//         key = k;
//         left = right = NULL;
//     }
// };

// // different traversals
// void inorder(node *root)
// {
//     if (root != NULL)
//     {
//         inorder(root->left);
//         cout << (root->key) << " ";
//         inorder(root->right);
//     }
// }

// // heigth of a binary tree
// int maxDepth(node *root)
// {
//     if (root == NULL)
//         return -1;
//     else
//     {
//         /* compute the depth of each subtree */
//         int lDepth = maxDepth(root->left);
//         int rDepth = maxDepth(root->right);

//         /* use the larger one */
//         if (lDepth > rDepth)
//             return (lDepth + 1);
//         else
//             return (rDepth + 1);
//     }
// }
// int height(node* root)
// {
//     if(root == NULL)
//     {
//         return -1;
//     }
//     else
//     {
//         return max(height(root->left),height(root->right)) + 1;
//     }
// }
// int main()
// {
//     node *root = new node(10);
//     root->left = new node(40);
//     root->right = new node(50);
//   //  root->left->left = new node(70);
//     root->right->left = new node(60);
//     root->right->right = new node(80);

//     inorder(root);
//     cout << endl;
//     cout <<  height(root);
   
// }

// A C++ program to convert min Heap to max Heap
#include <bits/stdc++.h>
using namespace std;

// to heapify a subtree with root at given index
void MaxHeapify(int arr[], int i, int n)
{
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest = i;
    if (l < n && arr[l] > arr[i])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        MaxHeapify(arr, largest, n);
    }
}

// This function basically builds max heap
void convertMaxHeap(int arr[], int n)
{
    // Start from bottommost and rightmost
    // internal mode and heapify all internal
    // modes in bottom up way
    for (int i = (n - 2) / 2; i >= 0; --i)
        MaxHeapify(arr, i, n);
}

// A utility function to print a given array
// of given size
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
}

// Driver program to test above functions
int main()
{
    // array representing Min Heap
    int arr[] = {12,14,56,78,7,67,23,56,18};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Min Heap array : ");
    printArray(arr, n);

    convertMaxHeap(arr, n);

    printf("\nMax Heap array : ");
    printArray(arr, n);

    return 0;
}
