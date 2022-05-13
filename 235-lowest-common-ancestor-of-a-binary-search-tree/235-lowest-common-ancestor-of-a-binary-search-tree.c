/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    
    if(root == NULL)
        return root;
    
    struct TreeNode* res;
    
    if(root->val < p->val && root->val < q->val)
        res = lowestCommonAncestor(root->right, p, q);
        
    else if (root->val > p->val && root->val > q->val)
        res = lowestCommonAncestor(root->left, p, q);
    else
        return res = root;
    
    return res;   
}