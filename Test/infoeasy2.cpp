#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[200001], m;
void solveCook()
{
  cin >> n;
  m = 0;
  for (int i = n - 1; i >= 0; --i)
  {
    cin >> a[i];
    if (a[i] % 2 == 1)
      m ^= i;
  }
  if (m == 0)
    puts("Cook");
  else
    puts("Chef");
}
signed main()
{
  int t;
  cin >> t;
  while (t--)
    solveCook();
}