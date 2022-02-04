/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    
    if (head==NULL||head->next==NULL){
        return head;
    }
    
    struct ListNode* temp=NULL;
    struct ListNode* previous=NULL;
    
    while (head!=NULL){    
        temp=head->next;
        head->next=previous;
        previous=head;
        head=temp;    
    }  
    return previous;
}