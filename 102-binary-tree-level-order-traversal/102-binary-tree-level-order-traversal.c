/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */




void DFS(struct TreeNode* root, int** arr, int* depth, int * idx, int count){
    
    if (root==NULL)
        return 0;
    if(*depth < count)
        *depth = count;
    
    arr[count][idx[count]++]=root->val;
    DFS(root->left,arr,depth,idx,count+1);
    DFS(root->right,arr,depth,idx,count+1); 
}

int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes){
     
    *returnSize=0;
    
    int** res=(int**)malloc(1000*sizeof(int*));
    
    for (int i=0; i<1000; i++){
        res[i]=(int*)calloc(1000,sizeof(int));
    }
    
    if(root==NULL)
        return res;
    
    int* idx=(int*)calloc(1000,sizeof(int));
    int depth=0;
    
    DFS(root, res,&depth,idx,0);
    *returnSize = depth + 1;
    *returnColumnSizes = idx;
    
    return res;

}