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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr)
            head = nullptr;
        
        for(ListNode *node = head; node != nullptr; node = node->next)
        {
            int tmpN = n;
            ListNode *tmpNode = node;
            
            while(tmpN--)
            {
                tmpNode = tmpNode->next;
            }
            
            /* The head node is the last Nth node */
            if(tmpNode == nullptr)
            {
                return head->next;
            }
            /* Not the head node */
            if(tmpNode->next == nullptr)
            {
                node->next = node->next->next;
                return head;
            }
        }
    }
};
