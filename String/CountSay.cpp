
// #include <iostream>
#include <bits/stdc++.h>
using namespace std; 
 // input : 3322251
 // output: 23321511 // can be understood as => 23 32 15 11 => 2 times 3; 3 times 2;... so on

int main(){
  string str;
  int n;
  cin >> n;
  if(n == 1){
    cout << "1";
    return 0;
  }
  if(n == 2){
    cout << "11";
    return 0;
  }
  str = "11";
  for(int i = 3; i <= n ; i++){
    string t="";
    str = str + '&';
    int c = 1;
    for (int j = 1; j < str.length(); j++)
    {
      if(str[j]!=str[j-1]){
        t=t+to_string(c);
        t=t+str[j-1];
        c=1;
      }
      else c++;
    }
    str=t;
  }
  cout<<str;
  return 0;

}