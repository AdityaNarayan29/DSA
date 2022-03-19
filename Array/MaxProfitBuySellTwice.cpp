// Maximum profit by buying and selling atmost twice
#include <bits/stdc++.h>
using namespace std;

// M1 Dynamic Programming Time O(n) Space O(n)
// Two iterations, 1 from ryt to lft, other from lft to ryt
int maxProfit(vector<int> &a >)
{
  int n = a.size();
  int dp[n];
  for (int i = 0; i < n; i++)
    dp[i] = 0;
  // dp[i] = max(dp[i+1],maxValueOfArray-a[i]); / ryt to left /
  int ma = a[n - 1];
  for(int i=n-2;i>=0;i--)
  {
    if (a[i] > ma)
      ma = a[i];
    dp[i] = max(dp[i + 1], ma - a[i]);
  }
  // dp[i] = max(dp[i-1],dp[i]+(a[i]-minValueOfArray)); / lft to ryt /
  int mi = a[0];
  for (int i = 1; i < n; i++)
  {
    if (a[i] < mi)
      mi = a[i];
    dp[i] = max(dp[i - 1], dp[i] + (a[i] - mi));
  } 
  return dp[n - 1];
}

// M2 Simple Approach     Time O(n) Space O(1)
int maxProfit(int price[],int n){
  int buy1,profit1,buy2,profit2;
  buy1 = buy2 = INT_MAX;
  profit1 = profit2 = 0;
  for (int i = 0; i < n; i++)
  {
    buy1 = min(buy1, price[i]);
    profit1 = max(profit1,price[i]-buy1);
    buy2 = min(buy2 , price[i]-profit1);
    profit2 = max(profit2, price[i]-buy2);
  }
  
}