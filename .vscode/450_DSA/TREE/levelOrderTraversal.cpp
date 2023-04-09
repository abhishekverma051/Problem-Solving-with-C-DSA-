#include<bits/stdc++.h>
#include<queue>
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
void printLevel(node* root)
{
    if(root == NULL)
    {
        return;
    }
    queue<node*> q;
    q.push(root);
    while(q.empty() == false)
    {
        node* curr = q.front();
        cout << curr->data << " ";
        q.pop();
       
        if(curr->left != NULL)
        {
            q.push(curr->left);
        }
        if(curr->right != NULL)
        {
            q.push(curr->right);
        }
    }

}
int inorder(node* root)
{
    if(root ==  NULL)
    {
        return -1;
    }
    else
    {
        inorder(root->left);
        cout<<(root->data)<<" ";
        inorder(root->right);
    }
}

int main()
{
    node* root = new node(10);
    root->left = new node(15);
    root->right = new node(20);
    root->left->left = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);
    root->right->left->left = new node(60);
    root->right->left->right = new node(70);
   // inorder(root);
   printLevel(root);
    


}