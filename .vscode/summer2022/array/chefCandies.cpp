#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int kid, candy;
        cin >> kid >> candy;
        if (candy >= kid)
        {
            cout << "0" << endl;
        }
        else
        {
            int diff = kid - candy;
            if (diff % 4 == 0)
            {
                cout << diff / 4 << endl;
            }
            else
            {
                cout << diff / 4 + 1 << endl;
            }
        }
    }
}