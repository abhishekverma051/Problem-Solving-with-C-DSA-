#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node *newNode(int k)
{
    node *curr = new node;
    curr->data = k;
    curr->left = curr->left = NULL;
}
int EMPTY = -1;
void serialization(node *root, vector<int> &arr)
{
    if (root == NULL)
    {
        arr.push_back(EMPTY);
        return;
    }
    arr.push_back(root->data);
    serialization(root->left, arr);
    serialization(root->right, arr);
}

int main()
{
    vector<int> arr;
    node *root = newNode(10);
    root->left = newNode(20);

    cout << serialization(root,arr);
    return 0;
}
