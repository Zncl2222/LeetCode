/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool Traverse(struct TreeNode* root, int targetSum, int curr_sum){
    
    if(root==NULL)
        return false;
    
    curr_sum+=root->val;
    
    if(root->right==NULL && root->left==NULL && curr_sum==targetSum)
        return true;
    
    return Traverse(root->right, targetSum, curr_sum) || Traverse(root->left, targetSum, curr_sum);
}

bool hasPathSum(struct TreeNode* root, int targetSum){
    
    if(root==NULL)
        return false;
    
    return Traverse(root, targetSum, 0);
}