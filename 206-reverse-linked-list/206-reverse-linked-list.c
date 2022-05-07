/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head){
    
    if(head==NULL || head->next==NULL)
        return head;
    
    struct ListNode* reverse=NULL;
    struct ListNode* ptr=NULL;
    
    
    while(head!=NULL){
        
        ptr=head->next;
        head->next=reverse;
        reverse=head;
        head=ptr;
        
    }
    
    return reverse;
    
    
}