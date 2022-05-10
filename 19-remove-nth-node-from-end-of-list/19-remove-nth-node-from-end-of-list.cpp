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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head==NULL)
            return head;
        
        struct ListNode* ptr1=head;
        struct ListNode* ptr2=head;
        
        for(int i=0; i<n; i++){
            ptr1=ptr1->next;
        }
        
        if(ptr1==NULL)
            return head->next;
        
        while(ptr1->next!=NULL){
            
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        
        ptr2->next=ptr2->next->next;
        
        return head;
        
    }
};