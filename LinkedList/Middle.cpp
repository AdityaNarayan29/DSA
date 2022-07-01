// 876 leetcode

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
  ListNode *middleNode(ListNode *head)
  {
    struct ListNode *temp = head, *mid = head;
    while (temp->next && temp->next->next)
    {
      mid = mid->next;
      temp = temp->next->next;
    }
    if (temp->next != NULL)
      mid = mid->next;
    return mid;
  }
};