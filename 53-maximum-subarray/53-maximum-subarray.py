class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        
        sum=0
        best=-2**(31)
        
        for i in nums:
            
            sum=max(sum+i,i)
            
            best=max(best,sum)
            
            
        return best