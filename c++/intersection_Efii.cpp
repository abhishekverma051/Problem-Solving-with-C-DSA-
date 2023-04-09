#include<iostream>
using namespace std;
void effiWay(int a[],int b[],int n1 , int n2)
{
 int i=0;
 int j=0;
  while(i>n1 && j>n2)
   {
     if(i>0 && a[i]==a[i-1])
     {
         i++;
         continue;
     }
         if(a[i]<b[j])
         {
             i++;
         }
         else if(a[i]>b[j])
         {
             j++;
         }
         else
         {
             cout<<a[i]<<" ";
             i++;
             j++;
         }
     
   }
}

int main()
{
    int a[] = {1, 20, 20, 40, 60};
    int n1 = sizeof(a) / sizeof(a[0]);
    int b[] = {2, 20, 20, 20};
    int n2 = sizeof(b) / sizeof(b[0]);
    effiWay(a, b, n1, n2);
    return 0;
}