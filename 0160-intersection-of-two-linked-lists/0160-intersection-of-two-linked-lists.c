/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* trevA = headA;
    struct ListNode* trevB = headB;
    
    while (trevA != trevB) {
        trevA = (trevA != NULL) ? trevA->next : headA;
        trevB = (trevB != NULL) ? trevB->next : headB;
    }
    
    return trevA;
}