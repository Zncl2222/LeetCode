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
    
    void DFS(TreeNode* root, vector<vector<int>> &res, int num){
        
        if(root == NULL)
            return;
        if (res.size() < num) 
            res.push_back(vector<int>());
        
        res[num-1].push_back(root->val);
        DFS(root->left, res, num+1);
        DFS(root->right, res, num+1);
        
    }
    
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> res;
        
        if(root ==NULL)
            return res;
        
        DFS(root, res, 1);
        
        return res;
    }
};