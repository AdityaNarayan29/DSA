// To find the number to paths possible from dice roll
// Extention to prev question
// 2D => (n-1)x(n-1)
// Total no. combination of jumps
#include <bits/stdc++.h>
using namespace std;

int countPath2D(int n, int i, int j)
{
  if (i == n - 1 && j == n - 1)
  {
    return 1;
  }
  if (i >= n || j >= n)
  {
    return 0;
  }

  return countPath2D(n, i + 1, j) + countPath2D(n, i, j + 1);
}

int main()
{
  cout << countPath2D(3, 0, 0) << endl;
  return 0;
}