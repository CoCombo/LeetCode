/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
/*Recursive*/
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> value;
        doPreorder(root, value);
        return value;
    }
    
    void doPreorder(TreeNode *node, vector<int> &value)
    {
        if(node == nullptr)
            return ;
        
        value.push_back(node->val);
        
        doPreorder(node->left, value);
        doPreorder(node->right, value);
    }
};

/*Iterative*/
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> value;
        if(root == nullptr)
            return value;
        
        //vector<int> value;
        stack<TreeNode *> nodes;
        
        while(root)
        {
            nodes.push(root);
            value.push_back(root->val);
            root = root->left;
        }
        
        while(!nodes.empty())
        {
            root = nodes.top();
            nodes.pop();
            
            root = root->right;
            while(root)
            {
                nodes.push(root);
                value.push_back(root->val);
                root = root->left;
            }
        }
        return value;
    }
};
