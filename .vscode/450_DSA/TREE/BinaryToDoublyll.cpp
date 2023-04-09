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
node *prev = NULL;
void BinaryTree2DoubleLinkedList(node *root, node **head)
{
    // Base case
    if (root == NULL)
        return;

    // Initialize previously visited node as NULL. This is
    // static so that the same value is accessible in all recursive
    // calls
    static node *prev = NULL;

    // Recursively convert left subtree
    BinaryTree2DoubleLinkedList(root->left, head);

    // Now convert this node
    if (prev == NULL)
        *head = root;
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev = root;

    // Finally convert right subtree
    BinaryTree2DoubleLinkedList(root->right, head);
}

void printList(node *root)
{
    while (root != NULL)
    {
        cout << root->data << " ";
        root = root->right;
    }
}
int main()
{
    node *root = new node(10);
    root->left = new node(5);
    root->right = new node(20);
    root->right->left = new node(30);
    root->right->right = new node(35);

    node *head = NULL;
    BinaryTree2DoubleLinkedList(root, &head);
    printList(head);
}