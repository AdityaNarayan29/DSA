// Case #1: PEEEEL
// Case #2: AAAAAAAAAA
// Case #3: CCODDEEJAAMDAAY

// Ignore - unsolved problem

#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
  int n, m;
  cin >> m;
  n = 0;
  while (m > n)
  {
    cout << "Case #" << n + 1 << ": ";

    string word;
    cin >> word;
    string min = word[1];
    for(int i = 0;i< word.length();i++){
      if(word[i]<word[i+1]){

      cout << word[i] << word[i];
      }else if(word[i] == 'e'){
        cout << word[i] << word[i];
      }else{
        cout << word[i];
      }
    }
    cout << endl;
    n++;
  }
}