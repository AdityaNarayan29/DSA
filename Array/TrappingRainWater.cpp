#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin<<n;
  int a[n];
  for (int i = 0; i < n; i++) cin<<a[i];
  
  // M1 Time: O(n^2) Space:O(1) / min(maxToleft,maxToright)
  // M2 Time: O(n)   Space:O(n) / store an 2 arrays (leftMax,rightMax)
  // M3 Time: O(n)   Space:O(1) / 
  int lo = 0;
  int hi = 0;
  int mi = 0;
  int ans = 0;
  while (lo<=hi)
  {
    if(a[lo]<a[hi]){
      if(a[lo]>mi){
        mi = a[lo];
      }else{
        ans += (mi-a[lo]);
      }lo++;
    }else{
      if(a[hi]>ma){
        ma = a[hi];
      }else{
        ans += (ma-a[hi]);
      }hi--;

    }
  }
  cout<<ans<<endl;
  
  
}