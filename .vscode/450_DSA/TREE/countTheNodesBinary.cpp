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
    curr->left = curr->right = NULL;
}
// naive approach
int coundNodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
        return 1 + coundNodes(root->left) + coundNodes(root->right);
}
// efficient approach
// we just count the height of left most subtree and right most subtreee is it is equal 
//then it means the tree is a perfect binary tree and we just use the forlmjua 2 raise to power no. of levels - 1
int countNodes(node *root)
{
    int lh = 0;
    int rh = 0;
    node *curr = root;
    while (curr != NULL)
    {
        lh++;
        curr = curr->left;
    }
    curr = root;
    while (curr != NULL)
    {
        rh++;
        curr = curr->right;
    }
    if (lh == rh)
    {
        return pow(2, lh) - 1;
    }
    else
    {
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
}
int main()
{
    node *root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
    root->left->left = newNode(40);
    root->left->right = newNode(50);
    root->right->left = newNode(60);
    root->right->right = newNode(70);
    root->left->left->left = newNode(80);
    root->left->left->right = newNode(90);
    root->left->right->left = newNode(100);
    root->left->right->right = newNode(110);
    root->right->left->left = newNode(120);
    cout << coundNodes(root);
    cout << endl;
    cout << countNodes(root);
    return 0;
}