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
int size(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
        return (size(root->left) + 1 + size(root->right));

}
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << (root->data) << " ";
        inorder(root->right);
    }
}
int main()
{
    node *root = new node(10);
    root->left = new node(80);
    root->right = new node(70);
    root->left->left = new node(40);
    root->left->right = new node(30);
    inorder(root);
    cout << size(root);
}




















