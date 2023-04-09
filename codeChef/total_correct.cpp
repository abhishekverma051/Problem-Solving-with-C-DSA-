#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> &a, pair<string, int> &b)
{
    return a.second < b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int c;
        string S;
        vector<pair<string, int>> s;
        for (int i = 0; i < n * 3; i++)
        {
            cin >> S >> c;
            s.push_back({S, c});
        }
        map<string, int> monu;
        for (int i = 0; i < s.size(); i++)
        {
            if (monu[s[i].first] != 0)
            {
                monu[s[i].first] += s[i].second;
            }
            else
            {
                monu[s[i].first] = s[i].second;
            }
        }

        vector<pair<string, int>> A;
        for (auto &it : monu)
        {
            A.push_back(it);
        }
        sort(A.begin(), A.end(), cmp);

        for (auto &it : A)
        {
            cout << it.second << " ";
        }
        cout << "\n";
    }
    return 0;
}