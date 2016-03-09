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
    int minDepth(TreeNode* root) {
        int mindepth = 0;
        
        doPreorder(root, 0, mindepth);
        
        return mindepth;
    }
    /* Preorder traversal */
    void doPreorder(TreeNode *node, int depth, int &mindepth)
    {
        if(node == nullptr)
            return ;
        
        depth++;
        /* Reach to leaf node */
        if(!node->left && !node->right)
        {
            if(mindepth == 0 || depth < mindepth)
                mindepth = depth;
        }
        
        doPreorder(node->left, depth, mindepth);
        doPreorder(node->right, depth, mindepth);
    }
};
