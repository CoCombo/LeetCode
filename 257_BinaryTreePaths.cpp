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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        vector<int>    path;
        
        doPreorder(root, path, result);
        
        return result;
    }
    
    /* Preorder traversal */
    void doPreorder(TreeNode *node, vector<int> path, vector<string> &result)
    {
        if(node == nullptr)
            return ;
        
        path.push_back(node->val);
        /* Reach to leaf node */
        if(!node->left && !node->right)
        {
            string tmp("");
            for(int i = 0; i < path.size(); i++)
            {
                string valstr("");
                if(path[i] >= 0)	//Positive num and 0
                {
                    itoa(path[i], valstr);
                }
                else				//Negative num
                {
                    itoa(-path[i], valstr);
                    tmp += "-";
                }
                tmp += valstr;
                if(i != path.size() - 1)
                    tmp += "->";	//Last node without "->"
            }
            result.push_back(tmp);
        }
        
        doPreorder(node->left, path, result);
        doPreorder(node->right, path, result);
    }
    
    /* Transform num->string by recursion */
    void itoa(int num, string &valstr)
    {
        if(num == 0)
            return ;
        
        itoa(num / 10, valstr);
        
        valstr += num % 10 + 48;
    }
};
