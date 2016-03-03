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
    int kthSmallest(TreeNode* root, int k) {
        int value = 0;
        
        doInorder(root, k, value);
        
        return value;
    }
	/* Inorder traversal */
    void doInorder(TreeNode *node, int &count, int &value)
    {
        if(node == nullptr)
            return ;
            
        doInorder(node->left, count, value);
        /* Count reduce to 1, reach the Kth value */
        if(count-- == 1)
            value = node->val;
        doInorder(node->right, count, value);
    }
};
