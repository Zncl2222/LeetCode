/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    
    struct ListNode res;
    struct ListNode* ptr=&res;
    
    while(list1 && list2){
        
        if (list1->val <= list2->val){
            
            ptr->next=list1;
            list1=list1->next;
            ptr=ptr->next;
        }
        else{
            ptr->next=list2;
            list2=list2->next;
            ptr=ptr->next;
            
        }
        
    }
    
    if(list1)
        ptr->next=list1;
    else
        ptr->next=list2;
    
    return res.next;
};