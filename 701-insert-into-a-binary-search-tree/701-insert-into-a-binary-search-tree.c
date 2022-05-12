/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* insertIntoBST(struct TreeNode* root, int val){
    
    if(root == NULL){
        root = malloc(sizeof(struct TreeNode));
        root->val = val;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    
    if(root->val > val)
        root->left = insertIntoBST(root->left, val);  
    
    else if(root->val < val)
        root->right = insertIntoBST(root->right, val);
    

    return root;

}