// // #include <bits/stdc++.h>

// // using namespace std;

// // string ltrim(const string &);
// // string rtrim(const string &);

// // /*
// //  * Complete the 'solve' function below.
// //  *
// //  * The function accepts following parameters:
// //  *  1. DOUBLE meal_cost
// //  *  2. INTEGER tip_percent
// //  *  3. INTEGER tax_percent
// //  */

// // void solve(double meal_cost, int tip_percent, int tax_percent) {
// //  double tip = meal_cost*tip_percent/100;
// //  double tax =tax_percent*tip_percent/100;
// //  int total_cost = (int)round(meal_cost+tip+tax);
// //  cout<<total_cost;
// // }

// // int main()
// // {
// //     string meal_cost_temp;
// //     getline(cin, meal_cost_temp);

// //     double meal_cost = stod(ltrim(rtrim(meal_cost_temp)));

// //     string tip_percent_temp;
// //     getline(cin, tip_percent_temp);

// //     int tip_percent = stoi(ltrim(rtrim(tip_percent_temp)));

// //     string tax_percent_temp;
// //     getline(cin, tax_percent_temp);

// //     int tax_percent = stoi(ltrim(rtrim(tax_percent_temp)));

// //     solve(meal_cost, tip_percent, tax_percent);

// //     return 0;
// // }

// // string ltrim(const string &str) {
// //     string s(str);

// //     s.erase(
// //         s.begin(),
// //         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
// //     );

// //     return s;
// // }

// // string rtrim(const string &str) {
// //     string s(str);

// //     s.erase(
// //         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
// //         s.end()
// //     );

// //     return s;
// // }
// // day 4
// // #include <iostream>
// // #include<bits/stdc++.h>
// // using namespace std;

// // class Person{
// //     public:
// //         int age;
// //         Person(int initialAge);
// //         void amIOld();
// //         void yearPasses();
// //     };

// //     Person::Person(int initialAge){
// //         // Add some more code to run some checks on initialAge
// //         if (initialAge > 0) age = initialAge;
// //     else 
// // 	{
// //         cout << "Age is not valid, setting age to 0." << endl;
// //         age = 0;
// //     }

// //     }

// //     void Person::amIOld(){
// //         // Do some computations in here and print out the correct statement to the console 
// //         if(age<13)
// //         {
// //             cout<<"You are young."<<endl;
// //         }
// //         else if(age>= 13 && age < 18)
// //         {
// //             cout<<"You are a teenager."<<endl;
// //         }
// //         else
// //         {
// //             cout<<"You are old."<<endl;
// //         }

// //     }

// //     void Person::yearPasses(){
// //         // Increment the age of the person in here
// //         age+=1;

// //     }

// // int main(){
// //     int t;
// // 	int age;
// //     cin >> t;
// //     for(int i=0; i < t; i++) {
// //     	cin >> age;
// //         Person p(age);
// //         p.amIOld();
// //         for(int j=0; j < 3; j++) {
// //         	p.yearPasses(); 
// //         }
// //         p.amIOld();
      
// // 		cout << '\n';
// //     }

// //     return 0;
// // }
// //day 5 for loops
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int n = 5;
// //     for(int i=i;i<=10;++i)
// //     {
// //         cout << n << " * " << i << " = " << n * i << endl;
// //     }
// //     return 0;
// // }
// // day 6
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int testCase;
// //     cin>> testCase;
// //     for(int i=0;i<testCase;i++)
// //     {
// //         string str;
// //         cin >> str;
// //         for(int j=0;j<str.length(); j++)
// //         {
// //             if(j % 2 == 0)
// //             cout<<str[j];
// //         }
// //         cout<<" ";
// //         for(int j=0;j<str.length();j++)
// //         {
// //             if(j % 2 != 0)
// //             cout<<str[j];
// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// // }
// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i=0; i<n; i++)
// //     {
// //         cin>>arr[i];
// //     }
// //     for(int i=n-1; i>=0; i--)
// //     {
// //         cout<<arr[i]<<" ";
// //     }
// // }
// // #include <cmath>
// // #include <cstdio>
// // #include <vector>
// // #include <iostream>
// // #include <algorithm>
// // #include <map>
// // using namespace std;


