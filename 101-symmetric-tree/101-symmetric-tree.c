/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool traverse(struct TreeNode* root1, struct TreeNode* root2){
    
    if(root1==NULL && root2==NULL)
        return true;
    
    else if(root1==NULL || root2==NULL)
        return false;
    
    else if(root1->val != root2->val)
        return false;
    
    return traverse(root1->left,root2->right) && traverse(root1->right,root2->left);    
}

bool isSymmetric(struct TreeNode* root){
    
    if(root==NULL)
        return true;
    
    return traverse(root->left,root->right);

}