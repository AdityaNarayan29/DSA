

#include <bits/stdc++.h>
using namespace std;

int primeInRange(int L, int R)
{
  int flag, c = 0;
  for (int i = L; i <= R; i++)
  {
    if (i == 1 || i == 0)
      continue;
    flag = 1;
    for (int j = 2; j <= i / 2; ++j)
    {
      if (i % j == 0)
      {
        flag = 0;
        break;
      }
    }
    if (flag == 1)
    {
      c++;
    }
  }
  // cout << c << endl;
  return c;
}

int main()
{
  int L = 1;
  int R;
  int count = 0;
  cin >> R;
  while (R >= 2)
  {
  R = R - primeInRange(L, R);
  count++;
  }

  cout << " " << count+1;
  return 0;
}