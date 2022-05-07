/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* deleteDuplicates(struct ListNode* head){

    if(head==NULL || head->next==NULL)
        return head;
    
    struct ListNode* temp=head;
    
    while(temp!=NULL && temp->next!=NULL){
        struct ListNode* q=NULL;
        
        if(temp->val==temp->next->val){
            
            q=temp->next;
            temp->next=temp->next->next;
            free(q);
        }
        else
            temp=temp->next;     
        
    }
    
    
    return head;

}