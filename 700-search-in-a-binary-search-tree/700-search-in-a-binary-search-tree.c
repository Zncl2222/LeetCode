/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* search(struct TreeNode* root, struct TreeNode* res, int val){
    
    if(root == NULL)
        return NULL;
    
    if(root->val == val){
        res = malloc(sizeof(struct TreeNode));
        res->val = root->val;
        res->left = root->left;
        res->right = root->right;
        return res;
    }
    
    if(root->val > val)
        res = search(root->left, res, val);
    else if(root->val < val)
        res = search(root->right, res, val);
    
    return res;
    
}

struct TreeNode* searchBST(struct TreeNode* root, int val){
    
    struct TreeNode* res;
    
    res = search(root, res, val);
    
    return res;

}