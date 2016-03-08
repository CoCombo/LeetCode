/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/* Iterative solution */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr)
            return l2;
        if(l2 == nullptr)
            return l1;
        
        ListNode *result = nullptr, *current = nullptr;
        while(l1 && l2)
        {
            ListNode *tmp = nullptr;
            /* Compare the first node of l1 and l2 */
            if(l1->val <= l2->val)
            {
                tmp = new ListNode (l1->val);
                /* Move to next node */
                l1  = l1->next;
            }
            else
            {
                tmp = new ListNode (l2->val);
                /* Move to next node */
                l2  = l2->next;
            }
            
            /* If result list is empty */
            if(!result)
            {
                result = tmp;
                current = tmp;
            }
            else
            {
                current->next = tmp;
                current = current->next;
            }
        }
        
        if(l1)
        {
            current->next = l1;
        }
        else
        {
            current->next = l2;
        }
        
        return result;
    }
};

/*Nice recursive solution */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr)
            return l2;
        if(l2 == nullptr)
            return l1;
        
        if(l1->val <= l2->val)
        {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else
        {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};










