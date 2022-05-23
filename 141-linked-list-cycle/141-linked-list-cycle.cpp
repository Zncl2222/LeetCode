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
        
        if(head == NULL || head->next == NULL)
            return false;
        
        struct ListNode* slow = head;
        struct ListNode* fast = head;
        
        while(fast->next != NULL && fast != NULL && fast->next->next != NULL){
            
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if(slow == fast)
                return true;
            
        }
        
        return false;
        
    }
};