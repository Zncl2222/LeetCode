/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void InorderTraverse(struct TreeNode* root, int* array, int *idx){
    
    if(root == NULL)
        return;
    
    InorderTraverse(root->left, array, idx);
    array[(*idx)++] = root->val;
    InorderTraverse(root->right, array, idx);

}


bool findTarget(struct TreeNode* root, int k){
    
    int* array = (int*)malloc(10001*sizeof(int));
    int idx = 0;
    
    InorderTraverse(root, array, &idx);
    
    int high = idx - 1, low = 0;
    
    while(low < high){
        
        int curr = array[low] + array[high];
        
        if(curr == k)
            return true;
        else if(curr < k)
            low++;
        else if (curr > k)
            high--;
    }
 
    return false;
}