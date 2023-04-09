// it means that sum of left and right is always equal to its parent's value
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
int maxLevel = 0;
bool childernSumProperty(node *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    int sum1 = 0;
    int sum2 = 0;
    if (root->left != NULL)
    {
        sum1 += root->left->data;
    }
    if (root->right != NULL)
    {
        sum2 += root->right->data;
    }
     if(root->data == sum1 + sum2 && childernSumProperty(root->left) && childernSumProperty(root->right));
     {
         return true;
     }
}
int main()
{
    node *root = new node(20);
    root->left = new node(8);
    root->right = new node(12);
    root->right->left = new node(3);
    root->right->right = new node(4);
    cout << childernSumProperty(root);

    return 0;
}