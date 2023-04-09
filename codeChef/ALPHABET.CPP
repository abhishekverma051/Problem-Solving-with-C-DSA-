// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;
//     int n;
//     cin >> n;
//     string a;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a;
//         int c = 0;
//         for (int j = 0; j < a.length(); j++)
//         {
//             for (int i = 0; i < s.length(); i++)
//             {
//                 while(a[j] == s[i])
//                 {
//                     c++;
//                     break;  
//                 }
//             }
//         }
//         if (c == a.length())
//         {
//             cout << "Yes" << endl;
//         }
//         else
//             cout << "No" << endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int arr[10][10];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>arr[i][j];
            }
        }
        int s1=arr[2][10]+arr[2][1]+arr[1][0];
        int s2=arr[0][1]+arr[0][0]+arr[1][2];
        if(arr[1][1]==n && arr[0][0]==n && arr[2][2]==n)
        {
            cout<<"0"<<endl;
        }
        else
        cout<<max(s1,s2)<<endl;
        
    }
    return 0;
}