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
    ListNode* middleNode(ListNode* head) {
        
        if(!head || !head->next)
            return head;
        
        struct ListNode* fast = head;
        struct ListNode* slow = head;
        
        while(fast->next){
            
            
            if(!fast->next->next){
                
                return slow->next;
            }
            
            else{
                
                fast = fast->next->next;
                slow = slow->next;
            }
            
        }
        
        return slow;
        
    }
};