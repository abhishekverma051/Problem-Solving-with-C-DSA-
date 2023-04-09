// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *left;
//     node *right;
//     node(int k)
//     {
//         data = k;
//         left = right = NULL;
//     }
// };
// // naive solution
// int height(node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     else
//         return 1 + max(height(root->left), height(root->right));
// }
// int diameter(node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     int d1 = 1 + height(root->left) + height(root->right);
//     int d2 = diameter(root->left);
//     int d3 = diameter(root->right);
//     return max(d1, max(d2, d3));
// }
// void inorder(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout << (root->data) << " ";
//     inorder(root->right);
// }
// // efficient solution
// int res = 0;
// int height1(node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     int lh = height(root->left);
//     int rh = height(root->right);
//     res = max(res, lh + rh + 1);
//     cout << res;
// }
// int main()
// {
//     node *root = new node(10);
//     root->left = new node(20);
//     root->right = new node(30);
//     root->right->left = new node(40);
//     root->right->right = new node(50);
//     root->right->left->left = new node(60);
//     inorder(root);
//     cout << endl;
//     cout << diameter(root);
//     cout << endl;

//     height1(root);
// }

// C++ Program to convert prefix to Infix
#include <iostream>
#include <stack>
using namespace std;

// function to check if character is operator or not
bool isOperator(char x)
{
    switch (x)
    {
    case '+':
    case '-':
    case '/':
    case '*':
        return true;
    }
    return false;
}

// Convert prefix to Infix expression
string preToInfix(string pre_exp)
{
    stack<string> s;

    // length of expression
    int length = pre_exp.size();

    // reading from right to left
    for (int i = length - 1; i >= 0; i--)
    {

        // check if symbol is operator
        if (isOperator(pre_exp[i]))
        {

            // pop two operands from stack
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();

            // concat the operands and operator
            string temp = "(" + op1 + pre_exp[i] + op2 + ")";

            // Push string temp back to stack
            s.push(temp);
        }

        // if symbol is an operand
        else
        {

            // push the operand to the stack
            s.push(string(1, pre_exp[i]));
        }
    }

    // Stack now contains the Infix expression
    return s.top();
}

// Driver Code
int main()
{
    string pre_exp = "*–+ABCD";
    cout << "Infix : " << preToInfix(pre_exp);
    return 0;
}
