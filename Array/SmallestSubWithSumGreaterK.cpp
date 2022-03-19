#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x;
  cin>>n>>x;
  int a[n];
  for (int i = 0; i < n; i++)cin>>a[i];
  int mi = INT_MAX;
  //M1 Time: (n^2) Space:O(1) / Brute
  // for (int i = 0; i < n; i++)
  // {
  //   int s = 0;
  //   for (int j = 0; j < n; j++)
  //   {
  //     s+=a[j];
  //     if(s>x){
  //       mi = min(mi,j-i+1);
  //     }
  //   }
  //   cout<<mi<<endl;
  // }
    
  //M2 Time: (n) Space:O(1) / two pointer / greedy
  int i = 0,j = 0,s = 0;//sum
  while(i<=j and j<n){
    while(s<=x and j<n){
      s+=a[j++];
    }
    while(s>x and i<j){
      mi = min(mi,j-1);
      s-=a[i];
      i++;
    }
    cout<<mi<endl;
  }
}