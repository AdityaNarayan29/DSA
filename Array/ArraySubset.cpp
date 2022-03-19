// Find whhether an array is a subset of another array
//M1 time: O(n^2) space:O(1)
//M2 time: O(nlogn + mlogm) space:O(1) // Sorting + Binary search
//M3 time: O(nlogn + mlogm) space:O(1) // Sorting + Two pointer

//M4 time: O(n) space:O(n)
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>m>>n;
  int a[m],b[n];
  for (int i = 0; i < m; i++)cin>>a[i];
  for (int i = 0; i < n; i++)cin>>b[i];
  
  unordered_map<int,int> m1;
  for (int i = 0; i < m; i++) m1[a[i]]++;
  int c=0;
  for (int i = 0; i < n; i++)
  {
    if(m1[b[i]]){
      c++;
    }
  }
  if(c!=n)cout<<"No\n";
  else cout<<"Yes\n";
  return 0;
}
