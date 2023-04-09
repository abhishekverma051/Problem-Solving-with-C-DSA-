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
void levelOrder(node* root)
{
    if(root == NULL)
    {
        cout << "empty";
    }
    queue<node*> q;
    q.push(root);
    while(q.empty() == false)
    {
        int count = q.size();
        for(int i=0; i<count; i++)
        {
            node* curr = q.front();
            q.pop();
            cout<<(curr->data)<<" ";
            if(curr->left != NULL)
            {
                q.push(curr->left);
            }
            if(curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
        cout << "\n";
    }
}
int main()
{
    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->right = new node(60);
    levelOrder(root);


}