/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeElements(struct ListNode* head, int val){
    
    if (head==NULL){
        
        return head;
    }
    
    struct ListNode* r_head=malloc(sizeof(struct ListNode));
    
    r_head->next=head;
    
    struct ListNode* sol=r_head;
    
    while (r_head->next != NULL){
        
        if (r_head->next->val==val){
            r_head->next=r_head->next->next;
        }
        
        else{
            
            r_head=r_head->next;

        }
        
    }
    
    return sol->next;
}