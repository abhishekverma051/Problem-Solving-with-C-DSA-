#include <bits/stdc++.h>
#include <vector>
using namespace std;
struct node
{
    int key;
    struct node *left, *right;
};
node *newNOde(int k)
{
    node *curr = new node;
    curr->key = k;
    curr->left = curr->right = NULL;
    return curr;
}
bool findPath(node *root, vector<int> &path, int k)
{
    if (root == NULL)
    {
        return false;
    }
    path.push_back(root->key);
    if (root->key == k)
    {
        return true;
    }
    if ((root->left && findPath(root->left, path, k)) || findPath(root->right, path, k))
        return true;
    path.pop_back();
    return false;
}
int findLca(node *root, int n1, int n2)
{
    vector<int> path1, path2;
    if (!findPath(root, path1, n1) || !findPath(root, path2, n2))
        return -1;
    int i;
    for (i = 0; i < path1.size() && i < path2.size(); i++)
        if (path1[i] != path2[i])
            break;
    return path1[i - 1];
}
int main()
{
    node *root = newNOde(10);
    root->left = newNOde(50);
    root->right = newNOde(60);
    root->left->left = newNOde(70);
    root->left->right = newNOde(20);
    root->left->left->left = newNOde(40);
    root->left->right->left = newNOde(90);
    root->left->right->right = newNOde(80);
    root->left->right->left->left = newNOde(30);
    cout << findLca(root, 30, 80);
    return 0;
}