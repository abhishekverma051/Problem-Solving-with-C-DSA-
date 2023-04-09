#include<bits/stdc++.h>
using namespace std;
bool isoperand(char c)
{
    return (c >= '0' && c <= '9');
}
double evaluPostfix(string expression)
{
    stack<double> st;
    for(int j=0; j<expression.size(); j++)
    {
        if(isoperand(expression[j]))
            st.push(expression[j] - '0');
        // Pushing the numeric value and not the character.

        st.push(expression[j] - '0');
        else
        {

        double op1 = st.top();
        st.pop();
        double op2 = st.top();
        st.pop();
        switch (expression[j])
        {
        case '+':
            st.push(op2 + op1);
            break;
        case '-':
            st.push(op2 - op1);
            break;
        case '*':
            st.push(op2 * op1);
            break;
        case '/':
            st.push(op2 / op1);
            break;
        case '^':
            st.push(pow(op2, op1));
            break;
        }
        }
        
    }
    return st.top();
}
int main()
{
    string expression = "231*+0-";
    cout << evaluPostfix(expression) << endl;
    return 0;
} 