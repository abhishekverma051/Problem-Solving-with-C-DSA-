// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     cout<< " enter the size of array :";
// //     // int n;
// //     // cin >> n;
// //     int arr[5]={1,2,3,4,5};
// //     // for(int i=0; i<5; i++)
// //     // {
// //     //     cin >> arr[i];
// //     // }
// //      for(int i=0; i<5; i++)
// //      {
// //          cout<< arr[i];
// //      }
// //      cout << arr[0];

// //     return 0;
// // }
// //====================================== array ===========================================
// // searching
// // #include<bits/stdc++.h>
// // using namespace std;
// // int  search_x(int arr[],int n,int x)
// // {
// //     for(int i=0;i<n;i++)
// //     {
// //         if(arr[i]==x)
// //         {
// //             return i;
// //         }
// //         else
// //         {
// //             return -1;
// //         }
// //     }
// // }
// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     int arr[n];
// //     for(int i=0; i<n;i++)
// //     {
// //         cin >> arr[i];
// //     }
// //     for(int i=0; i<n; i++)
// //     {
// //         cout<< arr[i] << " ";
// //     }
// //     cout << endl;
// //     cout<<"enter the number to be found: ";
// //     int x;
// //     cin >> x;
// //     cout << search_x(arr,n,x);
// //     return 0;
// // }
// // //
// // leaders in array
// // #include<bits/stdc++.h>
// // using namespace std;
// // void leader(int arr[],int n)
// // {
// //     for(int i=0; i<n; i++)
// //     {
// //         for(int j=i+1; j<n; j++)
// //         {
// //             if(arr[i]<arr[j])
// //             {
// //                 break;
// //             }
// //             if(j == n-1)
// //                 printf("%d is a leader\n",arr[i]);
// //         }
// //     }

// // }
// // int main()
// // {
// //     int arr[] = {7,6,4,5,0,1};
// //     int n = sizeof(arr)/sizeof(arr[0]);
// //     leader(arr,n);
// // }
// // coins and triangle
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int test;
// //     cin >> test;
// //     while (test--)
// //     {
// //         int n;
// //         cin >> n;
// //         int i = 1;
// //         while (n >= i)
// //         {
// //             n -= i;
// //             i++;
// //         }
// //         cout << i-1 << endl;
// //     }
// // }
// //////////////////////////  minnions
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int t;
// //     cin>>t;
// //     while(t--)
// //     {
// //         int n,k;
// //         cin>>n>>k;
// //         int e;
// //         int count = 0;
// //          for(int i=0;i>n;i++)
// //          {
// //              cin >> e;
// //              if((e+k)%7 == 0)
// //              {
// //                  count++;
// //              }

// //          }
// //          cout << count << endl;
// //     }
// // }
// /// ezio and guards
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while(t--)
// //     {
// //         int x,y;
// //         cin>>x>>y;
// //         if(y<=x)
// //         {
// //             cout<<"YES"<<endl;
// //         }
// //         else
// //         {
// //             cout<<"NO"<<endl;
// //         }
// //     }

// // }
// /// cooler delimaa
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int t;
// //     cin>>t;
// //     while(t--)
// //     {
// //         int x,y,ma,na;
// //         cin>>x>>y;
// //         ma = y/x;
// //         na = y%x;
// //         if(na==0)
// //         {
// //             cout<<ma-1<<endl;
// //         }
// //         else
// //         {
// //             cout<<ma<<endl;
// //         }
// //     }
// //     return 0;
// // }
// /// linked list
// // #include<bits/stdc++.h>
// // using namespace std;
// // class linkedlist
// // {
// //     struct node
// //     {
// //         int data;
// //         node* next;

// //         node(int d)
// //         {
// //             data = d;
// //             next = NULL;
// //         }
// //     };
// //     node* head,*tail;
// //     public:
// //     linkedlist()
// //     {
// //         head = NULL;
// //     }
// //     void instertAtBegning(int data)
// //     {
// //         node *newnode = new node(data);
// //         if(head == NULL)
// //         {
// //             head = newnode;
// //             tail= newnode;
// //         }
// //         else
// //         {
// //             newnode->next = head;
// //             head = newnode;
// //         }
// //     }
// //     void print()
// //     {
// //         node* curr = head;
// //         while(curr != NULL)
// //         {
// //             cout <<  curr->data << "->";
// //             curr = curr->next;
// //         }
// //         cout << "NULL";
// //     }