// // int main() {
// //    int n;
// //     string name;
// //     long num;
// //     cin >> n;
// //     cin.ignore();
// //     map <string,long> pbook;
// //     for (int i=0;i<n;i++)
// //     {
// //         cin >> name;
// //         cin >> num;
// //         pbook[name] = num;
// //     }
// //     while(cin>>name) 
// //     {
// //         if (pbook.find(name)!=pbook.end())
// //             cout<<name<<"="<<pbook.find(name)->second<<endl;
// //         else
// //             cout<<"Not found"<<endl;
// //     }
// //     return 0;
// // }
// int factorial(int n)
// {
//     int r;
//     if(n != 1)
//     {
//         r = n  * factorial(n-1);
//     }
//     else
//     {
//         r = 1;
//         return r;
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int r = factorial(n);
//     cout<<r<<endl;
//     return 0;

// }'
// 2d array day 11
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 0;
//     int max = 0;
//     while(n>0)
//     {
//         if(n % 2 == 1)
//         {
//             sum++;
//             if(sum>max) 
//             max = sum;
//         }
//         else
//         {
//             sum =0;
//         }
//             n =n/2;
//     }
//     cout << max;
//     return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector<vector<int>> arr(6, vector<int>(6));
//     for (int i = 0; i < 6; i++) {
//         for (int j = 0; j < 6; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     int max = -9 * 7;
//     for (int i = 0; i < 6; i++) {
//         for (int j = 0; j < 6; j++) {
//             if (j + 2 < 6 && i + 2 < 6) {
//                 int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
//                 if (sum > max) max = sum;
//             }
//         }
//     }
//     cout << max;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// class book
// {
//     protected:
//     string title;
//     string author;
//     public:
//     book(string t, string a)
//     {
//         title = t;
//         author = a;
//     }
//     virtual void display()=0;
// };
// class MyBook: book
// {
//     private:
//     int price;
//     public:
//         MyBookMyBook(string t, string a, int price) : book(t, a)
//         {
//             this->price = price;
//     }
//     void display()
//     {
//         cout<< "Title: "<<title << endl <<"Author: "<<author << endl << "Price: "<<price;
//     }
// };
// int main()
// {
//     string title,author;
//     int price;
//     getline(cin,title);
//     getline(cin, author);
//     cin >> price;
//     mybook novel(title, author, price);
//     novel.display();
//     return 0;











//   #include<bits/stdc++.h>
//   #include<algorithm>
//   using namespace std;
//   int main()
//   {
//       int a[3];
//       int alice=0;
//       int bob=0;
//       cin>>a[0]>>a[1]>>a[2];
//       int b[3];
//       cin >> b[0] >> b[1] >> b[2];
//       for(int i=0; i<3; i++)
//       {
//           if(a[i]>b[i])
//           {
//               alice++;
//           }
//           else if(a[i]<b[i])
//           {
//               bob++;
//           }
          
//       }
//       cout<<alice<<" "<<bob;
//       return 0;

//   }

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int matrix[100][100];
    int i;
    cin >> i;
    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < i; y++)
        {
            cin >> matrix[x][y];
        }
    }
    int diag1, diag2;
    diag1 = 0;
    diag2 = 0;
    for (int x = 0; x < i; x++)
    {
        diag1 = diag1 + matrix[x][x];
    }
    for (int x = i - 1; x > -1; x--)
    {

        diag2 = (diag2 + matrix[i - x - 1][x]);
    }
    int diff = diag1 - diag2;
    if (diff < 0)
    {
        cout << -(diff);
    }
    else
        cout << diff;

    return 0;
}