/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
    
    struct ListNode *temp;
    
    int count=0;
    temp=head;
    
    while(temp!=NULL){
        
        temp=temp->next;
        
        count++;
    }
    
    count/=2;
    
    for (int i=0;i<count;i++){
        head=head->next;
    }
    
    return head;

}