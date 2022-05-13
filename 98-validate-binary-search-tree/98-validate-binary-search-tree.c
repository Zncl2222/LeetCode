/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool Traverse(struct TreeNode* root, long high, long low){
    
    if(root == NULL)
        return true;
    
    if(root->val >= high || root->val <= low)
        return false;
    
    return Traverse(root->right, high, root->val) && Traverse(root->left, root->val, low);
}


bool isValidBST(struct TreeNode* root){
    
    if(root == NULL)
        return true;
    
    return Traverse(root->left, root->val, LONG_MIN) && Traverse(root->right, LONG_MAX, root->val);    
    
}