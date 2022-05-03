#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m;
  cin >> m;
  n = 0;
  while (m > n)
  {
    int flag = 0;
    cout << "Case #" << n + 1 << ":" << endl;

    int t = 0;
    cin >> t;
    vector<string> str;
    set<char> chars;
    string temp;
    string sentence = "";
    for (int i = 0; i < t; i++)
    {
      cin >> temp;
      str.push_back(temp);
      // cout << temp;
    }
    int N = temp.length();
  for (int i = 0; i < N; i++) {
        chars.push_back(temp[i]);
    }

    for (int i = 0; i < t; i++)
    {
      sentence += str[i];
    }

    if (flag == 0)
      cout << sentence << endl;
    else
      cout << "IMPOSSIBLE" << endl;

    n++;
  }
}