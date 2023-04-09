// find out the petrol where we can travel the whole distance : petrol = (5,8,7,3,4)  ::::  distance = (6,5,3,5,2)

#include<bits/stdc++.h>
using namespace std;
void queue_FirstCircularTour(int n,int* petrol, int* distance)
{
    queue<int> q;
    int curr_petrol = 0;
    for (int j = 0; j < 2 * n; j++)
    {
        int i = j % n;
        q.push(i);
        curr_petrol += (petrol[i] - distance[i]);
        if (curr_petrol < 0)
        {
            while (!q.empty() && curr_petrol < 0)
            {
                int f = q.front();
                curr_petrol -= (petrol[f] - distance[f]);
                q.pop();
            }
        }
        if (q.size() == n)
        {
            cout << q.front();
            return;
        }
    }
    cout << -1;
    return;
}
int main()
{
    int n;
    cout << " enter the size : "<<" ";
    cin >> n;
    int petrol[n];
    cout << " enter the quantities of petrol : " << endl;
    for(int i = 0; i<n; i++)
    {
        cin >> petrol[i];
    }
    int distance[n];
    cout << "enter the distance to be travelled: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin >> distance[i];
    }
    cout << " circular tour founded at  : ";
    queue_FirstCircularTour(n,petrol,distance);
}

























