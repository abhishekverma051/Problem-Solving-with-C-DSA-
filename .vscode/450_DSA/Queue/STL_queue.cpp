#include<queue>
#include<bits/stdc++.h>
using namespace std;
void getNumbers()
{
    int d;
    cout<<"enter the size "<<":";
    cin >> d;
    int digits[d];
    for(int i=0; i<d; i++)
    {
       cin >> digits[i];
    }
    int n;
    cin>>n;
    //imple
    if(n <=  d)
    {
        for(int i=0; i<n; i++)
        {
            cout << digits[i] << " " ;
        }
    }
    else
    {

    queue<int> q;
    for(int i=0; i<d; i++)
    {
        q.push(digits[i]);
        
    }
    int inserted = d, printed =0;
    while(printed < n)
    {
        int t = q.front();
        q.pop();
        cout << t <<" ";
        printed++;
        if(inserted , n)
        {
            for(int i=0; i<d; i++)
            {
                if(inserted < n)
                {
                    q.push(t * 10 + digits[i]);
                    inserted++;
                }

            }
        }
    }
    }
}
int main()
{
    cout<<"Name: Abhishek Verma UID: 20BCS5439"<<endl;
    getNumbers();
}