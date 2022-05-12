/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *left;
 *     struct Node *right;
 *     struct Node *next;
 * };
 */

void Traverse(struct Node* root){

    if(root->left==NULL)
        return;
    
    root->left->next=root->right;
    
    if(root->next!=NULL)
        root->right->next=root->next->left;
    else
        root->next=NULL;
    
    Traverse(root->left);
    Traverse(root->right);
    
}

struct Node* connect(struct Node* root) {
    
    if(root==NULL)
        return root;
    
    root->next=NULL;
    
    Traverse(root);
    
    return root;
}
