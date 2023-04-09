#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int k)
    {
        data = k;
        left = right = NULL;
    }
};
int maxWidth(node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    queue<node *> q;
    q.push(root);
    int res = 0;
    while (q.empty() == false)
    {
        int count = q.size();
        res = max(res, count);
        for (int i = 0; i < count; i++)
        {
            node *curr = q.front();
            q.pop();
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }
    return res;
}
int main()
{
    node *root = new node(8);
    root->left = new node(30);
    root->right = new node(40);
    root->left->left = new node(60);
    root->left->right = new node(50);
    root->right->left = new node(70);
    root->right->right = new node(80);
    cout << "Maximum width of the tree is: " << maxWidth(root);
    return 0;
}