// Find if there is any subarray sum = 0;
#include <bits/stdc++.h>
using namespace std;
int main()
{
  // M1 Time: O(n^2) Space: O(1) // iterate all subarrays

  // M2 Time: O(n)   Space: O(n)
  // prefix sum 3 conditions for sum == 0 (in iterating find sum)
  // [4,2,-3,1,6,7,0] bocomes [4,6,3,4,10,17,17]
  /* 1. if value of sum is equal for two indexes
     2. if value of sum = 0 (from start to that index = 0)
     3. if value of an element = 0 (single element is also a sub array)
  */
  int n;
  cin >> n;
  int a[n + 1];
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  int s = 0;
  int flag = 0;
  unordered_map<int, int> m;
  for (int i = 1; i <= n; i++)
  {
    s = s + a[i];
    if (s == 0 or m[s] or a[i] == 0)
    {
      flag = 1;
      break;
    }
    else
    {
      m[s] = 1;
    }
  }
    if (flag == 1)
      cout << "Yes\n";
    else
      cout << "No\n";
}