//leetcode 202

class Solution
{
public:
  bool isHappy(int n)
  {
    if (n <= 0)
      return false;

    int t = 100;
    while (t > 0)
    {
      vector<int> a;
      while (n > 0)
      {
        a.push_back(n % 10);
        n = n / 10;
      }
      int temp = 0;
      for (int i = 0; i < a.size(); i++)
      {
        temp += a[i] * a[i];
      }
      if (temp == 1)
        return true;
      n = temp;

      t--;
    }
    return false;
  }
};