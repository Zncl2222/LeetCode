/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int List_len(struct ListNode* head){
    
    int len=0;
    
    while(head){
        
        head=head->next;
        len++;
    }
    return len;
}


bool isPalindrome(struct ListNode* head){
    
    int Length;
    
    Length=List_len(head);
    
    int arr[Length];
    
    for (int i=0;i<Length;i++){
        arr[i]=head->val;
        head=head->next;
    }
    
    int j=0;
    int k=Length-1;
    
    while(j<k){
        
        if(arr[j]!=arr[k])
            return false;
        j++;
        k--;
    }
    
    return true;
    
}
