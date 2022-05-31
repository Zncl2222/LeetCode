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
    
    bool Traverse(TreeNode* root, long low, long high){
        
        if(root != NULL){
        
            if(root->val >= high || root->val <= low )
                return false;

            return Traverse(root->left, low, root->val) && Traverse(root->right, root->val, high);
        }
        
        return true;
    }
    
    bool isValidBST(TreeNode* root) {
        
        if(root == NULL)
            return true;
        
        return Traverse(root, LONG_MIN, LONG_MAX);
        
    }
};