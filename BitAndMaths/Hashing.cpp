#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  unordered_map <string, int> outMap;
  //insert
  pair<string,int> p ("abc",1);
  outMap.insert(p);

  outMap["fcuk"] = 2;
  // find
  cout << outMap["abc"] << endl;
  cout << outMap.at("abc") << endl;
  

  // to check if present
  cout << outMap["gif"] << endl; //gives zero and inserts value------
  //cout << outMap.at("gf") << endl; //says invalid key
  if(outMap.count("gf")>0){
    cout << "gf is present" << endl;
  }else{
    cout << "gf is not present" << endl;
  }

  // size()
  cout << "size : " << outMap.size()<< endl;
  
  //erase
  outMap.erase("gif");
  cout << "size : " << outMap.size()<< endl;

  return 0;
}