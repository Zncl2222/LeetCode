# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        
        if head==None:
            return head
        
        List=ListNode(0)
        List.next=head
        
        res=List
        
        while(List.next!=None):
            
            if List.next.val==val:
                
                List.next=List.next.next
            else:
                List=List.next
            
        return res.next
            
        