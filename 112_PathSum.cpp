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
    bool hasPathSum(TreeNode* root, int sum) {
        int result = 0;
        bool equal = false;
        
        doPreorder(root, result, sum, equal);
        return equal;
    }
    /* Preorder traversal */
    void doPreorder(TreeNode *node, int result, int sum, bool &equal)
    {
        if(node == nullptr)
            return ;
            
        result += node->val;
        /* Reach to leaf node & result == sum */
        if(!node->left && !node->right && result == sum)
        {
            cout << result << endl;
            equal = true;
            return ;
        }

        doPreorder(node->left, result, sum, equal);
        doPreorder(node->right, result, sum, equal);
    }
};
