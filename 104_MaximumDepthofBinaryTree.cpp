/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 /*This is the submission of "Maxminum Depth of Binary Tree"*/
 /*My solution time limit exceed*/
class Solution {
public:
    int maxDepth(TreeNode *root) {
        if(root == nullptr)
            return 0;
        return 1 + (maxDepth(root->left) > maxDepth(root->right) ? 
        			maxDepth(root->left) : maxDepth(root->right));
    }
};
/*AC solution*/
/*I can't understand, I thing it's same to mine*/
class Solution {
public:
	int maxDepth(TreeNode *root) {
		if(root == nullptr)
			return 0;
		return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
	}
