#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    node* left;
    node* right;
    node(int k)
    {
        key = k;
        left = right = NULL;
    }

};

// different traversals
void inorder(node* root)
{
    if(root != NULL)
    {
        inorder(root->left);
        cout<<(root->key)<<" ";
        inorder(root->right);
    }
}
void preorder(node* root)
{
    if(root != NULL)
    {
        cout<<(root->key)<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node* root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<(root->key)<<" ";
    }
}

// heigth of a binary tree
// iterative approach for preorder
void itpreorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    stack<node*> st;
    st.push(root);
    while(st.empty() == false)
    {
        node* curr = st.top();
        cout << (curr->key) << " ";
        st.pop();
        if(curr->right != NULL)
        st.push(curr->left);
        if(curr->left!= NULL)
        st.push(curr->left);
    }
}

// iterative approach for inorder
void ino(node* root)
{
    stack<node*> st;
    node* curr = root;
    while(curr != NULL || st.empty() == false)
    {
        while(curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout<<(curr->key) << " ";
        curr = curr->right;
    }

}


int main()
{
    node* root =  new node(10);
    root->left = new node(40);
    root->right = new node(50);
    root->left->left = new node(70);
    root->right->left = new node(60);
    root->right->right = new node(80);
   
    inorder(root);
    cout<<endl;
    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    ino(root);
    cout<< endl;
    itpreorder(root);
    return 0;
}