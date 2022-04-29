// Case #1:
// ..+-+-+-+
// ..|.|.|.|
// +-+-+-+-+
// |.|.|.|.|
// +-+-+-+-+
// |.|.|.|.|
// +-+-+-+-+
// Case #2:
// ..+-+
// ..|.|
// +-+-+
// |.|.|
// +-+-+
// Case #3:
// ..+-+-+
// ..|.|.|
// +-+-+-+
// |.|.|.|
// +-+-+-+

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m;
  cin >> m;
  n = 0;
  while (m > n)
  {
    cout << "Case #" << n + 1 << ":" << endl;
    int c, r;
    cin >> c >> r;

    cout << "..";
    for (int j = 0; j < r - 1; j++)
    {
      cout << "+-";
    }
    cout << "+" << endl;
    cout << "..";
    for (int j = 0; j < r - 1; j++)
    {
      cout << "|.";
    }
    cout << "|" << endl;
    for (int i = 1; i < c; i++)
    {
      cout << "+-";
      for (int j = 0; j < r - 1; j++)
      {
        cout << "+-";
      }
      cout << "+" << endl;
      cout << "|.";
      for (int j = 0; j < r - 1; j++)
      {
        cout << "|.";
      }
      cout << "|" << endl;
    }
    cout << "+-";
      for (int j = 0; j < r - 1; j++)
      {
        cout << "+-";
      }
      cout << "+" << endl;

    n++;
  }
}