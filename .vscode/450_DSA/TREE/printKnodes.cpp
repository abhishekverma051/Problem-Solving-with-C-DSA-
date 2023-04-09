#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
    node(int k)
    {
        data = k;
        left = right = NULL;
    }
};
void printDist(node* root,int k)
{
    if(root == NULL)
    {
        cout <<"null";
    }
    if(k == 0)
    {
        cout << (root->data) << " ";
    }
    else
    {
        printDist(root->left,k-1);
        printDist(root->right,k-1);
    }
}
int inOrder(node* root)
{
    if(root == NULL)
    {
        return -1;
    }
    else
    {
        inOrder(root->left);
        cout << (root->data) << " ";
        inOrder(root->right);
    }
}
int main()
{
    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->left = new node(71);
    root->right->right = new node(60);
    inOrder(root);
    int k = 2;
    cout << endl;
    printDist(root,k);
}