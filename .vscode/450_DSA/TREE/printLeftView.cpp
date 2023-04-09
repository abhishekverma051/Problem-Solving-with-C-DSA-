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
int maxLevel = 0;
// recursive
void printLeftView(node* root,int level)
{
    if(root == NULL)
    {
       return;
    }
    if(maxLevel < level)
    {
        cout << (root->data)<<" ";
        maxLevel = level;
    }
    printLeftView(root->left,level + 1);
    printLeftView(root->right,level + 1);
}
void printl(node* root)
{
    printLeftView(root,1);
}
// iterative
void leftV(node* root)
{
    if(root == NULL)
    {
        return;
    }
    queue<node*> q;
    q.push(root);
    while(q.empty() == false)
    {
        int count = q.size();
        for(int i =0;i<count; i++)
        {
            node* curr = q.front();
            q.pop();
            if(i == 0)
            {
                cout << (curr->data) << " ";
            }
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
}
int main()
{
    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);
    cout << "by recursive method ";
     printl(root);
    cout <<  endl;
    cout << "by iterative method ";
     leftV(root);
    return 0;

}