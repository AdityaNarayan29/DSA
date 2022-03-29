#include <bits/stdc++.h>
using namespace std;
// ros - rest of the string
void permutation(string s, string ans)
{
  if (s.length() == 0)
  {
    cout << ans << endl;
    return;
  }
  for (int i = 0; i < s.length(); i++)
  {
    char ch = s[i];
    string ros = s.substr(0, i) + s.substr(i + 1);

    permutation(ros, ans + ch);
  }
}

int main()
{
  string s;
  cin >> s;
  // permutation("ABC", "");
  permutation(s, "");
}

// STL trick
// sort(nums.begin(),nums.end());
// do{
//   ans.push_back(num);
// }while (next_permutation(nums.begin(),nums.end()));


// Output
// ABC
// ACB
// BAC
// BCA
// CAB
// CBA