// // };

// // int main()
// // {
// //     linkedlist l1 =linkedlist();
// //     l1.instertAtBegning(20);
// //     l1.instertAtBegning(30);
// //     l1.print();

// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // class linkedlist
// // {
// //     struct node
// //     {
// //         int data;
// //         node* next;
// //         node(int d)
// //         {
// //             data = d;
// //             next = NULL;
// //         }

// //     };
// //     node* head;
// //     public:
// //     linkedlist()
// //     {
// //         head = NULL;
// //     }
// //     void insertAtEnd(int data)
// //     {
// //         node* newnode = new node(data);
// //         if(head == NULL)
// //         {
// //             head = newnode;
// //         }
// //         else
// //         {
// //             node* curr = head;
// //             while(curr->next != NULL)
// //             {
// //                 curr = curr->next;
// //             }
// //             curr->next=newnode;

// //         }
// //     }
// //     void print()
// //     {

// //         if (head == NULL)
// //         {
// //             cout << "head is null" << endl;
// //             return;
// //         }
// //         else
// //         {
// //             node *curr = head;
// //             while (curr != NULL)
// //             {
// //                 cout << curr->data << "->";
// //                 curr = curr->next;
// //             }
// //             cout << "NULL";
// //         }
// //     }
// // };
// // int main()
// // {
// //     linkedlist l1 = linkedlist();
// //     l1.insertAtEnd(20);
// //     l1.insertAtEnd(30);
// //     l1.insertAtEnd(40);
// //     l1.print();
// // }

// ////
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cin>>n;
// //     int a[n];
// //     for(int i=0; i<n;i++)
// //     {
// //         cin >> a[i];
// //     }
// //     int start;
// //     cin>>start;
// //     int end;
// //     cin>>end;

// // }
// // #include <stdio.h>
// // int main()
// // {
// //     inti, j, a, n, number(30);
// //     scanf("%d", &n);
// //     int key;
// //     scanf("%d", &key);
// //     for (i = 0; i < n; ++i)
// //         scanf("%d", &number[i]) 
// //         for (i = 0; i < n; ++i) for (i = i + 1; j < n; ++i) if (number[i] > number[i])
// //             a = number[i];
// //     number[i] = number[i];
// //     number[j] = a;
// //     for (i = 0; i < n; ++i)
// //         if (i == (key - 1))
// //             printf("%d\n", number[i]);
// // }
// // #include <stdio.h>
// // int main()
// // {
// //     int n, r1, r2;
// //     scanf("%d", &n);
// //     int a[n], i, t;
// //     for (i = 0; i < n; i++)
// //     {
// //         scanf("%d", &a[i]);
// //     }
// //         scanf("%d %d",&r1,&r2);
// //     for(i=0;i<n;i++)
// //     {

// //         if (a[i] < 0)
// //             t = -a[i];
// //         else
// //             t = a[i];
    
// //         if (t >= r1 && t <= r2)
// //             printf("%d ", a[i]);
// //     }

// //     return 0;
// // }
// // C++ program to find the prime numbers
// // between a given interval

// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     int a=2;
// //     int b, i, j, flag;

    
    
// //     cin >> b; // Take input

// //     // Print display message
  

// //     // Traverse each number in the interval
// //     // with the help of for loop
// //     for (i = a; i <= b; i++)
// //     {
// //         // Skip 0 and 1 as they are
// //         // neither prime nor composite
// //         if (i == 1 || i == 0)
// //             continue;

// //         // flag variable to tell
// //         // if i is prime or not
// //         flag = 1;

// //         for (j = 2; j <= i / 2; ++j)
// //         {
// //             if (i % j == 0)
// //             {
// //                 flag = 0;
// //                 break;
// //             }
// //         }

// //         // flag = 1 means i is prime
// //         // and flag = 0 means i is not prime
// //         if (flag == 1)
// //             cout << i << " ";
// //     }

