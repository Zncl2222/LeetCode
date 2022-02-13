# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        
        sol_list=[]
        
        while(head!=None):
            sol_list.append(head.val)
            head=head.next

        i=0
        j=len(sol_list)-1
        
        while(i<j):
            
            if (sol_list[i]!=sol_list[j]):
                return False
            i+=1
            j-=1
            
        return True