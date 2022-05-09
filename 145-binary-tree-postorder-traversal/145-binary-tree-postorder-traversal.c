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
    
    return node_count(root->right)+node_count(root->left)+1;
}

void postorder(struct TreeNode* root, int* List, int* root_size){
    
    if(root==NULL)
        return 0;
    
    postorder(root->left,List,root_size);
    postorder(root->right,List,root_size);
    List[(*root_size)++]=root->val;
    
}


int* postorderTraversal(struct TreeNode* root, int* returnSize){
    
    int count=node_count(root);
    
    int* res=(int*)malloc(count*sizeof(int));
    *returnSize=0;
    
    postorder(root,res,returnSize);
    
    return res;
}