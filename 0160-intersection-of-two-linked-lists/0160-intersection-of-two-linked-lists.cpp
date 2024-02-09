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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr_a = headA;
        ListNode *ptr_b = headB;

        while (ptr_a != ptr_b) {
            ptr_a = (ptr_a != NULL) ? ptr_a->next : headA;
            ptr_b = (ptr_b != NULL) ? ptr_b->next : headB;
        }
        return ptr_a;
    }
};