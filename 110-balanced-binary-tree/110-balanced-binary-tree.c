/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
#define MAX(a,b) (a>b?a:b)

bool DFS(struct TreeNode* root, int* height){
    if(root == NULL){
        *height = -1;
        return true;
    }
    
    int left = 0;
    int right = 0;
    
    if(!DFS(root->left, &left) || !DFS(root->right, &right)){
        return false;
    }
    
    if(abs(left - right) > 1){
        return false;
    }
    *height = 1 + MAX(left, right);
    
    return true;
}


bool isBalanced(struct TreeNode* root){
    int height = 0;
    return DFS(root, &height);
}