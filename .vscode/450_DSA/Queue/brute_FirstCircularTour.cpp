#include<bits/stdc++.h>
using namespace std;
int bruteForce(int n,int* petrol,int* distance)
{
    int start = 0;
    while(start < n)
    {
        int curr_petrol = 0;
        for(int i = 0; i < n; i++)
        {
            int pos = (start +i) % n;
            curr_petrol = (curr_petrol + petrol[pos] - distance[pos]);
            if(curr_petrol < 0)
            {
                break;
            }
        }
        if(curr_petrol < 0)
        {
            start++;
        }
        else
        {
            cout <<  start + 1 << endl;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
int main()
{
    int n;
    cout << "enter size : "<<endl;
    cin >> n;
    int petrol[n];
    cout << "enter the quanity of petrol : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> petrol[i];
    }
    int distance[n];
    cout << "enter the units to be travelled : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin >> distance[i];
    }
    cout << "circular tour index founded is  : "<<" ";
    bruteForce(n,petrol,distance);
}

















