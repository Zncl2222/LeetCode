/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* Reverse(struct ListNode* a, struct ListNode* b){
    
    struct ListNode* temp;
    
    while(a!=NULL){
        temp=a->next;
        a->next=b;
        b=a;
        a=temp;
    }
    
    return b;
}


bool isPalindrome(struct ListNode* head){
 
    if (head==NULL || head->next==NULL)
        return true;
    
    struct ListNode* fast=head;
    struct ListNode* slow=head;
    struct ListNode* mid;
    
    while(fast!=NULL && fast->next!=NULL){
        mid=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
     
    fast=slow->next;
    slow=Reverse(fast,slow);
    fast=head;
    while (fast != mid->next){
                
        if (fast->val!=slow->val)
            return false;
        
        fast=fast->next;
        slow=slow->next;
    }
    
    return true;   
}
