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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root == NULL){
            return res;
        }
        traverse(root, res, 1);
        return res;
    }
    
    void traverse(TreeNode* root, vector<vector<int>>& res, int size_count) {
        if(root == NULL)
            return;
        if(res.size() < size_count){
            res.push_back(vector<int>());
        }
        res[size_count - 1].push_back(root->val);
        traverse(root->left, res, size_count + 1);
        traverse(root->right, res, size_count + 1);
        return;
    }
};