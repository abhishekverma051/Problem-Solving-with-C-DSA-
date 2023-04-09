#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        bool found = true;

        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == s2[i])
                found = true;

            else if (s1[i] == '?' or s2[i] == '?')
                found = true;

            else
            {
                found = false;
                break;
            }
        }

        if (found)
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }
    return 0;
}
