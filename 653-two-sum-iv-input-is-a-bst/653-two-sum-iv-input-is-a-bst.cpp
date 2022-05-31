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
    
    void inordertraverse(TreeNode* root, vector<int> &array){
        
        if(root == NULL)
            return;
        
        inordertraverse(root->left, array);
        array.push_back(root->val);
        inordertraverse(root->right, array);
        
    }
    
    bool findTarget(TreeNode* root, int k) {
        
        if(root == NULL)
            return false;
        
        vector<int> array;
        
        inordertraverse(root, array);
        
        int low = 0, high = array.size() - 1;
        
        while(low < high){
            
            int val = array[low] + array[high];
            
            if(val == k)
                return true;
            else if(val < k)
                low++;
            else if(val > k)
                high--;
        }
        
        return false;
    }
};