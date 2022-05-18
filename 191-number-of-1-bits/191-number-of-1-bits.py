class Solution:
    def hammingWeight(self, n: int) -> int:
        
        count = 0
        
        n = format(n, "b")
        
        return n.count('1')