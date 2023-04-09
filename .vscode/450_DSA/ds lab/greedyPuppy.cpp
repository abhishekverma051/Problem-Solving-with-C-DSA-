#include <bits/stdc++.h>
int main()
{
    int z;
    std :: cin >> z;
    while (z--)
    {
        int a, b, i, coins, tuzik;
        std :: cin >> a >>b;
        int A[b];
        for (i = 1; i <= b; i++)
        {
            A[i] = (a % i);
        }
        tuzik = -1;
        for (i = 1; i <= b; i++)
        {
            if (A[i] > tuzik)
                tuzik = A[i];
        }

      std ::   cout << endl << tuzik ;
    }
    return 0;
}