
// #include <iostream>
#include <bits/stdc++.h>
using namespace std; 

// check if str1 is a rotation of str2
//  string s1 = "ABACD"
//  string s2 = "CDABA"

// string temp = s1 + s1; => "ABACDABACD" 
// now check if s2 is present in s1
int main(){
  string s1,s2;
  cin >> s1 >> s2 ;
  int l1 = s1.length();
  int l2 = s2.length();

  if(l1!=l2)cout<<"No";
  else{
    string temp = s1+s1;
    if(temp.find(s2)!=string::npos){//////////////////////////////////
      cout<<"Yes";
    }
    else cout << "No";
  }
  return 0;
}
