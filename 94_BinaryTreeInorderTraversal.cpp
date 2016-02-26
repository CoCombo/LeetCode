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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> value;
        
        doInorder(root, value);
        
        return value;
    }
    
    void doInorder(TreeNode *node, vector<int> &value)
    {
        if(node == nullptr)
            return ;
        
        doInorder(node->left, value);
        value.push_back(node->val);
        doInorder(node->right, value);
    }
};
