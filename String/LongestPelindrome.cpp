// Two pointer
// Odd even method
// Odd  Substring - check for [i]&[i+1]
// Even Substring - check for [i]&[i+2]
// iterate till end, when got similar check both sides for max length of Pelindromic Substring

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void PrintString(string s, int start, int end)
{
  for (int i = start; i <=end; i++)
  {
    cout << s[i];
  }
}

void LongestPal(string s)
{
  int l, h;
  int start = 0, end = 1;
  for (int i = i; i < s.length(); i++)
  {
    // For even sbstr
    l = i - 1;
    h = i;
    while (l >= 0 && h < s.length() && s[l] == s[h])
    {
      if (h - l + 1 > end)
      {
        start = l;
        end = h - l + 1;
      }

      l--;
      h++;
    }
    // For odd sbstr
    l = i - 1;
    h = i + 1;
    while (l >= 0 && h < s.length() && s[l] == s[h])
    {
      if (h - l + 1 > end)
      {
        start = l;
        end = h - l + 1;
      }
      l--;
      h++;
    }
  }

  PrintString(s, start, start + end - 1);
}

int main()
{
  string s;
  cin >> s;
  LongestPal(s);
  return 0;
}
