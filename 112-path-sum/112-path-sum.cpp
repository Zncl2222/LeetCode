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
    
    bool Traverse(TreeNode* root, int targetSum, int curr_sum){
        
        if(root==NULL)
            return false;
        
        curr_sum+=root->val;
        
        if(curr_sum==targetSum && root->left==NULL && root->right==NULL)
            return true;
        
        return Traverse(root->left, targetSum, curr_sum) || Traverse(root->right, targetSum, curr_sum);
        
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root==NULL)
            return false;
        
        return Traverse(root, targetSum, 0);
        
    }
};