/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

class Solution{
    public:
    struct ListNode* reverseList(struct ListNode* head){


            if(head == NULL || head->next == NULL)
                return head;

            struct ListNode* pre = NULL;
            struct ListNode* curr = head;
            struct ListNode* forward = head->next;

            while(forward != NULL){

                curr->next = pre;
                pre = curr;
                curr = forward;
                forward = forward->next;

            }
            
            curr->next = pre;
            head = curr;
        
            return head;
        }
};
