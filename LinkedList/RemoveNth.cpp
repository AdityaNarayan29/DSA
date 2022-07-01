// 19 Leetcode
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
  ListNode *removeNthFromEnd(ListNode *head, int n)
  {
    if (!head)
    {
      return head;
    }
    if (!head->next && n == 1)
    {
      return nullptr;
    }
    ListNode *f = head, *s = head, *p = nullptr;
    while (n && f)
    {
      f = f->next;
      n--;
    }
    while (f)
    {
      p = s;
      s = s->next;
      f = f->next;
    }
    ListNode *temp = s;
    if (!p)
    {
      ListNode *t = head->next;
      delete s;
      return t;
    }
    p->next = s->next;
    delete s;
    return head;
  }
};