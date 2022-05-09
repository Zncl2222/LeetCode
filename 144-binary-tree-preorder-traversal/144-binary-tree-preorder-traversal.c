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

void preorder(struct TreeNode* root, int* List,int* root_size){
    
    if(root==NULL)
        return 0;
    
    List[(*root_size)++]=root->val;
    preorder(root->left,List,root_size);
    preorder(root->right,List,root_size);
       
}

int* preorderTraversal(struct TreeNode* root, int* returnSize){

    int count=node_count(root);
    
    int* res=(int*)malloc(count*sizeof(int));
    *returnSize=0;
    
    preorder(root,res,returnSize);

    return res;
}