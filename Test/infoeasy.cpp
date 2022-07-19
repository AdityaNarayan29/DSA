#include <bits/stdc++.h>
#include <string>
using namespace std;

int findValue(int n){
  if(n == 0)return-1;
  if(n == 1)return 0;
  int var = 3;
  int count = 0;
  for(int i = 0; i<n-1;i++){
    count = var+count;
    var += 2;
  }
  return count;
}
int main()
{
  int n = 0;
  cin >> n;
  cout << findValue(n);
  return 0;
}