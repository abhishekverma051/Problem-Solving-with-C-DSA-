// lca efficient solution idea is that here we will do only a single traversal
#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
node* newNode(int k)
{
    node *curr = new node;
    curr->data = k;
    curr->left = curr->right = NULL;
    return curr;
}
struct node* findlca(node* root,int n1,int n2)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(root->data == n1 || root->data ==n2)
    return root;
    node* lh = findlca(root->left,n1 ,n2);
    node*  rh = findlca(root->right,n1,n2);
    if(lh && rh)
    return root;
    return (lh != NULL)? lh:rh;
}
int main()
{
    // Let us create binary tree given in the above example
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    cout << "LCA(4, 5) = " << findlca(root, 4, 5)->data;
    cout << endl;
    cout << "LCA(4, 6) = " << findlca(root, 4, 6)->data;
    cout << endl;
    cout << "LCA(3, 4) = " << findlca(root, 3, 4)->data;
    cout << endl;
    cout << "LCA(2, 4) = " << findlca(root, 2, 4)->data;
    return 0;
}
