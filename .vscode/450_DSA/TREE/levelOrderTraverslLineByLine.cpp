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
void levelOrderLine(node *root)
{
    if(root == NULL)
    {
        cout << "empty";
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size() > 1)
    {
        node* curr = q.front();
        q.pop();
        if(curr == NULL)
        {
            cout << "\n";
            q.push(NULL);
            continue;
        }
        if(curr->left != NULL)
        {
            q.push(curr->left);
        }
        if(curr->right != NULL)
        {
            q.push(curr->right);
        } 
        cout << (curr->data) << " ";
    }
}
int main()
{
    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    levelOrderLine(root);
    
}