/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
/* Recursive solution */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> value;
        
        doPostorder(root, value);
        
        return value;
    }
    
    void doPostorder(TreeNode *node, vector<int> &value)
    {
        if(node == nullptr)
            return ;
        
        doPostorder(node->left, value);
        doPostorder(node->right, value);
        value.push_back(node->val);
    }
};
