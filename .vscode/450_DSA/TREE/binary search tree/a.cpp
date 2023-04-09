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
node *insert(node *root, int z)
{

    if (root == NULL)
    {
        return newNode(z);
    }
    else if (root->data < z)
    {
        root->right = insert(root->right, z);
    }
    else if (root->data > z)
    {
        root->left = insert(root->left, z);
    }
}


node *getSuccesor(node *curr)
{
    curr = curr->right;
    while (curr != NULL && curr->left != NULL)
        curr = curr->left;
    return curr;
}
node *deltnode(node *root, int x)
{
    if (root == NULL)
        return root;
    if (root->data > x)
        root->left = deltnode(root->left, x);
    if (root->data < x)
        root->right = deltnode(root->right, x);
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            node *succ = getSuccesor(root);
            root->data = succ->data;
            root->right = deltnode(root->right, succ->data);
        }
        return root;
    }
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
    node *root = newNode(15);
    root->left = newNode(5);
    root->right = newNode(20);
    root->left->left = newNode(3);
    root->right->left = newNode(25);
    root->right->right = newNode(80);
    cout << "NAME: AKHIL UID: 20BCS2148" << endl;
    inorder(root);
    cout << endl
         << "elements after insertion are: " << endl;
    insert(root, 90);
    insert(root, 2);
    insert(root, 1);
    inorder(root);
    cout << endl
         << "inorder" << endl;

    inorder(root);
    cout << endl;
    cout << "after deletion " << endl;
    deltnode(root, 15);
    inorder(root);
   
    return 0;
}