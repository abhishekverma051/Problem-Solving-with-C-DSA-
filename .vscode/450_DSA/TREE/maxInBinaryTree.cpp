#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int k)
    {
        data = k;
        left = right = NULL;
    }
};
int findMinimum(node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    int res = root->data;
    int lst = findMinimum(root->left);
    int rst = findMinimum(root->right);
    if (lst < rst)
        res = lst;
    if (rst < lst)
        res = rst;
    return res;
}
int maxFind(node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    int res = root->data;
    int leftside = maxFind(root->left);
    int rightside = maxFind(root->right);
    if (leftside > rightside)
        res = leftside;
    if (rightside > leftside)
        res = rightside;

    return res;
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(6);
    root->left->left->right = new node(7);
    root->right->left->left = new node(8);
    root->right->left->right = new node(9);
    root->right->right = new node(6);
    cout << " the maximum number from the given tree is : " << maxFind(root);
    cout << endl
         << " the minimum number from the given tree is : " << findMinimum(root);
    return 0;
}