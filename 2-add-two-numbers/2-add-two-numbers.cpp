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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        struct ListNode head;
        struct ListNode* res = &head;
        
        int residual = 0, sum = 0;
        
        while(l1 != NULL || l2 != NULL || residual != 0){
            
            sum = residual + (l1==NULL?0:l1->val) + (l2==NULL?0:l2->val);
            
            residual = sum / 10;
            sum %= 10; 
            
            res->next = new(struct ListNode);
            res->next->val = sum;
            res = res->next;
            
            l1 = (l1==NULL?NULL:l1->next);
            l2 = (l2==NULL?NULL:l2->next);
        }
        
        return head.next;
    }
};