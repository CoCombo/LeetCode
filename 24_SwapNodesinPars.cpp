/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *node = head;
        while(node && node->next)
        {
            int tmp = node->val;
            node->val = node->next->val;
            node->next->val = tmp;
            
            node = node->next->next;
        }
        return head;
    }
};