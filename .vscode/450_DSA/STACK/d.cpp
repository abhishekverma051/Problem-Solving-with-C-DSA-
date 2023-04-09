 #include<bits/stdc++.h>
 using namespace std;
// namespace std;

 int main()
 {

   int testCase;
   cin >> testCase;
   while(testCase--)
   {
         int N;
         cin >> N;

         int S[N];
         int i=0;

         while( i < N)  
         {  /* code */
         cin >> S[i];
         i++;
         }
            

         sort(S, S + N);

         int = INT_MAX;
         for (int i = 0; i < N; i++)
         {
           if (i != N - 1 && S[i + 1] - S[i] <  )
           {
            horse_diff = S[i + 1] - S[i];
           }
         }

         cout << horse_diff << endl;
       }
       // your code goes here
       return 0;
 }


       
     