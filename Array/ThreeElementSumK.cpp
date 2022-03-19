#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x;//x is K
  cin>>n>>x;
  int a[n];
  for (int i = 0; i<n; i++)cin>>a[i];

  // Brute O(n^3)

  // M2 Time: O(n^2) Space: O(n) // unordered_set
  // int ans = 0;
  // for (int i = 0; i < n-2; i++)
  // {
  //   unordered_set<int> s;
  //   int curr = x-a[i];
  //   for (int j = i+1; j < n; j++)
  //   {
  //     if(s.find(curr-a[j]) != s.end()){
  //       ans = 1;
  //       break;
  //     }
  //     s.insert(a[j]);
  //   }
  // }
  // cout<<ans<<endl;
  
  // Optimal
  // M3 Time: O(n^2) Space: O(1) // sort / 2 ptr in loop
  // sort(a,a+n);
  // int ans =0;
  // for (int i = 0; i < n-2; i++)
  // {
  //   int l = i+1;
  //   int r = n-1;
  //   while(l<r){
  //     if(a[i]+a[l]+a[r]){
  //       ans =1;
  //       break;
  //     }else if (a[i]+a[l]+a[r]<x){
  //       l++;
  //     }else r--;
  //   }
  //   if(ans == 1)
  //   break;
  // }
  // cout<<ans<<endl;
// }