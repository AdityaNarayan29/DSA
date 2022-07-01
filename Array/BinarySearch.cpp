// Leetcode 704

class Solution
{
public:
  int search(vector<int> &nums, int target)
  {
    int beg, mid, end;
    beg = 0;
    end = nums.size() - 1;
    while (beg <= end)
    {
      mid = (beg + end) / 2;
      if (nums[mid] == target)
      {
        return mid;
      }
      else if (nums[mid] > target)
      {
        end = mid - 1;
      }
      else if (nums[mid] < target)
      {
        beg = mid + 1;
      }
    }
    return -1;
  }
};
