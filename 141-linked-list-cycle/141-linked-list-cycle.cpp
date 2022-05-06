/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head==NULL || head->next==NULL)
            return false;
        
        struct ListNode* fast=head;
        struct ListNode* slow=head;
        
        while(slow!=NULL && fast!=NULL && fast->next != NULL ){
            
            fast=fast->next->next;
            slow=slow->next;
            
            if(fast==slow)
                return true;
            
        }
        
        return false;
        
    }
};