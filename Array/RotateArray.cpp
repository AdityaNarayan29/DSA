// 189. leet code

class Solution
{
public:
  void rotate(vector<int> &nums, int k)
  {
    int r = k % nums.size();
    std::rotate(nums.rbegin(), nums.rbegin() + r, nums.rend());
  }
};