// //     return 0;
// // }

// // // This code is contributed by Akanksha Rai

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int fatherpos;
// //     cin>>fatherpos;
// //     int marpos;
// //     cin>>marpos;
// //     int vfather;
// //     cin>>vfather;
// //     int steps;
// //     cin>>steps;
// //     int result = 0;
// //     int x2 = 0 *steps;
// //     for(int i=0;i<steps;i++)
// //     {
// //         x2= fatherpos+vfather*i-marpos;
// //     }
// //     for(int i=0;i<steps;i++)
// //     {
// //         if(x2<=0)
// //         {

// //             continue;
// //         }
// //         int v2 = x2;
// //         int count = 1;
// //         for(int j=i;j<steps;j++)
// //         {
// //             if()
// //         }

// //     }
    


// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while(t--)
// //     {
// //         int arr[7];
// //         int sunny , rainy;
// //         for(int i=0;i<7;i++)
// //         {
// //             cin >> arr[i];
// //         }
// //         for(int i=0;i<7;i++)
// //         {
// //             if(arr[i]==1)
// //             {
// //                 sunny++;
// //             }
// //             else
// //             {
// //                 rainy++;
// //             }
// //         }
// //         if(sunny>rainy)
// //         {
// //             cout<<"YES\n";
// //         }
// //         else
// //         {
// //             cout<<"No\n";
// //         }
// //     }
// //     return 0;
// // }

// // ------------------------------------------- linear search
// // #include<bits/stdc++.h>
// // using namespace std;
// // int linearSearch(int arr[],int n , int x)
// // {
// //     for(int i=0;i<n;i++)
// //     {
// //         if(arr[i]==x)
// //         {
// //             return i;
// //         }
// //       //  return -1;
// //     }

// // }
// // int main()
// // {
// //     int arr[]={20,5,25,17};
// //     int n = sizeof(arr)/sizeof(arr[0]);
// //     int x=25;
// //     cout<< linearSearch(arr,n,x);
// //     return 0;
    
// // }

// // // A Naive C++ program to find maximum sum rotation
// // #include <bits/stdc++.h>

// // using namespace std;

// // // Returns maximum value of i*arr[i]
// // int maxSum(int arr[], int n)
// // {
// //     // Initialize result
// //     int res = INT_MIN;

// //     // Consider rotation beginning with i
// //     // for all possible values of i.
// //     for (int i = 0; i < n; i++)
// //     {

// //         // Initialize sum of current rotation
// //         int curr_sum = 0;

// //         // Compute sum of all values. We don't
// //         // actually rotate the array, instead of that we compute the
// //         // sum by finding indexes when arr[i] is
// //         // first element
// //         for (int j = 0; j < n; j++)
// //         {
// //             int index = (i + j) % n;
// //             curr_sum += j * arr[index];
// //         }

// //         // Update result if required
// //         res = max(res, curr_sum);
// //     }

// //     return res;
// // }

// // // Driver code
// // int main()
// // {
// //     int arr[] = {8, 3, 1, 2};
// //     int n = sizeof(arr) / sizeof(arr[0]);
// //     cout << maxSum(arr, n) << endl;
// //     return 0;
// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int t;
// //     cin>> t;
// //     while(t--)
// //     {
// //         int x << y;
// //         if(x > 0 && y > 0)
// //         {
// //             if(x==y)
// //             {
// //                 cout<<"yes"<<end;
// //             }
// //             else
// //             {
// //                 cout<<"no"<<endl;
// //             }
// //         }
// //         else
// //         {
// //             cout << "no";
// //         }
// //     }
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int X,Y,A;
//         cin>>X>>Y>>A;
//         if(A>=X && A < Y)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout<< "NO"<<endl;
//         }

//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int t;
   cin>>t;
   while(t--)
   {
    int a,b;
   cin>>a>>b;
   if(a==b)
   {
     cout<<"7"<<endl;
   }else if(a>b){
    int c=a;
    cout<<(7-c)<<endl;
   }else{
    int z=b;
    cout<<(7-z)<<endl;
   }
   }

    return 0;
}