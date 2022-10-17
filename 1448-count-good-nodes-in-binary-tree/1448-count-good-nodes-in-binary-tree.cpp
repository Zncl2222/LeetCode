/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int goodNodes(TreeNode* root) {
        
        int res = 0;
        dfs(root, root->val, res);
        
        return res;
    }
    
    void dfs(TreeNode* root, int curr_max, int& res) {
        
        if(root == NULL)
            return;
        
        curr_max = max(curr_max, root->val);
        
        if(root->val >= curr_max){
            res++;
        }
        
        dfs(root->left, curr_max, res);
        dfs(root->right, curr_max, res);
    }
};