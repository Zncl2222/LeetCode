/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return head;
        
        struct ListNode* pre=NULL;
        struct ListNode* curr=head;
        struct ListNode* precede=head->next;
        
        while(precede!=NULL){
            
            curr->next=pre;
            pre=curr;
            curr=precede;
            precede=precede->next;
        }
        
        curr->next=pre;
        head=curr;
        
        return head;
        
    }
};