/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int flag = 0;
        
        traversal(p, q, flag);
        
        return !flag;
    }
    
    void traversal(TreeNode *p, TreeNode *q, int &flag)
    {
    	/*If two nodes are both NULL, return*/
        if(!p && !q)
            return ;
        /*If one of them is NULL, they are different trees*/
        if(!p || !q)
        {
            flag = 1;
            return ;
        }
        /*If their values are different, they are different trees*/
        if(p->val != q->val)
        {
            flag = 1;
            return ;
        }
        
        traversal(p->left, q->left, flag);
        traversal(p->right, q->right, flag);
    }
};
