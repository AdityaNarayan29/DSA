// Given a "2 x n" board and tiles of size "2 x 1",count the "number of ways" to tile the given board using these tiles.

// Combination = Vertically counts + horizontally counts
#include <bits/stdc++.h>
using namespace std;

int TilingWays(int n)
{
  if (n == 0)
  {
    return 0;
  }
  if (n == 1)
  {
    return 1;
  }
  return TilingWays(n - 1) + TilingWays(n - 2);
}

int main()
{
  cout << TilingWays(4);
}