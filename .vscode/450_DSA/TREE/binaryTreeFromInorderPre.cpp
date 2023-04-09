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
node *buildTree(int inO[], int preO[], int instart, int inEnd)
{
    static int preIndex = 0;
    if (instart > inEnd)
    {
        return NULL;
    }
    node *root = new node(preO[preIndex++]);
    if (instart == inEnd)
    {
        return root;
    }
    int index;
    for (int i = instart; i < inEnd; i++)
    {
        if (inO[i] == root->data)
        {
            index = i;
            break;
        }
    }
    root->left = buildTree(inO, preO, instart, index - 1);
    root->right = buildTree(inO, preO, index + 1, inEnd);
    return root;
}
void printInorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    printInorder(root->left);
    cout << (root->data) << " ";
    printInorder(root->right);
}
int main()
{
    int inO[] = {20, 10, 40, 30, 50};
    int preO[] = {10, 20, 30, 40, 50};
    int size = sizeof(inO) / sizeof(inO[0]);
    node *root = buildTree(inO, preO, 0, size - 1);
    cout << "Binary tree formed is: " << endl;
    printInorder(root);
}