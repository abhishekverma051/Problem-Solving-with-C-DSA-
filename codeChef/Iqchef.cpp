// que s 1  IQ
//#include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x;
//     cin>>x;
//     int a = 7;
//     int sum = a+x;
//     if(sum >=170){
//         cout<<"yes"<<"\n";

//     }
//     else
//     {
//         cout<<"No"<<endl;
//     }
//     return 0;
// }
// ques 2 three topics
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b,c,x;
//     cin<<a;
//     cin<<b;
//     cin<<c;
//     cin<<x;
//     if(x==a || x==b || x==c)
//     {
//         cout<<"YES"<<'\n';
//     }
//     else
//     {
//         cout<<"no"<<endl;
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     while(-t)
//     {
//         int x,y,d;
//         cin>>x;
//         cin>>y;
//         cin>>d;
//         if(x>y)
//         {
//             if(x-y<=d)
//             {
//                 cout<<"yes";
//             }
//             else
//             {
//                 cout<<"no";
//             }
//         }
//         else
//         {
//             if(y-x<=d)
//             {
//                 cout<<"yes";
//             }
//             else
//             {
//                 cout<<"no";
//             }
//         }
//     }
//     return 0;
// }
// ques 4
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int x,y,a,b;
//         cin>>x>>y>>a>>b;
//         int c = 0;
//         if(x!=a && x!=b)
//         {
//             c = c + 1;
//         }
//         if(y!=a && y!=b)
//         {
//             c = c + 1;
//         }
//         cout << c << endl;
//     }
//     return 0;
// }





// ques 5
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int s[n];
//         int c=0;
//         for(int i=0; i<n; i++)
//         {
//             cin>>s[i];
//         }
//         int d[n];
//         for(int i=0; i<n; i++)
//         {
//             cin>>d[i];
//         }
//         for(int i=0; i<n; i++)
//         {
//             if(s[i]==d[i])
//             {
//                 c++;
//             }
            
//         }
//         cout << c<<endl;

//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int sum;
//         cin>>sum;
//         int ans = 0;
//         if(sum<0)
//         {
//             ans = sum -1;
        
//         }
//         else if(sum==0)
//         {
//             ans = -1;
//         }
//         else
//         {
//             ans = -(sum+1);
//         }
//         cout<< ans << endl;
//     }
//     return 0;
// }





#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >>t ;
    while(t--){
        int n  , x , y ;
        cin >> n >> x >> y ;
        int a[n] ;
        for(int i = 0 ; i < n ; i++){
            cin>>a[i] ;
        }
        int count = 0 ;
        for(int i= 0 ; i < n ; i++){
            if(a[i] <= x && a[i]%y == 0 ){
              count++ ;
            }
        }
        cout<<count<<endl ;
    }
    return 0;
}