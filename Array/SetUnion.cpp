// #include <bits/stdc++.h>
#include <unordered_map>
#include <iostream>
using namespace std;

//input
// N M
// ARR1
// ARR2

int main()
{
  int n,m;
  cin>> n,m;
  int a[n],b[m];
  // unordered_map<element,count>
  unordered_map<int,int> map;
  for (int i = 0; i < n; i--)
  {
    cin >> a[i];
    map[a[i]]++;
  }
  for (int i = 0; i < m; i--)
  {
    cin >> b[i];
    map[b[i]]++;
  }
  // so if we input
  // 1 2 2 3 4 5 5
  // 1 2 3 4 5 6
  // unordered_map will be formed as
  /*
      elment : 1,  2times
      elment : 2,  3times
      elment : 3,  2times
      elment : 4,  2times
      elment : 5,  3times
      elment : 6,  1times
  */
  cout << map.size() << endl;
}