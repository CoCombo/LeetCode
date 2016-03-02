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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || !head->next)
            return head;
        
        ListNode *node = head;
        while(node)
        {
            if(node->val == node->next->val)
                node->next = node->next->next;
            else
                node = node->next;
            /*Need judgement*/
            if(!node->next)
                break;
        }
        return head;
    }
};
