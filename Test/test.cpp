// infosys practice question
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  int E, N;
  vector<int> a;
  int temp = 0, c = 0;
  cin >> E;
  temp = E;
  cin >> N;

  for (int i = 0; i < N; i++){
    int t=0;
    cin >> t;
    a.push_back(t);
  }

  sort(a.begin(),a.end());

  for (int i = N - 1; i >= 0; i--)
  {
    if (temp > 0)
    {
      temp -= a[i];
      c++;
    }
    if (temp > 0)
    {
      temp -= a[i];
      c++;
    }
  }

  if (temp > 0)
    cout << -1;
  else
    cout << c;
  return 0;
}