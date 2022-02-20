/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    
    if(head->next==NULL)
        return NULL;
    
    struct ListNode *p=head,*q=head;
    
    for (int i=0;i<n;i++){
        
        p=p->next;
    }

    
    if (p==NULL)
        return head->next;
    
    while(p->next!=NULL){
        p=p->next;
        q=q->next;
    }

    
    q->next=q->next->next;

    return head;
}