#include <bits/stdc++.h>
using namespace std;
int main()
{
    int z;
    cin >> z;
    for (int i = 0; i < z; i++)
    {
        int secondNum;
        int m, n, o;
        cin >> m >> n >> o;
        if (m >= n && n >= o || m <= n && o >= n)
        {

            secondNum = n;
        }
        else if (n >= o && o >= m || n <= o && o <= m)
        {

            secondNum = o;
        }
        else if (o >= m && m >= n || o <= m && m <= n)
        {

            secondNum = m;
        }
        cout << secondNum << "\n";
    }

    return 0;
}