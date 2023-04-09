#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node *newNode(int k)
{
    node* curr = new node;
    curr->data=k;
    curr->left = curr->right = NULL;
}
// to find floow
node *floor(node *root,int x)
{
    node *res = NULL;
    while(root != NULL)
    {
        if(root->data == x)
        {
            return root;
        }
        else if(root->data >x)
        {
            root = root->left;
        }
        else
        {
            res = root;
            root = root->right;
        }
    }
    return res;
}
int main()
{
    node *root = newNode(10);
    root->left = newNode(30);
    root->right=newNode(70);
    root->left->left=newNode(20);
    root->left->right=newNode(30);
    root->right->left=newNode(60);
    root->right->right= newNode(80);
    root->right->left->left=newNode(55);
    root->right->left->right=newNode(65);
    cout << floor(root,58);
    return 0;
}