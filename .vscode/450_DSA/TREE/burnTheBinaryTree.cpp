#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
node* newNode(int k)
{
    node* curr = new node;
    curr->data = k;
    curr->left = curr->right = NULL;
}
int res = 0;
int burnTree(node* root,int leaf,int dist)
{
    if(root == NULL)
    {
        return 0;
    }
    if(root->data == leaf)
    {
        dist = 0;
        return 1;
    }
    int ldist = -1;
    int rdist = -1;
    int lh = burnTree(root->left,leaf,ldist);
    int rh = burnTree(root->right,leaf,rdist);
    if(ldist != -1)
    {
        dist = ldist + 1;
        res = max(res,dist+rh);
    }
    else if(rdist !=-1)
    {
        dist = rdist + 1;
        res = max(res,dist+lh);
    }
    return max(lh,rh)+1;
}
int main()
{
    node* root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
    root->left->left = newNode(40);
    root->left->right = newNode(50);
    // root->right->right = newNode(60);
    root->left->left->left = newNode(40);
    root->left->left->left->left = newNode(60);
    root->left->left->left->left->left = newNode(70); 
    int dist = 1;
    cout << burnTree(root,50,dist);
    return 0;
}