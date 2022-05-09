/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int node_count(struct TreeNode* root){
    
    if(root==NULL)
        return 0;
    
    return node_count(root->left)+node_count(root->right)+1;    
}

void inorder(struct TreeNode* root, int* List, int* root_size){
    
    if(root==NULL)
        return 0;
    
    inorder(root->left,List,root_size);
    List[(*root_size)++]=root->val;
    inorder(root->right,List,root_size);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    
    int count=node_count(root);
    
    int* res=(int*)malloc(count*sizeof(int));
    *returnSize=0;
    
    inorder(root,res,returnSize);
    
    return res;
}