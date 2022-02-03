/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    
    struct ListNode head;
    struct ListNode* current = &head;
    
    int residual = 0, sum = 0;
    
    while(l1 != NULL || l2 != NULL || residual !=0){
        
        sum = residual + (l1 == NULL ? 0 : l1->val) + (l2 == NULL ? 0 : l2->val);
        residual = sum/10;
        sum %= 10;
        current->next = malloc(sizeof(struct ListNode));
        current->next->next = NULL;
        current->next->val = sum;
        current = current->next;
        l1 = (l1 == NULL ? 0 : l1->next);
        l2 = (l2 == NULL ? 0 : l2->next);
        
    }
    
    return head.next;
}
