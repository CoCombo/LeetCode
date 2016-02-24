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
    TreeNode* invertTree(TreeNode* root) {
        doInvert(root);
        return root;
    }
	/*Invert the left tree and right tree for each node with a preorder traversal*/
    void doInvert(TreeNode *root)
    {
        if(root == nullptr)
            return ;
            
        TreeNode *tmp = root->left;
        root->left    = root->right;
        root->right   = tmp;
        
        doInvert(root->left);
        doInvert(root->right);
    }
};
