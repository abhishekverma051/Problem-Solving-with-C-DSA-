#include<bits/stdc++.h>
using namespace std;
// naive approach
// in this appraoch we just take two nested loops and two var start and end
// and just cmpaare them by using max function
int maxP(int price[],int start,int end)
{
    if(end<=start)
    {
        return 0;
    }
    int profit = 0;
    for(int i=start;i<end;i++)
    {
        for(int j=i+1;j<=end;j++)
            {
                if(price[j] > price[i])
                {
                    int curr_profit = price[j] - price[i] + maxP(price,start,i-1) + maxP(price,j+1,end);
                    profit = max(profit,curr_profit);
                }
            }
    }
  return profit;
}
// efficient solution
int stockProfit(int price[],int n)
{
    int profit = 0;
    for(int i=1;i<n;i++)
    {
        if(price[i]>price[i-1])
        {
            profit += (price[i]-price[i-1]);
        }
    }
    return profit;
}
void printArray(int price[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << price[i] << " ";
    }
}
int main()
{
    int price[] = {1,5,3,8,12};
    int n = sizeof(price)/sizeof(price[0]);
    printArray(price,n);
    cout << endl;
    cout << maxP(price,0,n-1) << endl;
    cout <<   stockProfit(price,n);
    return 0;


}