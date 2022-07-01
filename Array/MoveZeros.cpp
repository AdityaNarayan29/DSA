class Solution
{
public:
  void moveZeroes(vector<int> &nums)
  {
    int k = 0, j = 0;
    k = nums.size();
    j = count(nums.begin(), nums.end(), 0);
    remove(nums.begin(), nums.end(), 0);
    for (int i = 0; i < 2 * j; i++)
    {
      if (i < j)
      {
        nums.pop_back();
      }
      else
      {
        nums.push_back(0);
      }
    }
  }
};