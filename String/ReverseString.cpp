class Solution
{
public:
  void reverseString(vector<char> &s)
  {
    int fir = 0;
    int sec = s.size() - 1;
    while (fir < sec)
      swap(s[fir++], s[sec--]);
  }
};