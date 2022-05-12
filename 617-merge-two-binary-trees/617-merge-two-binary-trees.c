/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* mergeTrees(struct TreeNode* root1, struct TreeNode* root2){
    
    
    struct TreeNode* root_merge=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    
    if (root1==NULL && root2==NULL)
        return NULL;   
    
    if (root1==NULL && root2!=NULL){
        root_merge->val=root2->val;
        root_merge->left=mergeTrees(NULL, root2->left);
        root_merge->right=mergeTrees(NULL, root2->right);
    }
    else if(root2==NULL && root1!=NULL){
        root_merge->val=root1->val;
        root_merge->left=mergeTrees(root1->left, NULL);
        root_merge->right=mergeTrees(root1->right, NULL);
    }
    else{
        root_merge->val=root1->val+root2->val;
        root_merge->left=mergeTrees(root1->left, root2->left);
        root_merge->right=mergeTrees(root1->right, root2->right);
    }

    return root_merge;
}