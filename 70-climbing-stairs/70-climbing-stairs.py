class Solution:
    def climbStairs(self, n: int) -> int:
        
        if n == 2 or n == 1 or n == 3:
            return n
        
        ptr1, ptr2 = 1, 2
        
        for _ in range(2, n):
            
            stepsum = ptr1 + ptr2
            ptr1 = ptr2
            ptr2 = stepsum
            
        return stepsum