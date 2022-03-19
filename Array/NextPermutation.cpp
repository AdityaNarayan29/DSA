#include<bits/stdc++.h>
using namespace std;
int nextPermutation(vector <int>& a){
  // This algo lexicographically rearranges 
  /*Given graph will look like this
  [1,5,8,4,7,6,5,3,1]
       8
      / |  7\
     |  | /  6\
     5  | /    5\
   /     4       \
  /               3  
  |                \ 
  |                \  
  1                 1
  */
  // Brute Force O(n!) // Finding all the permutations , then check by comparing

  // Single Pass Approach O(n)
  // 1. swap the first lower element (namly idx-1) from the graph (here 4) with just bigger element( here 5);
  // 2. arrangew
  int idx = -1;
  int n = a.size();
  for (int i = n-1; i > 0; i--)
  {
    if(a[i]>a[i-1]){
      idx = i;
      break;
    }
    if(idx == -1){
      reverse(a.begin(),a.end());
    }else{
      int prev = idx;
      for(int i = idx+1;i < n; i++){
        if(a[i]>a[idx-1] and a[i]<=a[prev]){
          prev = i;
        }
      }
      swap(a[idx-1],a[prev]);
      reverse(a.begin()+idx,a.end());
    }
  }
  
} 