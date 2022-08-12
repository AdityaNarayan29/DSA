#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  //creation
  unordered_map<string, int>m;
  //1
  pair<string,int> p = make_pair("adi",3);
  m.insert(p);

  //2
  pair<string,int> p2 = make_pair("loves",2);
  m.insert(p2);

  //3
  m["mera"]=1;
  m["mera"]=2;

  //Search
  cout << m["mera"] << endl; 
  cout << m.at("mera") << endl;

  // cout << m.at("unknownKey") << endl; 
  cout << m["unknownKey"] << endl; 

  //size
  cout<< m.size() << endl;

  //erase
  m.erase("mera");

  // iterate
  for(auto i:m){
    cout << i.first << " " << i.second << endl;
  }

  // iterator
  unordered_map<string, int>  :: iterator it = m.begin();
  while (it!=m.end())
  {
    cout << it-> first << " " << it -> second << endl;
    it++;
  }
  
  //////////////////////
  //   Solution   //////
  //////////////////////

  
  return 0;
}
