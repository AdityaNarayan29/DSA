#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int k;
  cin >> k;

  // O(nlogn) 
  //approach , sort and search
  // sort(arr,arr+n);
  // cout << arr[k-1];

  // O(n+klogn)
  //min heap approach

  //syntax
  //priority_queue < datatype , vector<datatype> , declarationtype(compare)> name; 
  priority_queue< int, vector<int>, greater<int>> p;
  for (int i = 0; i < n; i++)
  {
    p.push(arr[i]);
  }
  int ans, i = 1;
  while (!p.empty())
  {
    if (i == k)
    {
      ans = p.top();
      break;
    }
    i++;
    p.pop();
  }
   
  cout << ans;
}