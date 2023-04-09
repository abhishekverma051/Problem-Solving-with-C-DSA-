#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int tanu;
    cin >> tanu;
    while (tanu--)
    {
        int nanu;
        cin >> nanu;
        string shanu;
        cin>>shanu;
        int i;
        int shout = 0;
        for (i = 0; i < nanu; i++)
        {
            if (shanu[i] != 'a' && shanu[i] != 'e' && shanu[i] != 'i' && shanu[i] != 'o' && shanu[i] != 'u')
            {
                shout++;
                if (shout >= 4)
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else
            {
                shout = 0;
            }
        }
        if (i == nanu)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
