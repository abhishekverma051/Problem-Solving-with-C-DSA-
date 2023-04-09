#include <bits/stdc++.h>
#include <queue>
#include <stack>
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

// method 1 using one queue and one stack
void printSpiral(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    stack<int> s;
    bool reverse = false;
    q.push(root);
    while (q.empty() == false)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            node *curr = q.front();
            q.pop();
            if (reverse)
            {
                s.push(curr->data);
            }
            else
                cout << (curr->data) << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        if (reverse)
        {
            while (s.empty() == false)
            {
                cout << s.top() << " ";
                s.pop();
            }
        }
        reverse = !reverse;
        cout << endl;
    }
}
// method 2 by using two stacks
void printSpiral1(node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<node *> s1;
    stack<node *> s2;
    s1.push(root);
    while (!s1.empty() || !s2.empty())
    {
        // in s1 left,right
        while (!s1.empty())
        {
            node *curr = s1.top();
            s1.pop();
            cout << curr->data << " ";
            if (curr->left)
                s2.push(curr->left);
            if (curr->right)
                s2.push(curr->right);
        }
        cout << endl;
        // in s2 right , left
        while (!s2.empty())
        {
            /* code */
            node *curr = s2.top();
            s2.pop();
            cout << curr->data << " ";
            if (curr->right)
                s1.push(curr->right);
            if (curr->left)
                s1.push(curr->left);
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    printSpiral(root);
    cout << endl;
    printSpiral1(root);
    return 0;
}