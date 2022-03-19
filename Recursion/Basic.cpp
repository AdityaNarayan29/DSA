#include<bits/stdc++.h>
using namespace std;

// void func(int n){        // Print n no.s
//   if(n == 0)return;
//   func(n-1);
//   cout << n << endl;
// }

viod func(int n,int a[]){
  if(n < 0)return 0;
  return sum(n-1, a) + a[n];
  
}

int main(){
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)cin >> a[i];
  
  func(n, a);
}