// #include <bits/stdc++.h>
// using namespace std;

// int checkPrecedence(char c)
// {
//     // We are returning a number which represents a level of precedence.
//     // Higher the order, larger the number.
//     switch (c)
//     {
//     case '^':
//         return 3;
//     case '*':
//     case '/':
//         return 2;
//     case '+':
//     case '-':
//         return 1;
//     default:
//         return -1;
//     }
// }

// bool checkAssociativity(char c)
// {
//     // For all the right to left associative, we are returning false.
//     // For all the left to right associative, we are returning true.
//     switch (c)
//     {
//     case '^':
//         return false;
//     default:
//         return true;
//     }
// }

// bool isOperand(char c)
// {
//     return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
// }

// void infixToPostfix(string s)
// {
//    // 1: create a empty stack
//     stack<char> st;
//     string result = "";
//    // 2 : traverse the expression and for every character X from left to right , do the following:
//     for (int i = 0; i < s.length(); i++)
//     {
//         char c = s[i];
//   // if X is equalo to: 
//   //                   opreand:  print it
//         if (isOperand(c))
//             result += c; // for  opreands printing
//          // for left panathesis : push it to the stack
//         else if (c == '(')
//             st.push('(');
//          // for rigth paranthesis :  pop from the stack until the left paranthesis is found. print thye poped eleemnts
//         else if (c == ')')
//         {
//             while (!st.empty() && st.top() != '(') // if stack is empty push X to stack
//             {
//                 char temp = st.top();
//                 st.pop();
//                 result += temp;
//             }
//             st.pop();
//         }
//         else //  at last or else compare it with the stack top
//         {
//                 // if it have higher precendence than stack to : push to stack
//             while (!st.empty() && checkPrecedence(s[i]) <= checkPrecedence(st.top()))
//             {
//                     // if it is lower precendece , pop stack and print the popped characters until higher precendece operator is found, then push X to stack
//                 if (checkPrecedence(s[i]) == checkPrecedence(st.top()))
//                 { 
//                          // if equal , check associativity , (left->rigth: pop and push, right->left: push)
//                     if (checkAssociativity(s[i]))
//                     {
//                         char temp = st.top();
//                         st.pop();
//                         result += temp;
//                     }
//                     break;
//                 }
//                 else
//                 {
//                     char temp = st.top();
//                     st.pop();
//                     result += temp;
//                 }
//             }
//             st.push(c);
//         }
//     }
// // at last pop everything ant print it
//     while (!st.empty())
//     {
//         char temp = st.top();
//         st.pop();
//         result += temp;
//     }

//     cout << result << endl;
// }

// int main()
// {
//     string expression;
//     expression = "m+n*o";
//     infixToPostfix(expression);
//     expression = "(m+n)*o";
//     infixToPostfix(expression);
//     expression = "m^n^o";
//     infixToPostfix(expression);
//     expression = "(m+n)*(o-p)";
//     infixToPostfix(expression);
//     expression = "m+n*o/p-e";
//     infixToPostfix(expression);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int checkPrecedence(char c)
{
    // We are returning a number which represents a level of precedence.
    // Higher the order, larger the number.
    switch (c)
    {
    case '^':
        return 3;
    case '*':
    case '/':
        return 2;
    case '+':
    case '-':
        return 1;
    default:
        return -1;
    }
}

bool checkAssociativity(char c)
{
    // For all the right to left associative, we are returning false.
    // For all the left to right associative, we are returning true.
    switch (c)
    {
    case '^':
        return false;
    default:
        return true;
    }
}

bool isOperand(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
}

void infixToPostfix(string s)
{

    stack<char> st;
    string result = "";

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];

        if (isOperand(c))
            result += c;

        else if (c == '(')
            st.push('(');

        else if (c == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                char temp = st.top();
                st.pop();
                result += temp;
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && checkPrecedence(s[i]) <= checkPrecedence(st.top()))
            {
                if (checkPrecedence(s[i]) == checkPrecedence(st.top()))
                {
                    if (checkAssociativity(s[i]))
                    {
                        char temp = st.top();
                        st.pop();
                        result += temp;
                    }
                    break;
                }
                else
                {
                    char temp = st.top();
                    st.pop();
                    result += temp;
                }
            }
            st.push(c);
        }
    }

    while (!st.empty())
    {
        char temp = st.top();
        st.pop();
        result += temp;
    }

    cout << result << endl;
}

int main()
{
    string expression;
    expression = " A–B+C";
    infixToPostfix(expression);
    expression = "A*B+C/D";
    infixToPostfix(expression);
    expression = "(A–B)+C*D/E–C";
    infixToPostfix(expression);
    expression = " (A*B)+(C/D)–(D+E)";
    infixToPostfix(expression);
    expression = "((A–B)+D/((E+F)*G))";
    infixToPostfix(expression);
    return 0;
}
