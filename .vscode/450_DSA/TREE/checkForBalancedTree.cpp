// task is to check wether the tre is height balanced or not
#include <bits/stdc++.h>
#include<cmath>
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
// naive method O(n2) approach
int height(node *node)
{
   
    if (node == NULL)
        return 0;

   
    return 1 + max(height(node->left),
                   height(node->right));
}
bool checkForBlanacedTree(node *root)
{
    if (root == NULL)
    {
        return 1;
    }
    int leftheight = height(root->left);
    int rightheight = height(root->right);
    return (abs(leftheight - rightheight) <= 1 && checkForBlanacedTree(root->left) && checkForBlanacedTree(root->right));
}
// 0(n) approach
int isbalanced(node* root)
{
    if(root ==  NULL)
    {
        return 1;
    }
    int leftH = isbalanced(root->left);
    if(leftH == -1)
    {
        return -1;
    }
    int rightH = isbalanced(root->right);
    if(rightH == -1)
    {   
        return -1;
    }
    if(abs(leftH - rightH) > 1)
    {
        return -1;
    }
    else
    {
        return max(leftH,rightH)+1;
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(5);
    root->right = new node(30);
    root->right->left = new node(15);
    root->right->right = new node(20);
    if(checkForBlanacedTree(root))
    {
        cout << "tree is balanced" << endl;
    }
    else
    {
        cout << "tree is not balanced" << endl;
    }
    cout << isbalanced(root);
}