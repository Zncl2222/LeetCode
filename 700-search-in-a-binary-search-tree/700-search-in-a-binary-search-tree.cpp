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
    TreeNode* search(TreeNode* root, TreeNode* res, int val){
        
        if(root == NULL)
            return NULL;
        
        if(root->val == val){
            
            res = new TreeNode(val);
            res->left = root->left;
            res->right = root->right;
            return res;
        }
        
        if(root->val < val)
            res = search(root->right, res, val);
        else if (root->val > val)
            res = search(root->left, res, val);
        
        return res;
        
    }
    
    TreeNode* searchBST(TreeNode* root, int val) {
        
        if(root == NULL)
            return NULL;
        
        TreeNode* res;
        
        res = search(root, res, val);
        
        return res;
    }
};